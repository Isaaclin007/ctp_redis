#ifndef _PLOT_BASE__
#define _PLOT_BASE__
#include "global.h"
#include "BaseExchApi.h"

typedef struct plotRedis
{
    xRedisClient* xredis;     ///�������   
    string Env;               ///����
    string Channel;           ///���鶩��,psub
    string Snapshot;          ///�������, set/get
    string Tick;              ///�����ʱ, lpush/lpop
    string UserStatus;        ///�û�״̬
    string Response;          ///�����ر�\�ɽ��ر�\������Ӧ\������Ӧ    
    string ClientPosition;    ///�ֲ�
    string Account;			  ///�ʽ�
    string Instruments;       ///��Լ
    string ClientReq;         ///�ͻ��������
    string RouterMsg;         ///����·������Ϣ
    string Unique;            ///����Ψһ��ʶ
    string Group;             ///������������
}PlotRedis;

class CPlotBase
{
    public:
        CPlotBase();
        virtual ~CPlotBase();
		bool SendOrder(Json::Value root);
		//������Ӧ��CTPһ��ֻ�г���Ż᷵����Ӧ
		bool OnRspOrderInsert(Json::Value root);
		//������Ӧ��CTPһ�����Ż���Ӧ��Rsp
		bool OnRspOrderAction(Json::Value root);
		//��������Ӧ
		bool OnRtnOrder(Json::Value root);
		//�ɽ���Ӧ
		bool OnRtnTrade(Json::Value root);
    protected:

};

#endif
