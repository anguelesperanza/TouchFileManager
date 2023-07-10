#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif
#ifndef INCLUDED_hx_concurrent_ConcurrentException
#include <hx/concurrent/ConcurrentException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85bfbf8407e62398_28_new,"hx.concurrent.ConcurrentException","new",0x73c2a751,"hx.concurrent.ConcurrentException.new","hx/concurrent/ConcurrentException.hx",28,0xe5b812df)
HX_LOCAL_STACK_FRAME(_hx_pos_85bfbf8407e62398_48_rethrow,"hx.concurrent.ConcurrentException","rethrow",0x3c4e5404,"hx.concurrent.ConcurrentException.rethrow","hx/concurrent/ConcurrentException.hx",48,0xe5b812df)
HX_LOCAL_STACK_FRAME(_hx_pos_85bfbf8407e62398_54_toString,"hx.concurrent.ConcurrentException","toString",0x517a301b,"hx.concurrent.ConcurrentException.toString","hx/concurrent/ConcurrentException.hx",54,0xe5b812df)
static const ::String _hx_array_data_310eaadf_4[] = {
	HX_("rethrown exception:\n",7a,05,8c,8b),
};
static const ::String _hx_array_data_310eaadf_5[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_310eaadf_6[] = {
	HX_("--------------------\n",4a,46,ed,06),
};
static const ::String _hx_array_data_310eaadf_7[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_310eaadf_8[] = {
	HX_("| Exception : ",1b,a4,76,c6),
};
static const ::String _hx_array_data_310eaadf_9[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_310eaadf_10[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_310eaadf_11[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_310eaadf_12[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_310eaadf_13[] = {
	HX_("--------------------",c0,41,cc,4b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_85bfbf8407e62398_20_capture,"hx.concurrent.ConcurrentException","capture",0xed7573f7,"hx.concurrent.ConcurrentException.capture","hx/concurrent/ConcurrentException.hx",20,0xe5b812df)
HX_LOCAL_STACK_FRAME(_hx_pos_85bfbf8407e62398_15_boot,"hx.concurrent.ConcurrentException","boot",0xcea8c021,"hx.concurrent.ConcurrentException.boot","hx/concurrent/ConcurrentException.hx",15,0xe5b812df)
namespace hx{
namespace concurrent{

void ConcurrentException_obj::__construct( ::Dynamic cause){
            	HX_STACKFRAME(&_hx_pos_85bfbf8407e62398_28_new)
HXLINE(  29)		this->cause = cause;
HXLINE(  30)		this->causeStackTrace = ::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(null());
            	}

Dynamic ConcurrentException_obj::__CreateEmpty() { return new ConcurrentException_obj; }

void *ConcurrentException_obj::_hx_vtable = 0;

Dynamic ConcurrentException_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConcurrentException_obj > _hx_result = new ConcurrentException_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConcurrentException_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cef1b2d;
}

void ConcurrentException_obj::rethrow(){
            	HX_STACKFRAME(&_hx_pos_85bfbf8407e62398_48_rethrow)
HXDLIN(  48)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->toString()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConcurrentException_obj,rethrow,(void))

::String ConcurrentException_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_85bfbf8407e62398_54_toString)
HXLINE(  55)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  56)		{
HXLINE(  56)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  56)				sb->flush();
            			}
HXDLIN(  56)			if (::hx::IsNull( sb->b )) {
HXLINE(  56)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_4,1);
            			}
            			else {
HXLINE(  56)				sb->b->push(HX_("rethrown exception:\n",7a,05,8c,8b));
            			}
            		}
HXLINE(  57)		{
HXLINE(  57)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  57)				sb->flush();
            			}
HXDLIN(  57)			if (::hx::IsNull( sb->b )) {
HXLINE(  57)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_5,1);
            			}
            			else {
HXLINE(  57)				sb->b->push(HX_("  ",00,1c,00,00));
            			}
            		}
HXDLIN(  57)		{
HXLINE(  57)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  57)				sb->flush();
            			}
HXDLIN(  57)			if (::hx::IsNull( sb->b )) {
HXLINE(  57)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_6,1);
            			}
            			else {
HXLINE(  57)				sb->b->push(HX_("--------------------\n",4a,46,ed,06));
            			}
            		}
HXLINE(  58)		{
HXLINE(  58)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  58)				sb->flush();
            			}
HXDLIN(  58)			if (::hx::IsNull( sb->b )) {
HXLINE(  58)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_7,1);
            			}
            			else {
HXLINE(  58)				sb->b->push(HX_("  ",00,1c,00,00));
            			}
            		}
HXDLIN(  58)		{
HXLINE(  58)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  58)				sb->flush();
            			}
HXDLIN(  58)			if (::hx::IsNull( sb->b )) {
HXLINE(  58)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_8,1);
            			}
            			else {
HXLINE(  58)				sb->b->push(HX_("| Exception : ",1b,a4,76,c6));
            			}
            		}
HXDLIN(  58)		{
HXLINE(  58)			 ::Dynamic x = this->cause;
HXDLIN(  58)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  58)				sb->flush();
            			}
HXDLIN(  58)			if (::hx::IsNull( sb->b )) {
HXLINE(  58)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  58)				::Array< ::String > sb1 = sb->b;
HXDLIN(  58)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXDLIN(  58)		{
HXLINE(  58)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  58)				sb->flush();
            			}
HXDLIN(  58)			if (::hx::IsNull( sb->b )) {
HXLINE(  58)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_9,1);
            			}
            			else {
HXLINE(  58)				sb->b->push(HX_("\n",0a,00,00,00));
            			}
            		}
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			::Array< ::String > _g1 = ::haxe::_CallStack::CallStack_Impl__obj::toString(this->causeStackTrace).split(HX_("\n",0a,00,00,00));
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				::String item = _g1->__get(_g);
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  61)				if ((item == HX_("",00,00,00,00))) {
HXLINE(  61)					continue;
            				}
