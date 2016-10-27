/////////////////////////////////////////////////////////////////////////
///@system QuantDo Platform
///@company �Ϻ���Ͷ����Ƽ����޹�˾
///@file QspFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(Qsp_FTDCSTRUCT_H)
#define Qsp_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "QspFtdcUserApiDataType.h"

///ϵͳ�û���¼����
struct CQspFtdcReqUserLoginField
{
	///������
	TQspFtdcDateType	TradingDay;
	///�����û�����
	TQspFtdcUserIDType	UserID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����
	TQspFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TQspFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TQspFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TQspFtdcProtocolInfoType	ProtocolInfo;
	///IP��ַ
	TQspFtdcIPAddressType	IPAddress;
	///Mac��ַ
	TQspFtdcMacAddressType	MacAddress;
	///�������Ĵ���
	TQspFtdcDataCenterIDType	DataCenterID;
	///��̬����
	TQspFtdcPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TQspFtdcIPAddressType	ClientIPAddress;
};

///ϵͳ�û���¼Ӧ��
struct CQspFtdcRspUserLoginField
{
	///������
	TQspFtdcDateType	TradingDay;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�����û�����
	TQspFtdcUserIDType	UserID;
	///��¼�ɹ�ʱ��
	TQspFtdcTimeType	LoginTime;
	///�û���󱾵ر�����
	TQspFtdcUserOrderLocalIDType	MaxOrderLocalID;
	///����ϵͳ����
	TQspFtdcTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TQspFtdcDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TQspFtdcSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TQspFtdcSequenceNoType	UserFlowSize;
};

///�û��ǳ�����
struct CQspFtdcReqUserLogoutField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�����û�����
	TQspFtdcUserIDType	UserID;
};

///�û��ǳ�����
struct CQspFtdcRspUserLogoutField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�����û�����
	TQspFtdcUserIDType	UserID;
};

///ǿ���û��˳�
struct CQspFtdcForceUserExitField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�����û�����
	TQspFtdcUserIDType	UserID;
};

///�û������޸�
struct CQspFtdcUserPasswordUpdateField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�����û�����
	TQspFtdcUserIDType	UserID;
	///������
	TQspFtdcPasswordType	OldPassword;
	///������
	TQspFtdcPasswordType	NewPassword;
};

///���뱨��
struct CQspFtdcInputOrderField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TQspFtdcDirectionType	Direction;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TQspFtdcPriceType	LimitPrice;
	///����
	TQspFtdcVolumeType	Volume;
	///��Ч������
	TQspFtdcTimeConditionType	TimeCondition;
	///GTD����
	TQspFtdcDateType	GTDDate;
	///�ɽ�������
	TQspFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TQspFtdcVolumeType	MinVolume;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TQspFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TQspFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TQspFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TQspFtdcCustomType	UserCustom;
};

///��������
struct CQspFtdcOrderActionField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///���γ��������ı��ر��
	TQspFtdcUserOrderLocalIDType	UserOrderActionLocalID;
	///���������ı��ر������
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///����������־
	TQspFtdcActionFlagType	ActionFlag;
	///�۸�
	TQspFtdcPriceType	LimitPrice;
	///�����仯
	TQspFtdcVolumeType	VolumeChange;
};

///�ڴ����
struct CQspFtdcMemDbField
{
	///�ڴ����
	TQspFtdcMemTableNameType	MemTableName;
};

///��Ӧ��Ϣ
struct CQspFtdcRspInfoField
{
	///�������
	TQspFtdcErrorIDType	ErrorID;
	///������Ϣ
	TQspFtdcErrorMsgType	ErrorMsg;
};

///������ѯ
struct CQspFtdcQryOrderField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///�ɽ���ѯ
struct CQspFtdcQryTradeField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�ɽ����
	TQspFtdcTradeIDType	TradeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///��Լ��ѯ
struct CQspFtdcQryInstrumentField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TQspFtdcProductIDType	ProductID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///��Լ��ѯӦ��
struct CQspFtdcRspInstrumentField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TQspFtdcProductIDType	ProductID;
	///Ʒ������
	TQspFtdcProductNameType	ProductName;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TQspFtdcInstrumentNameType	InstrumentName;
	///�������
	TQspFtdcYearType	DeliveryYear;
	///������
	TQspFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TQspFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TQspFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TQspFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TQspFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TQspFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TQspFtdcPriceTickType	PriceTick;
	///����
	TQspFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TQspFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TQspFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TQspFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TQspFtdcPriceType	UpperLimitPrice;
	///�����
	TQspFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TQspFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TQspFtdcDateType	CreateDate;
	///������
	TQspFtdcDateType	OpenDate;
	///������
	TQspFtdcDateType	ExpireDate;
	///��ʼ������
	TQspFtdcDateType	StartDelivDate;
	///��󽻸���
	TQspFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TQspFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TQspFtdcBoolType	IsTrading;
	///������Ʒ����
	TQspFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TQspFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TQspFtdcPositionTypeType	PositionType;
	///ִ�м�
	TQspFtdcPriceType	StrikePrice;
	///��Ȩ����
	TQspFtdcOptionsTypeType	OptionsType;
	///����
	TQspFtdcRatioType	ExchangeRate;
	///��Ʒ����
	TQspFtdcProductClassType	ProductClass;
	///��������
	TQspFtdcAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TQspFtdcLinkTypeType	LinkType;
};

///��Լ״̬
struct CQspFtdcInstrumentStatusField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TQspFtdcProductIDType	ProductID;
	///Ʒ������
	TQspFtdcProductNameType	ProductName;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TQspFtdcInstrumentNameType	InstrumentName;
	///�������
	TQspFtdcYearType	DeliveryYear;
	///������
	TQspFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TQspFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TQspFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TQspFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TQspFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TQspFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TQspFtdcPriceTickType	PriceTick;
	///����
	TQspFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TQspFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TQspFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TQspFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TQspFtdcPriceType	UpperLimitPrice;
	///�����
	TQspFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TQspFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TQspFtdcDateType	CreateDate;
	///������
	TQspFtdcDateType	OpenDate;
	///������
	TQspFtdcDateType	ExpireDate;
	///��ʼ������
	TQspFtdcDateType	StartDelivDate;
	///��󽻸���
	TQspFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TQspFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TQspFtdcBoolType	IsTrading;
	///������Ʒ����
	TQspFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TQspFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TQspFtdcPositionTypeType	PositionType;
	///ִ�м�
	TQspFtdcPriceType	StrikePrice;
	///��Ȩ����
	TQspFtdcOptionsTypeType	OptionsType;
	///����
	TQspFtdcRatioType	ExchangeRate;
	///��Ʒ����
	TQspFtdcProductClassType	ProductClass;
	///��������
	TQspFtdcAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TQspFtdcLinkTypeType	LinkType;
};

