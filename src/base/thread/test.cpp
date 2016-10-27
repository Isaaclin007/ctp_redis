/* 
 * Thread.h 
 * 
 *  Created on: 2008-10-13 
 *      Author: root 
 */  
#ifndef THREAD_H_  
#define THREAD_H_  
#include <unistd.h>  
#include <pthread.h>  
class Runnable  
{  
    public:  
        //����ʵ��  
        virtual void run() = 0;  
};  
//�߳���  
class Thread: public Runnable  
{  
    private:  
        //�̳߳�ʼ����  
        static int thread_init_number;  
        //��ǰ�̳߳�ʼ�����  
        int current_thread_init_number;  
        //�߳���  
        Runnable *target;  
        //��ǰ�̵߳��߳�ID  
        pthread_t tid;  
        //�̵߳�״̬  
        int thread_status;  
        //�߳�����  
        pthread_attr_t attr;  
        //�߳����ȼ�  
        sched_param param;  
        //��ȡִ�з�����ָ��  
        static void* run0(void* pVoid);  
        //�ڲ�ִ�з���  
        void* run1();  
        //��ȡ�߳����  
        static int get_next_thread_num();  
    public:  
        //�̵߳�״̬���½�  
        static const int THREAD_STATUS_NEW = 0;  
        //�̵߳�״̬����������  
        static const int THREAD_STATUS_RUNNING = 1;  
        //�̵߳�״̬�����н���  
        static const int THREAD_STATUS_EXIT = -1;  
        //���캯��  
        Thread();  
        //���캯��  
        Thread(Runnable *target);  
        //����  
        ~Thread();  
        //�̵߳�������  
        void run();  
        //��ʼִ���߳�  
        bool start();  
        //��ȡ�߳�״̬  
        int get_state();  
        //�ȴ��߳�ֱ���˳�  
        void join();  
        //�ȴ��߳��˳����߳�ʱ  
        void join(unsigned long millis_time);  
        //�Ƚ������߳�ʱ����ͬ��ͨ��current_thread_init_number�ж�  
        bool operator ==(const Thread* other_pthread);  
        //��ȡthis�߳�ID  
        pthread_t get_thread_id();  
        //��ȡ��ǰ�߳�ID  
        static pthread_t get_current_thread_id();  
        //��ǰ�߳��Ƿ��ĳ���߳���ȣ�ͨ��tid�ж�  
        static bool is_equals(Thread* iTarget);  
        //�����̵߳�����:��/�ǰ�  
        void set_thread_scope(bool isSystem);  
        //��ȡ�̵߳�����:��/�ǰ�  
        bool get_thread_scope();  
        //�����̵߳����ȼ���1��99������99Ϊʵʱ�������Ϊ��ͨ  
        void set_thread_priority(int priority);  
        //��ȡ�̵߳����ȼ�  
        int get_thread_priority();  
};  
int Thread::thread_init_number = 1;  
inline int Thread::get_next_thread_num()  
{  
    return thread_init_number++;  
}  
void* Thread::run0(void* pVoid)  
{  
    Thread* p = (Thread*) pVoid;  
    p->run1();  
    return p;  
}  
void* Thread::run1()  
{  
    thread_status = THREAD_STATUS_RUNNING;  
    tid = pthread_self();  
    run();  
    thread_status = THREAD_STATUS_EXIT;  
    tid = 0;  
    pthread_exit(NULL);  
}  
void Thread::run()  
{  
    if (target != NULL)  
    {  
        (*target).run();  
    }  
}  
Thread::Thread()  
{  
    tid = 0;  
    thread_status = THREAD_STATUS_NEW;  
    current_thread_init_number = get_next_thread_num();  
    pthread_attr_init(&attr);  
}  
Thread::Thread(Runnable *iTarget)  
{  
    target = iTarget;  
    tid = 0;  
    thread_status = THREAD_STATUS_NEW;  
    current_thread_init_number = get_next_thread_num();  
    pthread_attr_init(&attr);  
}  
Thread::~Thread()  
{  
    pthread_attr_destroy(&attr);  
}  
bool Thread::start()  
{  
    return pthread_create(&tid, &attr, run0, this);  
}  
inline pthread_t Thread::get_current_thread_id()  
{  
    return pthread_self();  
}  
inline pthread_t Thread::get_thread_id()  
{  
    return tid;  
}  
inline int Thread::get_state()  
{  
    return thread_status;  
}  
void Thread::join()  
{  
    if (tid > 0)  
    {  
        pthread_join(tid,NULL);  
    }  
}  
void Thread::join(unsigned long millis_time)  
{  
    if (tid == 0)  
    {  
        return;  
    }  
    if (millis_time == 0)  
    {  
        join();  
    }  
    else  
    {  
        unsigned long k = 0;  
        while (thread_status != THREAD_STATUS_EXIT && k <= millis_time)  
        {  
            usleep(100);  
            k++;  
        }  
    }  
}  
bool Thread::operator ==(const Thread* other_pthread)  
{  
    if(other_pthread==NULL)  
    {  
        return false;  
    }if(current_thread_init_number==(*other_pthread).current_thread_init_number)  
    {  
        return true;  
    }  
    return false;  
}  
bool Thread::is_equals(Thread* iTarget)  
{  
    if (iTarget == NULL)  
    {  
        return false;  
    }  
    return pthread_self() == iTarget->tid;  
}  
void Thread::set_thread_scope(bool isSystem)  
{  
    if (isSystem)  
    {  
        pthread_attr_setscope(&attr, PTHREAD_SCOPE_SYSTEM);  
    }  
    else  
    {  
        pthread_attr_setscope(&attr, PTHREAD_SCOPE_PROCESS);  
    }  
}  
void Thread::set_thread_priority(int priority)  
{  
    pthread_attr_getschedparam(&attr,&param);  
    param.__sched_priority = priority;  
    pthread_attr_setschedparam(&attr,&param);  
}  
int Thread::get_thread_priority(){  
    pthread_attr_getschedparam(&attr,&param);  
    return param.__sched_priority;  
}  
#endif /* THREAD_H_ */  

