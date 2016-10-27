#ifndef BaseExchApi_H
#define BaseExchApi_H
#include "xRedisClient.h"
#include "global.h"
#include "QspFtdcUserApiDataType.h"
#include "QspFtdcUserApiStruct.h"
#include "json/json.h"

//�����£���������Ƶ�����Ĵ���������
#define MAX_STORE_INSTRUMENTS      60

typedef struct apiExchLink
{
    string BrokerID;
    string UserID;
    string Password;
    string Address;
    string FlowPath;
	string MrktList;
	string MrktGroup;
	int    TopicID;
	bool   isTrade;
}ApiExchLink;

typedef vector<apiExchLink> LinkManager;
typedef struct mdRedis
{
    xRedisClient* xredis;       ///xredis����
    string Env;                 ///����
    string Channel;             ///����Ƶ�� publish
    string Snapshot;            ///������� set 
    bool   isTick;              ///��������Ƿ��
    string Tick;                ///�����ʱ, lpush
    string MrktList;            ///���鶩���б�
    string MrktListStore;       ///���鶩���б���λ��
}MdRedis;

typedef struct tdRedis
{
    xRedisClient* xredis;       ///xredis����
    string Env;                 ///����
    string Channel;             ///����Ƶ��,publish
    string Tick;                ///��ʱ����,lpush
    string Snapshot;            ///�������, set
    string UserStatus;          ///�û�״̬
    string RtnOrder;            ///�����ر�
    string RtnTrade;            ///�ɽ��ر�
    string RspOrderInsert;      ///������Ӧ
    string RspOrderAction;      ///������Ӧ
    string ClientPosition;      ///�ֲ�
    string Instruments;         ///��Լ
    string ClientReq;           ///�ͻ��������
    string MrktList;            ///���鶩���б�
}TdRedis;

class CBaseExchApi
{
    public:
        CBaseExchApi()
        {
            _xredis   = NULL;
            m_iReqSeqNo = 0;
            m_bEssentialData     = false;
            m_bEssentialDataLast = false;
        };

        virtual ~CBaseExchApi()
        {

        };

        virtual bool ReqOrderInsert(int nRequestID, CQspFtdcInputOrderField &Order){ return true;};
        virtual bool ReqOrderAction(int nRequestID, CQspFtdcOrderActionField &OrderAction){return true;};
        virtual bool ReqLogin(int nRequestID, CQspFtdcReqUserLoginField &ReqLoginField){return true;};
        virtual int SubMarketData(char *ppInstrumentID[], int nCount){return 0;};	

        virtual int UnSubMarketData(char *ppInstrumentID[], int nCount){return 0;};	

        virtual char *GetLocalID(){return NULL;};
        virtual void StartWork(){};

        virtual void SetRedis(MdRedis* redis){};
        virtual void SetRedis(TdRedis* redis){};
		
		virtual void SetQuot(vector<string> v){};

        virtual vector<string> GetQuot(string storePath){ vector<string> v; return v;};
        virtual void StoreQuot(string storePath){};
    public:
        bool m_bEssentialDataLast;              ///�Ƿ��ѯ���
    public:
        bool m_bEssentialData;                  ///��ʱ����
    protected:
        xRedisClient*  _xredis;
         
        string _brokerID;
        string _userID;
        string _password;	
        string _address;
        string _flowpath;
		int _topic;

        int    m_iReqSeqNo;
        int  m_iMaxLocalNo;
        char m_sMaxLocalNo[50];	
		
};

#endif