///Ͷ�����ʽ��ѯ
struct CQspFtdcQryInvestorAccountField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///Ͷ�����ʽ�Ӧ��
struct CQspFtdcRspInvestorAccountField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TQspFtdcAccountIDType	AccountID;
	///�ϴν���׼����
	TQspFtdcMoneyType	PreBalance;
	///���տ����ʽ�
	TQspFtdcMoneyType	PreAvailable;
	///�����
	TQspFtdcMoneyType	Deposit;
	///������
	TQspFtdcMoneyType	Withdraw;
	///ռ�ñ�֤��
	TQspFtdcMoneyType	Margin;
	///��ȨȨ������֧
	TQspFtdcMoneyType	Premium;
	///������
	TQspFtdcMoneyType	Fee;
	///����ı�֤��
	TQspFtdcMoneyType	FrozenMargin;
	///����Ȩ����
	TQspFtdcMoneyType	FrozenPremium;
	///����������
	TQspFtdcMoneyType	FrozenFee;
	///ƽ��ӯ��
	TQspFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TQspFtdcMoneyType	PositionProfit;
	///�����ʽ�
	TQspFtdcMoneyType	Available;
	///����׼����
	TQspFtdcMoneyType	Balance;
	///��ͷռ�ñ�֤��
	TQspFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TQspFtdcMoneyType	ShortMargin;
	///��ͷ����ı�֤��
	TQspFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TQspFtdcMoneyType	ShortFrozenMargin;
	///��̬Ȩ��
	TQspFtdcMoneyType	DynamicRights;
	///���ն�
	TQspFtdcMoneyType	Risk;
	///��������
	TQspFtdcMoneyType	OtherFee;
	///��Ѻ���
	TQspFtdcMoneyType	Mortgage;
	///����
	TQspFtdcCurrencyIDType	Currency;
};

///����Ͷ���߲�ѯ
struct CQspFtdcQryUserInvestorField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
};

///����Ͷ����
struct CQspFtdcRspUserInvestorField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�����û�����
	TQspFtdcUserIDType	UserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///���ױ����ѯ
struct CQspFtdcQryTradingCodeField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
};

///���ױ����ѯ
struct CQspFtdcRspTradingCodeField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TQspFtdcAccountIDType	AccountID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Ա���
	TQspFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TQspFtdcClientIDType	ClientID;
	///�ͻ�����Ȩ��
	TQspFtdcTradingRightType	ClientRight;
	///�ͻ�����
	TQspFtdcClientTypeType	ClientType;
	///�ͻ���ֵ����
	TQspFtdcClientHedgeFlagType	ClientHedgeFlag;
	///�Ƿ��Ծ
	TQspFtdcIsActiveType	IsActive;
};

///��������ѯ����
struct CQspFtdcQryExchangeField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
};

///��������ѯӦ��
struct CQspFtdcRspExchangeField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///����������
	TQspFtdcExchangeNameType	ExchangeName;
	///������
	TQspFtdcTradingDayType	TradingDay;
};

///Ͷ���ֲֲ߳�ѯ����
struct CQspFtdcQryInvestorPositionField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///Ͷ���ֲֲ߳�ѯӦ��
struct CQspFtdcRspInvestorPositionField
{
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TQspFtdcClientIDType	ClientID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///ռ�ñ�֤��
	TQspFtdcMoneyType	UsedMargin;
	///��ֲ���
	TQspFtdcVolumeType	Position;
	///���ճֲֳɱ�
	TQspFtdcPriceType	PositionCost;
	///��ֲ���
	TQspFtdcVolumeType	YdPosition;
	///���ճֲֳɱ�
	TQspFtdcMoneyType	YdPositionCost;
	///����ı�֤��
	TQspFtdcMoneyType	FrozenMargin;
	///���ֶ���ֲ�
	TQspFtdcVolumeType	FrozenPosition;
	///ƽ�ֶ���ֲ�
	TQspFtdcVolumeType	FrozenClosing;
	///�����Ȩ����
	TQspFtdcMoneyType	FrozenPremium;
	///���һ�ʳɽ����
	TQspFtdcTradeIDType	LastTradeID;
	///���һ�ʱ��ر������
	TQspFtdcOrderLocalIDType	LastOrderLocalID;
	///����
	TQspFtdcCurrencyIDType	Currency;
};

///�û���ѯ
struct CQspFtdcQryUserField
{
	///�����û�����
	TQspFtdcUserIDType	StartUserID;
	///�����û�����
	TQspFtdcUserIDType	EndUserID;
};

///�û�
struct CQspFtdcUserField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///�û���¼����
	TQspFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TQspFtdcIsActiveType	IsActive;
	///�û�����
	TQspFtdcUserNameType	UserName;
	///�û�����
	TQspFtdcUserTypeType	UserType;
	///Ӫҵ��
	TQspFtdcDepartmentType	Department;
	///��Ȩ���ܼ�
	TQspFtdcGrantFuncSetType	GrantFuncSet;
	///�޸��û����
	TQspFtdcUserIDType	SetUserID;
	///��������
	TQspFtdcDateType	CommandDate;
	///����ʱ��
	TQspFtdcTimeType	CommandTime;
};

///Ͷ�����������ʲ�ѯ
struct CQspFtdcQryInvestorFeeField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///Ͷ������������
struct CQspFtdcInvestorFeeField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///�ͻ���
	TQspFtdcClientIDType	ClientID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///���������Ѱ�����
	TQspFtdcRatioType	OpenFeeRate;
	///���������Ѱ�����
	TQspFtdcRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TQspFtdcRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TQspFtdcRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TQspFtdcRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TQspFtdcRatioType	OTFeeAmt;
};

///Ͷ���߱�֤���ʲ�ѯ
struct CQspFtdcQryInvestorMarginField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///Ͷ���߱�֤����
struct CQspFtdcInvestorMarginField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///�ͻ���
	TQspFtdcClientIDType	ClientID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��ͷռ�ñ�֤�𰴱���
	TQspFtdcRatioType	LongMarginRate;
	///��ͷ��֤������
	TQspFtdcRatioType	LongMarginAmt;
	///��ͷռ�ñ�֤�𰴱���
	TQspFtdcRatioType	ShortMarginRate;
	///��ͷ��֤������
	TQspFtdcRatioType	ShortMarginAmt;
};

///�ɽ�
struct CQspFtdcTradeField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///������
	TQspFtdcTradingDayType	TradingDay;
	///��Ա���
	TQspFtdcParticipantIDType	ParticipantID;
	///�µ�ϯλ��
	TQspFtdcSeatIDType	SeatID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�ͻ���
	TQspFtdcClientIDType	ClientID;
	///�û����
	TQspFtdcUserIDType	UserID;
	///�ɽ����
	TQspFtdcTradeIDType	TradeID;
	///�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///���ر������
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///ί�м۸�
	TQspFtdcPriceType	LimitPrice;
	///�ɽ��۸�
	TQspFtdcPriceType	TradePrice;
	///�ɽ�����
	TQspFtdcVolumeType	TradeVolume;
	///�ɽ�ʱ��
	TQspFtdcTimeType	TradeTime;
	///�����Ա���
	TQspFtdcParticipantIDType	ClearingPartID;
	///ϵͳ�������
	TQspFtdcSequenceNoType	CombOrderSysID;
	///��������
	TQspFtdcPlotTypeType	PlotType;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///������
	TQspFtdcMoneyType	Fee;
};

