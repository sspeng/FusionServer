// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.2
//
// <auto-generated>
//
// Generated from file `qualityjudgeRpc.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <qualityjudgeRpc.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/PopDisableWarnings.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 2
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __RPCQualityJudge__QualityInf__qualitySyn_name = "qualitySyn";

const ::std::string __RPCQualityJudge__QualityInf__qualityAsyn_name = "qualityAsyn";

const ::std::string __RPCQualityJudge__QualityInf__fetchQualityRes_name = "fetchQualityRes";

}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::RPCQualityJudge::upCast(::IceProxy::RPCQualityJudge::QualityInf* p) { return p; }

void
::IceProxy::RPCQualityJudge::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::RPCQualityJudge::QualityInf>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RPCQualityJudge::QualityInf;
        v->__copyFrom(proxy);
    }
}

::RPCQualityJudge::QualityInfo
IceProxy::RPCQualityJudge::QualityInf::qualitySyn(const ::RPCQualityJudge::QualityInputStruct& __p_inputArgs, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__RPCQualityJudge__QualityInf__qualitySyn_name);
    ::IceInternal::Outgoing __og(this, __RPCQualityJudge__QualityInf__qualitySyn_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_inputArgs);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
    ::RPCQualityJudge::QualityInfo __ret;
    ::IceInternal::BasicStream* __is = __og.startReadParams();
    __is->read(__ret);
    __og.endReadParams();
    return __ret;
}

::Ice::AsyncResultPtr
IceProxy::RPCQualityJudge::QualityInf::begin_qualitySyn(const ::RPCQualityJudge::QualityInputStruct& __p_inputArgs, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__RPCQualityJudge__QualityInf__qualitySyn_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RPCQualityJudge__QualityInf__qualitySyn_name, __del, __cookie);
    try
    {
        __result->prepare(__RPCQualityJudge__QualityInf__qualitySyn_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_inputArgs);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::RPCQualityJudge::QualityInf::__begin_qualitySyn(const ::RPCQualityJudge::QualityInputStruct& __p_inputArgs, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::RPCQualityJudge::QualityInfo&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void (const ::RPCQualityJudge::QualityInfo&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::RPCQualityJudge::QualityInfPrx __proxy = ::RPCQualityJudge::QualityInfPrx::uncheckedCast(__result->getProxy());
            ::RPCQualityJudge::QualityInfo __ret;
            try
            {
                __ret = __proxy->end_qualitySyn(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response(__ret);
            }
        }
    
    private:
        
        ::std::function<void (const ::RPCQualityJudge::QualityInfo&)> _response;
    };
    return begin_qualitySyn(__p_inputArgs, __ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

::RPCQualityJudge::QualityInfo
IceProxy::RPCQualityJudge::QualityInf::end_qualitySyn(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __RPCQualityJudge__QualityInf__qualitySyn_name);
    ::RPCQualityJudge::QualityInfo __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__startReadParams();
    __is->read(__ret);
    __result->__endReadParams();
    return __ret;
}

::Ice::Int
IceProxy::RPCQualityJudge::QualityInf::qualityAsyn(const ::RPCQualityJudge::QualityInputStruct& __p_inputArgs, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__RPCQualityJudge__QualityInf__qualityAsyn_name);
    ::IceInternal::Outgoing __og(this, __RPCQualityJudge__QualityInf__qualityAsyn_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_inputArgs);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
    ::Ice::Int __ret;
    ::IceInternal::BasicStream* __is = __og.startReadParams();
    __is->read(__ret);
    __og.endReadParams();
    return __ret;
}

::Ice::AsyncResultPtr
IceProxy::RPCQualityJudge::QualityInf::begin_qualityAsyn(const ::RPCQualityJudge::QualityInputStruct& __p_inputArgs, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__RPCQualityJudge__QualityInf__qualityAsyn_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RPCQualityJudge__QualityInf__qualityAsyn_name, __del, __cookie);
    try
    {
        __result->prepare(__RPCQualityJudge__QualityInf__qualityAsyn_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_inputArgs);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::RPCQualityJudge::QualityInf::__begin_qualityAsyn(const ::RPCQualityJudge::QualityInputStruct& __p_inputArgs, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (::Ice::Int)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void (::Ice::Int)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::RPCQualityJudge::QualityInfPrx __proxy = ::RPCQualityJudge::QualityInfPrx::uncheckedCast(__result->getProxy());
            ::Ice::Int __ret;
            try
            {
                __ret = __proxy->end_qualityAsyn(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response(__ret);
            }
        }
    
    private:
        
        ::std::function<void (::Ice::Int)> _response;
    };
    return begin_qualityAsyn(__p_inputArgs, __ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

::Ice::Int
IceProxy::RPCQualityJudge::QualityInf::end_qualityAsyn(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __RPCQualityJudge__QualityInf__qualityAsyn_name);
    ::Ice::Int __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__startReadParams();
    __is->read(__ret);
    __result->__endReadParams();
    return __ret;
}

::RPCQualityJudge::QualityInfo
IceProxy::RPCQualityJudge::QualityInf::fetchQualityRes(const ::std::string& __p_inputArgs, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__RPCQualityJudge__QualityInf__fetchQualityRes_name);
    ::IceInternal::Outgoing __og(this, __RPCQualityJudge__QualityInf__fetchQualityRes_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_inputArgs);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
    ::RPCQualityJudge::QualityInfo __ret;
    ::IceInternal::BasicStream* __is = __og.startReadParams();
    __is->read(__ret);
    __og.endReadParams();
    return __ret;
}

::Ice::AsyncResultPtr
IceProxy::RPCQualityJudge::QualityInf::begin_fetchQualityRes(const ::std::string& __p_inputArgs, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__RPCQualityJudge__QualityInf__fetchQualityRes_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RPCQualityJudge__QualityInf__fetchQualityRes_name, __del, __cookie);
    try
    {
        __result->prepare(__RPCQualityJudge__QualityInf__fetchQualityRes_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_inputArgs);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::RPCQualityJudge::QualityInf::__begin_fetchQualityRes(const ::std::string& __p_inputArgs, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::RPCQualityJudge::QualityInfo&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void (const ::RPCQualityJudge::QualityInfo&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::RPCQualityJudge::QualityInfPrx __proxy = ::RPCQualityJudge::QualityInfPrx::uncheckedCast(__result->getProxy());
            ::RPCQualityJudge::QualityInfo __ret;
            try
            {
                __ret = __proxy->end_fetchQualityRes(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response(__ret);
            }
        }
    
    private:
        
        ::std::function<void (const ::RPCQualityJudge::QualityInfo&)> _response;
    };
    return begin_fetchQualityRes(__p_inputArgs, __ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

::RPCQualityJudge::QualityInfo
IceProxy::RPCQualityJudge::QualityInf::end_fetchQualityRes(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __RPCQualityJudge__QualityInf__fetchQualityRes_name);
    ::RPCQualityJudge::QualityInfo __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__startReadParams();
    __is->read(__ret);
    __result->__endReadParams();
    return __ret;
}

const ::std::string&
IceProxy::RPCQualityJudge::QualityInf::ice_staticId()
{
    return ::RPCQualityJudge::QualityInf::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::RPCQualityJudge::QualityInf::__newInstance() const
{
    return new QualityInf;
}

::Ice::Object* RPCQualityJudge::upCast(::RPCQualityJudge::QualityInf* p) { return p; }

namespace
{
const ::std::string __RPCQualityJudge__QualityInf_ids[2] =
{
    "::Ice::Object",
    "::RPCQualityJudge::QualityInf"
};

}

bool
RPCQualityJudge::QualityInf::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RPCQualityJudge__QualityInf_ids, __RPCQualityJudge__QualityInf_ids + 2, _s);
}

::std::vector< ::std::string>
RPCQualityJudge::QualityInf::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RPCQualityJudge__QualityInf_ids[0], &__RPCQualityJudge__QualityInf_ids[2]);
}

