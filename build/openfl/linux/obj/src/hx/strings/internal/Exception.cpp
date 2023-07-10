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
#ifndef INCLUDED_hx_strings_internal_Exception
#include <hx/strings/internal/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c18862d958bb657_24_new,"hx.strings.internal.Exception","new",0xee2d83ba,"hx.strings.internal.Exception.new","hx/strings/internal/Exception.hx",24,0x9e3ada35)
HX_LOCAL_STACK_FRAME(_hx_pos_1c18862d958bb657_42_rethrow,"hx.strings.internal.Exception","rethrow",0xd06a18ed,"hx.strings.internal.Exception.rethrow","hx/strings/internal/Exception.hx",42,0x9e3ada35)
HX_LOCAL_STACK_FRAME(_hx_pos_1c18862d958bb657_48_toString,"hx.strings.internal.Exception","toString",0x55aab712,"hx.strings.internal.Exception.toString","hx/strings/internal/Exception.hx",48,0x9e3ada35)
static const ::String _hx_array_data_7786dec8_4[] = {
	HX_("rethrown exception:\n",7a,05,8c,8b),
};
static const ::String _hx_array_data_7786dec8_5[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_7786dec8_6[] = {
	HX_("--------------------\n",4a,46,ed,06),
};
static const ::String _hx_array_data_7786dec8_7[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_7786dec8_8[] = {
	HX_("| Exception : ",1b,a4,76,c6),
};
static const ::String _hx_array_data_7786dec8_9[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_7786dec8_10[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_7786dec8_11[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_7786dec8_12[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_7786dec8_13[] = {
	HX_("--------------------",c0,41,cc,4b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1c18862d958bb657_16_capture,"hx.strings.internal.Exception","capture",0x819138e0,"hx.strings.internal.Exception.capture","hx/strings/internal/Exception.hx",16,0x9e3ada35)
HX_LOCAL_STACK_FRAME(_hx_pos_1c18862d958bb657_12_boot,"hx.strings.internal.Exception","boot",0x71bebf98,"hx.strings.internal.Exception.boot","hx/strings/internal/Exception.hx",12,0x9e3ada35)
namespace hx{
namespace strings{
namespace internal{

void Exception_obj::__construct( ::Dynamic cause){
            	HX_STACKFRAME(&_hx_pos_1c18862d958bb657_24_new)
HXLINE(  25)		this->cause = cause;
HXLINE(  26)		this->causeStackTrace = ::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(null());
            	}

Dynamic Exception_obj::__CreateEmpty() { return new Exception_obj; }

void *Exception_obj::_hx_vtable = 0;

Dynamic Exception_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Exception_obj > _hx_result = new Exception_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Exception_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17e93560;
}

void Exception_obj::rethrow(){
            	HX_STACKFRAME(&_hx_pos_1c18862d958bb657_42_rethrow)
HXDLIN(  42)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->toString()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,rethrow,(void))

::String Exception_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_1c18862d958bb657_48_toString)
HXLINE(  49)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  50)		{
HXLINE(  50)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  50)				sb->flush();
            			}
HXDLIN(  50)			if (::hx::IsNull( sb->b )) {
HXLINE(  50)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_4,1);
            			}
            			else {
HXLINE(  50)				sb->b->push(HX_("rethrown exception:\n",7a,05,8c,8b));
            			}
            		}
HXLINE(  51)		{
HXLINE(  51)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  51)				sb->flush();
            			}
HXDLIN(  51)			if (::hx::IsNull( sb->b )) {
HXLINE(  51)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_5,1);
            			}
            			else {
HXLINE(  51)				sb->b->push(HX_("  ",00,1c,00,00));
            			}
            		}
HXDLIN(  51)		{
HXLINE(  51)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  51)				sb->flush();
            			}
HXDLIN(  51)			if (::hx::IsNull( sb->b )) {
HXLINE(  51)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_6,1);
            			}
            			else {
HXLINE(  51)				sb->b->push(HX_("--------------------\n",4a,46,ed,06));
            			}
            		}
HXLINE(  52)		{
HXLINE(  52)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  52)				sb->flush();
            			}
HXDLIN(  52)			if (::hx::IsNull( sb->b )) {
HXLINE(  52)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_7,1);
            			}
            			else {
HXLINE(  52)				sb->b->push(HX_("  ",00,1c,00,00));
            			}
            		}
HXDLIN(  52)		{
HXLINE(  52)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  52)				sb->flush();
            			}
HXDLIN(  52)			if (::hx::IsNull( sb->b )) {
HXLINE(  52)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_8,1);
            			}
            			else {
HXLINE(  52)				sb->b->push(HX_("| Exception : ",1b,a4,76,c6));
            			}
            		}
HXDLIN(  52)		{
HXLINE(  52)			 ::Dynamic x = this->cause;
HXDLIN(  52)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  52)				sb->flush();
            			}
HXDLIN(  52)			if (::hx::IsNull( sb->b )) {
HXLINE(  52)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  52)				::Array< ::String > sb1 = sb->b;
HXDLIN(  52)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXDLIN(  52)		{
HXLINE(  52)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  52)				sb->flush();
            			}