///����
struct CQspFtdcOrderField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TQspFtdcDirectionType	Direction;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TQspFtdcPriceType	LimitPrice;
	///����
	TQspFtdcVolumeType	Volume;
	///��Ч������
	TQspFtdcTimeConditionType	TimeCondition;
	///GTD����
	TQspFtdcDateType	GTDDate;
	///�ɽ�������
	TQspFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TQspFtdcVolumeType	MinVolume;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TQspFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TQspFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TQspFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TQspFtdcCustomType	UserCustom;
	///������
	TQspFtdcTradingDayType	TradingDay;
	///��Ա���
	TQspFtdcParticipantIDType	ParticipantID;
	///�ͻ���
	TQspFtdcClientIDType	ClientID;
	///�µ�ϯλ��
	TQspFtdcSeatIDType	SeatID;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///���ر������
	TQspFtdcOrderLocalIDType	OrderLocalID;
	///������Դ
	TQspFtdcOrderSourceType	OrderSource;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///����ʱ��
	TQspFtdcTimeType	CancelTime;
	///�����û����
	TQspFtdcUserIDType	CancelUserID;
	///��ɽ�����
	TQspFtdcVolumeType	VolumeTraded;
	///ʣ������
	TQspFtdcVolumeType	VolumeRemain;
	///��������
	TQspFtdcPlotTypeType	PlotType;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///������
	TQspFtdcMoneyType	Fee;
};

///����������
struct CQspFtdcFlowMessageCancelField
{
	///����ϵ�к�
	TQspFtdcSequenceSeriesType	SequenceSeries;
	///������
	TQspFtdcDateType	TradingDay;
	///�������Ĵ���
	TQspFtdcDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TQspFtdcSequenceNoType	StartSequenceNo;
	///���˽������к�
	TQspFtdcSequenceNoType	EndSequenceNo;
};

///��Ϣ�ַ�
struct CQspFtdcDisseminationField
{
	///����ϵ�к�
	TQspFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TQspFtdcSequenceNoType	SequenceNo;
};

///�������
struct CQspFtdcInvestorAccountDepositResField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TQspFtdcAccountIDType	AccountID;
	///�ʽ���ˮ��
	TQspFtdcAccountSeqNoType	AccountSeqNo;
	///���
	TQspFtdcMoneyType	Amount;
	///�������
	TQspFtdcAccountDirectionType	AmountDirection;
	///�����ʽ�
	TQspFtdcMoneyType	Available;
	///����׼����
	TQspFtdcMoneyType	Balance;
};

///�����������
struct CQspFtdcMarketDataBaseField
{
	///������
	TQspFtdcDateType	TradingDay;
	///���������
	TQspFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TQspFtdcSettlementIDType	SettlementID;
	///�����
	TQspFtdcPriceType	PreSettlementPrice;
	///������
	TQspFtdcPriceType	PreClosePrice;
	///��ֲ���
	TQspFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TQspFtdcRatioType	PreDelta;
};

///���龲̬����
struct CQspFtdcMarketDataStaticField
{
	///����
	TQspFtdcPriceType	OpenPrice;
	///��߼�
	TQspFtdcPriceType	HighestPrice;
	///��ͼ�
	TQspFtdcPriceType	LowestPrice;
	///������
	TQspFtdcPriceType	ClosePrice;
	///��ͣ���
	TQspFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TQspFtdcPriceType	LowerLimitPrice;
	///�����
	TQspFtdcPriceType	SettlementPrice;
	///����ʵ��
	TQspFtdcRatioType	CurrDelta;
};

///�������³ɽ�����
struct CQspFtdcMarketDataLastMatchField
{
	///���¼�
	TQspFtdcPriceType	LastPrice;
	///����
	TQspFtdcVolumeType	Volume;
	///�ɽ����
	TQspFtdcMoneyType	Turnover;
	///�ֲ���
	TQspFtdcLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CQspFtdcMarketDataBestPriceField
{
	///�����һ
	TQspFtdcPriceType	BidPrice1;
	///������һ
	TQspFtdcVolumeType	BidVolume1;
	///������һ
	TQspFtdcPriceType	AskPrice1;
	///������һ
	TQspFtdcVolumeType	AskVolume1;
};

///�����������������
struct CQspFtdcMarketDataBid23Field
{
	///����۶�
	TQspFtdcPriceType	BidPrice2;
	///��������
	TQspFtdcVolumeType	BidVolume2;
	///�������
	TQspFtdcPriceType	BidPrice3;
	///��������
	TQspFtdcVolumeType	BidVolume3;
};

///������������������
struct CQspFtdcMarketDataAsk23Field
{
	///�����۶�
	TQspFtdcPriceType	AskPrice2;
	///��������
	TQspFtdcVolumeType	AskVolume2;
	///��������
	TQspFtdcPriceType	AskPrice3;
	///��������
	TQspFtdcVolumeType	AskVolume3;
};

///���������ġ�������
struct CQspFtdcMarketDataBid45Field
{
	///�������
	TQspFtdcPriceType	BidPrice4;
	///��������
	TQspFtdcVolumeType	BidVolume4;
	///�������
	TQspFtdcPriceType	BidPrice5;
	///��������
	TQspFtdcVolumeType	BidVolume5;
};

///���������ġ�������
struct CQspFtdcMarketDataAsk45Field
{
	///��������
	TQspFtdcPriceType	AskPrice4;
	///��������
	TQspFtdcVolumeType	AskVolume4;
	///��������
	TQspFtdcPriceType	AskPrice5;
	///��������
	TQspFtdcVolumeType	AskVolume5;
};

///�������ʱ������
struct CQspFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TQspFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TQspFtdcMillisecType	UpdateMillisec;
};

///�������
struct CQspFtdcDepthMarketDataField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///������
	TQspFtdcDateType	TradingDay;
	///���������
	TQspFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TQspFtdcSettlementIDType	SettlementID;
	///�����
	TQspFtdcPriceType	PreSettlementPrice;
	///������
	TQspFtdcPriceType	PreClosePrice;
	///��ֲ���
	TQspFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TQspFtdcRatioType	PreDelta;
	///����
	TQspFtdcPriceType	OpenPrice;
	///��߼�
	TQspFtdcPriceType	HighestPrice;
	///��ͼ�
	TQspFtdcPriceType	LowestPrice;
	///������
	TQspFtdcPriceType	ClosePrice;
	///��ͣ���
	TQspFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TQspFtdcPriceType	LowerLimitPrice;
	///�����
	TQspFtdcPriceType	SettlementPrice;
	///����ʵ��
	TQspFtdcRatioType	CurrDelta;
	///���¼�
	TQspFtdcPriceType	LastPrice;
	///����
	TQspFtdcVolumeType	Volume;
	///�ɽ����
	TQspFtdcMoneyType	Turnover;
	///�ֲ���
	TQspFtdcLargeVolumeType	OpenInterest;
	///�����һ
	TQspFtdcPriceType	BidPrice1;
	///������һ
	TQspFtdcVolumeType	BidVolume1;
	///������һ
	TQspFtdcPriceType	AskPrice1;
	///������һ
	TQspFtdcVolumeType	AskVolume1;
	///����۶�
	TQspFtdcPriceType	BidPrice2;
	///��������
	TQspFtdcVolumeType	BidVolume2;
	///�������
	TQspFtdcPriceType	BidPrice3;
	///��������
	TQspFtdcVolumeType	BidVolume3;
	///�����۶�
	TQspFtdcPriceType	AskPrice2;
	///��������
	TQspFtdcVolumeType	AskVolume2;
	///��������
	TQspFtdcPriceType	AskPrice3;
	///��������
	TQspFtdcVolumeType	AskVolume3;
	///�������
	TQspFtdcPriceType	BidPrice4;
	///��������
	TQspFtdcVolumeType	BidVolume4;
	///�������
	TQspFtdcPriceType	BidPrice5;
	///��������
	TQspFtdcVolumeType	BidVolume5;
	///��������
	TQspFtdcPriceType	AskPrice4;
	///��������
	TQspFtdcVolumeType	AskVolume4;
	///��������
	TQspFtdcPriceType	AskPrice5;
	///��������
	TQspFtdcVolumeType	AskVolume5;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TQspFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TQspFtdcMillisecType	UpdateMillisec;
};