HXLINE(  62)				{
HXLINE(  62)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  62)						sb->flush();
            					}
HXDLIN(  62)					if (::hx::IsNull( sb->b )) {
HXLINE(  62)						sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_10,1);
            					}
            					else {
HXLINE(  62)						sb->b->push(HX_("  ",00,1c,00,00));
            					}
            				}
HXLINE(  63)				{
HXLINE(  63)					::String x = ::StringTools_obj::replace(item,HX_("Called from",cd,13,cb,c9),HX_("| at",17,12,0f,52));
HXDLIN(  63)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  63)						sb->flush();
            					}
HXDLIN(  63)					if (::hx::IsNull( sb->b )) {
HXLINE(  63)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  63)						::Array< ::String > sb1 = sb->b;
HXDLIN(  63)						sb1->push(::Std_obj::string(x));
            					}
            				}
HXLINE(  64)				{
HXLINE(  64)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  64)						sb->flush();
            					}
HXDLIN(  64)					if (::hx::IsNull( sb->b )) {
HXLINE(  64)						sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_11,1);
            					}
            					else {
HXLINE(  64)						sb->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            		}
HXLINE(  66)		{
HXLINE(  66)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  66)				sb->flush();
            			}
HXDLIN(  66)			if (::hx::IsNull( sb->b )) {
HXLINE(  66)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_12,1);
            			}
            			else {
HXLINE(  66)				sb->b->push(HX_("  ",00,1c,00,00));
            			}
            		}
HXDLIN(  66)		{
HXLINE(  66)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  66)				sb->flush();
            			}
HXDLIN(  66)			if (::hx::IsNull( sb->b )) {
HXLINE(  66)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_310eaadf_13,1);
            			}
            			else {
HXLINE(  66)				sb->b->push(HX_("--------------------",c0,41,cc,4b));
            			}
            		}
HXLINE(  67)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConcurrentException_obj,toString,return )

::String ConcurrentException_obj::INDENT;

 ::hx::concurrent::ConcurrentException ConcurrentException_obj::capture( ::Dynamic ex){
            	HX_GC_STACKFRAME(&_hx_pos_85bfbf8407e62398_20_capture)
HXDLIN(  20)		return  ::hx::concurrent::ConcurrentException_obj::__alloc( HX_CTX ,ex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConcurrentException_obj,capture,return )


::hx::ObjectPtr< ConcurrentException_obj > ConcurrentException_obj::__new( ::Dynamic cause) {
	::hx::ObjectPtr< ConcurrentException_obj > __this = new ConcurrentException_obj();
	__this->__construct(cause);
	return __this;
}

::hx::ObjectPtr< ConcurrentException_obj > ConcurrentException_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic cause) {
	ConcurrentException_obj *__this = (ConcurrentException_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConcurrentException_obj), true, "hx.concurrent.ConcurrentException"));
	*(void **)__this = ConcurrentException_obj::_hx_vtable;
	__this->__construct(cause);
	return __this;
}

ConcurrentException_obj::ConcurrentException_obj()
{
}

void ConcurrentException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConcurrentException);
	HX_MARK_MEMBER_NAME(cause,"cause");
	HX_MARK_MEMBER_NAME(causeStackTrace,"causeStackTrace");
	HX_MARK_END_CLASS();
}

void ConcurrentException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cause,"cause");
	HX_VISIT_MEMBER_NAME(causeStackTrace,"causeStackTrace");
}

::hx::Val ConcurrentException_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { return ::hx::Val( cause ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rethrow") ) { return ::hx::Val( rethrow_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"causeStackTrace") ) { return ::hx::Val( causeStackTrace ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConcurrentException_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"capture") ) { outValue = capture_dyn(); return true; }
	}
	return false;
}

::hx::Val ConcurrentException_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { cause=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"causeStackTrace") ) { causeStackTrace=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConcurrentException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cause",69,4c,22,41));
	outFields->push(HX_("causeStackTrace",e6,7f,a2,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConcurrentException_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ConcurrentException_obj,cause),HX_("cause",69,4c,22,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ConcurrentException_obj,causeStackTrace),HX_("causeStackTrace",e6,7f,a2,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ConcurrentException_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ConcurrentException_obj::INDENT,HX_("INDENT",6c,b8,75,46)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConcurrentException_obj_sMemberFields[] = {
	HX_("cause",69,4c,22,41),
	HX_("causeStackTrace",e6,7f,a2,c2),
	HX_("rethrow",93,b0,2a,f6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void ConcurrentException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConcurrentException_obj::INDENT,"INDENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConcurrentException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConcurrentException_obj::INDENT,"INDENT");
};

#endif

::hx::Class ConcurrentException_obj::__mClass;

static ::String ConcurrentException_obj_sStaticFields[] = {
	HX_("INDENT",6c,b8,75,46),
	HX_("capture",86,d0,51,a7),
	::String(null())
};

void ConcurrentException_obj::__register()
{
	ConcurrentException_obj _hx_dummy;
	ConcurrentException_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.concurrent.ConcurrentException",df,aa,0e,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConcurrentException_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConcurrentException_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConcurrentException_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConcurrentException_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConcurrentException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConcurrentException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConcurrentException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConcurrentException_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConcurrentException_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_85bfbf8407e62398_15_boot)
HXDLIN(  15)		INDENT = HX_("  ",00,1c,00,00);
            	}
}

} // end namespace hx
} // end namespace concurrent
