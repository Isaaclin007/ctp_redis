#include "plotbase.h"
#include "Logger.h"

CPlotBase::CPlotBase()
{
	
}

CPlotBase::~CPlotBase()
{
	
}
bool CPlotBase::SendOrder(Json::Value root)
{
	return true;
}

//������Ӧ��CTPһ��ֻ�г���Ż᷵����Ӧ
bool CPlotBase::OnRspOrderInsert(Json::Value root)
{
	LOG_INFO("OnRspOrderInsert %s", root["ErrorMsg"].asString().c_str());
	
	///�����򱨵�ʧ�ܴٷ��Ĳ��Բ���
	
}
//������Ӧ��CTPһ�����Ż���Ӧ��Rsp
bool CPlotBase::OnRspOrderAction(Json::Value root)
{

	LOG_INFO("OnRspOrderAction %s", root["ErrorMsg"].asString().c_str());
	
	///�����򳷵�ʧ�ܴٷ��Ĳ��Բ���
	
	return true;
}
//��������Ӧ
bool CPlotBase::OnRtnOrder(Json::Value root)
{
	LOG_INFO("RtnOrder");
	switch(root["OrderStatus"].asInt())
	{
		//ȫ���ɽ�
		case OS_AllTraded:
		//���ֳɽ�
		case OS_PartTradedQueueing:
		//δ�ɽ�
		case OS_NoTradeQueueing:
		{
			///���Դ�������Ӧ��Ӧ�Ĵ����˴��ĳɽ�������Ҫ��Ϊ���ճɽ������ճɽ���Ҫ���յ��ɽ������¼���
		}
		break;
		//���ֳɽ����ڶ�����
		case OS_PartTradedNotQueueing:
		break;
		//δ�ɽ����ڶ�����
		case OS_NoTradeNotQueueing:
		break;
		//����
		case OS_Canceled:
		{
			///��������Ӧ����
		}
		break;
		default:
		break;
	}
	
	return true;
}
//�ɽ���Ӧ
bool CPlotBase::OnRtnTrade(Json::Value root)
{
	LOG_INFO("RtnTrade");
	///���гɽ��ٷ����Զ�Ӧ���ڴ˴����������㱨���ɽ�����

	return true;
}
		