///���ĺ�Լ�������Ϣ
struct CQspFtdcSpecificInstrumentField
{
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///������Լ
struct CQspFtdcCombInstrumentField
{
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�����۸����
	TQspFtdcCombPriceTypeType	priceType;
	///�۸�ʽ
	TQspFtdcformulaType	priceformula;
	///��������
	TQspFtdcOrderEnterTypeType	EnterType;
	///��ǰ�Ƿ���
	TQspFtdcBoolType	IsTrading;
	///Ĭ���µ�����
	TQspFtdcVolumeType	Volume;
	///����µ�����
	TQspFtdcVolumeType	MaxVolume;
	///Ĭ�ϴ�������
	TQspFtdcVolumeType	TrigTimes;
	///��󴥷�����
	TQspFtdcVolumeType	MaxTrigTimes;
	///����
	TQspFtdcVolumeType	LegNum;
	///����������
	TQspFtdcExchangeIDType	Leg1ExchangeID;
	///��һ��Լ����
	TQspFtdcInstrumentIDType	Leg1ID;
	///��һ��������
	TQspFtdcDirectionType	Leg1Direction;
	///��һ����
	TQspFtdcVolumeMultipleType	Leg1Multiple;
	///��һ�۱���
	TQspFtdcRatioType	Leg1PriceRatio;
	///��һ�����
	TQspFtdcPriceType	Leg1BasisPrice;
	///��һ����˳��
	TQspFtdcVolumeType	Leg1SeqNo;
	///����������
	TQspFtdcExchangeIDType	Leg2ExchangeID;
	///�ȶ���Լ����
	TQspFtdcInstrumentIDType	Leg2ID;
	///�ȶ���������
	TQspFtdcDirectionType	Leg2Direction;
	///�ȶ�����
	TQspFtdcVolumeMultipleType	Leg2Multiple;
	///�ȶ��۱���
	TQspFtdcRatioType	Leg2PriceRatio;
	///�ȶ������
	TQspFtdcPriceType	Leg2BasisPrice;
	///�ȶ�����˳��
	TQspFtdcVolumeType	Leg2SeqNo;
	///����������
	TQspFtdcExchangeIDType	Leg3ExchangeID;
	///������Լ����
	TQspFtdcInstrumentIDType	Leg3ID;
	///������������
	TQspFtdcDirectionType	Leg3Direction;
	///��������
	TQspFtdcVolumeMultipleType	Leg3Multiple;
	///�����۱���
	TQspFtdcRatioType	Leg3PriceRatio;
	///���������
	TQspFtdcPriceType	Leg3BasisPrice;
	///��������˳��
	TQspFtdcVolumeType	Leg3SeqNo;
	///���Ľ���������
	TQspFtdcExchangeIDType	Leg4ExchangeID;
	///���ĺ�Լ����
	TQspFtdcInstrumentIDType	Leg4ID;
	///������������
	TQspFtdcDirectionType	Leg4Direction;
	///���ĳ���
	TQspFtdcVolumeMultipleType	Leg4Multiple;
	///���ļ۱���
	TQspFtdcRatioType	Leg4PriceRatio;
	///���Ļ����
	TQspFtdcPriceType	Leg4BasisPrice;
	///���ı���˳��
	TQspFtdcVolumeType	Leg4SeqNo;
	///��Ч������
	TQspFtdcTimeConditionType	TimeCondition;
	///������־
	TQspFtdcActionFlagType	ActionFlag;
	///��ƽѭ�����ƽ������
	TQspFtdcOffsetTypeType	OffsetType;
	///��һ������־
	TQspFtdcCombLeg1ActionFlagType	Leg1ActionFlag;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg1InvestorID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg2InvestorID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg3InvestorID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg4InvestorID;
	///׷������
	TQspFtdcVolumeType	Leg1Times;
	///׷������
	TQspFtdcVolumeType	Leg2Times;
	///׷������
	TQspFtdcVolumeType	Leg3Times;
	///׷������
	TQspFtdcVolumeType	Leg4Times;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg1OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg2OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg3OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg4OpenDealType;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg1HedgeFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg2HedgeFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg3HedgeFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg4HedgeFlag;
};

///��Լ��ѯ
struct CQspFtdcQryCombInstrumentField
{
	///��Լ����
	TQspFtdcInstrumentIDType	CombInstrumentID;
};

///�����������
struct CQspFtdcCombMarketDataField
{
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TQspFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TQspFtdcMillisecType	UpdateMillisec;
	///�����һ
	TQspFtdcPriceType	BidPrice1;
	///������һ
	TQspFtdcVolumeType	BidVolume1;
	///������һ
	TQspFtdcPriceType	AskPrice1;
	///������һ
	TQspFtdcVolumeType	AskVolume1;
	///���¼�
	TQspFtdcPriceType	LastPrice;
	///������ʱ���������ͣ����
	TQspFtdcBoolType	Leg1Gap;
	///������ʱ���������ͣ����
	TQspFtdcBoolType	Leg2Gap;
	///������ʱ���������ͣ����
	TQspFtdcBoolType	Leg3Gap;
	///������ʱ���������ͣ����
	TQspFtdcBoolType	Leg4Gap;
};

///���뱨��
struct CQspFtdcCombInputOrderField
{
	///ϵͳ�������
	TQspFtdcSequenceNoType	CombOrderSysID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TQspFtdcDirectionType	Direction;
	///�۸�
	TQspFtdcPriceType	LimitPrice;
	///ֹӯ�۸�
	TQspFtdcPriceType	OffsetPrice;
	///ֹ��۸�
	TQspFtdcPriceType	StopPrice;
	///��ʼί����
	TQspFtdcVolumeType	Volume;
	///����������
	TQspFtdcVolumeType	SendInVolume;
	///���ֳɽ�����
	TQspFtdcVolumeType	OpenTradeVolume;
	///���ֳɽ��Ƿ�����
	TQspFtdcBoolType	IsOpenTradeWhole;
	///ƽ�ֳɽ�����
	TQspFtdcVolumeType	OffstTradeVolume;
	///ί�д�������
	TQspFtdcVolumeType	TrigTimes;
	///������������
	TQspFtdcVolumeType	OrderTimes;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///������־
	TQspFtdcActionFlagType	ActionFlag;
	///��һ������־
	TQspFtdcCombLeg1ActionFlagType	Leg1ActionFlag;
	///��������
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///����ѭ������
	TQspFtdcCombCycleTypeType	CycleType;
	///�����ɽ�״̬
	TQspFtdcTradeStatusType	TradeStatus;
	///��ǰ�����Ⱥ�
	TQspFtdcVolumeType	PresentLegNo;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg1InvestorID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg2InvestorID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg3InvestorID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	Leg4InvestorID;
	///��һ�����
	TQspFtdcPriceType	Leg1BasisPrice;
	///�ȶ������
	TQspFtdcPriceType	Leg2BasisPrice;
	///���������
	TQspFtdcPriceType	Leg3BasisPrice;
	///���Ļ����
	TQspFtdcPriceType	Leg4BasisPrice;
	///��һ����˳��
	TQspFtdcVolumeType	Leg1SeqNo;
	///�ȶ�����˳��
	TQspFtdcVolumeType	Leg2SeqNo;
	///��������˳��
	TQspFtdcVolumeType	Leg3SeqNo;
	///���ı���˳��
	TQspFtdcVolumeType	Leg4SeqNo;
	///��һ����
	TQspFtdcVolumeMultipleType	Leg1Multiple;
	///�ȶ�����
	TQspFtdcVolumeMultipleType	Leg2Multiple;
	///��������
	TQspFtdcVolumeMultipleType	Leg3Multiple;
	///���ĳ���
	TQspFtdcVolumeMultipleType	Leg4Multiple;
	///��Ч������
	TQspFtdcTimeConditionType	TimeCondition;
	///��ƽѭ�����ƽ������
	TQspFtdcOffsetTypeType	OffsetType;
	///���ѳɽ��Զ�ƽ��
	TQspFtdcBoolType	IsErrorAutoOffset;
	///׷������
	TQspFtdcVolumeType	Leg1Times;
	///׷������
	TQspFtdcVolumeType	Leg2Times;
	///׷������
	TQspFtdcVolumeType	Leg3Times;
	///׷������
	TQspFtdcVolumeType	Leg4Times;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg1OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg2OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg3OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg4OpenDealType;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg1HedgeFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg2HedgeFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg3HedgeFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	Leg4HedgeFlag;
};

///�����ɽ�
struct CQspFtdcCombTradeField
{
	///�ɽ����
	TQspFtdcTradeIDType	TradeID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///������
	TQspFtdcTradingDayType	TradingDay;
	///ϵͳ�������
	TQspFtdcSequenceNoType	CombOrderSysID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///��������
	TQspFtdcDirectionType	Direction;
	///ί�м۸�
	TQspFtdcPriceType	LimitPrice;
	///�ɽ��۸�
	TQspFtdcPriceType	TradePrice;
	///�ɽ�����
	TQspFtdcVolumeType	TradeVolume;
	///�ɽ�ʱ��
	TQspFtdcTimeType	TradeTime;
};

///�������ȱ���
struct CQspFtdcCombAPIInputOrderField
{
	///ί�����κ�
	TQspFtdcSequenceNoType	OrderBatchNO;
	///�ڴ��仯����
	TQspFtdcMemtableChangeTypeType	MemtableChangeType;
	///�ڼ���
	TQspFtdcVolumeType	LegNo;
	///ί��˳��
	TQspFtdcVolumeType	LegSeqNo;
	///��ͬί��˳����
	TQspFtdcVolumeType	SameLegSeqNo;
	///��һ������־
	TQspFtdcCombLeg1ActionFlagType	Leg1ActionFlag;
	///�����
	TQspFtdcPriceType	LegBasisPrice;
	///�ȳ���
	TQspFtdcVolumeMultipleType	LegMultiple;
	///����������
	TQspFtdcDirectionType	LegDirection;
	///�ȼ۱���
	TQspFtdcRatioType	LegPriceRatio;
	///�Ƿ��������һ��
	TQspFtdcBoolType	IsLastLegSeqNo;
	///������Լ����
	TQspFtdcInstrumentIDType	CombInstrumentID;
	///������������
	TQspFtdcDirectionType	CombDirection;
	///ί�м۸�
	TQspFtdcPriceType	CombLimitPrice;
	///�����۸����
	TQspFtdcCombPriceTypeType	priceType;
	///�ɽ����
	TQspFtdcMoneyType	Amount;
	///��������
	TQspFtdcVolumeType	SendVolume;
	///��һ�ȱ���ʱ�ѳɽ���
	TQspFtdcVolumeType	FirstLegTradeVolume;
	///�����������
	TQspFtdcVolumeType	ErrorVolume;
	///��һ���ε�һ�ʱ������
	TQspFtdcOrderSysIDType	OrderSysID1;
	///��һ���εڶ��ʱ������
	TQspFtdcOrderSysIDType	OrderSysID2;
	///��һ���ε����ʱ������
	TQspFtdcOrderSysIDType	OrderSysID3;
	///����ί������
	TQspFtdcVolumeType	LegOpenOrderVolume;
	///ƽ��ί������
	TQspFtdcVolumeType	LegOffsetOrderVolume;
	///���ֳɽ�����
	TQspFtdcVolumeType	LegOpenTradeVolume;
	///ƽ�ֳɽ�����
	TQspFtdcVolumeType	LegOffsetTradeVolume;
	///�ɽ����
	TQspFtdcTradeIDType	TradeID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TQspFtdcDirectionType	Direction;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TQspFtdcPriceType	LimitPrice;
	///����
	TQspFtdcVolumeType	Volume;
	///��Ч������
	TQspFtdcTimeConditionType	TimeCondition;
	///GTD����
	TQspFtdcDateType	GTDDate;
	///�ɽ�������
	TQspFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TQspFtdcVolumeType	MinVolume;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TQspFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TQspFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TQspFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TQspFtdcCustomType	UserCustom;
	///������
	TQspFtdcTradingDayType	TradingDay;
	///��Ա���
	TQspFtdcParticipantIDType	ParticipantID;
	///�ͻ���
	TQspFtdcClientIDType	ClientID;
	///�µ�ϯλ��
	TQspFtdcSeatIDType	SeatID;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///���ر������
	TQspFtdcOrderLocalIDType	OrderLocalID;
	///������Դ
	TQspFtdcOrderSourceType	OrderSource;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///����ʱ��
	TQspFtdcTimeType	CancelTime;
	///�����û����
	TQspFtdcUserIDType	CancelUserID;
	///��ɽ�����
	TQspFtdcVolumeType	VolumeTraded;
	///ʣ������
	TQspFtdcVolumeType	VolumeRemain;
	///��������
	TQspFtdcPlotTypeType	PlotType;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///������
	TQspFtdcMoneyType	Fee;
	///׷������
	TQspFtdcVolumeType	Leg1Times;
	///׷������
	TQspFtdcVolumeType	Leg2Times;
	///׷������
	TQspFtdcVolumeType	Leg3Times;
	///׷������
	TQspFtdcVolumeType	Leg4Times;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg1OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg2OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg3OpenDealType;
	///���ִ���ʽ
	TQspFtdcOpenDealTypeType	Leg4OpenDealType;
};

///��ʷ�����ɽ���ѯ
struct CQspFtdcQryHisCombTradeField
{
	///��ʼ������
	TQspFtdcTradingDayType	BeginTradingDay;
	///����������
	TQspFtdcTradingDayType	EndTradingDay;
	///������Լ����
	TQspFtdcInstrumentIDType	CombInstrumentID;
	///ϵͳ�������
	TQspFtdcSequenceNoType	CombOrderSysID;
	///�ɽ����
	TQspFtdcTradeIDType	TradeID;
};

///��ʷ�ɽ���ѯ
struct CQspFtdcQryHisTradeField
{
	///��ʼ������
	TQspFtdcTradingDayType	BeginTradingDay;
	///����������
	TQspFtdcTradingDayType	EndTradingDay;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�ɽ����
	TQspFtdcTradeIDType	TradeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
};

///������Ϣ֪ͨ
struct CQspFtdcCombNtyMessageField
{
	///������Լ����
	TQspFtdcInstrumentIDType	CombInstrumentID;
	///ϵͳ�������
	TQspFtdcSequenceNoType	CombOrderSysID;
	///�ڼ���
	TQspFtdcVolumeType	LegNo;
	///ί��˳��
	TQspFtdcVolumeType	LegSeqNo;
	///��ϢժҪ
	TQspFtdcAbstractType	Abstract;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
};

///�����ײ��Ա�������
struct CQspFtdcGridOrderField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TQspFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///�û�����
	TQspFtdcUserIDType	UserID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TQspFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TQspFtdcDirectionType	Direction;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TQspFtdcPriceType	LimitPrice;
	///����
	TQspFtdcVolumeType	Volume;
	///��Ч������
	TQspFtdcTimeConditionType	TimeCondition;
	///GTD����
	TQspFtdcDateType	GTDDate;
	///�ɽ�������
	TQspFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TQspFtdcVolumeType	MinVolume;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TQspFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TQspFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TQspFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TQspFtdcCustomType	UserCustom;
	///������
	TQspFtdcTradingDayType	TradingDay;
	///��Ա���
	TQspFtdcParticipantIDType	ParticipantID;
	///�ͻ���
	TQspFtdcClientIDType	ClientID;
	///�µ�ϯλ��
	TQspFtdcSeatIDType	SeatID;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///���ر������
	TQspFtdcOrderLocalIDType	OrderLocalID;
	///������Դ
	TQspFtdcOrderSourceType	OrderSource;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///����ʱ��
	TQspFtdcTimeType	CancelTime;
	///�����û����
	TQspFtdcUserIDType	CancelUserID;
	///��ɽ�����
	TQspFtdcVolumeType	VolumeTraded;
	///ʣ������
	TQspFtdcVolumeType	VolumeRemain;
	///��������
	TQspFtdcPlotTypeType	PlotType;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///������
	TQspFtdcMoneyType	Fee;
	///����������
	TQspFtdcMoneyType	FrozenFee;
	///����ı�֤��
	TQspFtdcMoneyType	FrozenMargin;
	///��ȨȨ������֧
	TQspFtdcMoneyType	FrozenPremium;
	///�ʽ��ʺ�
	TQspFtdcAccountIDType	AccountID;
	///�µ��û����
	TQspFtdcUserIDType	OrderUserID;
	///��������
	TQspFtdcTradeTypeType	TradeType;
	///�����־
	TQspFtdcDealFlagType	DealFlag;
	///ί�����κ�
	TQspFtdcSequenceNoType	OrderBatchNO;
	///�ڼ���
	TQspFtdcVolumeType	LegNo;
	///ί��˳��
	TQspFtdcVolumeType	LegSeqNo;
	///��ͬί��˳����
	TQspFtdcVolumeType	SameLegSeqNo;
	///�Ƿ��������һ��
	TQspFtdcBoolType	IsLastLegSeqNo;
	///�Ƿ������ȵ����һ��
	TQspFtdcBoolType	IsLastSameLegNo;
	///��һ���ε�һ�ȵڼ���
	TQspFtdcVolumeType	LegSeqNo1LegNoNum;
	///��һ������־
	TQspFtdcCombLeg1ActionFlagType	Leg1ActionFlag;
	///�����
	TQspFtdcPriceType	LegBasisPrice;
	///����׷��
	TQspFtdcBoolType	IsNoCancelOrder;
	///���տͻ���ʱ��
	TQspFtdcMillisecType	LocalInsertTime;
	///��ǰ��
	TQspFtdcVolumeType	CurrPot;
	///��ǰ��
	TQspFtdcVolumeType	LastPot;
	///�ɽ�״̬
	TQspFtdcTradeStatusType	TradeStatus;
	///�Ƿ�ƽ�ֻ򳷵�
	TQspFtdcBoolType	IsOffset;
	///��ƽ����ԭ�������
	TQspFtdcOrderSysIDType	OffsetSysID;
	///ԭ����۸�
	TQspFtdcPriceType	OpenPrice;
	///�ɽ��۸�
	TQspFtdcPriceType	TradePrice;
	///��λ�۸�
	TQspFtdcPriceType	PotPrice;
	///ֹ��״̬
	TQspFtdcBoolType	IsStopLoss;
	///�ö����Ƿ���Ա����ң�Ĭ�ϲ���
	TQspFtdcIsActiveType	IsActive;
	///����ʱ��
	TQspFtdcMillisecType	OrderTime;
	///��ע
	TQspFtdcCustomType	Comment;
	///�ڴ��仯����
	TQspFtdcMemtableChangeTypeType	MemtableChangeType;
};

