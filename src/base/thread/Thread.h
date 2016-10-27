#ifndef _THREAD_H_
#define _THREAD_H_

#include <pthread.h>

//������
class Thread
{
public:
	Thread();
	virtual ~Thread();//����������

	void Start();//�̵߳���������
	void Join();//�ȴ��߳̽��������ջر��ȴ��̵߳���Դ

	void SetAutoDelete(bool autoDelete);

private:
	static void* ThreadRoutine(void* arg);//�߳���ں���  Ҳ�Ǿ�̬ȫ�ֺ���
	virtual void Run() = 0;  
	//���麯�� //�߳�ִ����run,ͨ���̳���ʵ�ֲ�ͬ���̺߳���run
	pthread_t threadId_;//�߳�ID
	bool autoDelete_;
};

#endif // _THREAD_H_