��Ϊnewmain.cpp����  
/* 
 * newmain.cpp 
 * 
 *  Created on: 2008-10-13 
 *      Author: root 
 */  
#include "Thread.h"  
#include <iostream>  
class MutilThread: public Thread  
{  
    public:  
        Thread* th1;  
        Thread* th2;  
        void Test()  
        {  
            th1 = new Thread(this);  
            th1->set_thread_priority(90);  
            th2 = new Thread(this);  
            start();  
            th1->start();  
            th2->start();  
            th1->join();  
            th2->join();  
        }  
        void run()  
        {  
            if (Thread::is_equals(th1))  
            {  
                int number = 100;  
                for (int i = 0; i < 10; i++)  
                {  
                    std::cout << "this thread1 number is: " << number++  
                        << std::endl;  
                    std::cout << "\t pid is: " << getpid() << " tid is "  
                        << get_current_thread_id() << std::endl;  
                    sleep(1);  
                }  
            }  
            else if (Thread::is_equals(th2))  
            {  
                int number = 200;  
                for (int i = 0; i < 10; i++)  
                {  
                    std::cout << "this is thread2 number is: " << number++  
                        << std::endl;  
                    std::cout << "\t pid is: " << getpid() << " tid is "  
                        << get_current_thread_id() << std::endl;  
                    sleep(1);  
                }  
            }  
            else if (Thread::is_equals(this))  
            {  
                int number = 300;  
                for (int i = 0; i < 10; i++)  
                {  
                    std::cout << "this is thread0 number is: " << number++  
                        << std::endl;  
                    std::cout << "\t pid is: " << getpid() << " tid is "  
                        << get_current_thread_id() << std::endl;  
                    sleep(1);  
                }  
            }  
        }  
};  
int main(int argc, char **argv) {  
    bool ret;  
    MutilThread *mt;  
    mt = new MutilThread();  
    mt->Test();  
    return (EXIT_SUCCESS);  
} 