///���ӹ���
struct CQspFtdcAPILinkField
{
	///���ӱ��
	TQspFtdcFrontIDType	LinkID;
	///ǰ̨�����û�����
	TQspFtdcUserIDType	UserID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///��̨Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����
	TQspFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TQspFtdcBoolType	IsActive;
	///�������
	TQspFtdcEnvNoType	EnvNo;
	///�Ƿ��������
	TQspFtdcBoolType	IsMrkActive;
	///�Ƿ�ֻ������ѡ��Լ����QuotCrtList 1=��
	TQspFtdcBoolType	IsRcvQuotList;
};

///���г�������ʱ��
struct CQspFtdcMarketTimeField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///����ʱ��
	TQspFtdcTimeType	OpenTime;
	///����ʱ��
	TQspFtdcTimeType	CloseTime;
	///���뿪�п��Ա���ʱ��
	TQspFtdcTimeType	GapOpen;
	///������п��Ա���ʱ��
	TQspFtdcTimeType	GapClose;
};

///�������ղ���¼��
struct CQspFtdcLongShortPlotInputField
{
	///��ղ�������
	TQspFtdcLongShortPlotTypeType	LongShortPlotType;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///���Ա���,���벻���޸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��ࣺ��С���۵�����
	TQspFtdcVolumeType	Range;
	///����
	TQspFtdcVolumeType	Grade;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///����ʱ��
	TQspFtdcTimeType	StartTime;
	///ֹͣʱ��
	TQspFtdcTimeType	EndTime;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///�ױʱ����ٷ���ʽ��֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///��󱨵�����
	TQspFtdcVolumeType	MaxQty;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
};

