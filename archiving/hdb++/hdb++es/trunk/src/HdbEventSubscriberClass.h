/*----- PROTECTED REGION ID(HdbEventSubscriberClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        HdbEventSubscriberClass.h
//
// description : Include for the HdbEventSubscriberClass root class.
//               This class is the singleton class for.
//               the HdbEventSubscriber device class..
//               It contains all properties and methods which the .
//               HdbEventSubscriber requires only once e.g. the commands.
//
// project :     Tango Device Server.
//
// $Author: graziano $
//
// $Revision: 1.4 $
// $Date: 2014-03-07 14:05:54 $
//
// SVN only:
// $HeadURL$
//
// CVS only:
// $Source: /home/cvsadm/cvsroot/fermi/servers/hdb++/hdb++es/src/HdbEventSubscriberClass.h,v $
// $Log: HdbEventSubscriberClass.h,v $
// Revision 1.4  2014-03-07 14:05:54  graziano
// added ResetStatistics command
//
// Revision 1.3  2014-02-20 15:13:46  graziano
// name and path fixing
// regenerated with new pogo
//
// Revision 1.2  2013-08-23 10:04:53  graziano
// development
//
// Revision 1.1  2013-07-17 13:37:43  graziano
// *** empty log message ***
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef HDBEVENTSUBSCRIBERCLASS_H
#define HDBEVENTSUBSCRIBERCLASS_H

#include <tango.h>
#include <HdbEventSubscriber.h>

/*----- PROTECTED REGION END -----*/	//	HdbEventSubscriberClass.h