HXDLIN(  52)			if (::hx::IsNull( sb->b )) {
HXLINE(  52)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_9,1);
            			}
            			else {
HXLINE(  52)				sb->b->push(HX_("\n",0a,00,00,00));
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			::Array< ::String > _g1 = ::haxe::_CallStack::CallStack_Impl__obj::toString(this->causeStackTrace).split(HX_("\n",0a,00,00,00));
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				::String item = _g1->__get(_g);
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  55)				if ((item == HX_("",00,00,00,00))) {
HXLINE(  55)					continue;
            				}
HXLINE(  56)				{
HXLINE(  56)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  56)						sb->flush();
            					}
HXDLIN(  56)					if (::hx::IsNull( sb->b )) {
HXLINE(  56)						sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_10,1);
            					}
            					else {
HXLINE(  56)						sb->b->push(HX_("  ",00,1c,00,00));
            					}
            				}
HXLINE(  57)				{
HXLINE(  57)					::String x = ::StringTools_obj::replace(item,HX_("Called from",cd,13,cb,c9),HX_("| at",17,12,0f,52));
HXDLIN(  57)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  57)						sb->flush();
            					}
HXDLIN(  57)					if (::hx::IsNull( sb->b )) {
HXLINE(  57)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  57)						::Array< ::String > sb1 = sb->b;
HXDLIN(  57)						sb1->push(::Std_obj::string(x));
            					}
            				}
HXLINE(  58)				{
HXLINE(  58)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  58)						sb->flush();
            					}
HXDLIN(  58)					if (::hx::IsNull( sb->b )) {
HXLINE(  58)						sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_11,1);
            					}
            					else {
HXLINE(  58)						sb->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            		}
HXLINE(  60)		{
HXLINE(  60)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  60)				sb->flush();
            			}
HXDLIN(  60)			if (::hx::IsNull( sb->b )) {
HXLINE(  60)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_12,1);
            			}
            			else {
HXLINE(  60)				sb->b->push(HX_("  ",00,1c,00,00));
            			}
            		}
HXDLIN(  60)		{
HXLINE(  60)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  60)				sb->flush();
            			}
HXDLIN(  60)			if (::hx::IsNull( sb->b )) {
HXLINE(  60)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_7786dec8_13,1);
            			}
            			else {
HXLINE(  60)				sb->b->push(HX_("--------------------",c0,41,cc,4b));
            			}
            		}
HXLINE(  61)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )

::String Exception_obj::INDENT;

 ::hx::strings::internal::Exception Exception_obj::capture( ::Dynamic ex){
            	HX_GC_STACKFRAME(&_hx_pos_1c18862d958bb657_16_capture)
HXDLIN(  16)		return  ::hx::strings::internal::Exception_obj::__alloc( HX_CTX ,ex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,capture,return )


::hx::ObjectPtr< Exception_obj > Exception_obj::__new( ::Dynamic cause) {
	::hx::ObjectPtr< Exception_obj > __this = new Exception_obj();
	__this->__construct(cause);
	return __this;
}

::hx::ObjectPtr< Exception_obj > Exception_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic cause) {
	Exception_obj *__this = (Exception_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Exception_obj), true, "hx.strings.internal.Exception"));
	*(void **)__this = Exception_obj::_hx_vtable;
	__this->__construct(cause);
	return __this;
}

Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(cause,"cause");
	HX_MARK_MEMBER_NAME(causeStackTrace,"causeStackTrace");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cause,"cause");
	HX_VISIT_MEMBER_NAME(causeStackTrace,"causeStackTrace");
}

::hx::Val Exception_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool Exception_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"capture") ) { outValue = capture_dyn(); return true; }
	}
	return false;
}

::hx::Val Exception_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cause",69,4c,22,41));
	outFields->push(HX_("causeStackTrace",e6,7f,a2,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Exception_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Exception_obj,cause),HX_("cause",69,4c,22,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Exception_obj,causeStackTrace),HX_("causeStackTrace",e6,7f,a2,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Exception_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Exception_obj::INDENT,HX_("INDENT",6c,b8,75,46)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Exception_obj_sMemberFields[] = {
	HX_("cause",69,4c,22,41),
	HX_("causeStackTrace",e6,7f,a2,c2),
	HX_("rethrow",93,b0,2a,f6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void Exception_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::INDENT,"INDENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Exception_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::INDENT,"INDENT");
};

#endif

::hx::Class Exception_obj::__mClass;

static ::String Exception_obj_sStaticFields[] = {
	HX_("INDENT",6c,b8,75,46),
	HX_("capture",86,d0,51,a7),
	::String(null())
};

void Exception_obj::__register()
{
	Exception_obj _hx_dummy;
	Exception_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal.Exception",c8,de,86,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Exception_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Exception_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Exception_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Exception_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Exception_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Exception_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Exception_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Exception_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Exception_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1c18862d958bb657_12_boot)
HXDLIN(  12)		INDENT = HX_("  ",00,1c,00,00);
            	}
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