///�������ղ���
struct CQspFtdcLongShortPlotField
{
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcDateType	InsertDate;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///�޸�����
	TQspFtdcDateType	ModifyDate;
	///�޸�ʱ��
	TQspFtdcTimeType	ModifyTime;
	///��ղ�������
	TQspFtdcLongShortPlotTypeType	LongShortPlotType;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///���Ա���,���벻���޸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��ࣺ��С���۵�����
	TQspFtdcVolumeType	Range;
	///����
	TQspFtdcVolumeType	Grade;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///����ʱ��
	TQspFtdcTimeType	StartTime;
	///ֹͣʱ��
	TQspFtdcTimeType	EndTime;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///�ױʱ����ٷ���ʽ��֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///��󱨵�����
	TQspFtdcVolumeType	MaxQty;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///��ǰ��
	TQspFtdcVolumeType	CurrPot;
	///��һ��
	TQspFtdcVolumeType	PrePot;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TQspFtdcMoneyType	PositionCost;
	///��ɽ�ʣ����
	TQspFtdcVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TQspFtdcVolumeType	SellRemainVolume;
	///�Ƿ�ٷ��״α���
	TQspFtdcBoolType	IsSendFirst;
	///�򶳽�����
	TQspFtdcVolumeType	FrozenBuyVolume;
	///����������
	TQspFtdcVolumeType	FrozenSellVolume;
	///����ӯ��
	TQspFtdcMoneyType	FloatMoney;
};