namespace HdbEventSubscriber_ns
{
/*----- PROTECTED REGION ID(HdbEventSubscriberClass::classes for dynamic creation) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	HdbEventSubscriberClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute AttributeOkNumber class definition
class AttributeOkNumberAttrib: public Tango::Attr
{
public:
	AttributeOkNumberAttrib():Attr("AttributeOkNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributeOkNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeOkNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeOkNumber_allowed(ty);}
};

//	Attribute AttributeNokNumber class definition
class AttributeNokNumberAttrib: public Tango::Attr
{
public:
	AttributeNokNumberAttrib():Attr("AttributeNokNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributeNokNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeNokNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeNokNumber_allowed(ty);}
};

//	Attribute AttributePendingNumber class definition
class AttributePendingNumberAttrib: public Tango::Attr
{
public:
	AttributePendingNumberAttrib():Attr("AttributePendingNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributePendingNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributePendingNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributePendingNumber_allowed(ty);}
};

//	Attribute AttributeNumber class definition
class AttributeNumberAttrib: public Tango::Attr
{
public:
	AttributeNumberAttrib():Attr("AttributeNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributeNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeNumber_allowed(ty);}
};

//	Attribute AttributeMaxStoreTime class definition
class AttributeMaxStoreTimeAttrib: public Tango::Attr
{
public:
	AttributeMaxStoreTimeAttrib():Attr("AttributeMaxStoreTime",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~AttributeMaxStoreTimeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeMaxStoreTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeMaxStoreTime_allowed(ty);}
};

//	Attribute AttributeMinStoreTime class definition
class AttributeMinStoreTimeAttrib: public Tango::Attr
{
public:
	AttributeMinStoreTimeAttrib():Attr("AttributeMinStoreTime",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~AttributeMinStoreTimeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeMinStoreTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeMinStoreTime_allowed(ty);}
};

//	Attribute AttributeMaxProcessingTime class definition
class AttributeMaxProcessingTimeAttrib: public Tango::Attr
{
public:
	AttributeMaxProcessingTimeAttrib():Attr("AttributeMaxProcessingTime",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~AttributeMaxProcessingTimeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeMaxProcessingTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeMaxProcessingTime_allowed(ty);}
};

//	Attribute AttributeMinProcessingTime class definition
class AttributeMinProcessingTimeAttrib: public Tango::Attr
{
public:
	AttributeMinProcessingTimeAttrib():Attr("AttributeMinProcessingTime",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~AttributeMinProcessingTimeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeMinProcessingTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeMinProcessingTime_allowed(ty);}
};

//	Attribute AttributeRecordFreq class definition
class AttributeRecordFreqAttrib: public Tango::Attr
{
public:
	AttributeRecordFreqAttrib():Attr("AttributeRecordFreq",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~AttributeRecordFreqAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeRecordFreq(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeRecordFreq_allowed(ty);}
};

//	Attribute AttributeFailureFreq class definition
class AttributeFailureFreqAttrib: public Tango::Attr
{
public:
	AttributeFailureFreqAttrib():Attr("AttributeFailureFreq",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~AttributeFailureFreqAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeFailureFreq(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeFailureFreq_allowed(ty);}
};

//	Attribute AttributeStartedNumber class definition
class AttributeStartedNumberAttrib: public Tango::Attr
{
public:
	AttributeStartedNumberAttrib():Attr("AttributeStartedNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributeStartedNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeStartedNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStartedNumber_allowed(ty);}
};

//	Attribute AttributeStoppedNumber class definition
class AttributeStoppedNumberAttrib: public Tango::Attr
{
public:
	AttributeStoppedNumberAttrib():Attr("AttributeStoppedNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributeStoppedNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeStoppedNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStoppedNumber_allowed(ty);}
};

//	Attribute AttributeMaxPendingNumber class definition
class AttributeMaxPendingNumberAttrib: public Tango::Attr
{
public:
	AttributeMaxPendingNumberAttrib():Attr("AttributeMaxPendingNumber",
			Tango::DEV_LONG, Tango::READ) {};
	~AttributeMaxPendingNumberAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeMaxPendingNumber(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeMaxPendingNumber_allowed(ty);}
};

//	Attribute StatisticsResetTime class definition
class StatisticsResetTimeAttrib: public Tango::Attr
{
public:
	StatisticsResetTimeAttrib():Attr("StatisticsResetTime",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~StatisticsResetTimeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_StatisticsResetTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_StatisticsResetTime_allowed(ty);}
};

//	Attribute AttributeList class definition
class AttributeListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeListAttrib():SpectrumAttr("AttributeList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributeListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeList_allowed(ty);}
};

//	Attribute AttributeOkList class definition
class AttributeOkListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeOkListAttrib():SpectrumAttr("AttributeOkList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributeOkListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeOkList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeOkList_allowed(ty);}
};

//	Attribute AttributeNokList class definition
class AttributeNokListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeNokListAttrib():SpectrumAttr("AttributeNokList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributeNokListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeNokList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeNokList_allowed(ty);}
};

//	Attribute AttributePendingList class definition
class AttributePendingListAttrib: public Tango::SpectrumAttr
{
public:
	AttributePendingListAttrib():SpectrumAttr("AttributePendingList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributePendingListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributePendingList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributePendingList_allowed(ty);}
};

//	Attribute AttributeRecordFreqList class definition
class AttributeRecordFreqListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeRecordFreqListAttrib():SpectrumAttr("AttributeRecordFreqList",
			Tango::DEV_DOUBLE, Tango::READ, 10000) {};
	~AttributeRecordFreqListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeRecordFreqList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeRecordFreqList_allowed(ty);}
};

//	Attribute AttributeFailureFreqList class definition
class AttributeFailureFreqListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeFailureFreqListAttrib():SpectrumAttr("AttributeFailureFreqList",
			Tango::DEV_DOUBLE, Tango::READ, 10000) {};
	~AttributeFailureFreqListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeFailureFreqList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeFailureFreqList_allowed(ty);}
};

//	Attribute AttributeStartedList class definition
class AttributeStartedListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeStartedListAttrib():SpectrumAttr("AttributeStartedList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributeStartedListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeStartedList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStartedList_allowed(ty);}
};

//	Attribute AttributeStoppedList class definition
class AttributeStoppedListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeStoppedListAttrib():SpectrumAttr("AttributeStoppedList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributeStoppedListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeStoppedList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStoppedList_allowed(ty);}
};

//	Attribute AttributeEventNumberList class definition
class AttributeEventNumberListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeEventNumberListAttrib():SpectrumAttr("AttributeEventNumberList",
			Tango::DEV_LONG, Tango::READ, 10000) {};
	~AttributeEventNumberListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeEventNumberList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeEventNumberList_allowed(ty);}
};

//	Attribute AttributeErrorList class definition
class AttributeErrorListAttrib: public Tango::SpectrumAttr
{
public:
	AttributeErrorListAttrib():SpectrumAttr("AttributeErrorList",
			Tango::DEV_STRING, Tango::READ, 10000) {};
	~AttributeErrorListAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<HdbEventSubscriber *>(dev))->read_AttributeErrorList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeErrorList_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command AttributeAdd class definition
class AttributeAddClass : public Tango::Command
{
public:
	AttributeAddClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AttributeAddClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AttributeAddClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeAdd_allowed(any);}
};

//	Command AttributeRemove class definition
class AttributeRemoveClass : public Tango::Command
{
public:
	AttributeRemoveClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AttributeRemoveClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AttributeRemoveClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeRemove_allowed(any);}
};

//	Command AttributeStatus class definition
class AttributeStatusClass : public Tango::Command
{
public:
	AttributeStatusClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AttributeStatusClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AttributeStatusClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStatus_allowed(any);}
};

//	Command Start class definition
class StartClass : public Tango::Command
{
public:
	StartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_Start_allowed(any);}
};

//	Command Stop class definition
class StopClass : public Tango::Command
{
public:
	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StopClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_Stop_allowed(any);}
};

//	Command AttributeStart class definition
class AttributeStartClass : public Tango::Command
{
public:
	AttributeStartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AttributeStartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AttributeStartClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStart_allowed(any);}
};

//	Command AttributeStop class definition
class AttributeStopClass : public Tango::Command
{
public:
	AttributeStopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AttributeStopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AttributeStopClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_AttributeStop_allowed(any);}
};

//	Command ResetStatistics class definition
class ResetStatisticsClass : public Tango::Command
{
public:
	ResetStatisticsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetStatisticsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetStatisticsClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<HdbEventSubscriber *>(dev))->is_ResetStatistics_allowed(any);}
};


/**
 *	The HdbEventSubscriberClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  HdbEventSubscriberClass : public Tango::DeviceClass
#else
class HdbEventSubscriberClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(HdbEventSubscriberClass::Additionnal DServer data members) ENABLED START -----*/
public:
	

