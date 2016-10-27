#include "Thread.h"
#include <iostream>
using namespace std;


Thread::Thread() : autoDelete_(false)//���캯��
{
//	cout<<"Thread ..."<<endl;
}

Thread::~Thread() //��������
{
//	cout<<"~Thread ..."<<endl;
}

void Thread::Start()//�����߳�
{
	pthread_create(&threadId_, NULL, ThreadRoutine, this);
	//�������������ﲢ����ֱ�ӷ���ִ�к���run
	//��Ϊrun����ʽ��ͨ�ĳ�Ա�����������ĵ�һ��������Thread*(����this)
	//���õ�ʱ����thiscallԼ����Ҳ����˵��������Ϊ��ں���
}

void Thread::Join() //�ȴ��߳�ִ�н��������ջر��ȴ��̵߳���Դ
{
	pthread_join(threadId_, NULL);
}

void* Thread::ThreadRoutine(void* arg)//
{
	Thread* thread = static_cast<Thread*>(arg);//������ָ��ת���ɻ���ָ��
	thread->Run();
	if (thread->autoDelete_)
		delete thread;
	return NULL;
}

void Thread::SetAutoDelete(bool autoDelete)
{
	autoDelete_ = autoDelete;
}