///�������ղ����޸�
struct CQspFtdcLongShortPlotActionField
{
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcVolumeType	Volume;
	///����
	TQspFtdcVolumeType	Grade;
	///ֹ���
	TQspFtdcPriceType	StopPrice;
	///����ʱ��
	TQspFtdcTimeType	StartTime;
	///ֹͣʱ��
	TQspFtdcTimeType	EndTime;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///��󱨵�����
	TQspFtdcVolumeType	MaxQty;
};

///�������ղ��Բ�ѯ����
struct CQspFtdcQryLongShortPlotField
{
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///�������ݲ�ѯӦ��
struct CQspFtdcQueryBaseFinishField
{
	///�ͻ��˾��͹�˾���
	TQspFtdcBrokerIDType	FrontBrokerID;
	///�ͻ���ǰ̨�����û�����
	TQspFtdcUserIDType	FrontUserID;
	///���������͹�˾���
	TQspFtdcBrokerIDType	BackBrokerID;
	///������ǰ̨�����û�����
	TQspFtdcUserIDType	BackUserID;
	///����
	TQspFtdcPasswordType	Password;
	///��������
	TQspFtdcAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TQspFtdcLinkTypeType	LinkType;
	///���׻�������
	TQspFtdcBoolType	TradeOrMarket;
	///ǰ�ñ��
	TQspFtdcFrontIDType	FrontID;
	///�Ự���
	TQspFtdcSessionIDType	SessionID;
	///������
	TQspFtdcTradingDayType	TradingDay;
};

///��ɽ������������
struct CQspFtdcIcebergPlotInputField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///���Ա���,���벻���޸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///ʵ����󱨵�����
	TQspFtdcVolumeType	MaxQty;
	///ʵ����С��������
	TQspFtdcVolumeType	MinQty;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
};

///��ɽ��������Ӧ��
struct CQspFtdcIcebergPlotField
{
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcDateType	InsertDate;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///�޸�����
	TQspFtdcDateType	ModifyDate;
	///�޸�ʱ��
	TQspFtdcTimeType	ModifyTime;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///���Ա���,���벻���޸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///ʵ����󱨵�����
	TQspFtdcVolumeType	MaxQty;
	///ʵ����С��������
	TQspFtdcVolumeType	MinQty;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TQspFtdcMoneyType	PositionCost;
	///��ɽ�ʣ����
	TQspFtdcVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TQspFtdcVolumeType	SellRemainVolume;
	///�򶳽�����
	TQspFtdcVolumeType	FrozenBuyVolume;
	///����������
	TQspFtdcVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TQspFtdcBoolType	IsSendFirst;
	///����ӯ��
	TQspFtdcMoneyType	FloatMoney;
};