	/*----- PROTECTED REGION END -----*/	//	HdbEventSubscriberClass::Additionnal DServer data members

	//	Class properties data members
	public:
		//	SubscribeRetryPeriod:	Subscribe event retrying period in seconds.
		Tango::DevLong	subscribeRetryPeriod;
		//	DbHost:	
		string	dbHost;
		//	DbUser:	
		string	dbUser;
		//	DbPassword:	
		string	dbPassword;
		//	DbName:	
		string	dbName;
		//	DbPort:	
		Tango::DevShort	dbPort;
		//	StartArchivingAtStartup:	Start archiving at startup
		Tango::DevBoolean	startArchivingAtStartup;
		//	StatisticsTimeWindow:	Statistics time window in seconds
		Tango::DevLong	statisticsTimeWindow;
		//	CheckPeriodicTimeoutDelay:	Delay in seconds before timeout when checking periodic events
		Tango::DevLong	checkPeriodicTimeoutDelay;
		//	PollingThreadPeriod:	Polling thread period in seconds.
		Tango::DevLong	pollingThreadPeriod;
	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static HdbEventSubscriberClass *init(const char *);
		static HdbEventSubscriberClass *instance();
		~HdbEventSubscriberClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		HdbEventSubscriberClass(string &);
		static HdbEventSubscriberClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	HdbEventSubscriber_H