const ::std::string&
RPCQualityJudge::QualityInf::ice_id(const ::Ice::Current&) const
{
    return __RPCQualityJudge__QualityInf_ids[1];
}

const ::std::string&
RPCQualityJudge::QualityInf::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::RPCQualityJudge::QualityInf";
    return typeId;
#else
    return __RPCQualityJudge__QualityInf_ids[1];
#endif
}

::Ice::DispatchStatus
RPCQualityJudge::QualityInf::___qualitySyn(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::RPCQualityJudge::QualityInputStruct __p_inputArgs;
    __is->read(__p_inputArgs);
    __inS.endReadParams();
    ::RPCQualityJudge::QualityInfo __ret = qualitySyn(__p_inputArgs, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
RPCQualityJudge::QualityInf::___qualityAsyn(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::RPCQualityJudge::QualityInputStruct __p_inputArgs;
    __is->read(__p_inputArgs);
    __inS.endReadParams();
    ::Ice::Int __ret = qualityAsyn(__p_inputArgs, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
RPCQualityJudge::QualityInf::___fetchQualityRes(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string __p_inputArgs;
    __is->read(__p_inputArgs);
    __inS.endReadParams();
    ::RPCQualityJudge::QualityInfo __ret = fetchQualityRes(__p_inputArgs, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __RPCQualityJudge__QualityInf_all[] =
{
    "fetchQualityRes",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "qualityAsyn",
    "qualitySyn"
};

}

::Ice::DispatchStatus
RPCQualityJudge::QualityInf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__RPCQualityJudge__QualityInf_all, __RPCQualityJudge__QualityInf_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RPCQualityJudge__QualityInf_all)
    {
        case 0:
        {
            return ___fetchQualityRes(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___qualityAsyn(in, current);
        }
        case 6:
        {
            return ___qualitySyn(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
RPCQualityJudge::QualityInf::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
RPCQualityJudge::QualityInf::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
RPCQualityJudge::__patch(QualityInfPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RPCQualityJudge::QualityInfPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RPCQualityJudge::QualityInf::ice_staticId(), v);
    }
}