///��ɽ���������޸�
struct CQspFtdcIcebergPlotActionField
{
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///���Ա���,���벻���޸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///ʵ����󱨵�����
	TQspFtdcVolumeType	MaxQty;
	///ʵ����С��������
	TQspFtdcVolumeType	MinQty;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///��ɽ������ѯ����
struct CQspFtdcQryIcebergPlotField
{
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///���鶩����ѯ����
struct CQspFtdcGhostPlotInputField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///���������۸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��С������������
	TQspFtdcVolumeType	MinTriggerQty;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
};

///���鶩����ѯ
struct CQspFtdcGhostPlotField
{
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcDateType	InsertDate;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///�޸�����
	TQspFtdcDateType	ModifyDate;
	///�޸�ʱ��
	TQspFtdcTimeType	ModifyTime;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///���������۸�
	TQspFtdcPriceType	OrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��С������������
	TQspFtdcVolumeType	MinTriggerQty;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TQspFtdcMoneyType	PositionCost;
	///��ɽ�ʣ����
	TQspFtdcVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TQspFtdcVolumeType	SellRemainVolume;
	///�򶳽�����
	TQspFtdcVolumeType	FrozenBuyVolume;
	///����������
	TQspFtdcVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TQspFtdcBoolType	IsSendFirst;
	///����ӯ��
	TQspFtdcMoneyType	FloatMoney;
};

///���鶩�������޸�
struct CQspFtdcGhostPlotActionField
{
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///֧���޼ۺ��м�
	TQspFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TQspFtdcVolumeType	Volume;
	///��С������������
	TQspFtdcVolumeType	MinTriggerQty;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///���鶩����ѯ����
struct CQspFtdcQryGhostPlotField
{
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///���̶�����ѯ����
struct CQspFtdcPegPlotInputField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///���ί�м�
	TQspFtdcPriceType	MaxOrderPrice;
	///��Сί�м�
	TQspFtdcPriceType	MinOrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
};

///���̶�����ѯ
struct CQspFtdcPegPlotField
{
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcDateType	InsertDate;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///�޸�����
	TQspFtdcDateType	ModifyDate;
	///�޸�ʱ��
	TQspFtdcTimeType	ModifyTime;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///���ί�м�
	TQspFtdcPriceType	MaxOrderPrice;
	///��Сί�м�
	TQspFtdcPriceType	MinOrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TQspFtdcMoneyType	PositionCost;
	///��ɽ�ʣ����
	TQspFtdcVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TQspFtdcVolumeType	SellRemainVolume;
	///�򶳽�����
	TQspFtdcVolumeType	FrozenBuyVolume;
	///����������
	TQspFtdcVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TQspFtdcBoolType	IsSendFirst;
	///����ӯ��
	TQspFtdcMoneyType	FloatMoney;
};

///���̶��������޸�
struct CQspFtdcPegPlotActionField
{
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///���ί�м�
	TQspFtdcPriceType	MaxOrderPrice;
	///��Сί�м�
	TQspFtdcPriceType	MinOrderPrice;
	///��������
	TQspFtdcVolumeType	Volume;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///���̶�����ѯ����
struct CQspFtdcQryPegPlotField
{
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///TWap������ѯ����
struct CQspFtdcTWapPlotInputField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��ִ���
	TQspFtdcVolumeType	NumberOfWaves;
	///�ڲ𵥺����������㱨�������Ƿ��Զ�����
	TQspFtdcBoolType	IsAutoWaves;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///�ο�ί�м�
	TQspFtdcPriceType	ReffPrice;
	///�۲�
	TQspFtdcPriceType	PriceDiff;
	///��������
	TQspFtdcVolumeType	Volume;
	///ί�м��ʱ��
	TQspFtdcVolumeType	WaitDelay;
	///����ȷ��ʱ��
	TQspFtdcVolumeType	CancelDelay;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
};

///TWap������ѯ
struct CQspFtdcTWapPlotField
{
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcDateType	InsertDate;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///�޸�����
	TQspFtdcDateType	ModifyDate;
	///�޸�ʱ��
	TQspFtdcTimeType	ModifyTime;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��ִ���
	TQspFtdcVolumeType	NumberOfWaves;
	///�ڲ𵥺����������㱨�������Ƿ��Զ�����
	TQspFtdcBoolType	IsAutoWaves;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///�ο�ί�м�
	TQspFtdcPriceType	ReffPrice;
	///�۲�
	TQspFtdcPriceType	PriceDiff;
	///��������
	TQspFtdcVolumeType	Volume;
	///ί�м��ʱ��
	TQspFtdcVolumeType	WaitDelay;
	///����ȷ��ʱ��
	TQspFtdcVolumeType	CancelDelay;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TQspFtdcMoneyType	PositionCost;
	///��ɽ�ʣ����
	TQspFtdcVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TQspFtdcVolumeType	SellRemainVolume;
	///�򶳽�����
	TQspFtdcVolumeType	FrozenBuyVolume;
	///����������
	TQspFtdcVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TQspFtdcBoolType	IsSendFirst;
	///��С��������
	TQspFtdcVolumeType	MinLimitOrderVolume;
	///��󱨵�����
	TQspFtdcVolumeType	MaxLimitOrderVolume;
	///���¼�
	TQspFtdcPriceType	LastPrice;
	///��һ��
	TQspFtdcPriceType	AskPrice;
	///��һ��
	TQspFtdcPriceType	BidPrice;
	///�ϴα���ʱ��
	TQspFtdcMillisecType	LastOrderTime;
	///�ϴγ���ʱ��
	TQspFtdcMillisecType	LastCancelTime;
	///����ӯ��
	TQspFtdcMoneyType	FloatMoney;
};

///TWap���������޸�
struct CQspFtdcTWapPlotActionField
{
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///�ο�ί�м�
	TQspFtdcPriceType	ReffPrice;
	///�۲�
	TQspFtdcPriceType	PriceDiff;
	///��������
	TQspFtdcVolumeType	Volume;
	///ί�м��ʱ��
	TQspFtdcVolumeType	WaitDelay;
	///����ȷ��ʱ��
	TQspFtdcVolumeType	CancelDelay;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///TWap������ѯ����
struct CQspFtdcQryTWapPlotField
{
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///MIT��Stop������ѯ����
struct CQspFtdcMITStopPlotInputField
{
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��С������
	TQspFtdcVolumeType	MinTrigQty;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///����ί�м�
	TQspFtdcPriceType	TrigPrice;
	///�۲�
	TQspFtdcPriceType	PriceDiff;
	///��������
	TQspFtdcVolumeType	Volume;
	///���Ա�������
	TQspFtdcMITStopTypeType	MITStopType;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
};

///MIT��Stop������ѯ
struct CQspFtdcMITStopPlotField
{
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///��������
	TQspFtdcDateType	InsertDate;
	///����ʱ��
	TQspFtdcTimeType	InsertTime;
	///�޸�����
	TQspFtdcDateType	ModifyDate;
	///�޸�ʱ��
	TQspFtdcTimeType	ModifyTime;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��С������
	TQspFtdcVolumeType	MinTrigQty;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///����ί�м�
	TQspFtdcPriceType	TrigPrice;
	///�۲�
	TQspFtdcPriceType	PriceDiff;
	///��������
	TQspFtdcVolumeType	Volume;
	///���Ա�������
	TQspFtdcMITStopTypeType	MITStopType;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����״̬
	TQspFtdcOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TQspFtdcMoneyType	PositionCost;
	///��ɽ�ʣ����
	TQspFtdcVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TQspFtdcVolumeType	SellRemainVolume;
	///�򶳽�����
	TQspFtdcVolumeType	FrozenBuyVolume;
	///����������
	TQspFtdcVolumeType	FrozenSellVolume;
	///�Ƿ�ﵽ�����ۣ��ﵽ�������´ο�ʼ����
	TQspFtdcBoolType	IsSendFirst;
	///��С��������
	TQspFtdcVolumeType	MinLimitOrderVolume;
	///��󱨵�����
	TQspFtdcVolumeType	MaxLimitOrderVolume;
	///���¼�
	TQspFtdcPriceType	LastPrice;
	///��һ��
	TQspFtdcPriceType	AskPrice;
	///��һ��
	TQspFtdcPriceType	BidPrice;
	///����ӯ��
	TQspFtdcMoneyType	FloatMoney;
};

///MIT��Stop���������޸�
struct CQspFtdcMITStopPlotActionField
{
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///��������
	TQspFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TQspFtdcHedgeFlagType	HedgeFlag;
	///��ƽ��־
	TQspFtdcOffsetFlagType	OffsetFlag;
	///��С������
	TQspFtdcVolumeType	MinTrigQty;
	///��������
	TQspFtdcReffPriceTypeType	ReffPriceType;
	///����ί�м�
	TQspFtdcPriceType	TrigPrice;
	///�۲�
	TQspFtdcPriceType	PriceDiff;
	///��������
	TQspFtdcVolumeType	Volume;
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///MIT��Stop������ѯ����
struct CQspFtdcQryMITStopPlotField
{
	///��¼���͹�˾���
	TQspFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TQspFtdcUserIDType	LogUserID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TQspFtdcPlotStatusTypeType	Status;
	///Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
};

///���ĵ������б�
struct CQspFtdcSubMarketQuotoListField
{
	///���ӱ��
	TQspFtdcFrontIDType	LinkID;
	///��������,QDP,QDAM,CTP
	TQspFtdcAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TQspFtdcLinkTypeType	LinkType;
	///����������
	TQspFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TQspFtdcInstrumentIDType	InstrumentID;
	///�Ƿ���
	TQspFtdcBoolType	IsActive;
};

///��Ӧ���������ӹ�����
struct CQspFtdcEnvManagerField
{
	///�������
	TQspFtdcEnvNoType	EnvNo;
	///��������
	TQspFtdcShortNameType	EnvName;
	///��������
	TQspFtdcLongNameType	EnvDesc;
	///��������
	TQspFtdcAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TQspFtdcLinkTypeType	LinkType;
	///���ӵ�ַ
	TQspFtdcTCPAddressType	TradeAddress;
	///���ӵ�ַ
	TQspFtdcTCPAddressType	MarketAddress;
	///���������
	TQspFtdcTopicIDType	TopicID;
};

///���ӹ���
struct CQspFtdcAPIInnerLinkField
{
	///���ӱ��
	TQspFtdcFrontIDType	LinkID;
	///ǰ̨�����û�����
	TQspFtdcUserIDType	UserID;
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///��̨Ͷ���߱��
	TQspFtdcInvestorIDType	InvestorID;
	///����
	TQspFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TQspFtdcBoolType	IsActive;
	///�������
	TQspFtdcEnvNoType	EnvNo;
	///�Ƿ��������
	TQspFtdcBoolType	IsMrkActive;
	///�Ƿ�ֻ������ѡ��Լ����QuotCrtList 1=��
	TQspFtdcBoolType	IsRcvQuotList;
	///��������
	TQspFtdcAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TQspFtdcLinkTypeType	LinkType;
	///���ӵ�ַ
	TQspFtdcTCPAddressType	TradeAddress;
	///���ӵ�ַ
	TQspFtdcTCPAddressType	MarketAddress;
	///���������
	TQspFtdcTopicIDType	TopicID;
};

///������Ϣ֪ͨ
struct CQspFtdcPlotNtyMessageField
{
	///���͹�˾���
	TQspFtdcBrokerIDType	BrokerID;
	///����ִ�б��
	TQspFtdcOrderLocalIDType	PlotID;
	///�������
	TQspFtdcErrorIDType	ErrorID;
	///��ϢժҪ
	TQspFtdcAbstractType	Abstract;
};



#endif
