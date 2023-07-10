#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_StringDiff
#include <hx/strings/StringDiff.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5f1d75d03ddc847_4316_new,"hx.strings.StringDiff","new",0x603af792,"hx.strings.StringDiff.new","hx/strings/Strings.hx",4316,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_a5f1d75d03ddc847_4329_toString,"hx.strings.StringDiff","toString",0xbc12543a,"hx.strings.StringDiff.toString","hx/strings/Strings.hx",4329,0x74f74a28)
namespace hx{
namespace strings{

void StringDiff_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a5f1d75d03ddc847_4316_new)
HXDLIN(4316)		this->at = -1;
            	}

Dynamic StringDiff_obj::__CreateEmpty() { return new StringDiff_obj; }

void *StringDiff_obj::_hx_vtable = 0;

Dynamic StringDiff_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringDiff_obj > _hx_result = new StringDiff_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringDiff_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5de73e64;
}

::String StringDiff_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a5f1d75d03ddc847_4329_toString)
HXDLIN(4329)		return ((((((HX_("StringDiff[at=",05,df,6e,5a) + this->at) + HX_(", left=",62,f3,72,63)) + this->left) + HX_(", right=",55,ca,80,55)) + this->right) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringDiff_obj,toString,return )


StringDiff_obj::StringDiff_obj()
{
}

void StringDiff_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringDiff);
	HX_MARK_MEMBER_NAME(at,"at");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_END_CLASS();
}

void StringDiff_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(at,"at");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
}

::hx::Val StringDiff_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return ::hx::Val( at ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringDiff_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { at=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringDiff_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("at",f3,54,00,00));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringDiff_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(StringDiff_obj,at),HX_("at",f3,54,00,00)},
	{::hx::fsString,(int)offsetof(StringDiff_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsString,(int)offsetof(StringDiff_obj,right),HX_("right",dc,0b,64,e9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringDiff_obj_sStaticStorageInfo = 0;
#endif

static ::String StringDiff_obj_sMemberFields[] = {
	HX_("at",f3,54,00,00),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class StringDiff_obj::__mClass;

void StringDiff_obj::__register()
{
	StringDiff_obj _hx_dummy;
	StringDiff_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.StringDiff",a0,86,27,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringDiff_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringDiff_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringDiff_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringDiff_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
