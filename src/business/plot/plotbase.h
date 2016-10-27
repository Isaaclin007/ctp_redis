#ifndef _PLOT_BASE__
#define _PLOT_BASE__
#include "Redis.h"

typedef struct plotRedis
{
    xRedisClient* xredis;     ///�������   
    string Env;               ///����
    string Channel;           ///���鶩��,psub
    string Snapshot;          ///�������, set/get
    string Tick;              ///�����ʱ, lpush/lpop
    string UserStatus;        ///�û�״̬
    string RtnOrder;          ///�����ر�
    string RtnTrade;          ///�ɽ��ر�
    string RspOrderInsert;    ///������Ӧ
    string RspOrderAction;    ///������Ӧ
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
    protected:

};

#endif
