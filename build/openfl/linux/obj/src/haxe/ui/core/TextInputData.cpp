#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_TextInputData
#include <haxe/ui/core/TextInputData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c2179f2e0a918c8b_8_new,"haxe.ui.core.TextInputData","new",0xa76b06fc,"haxe.ui.core.TextInputData.new","haxe/ui/core/TextInput.hx",8,0x0ff396df)
namespace haxe{
namespace ui{
namespace core{

void TextInputData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c2179f2e0a918c8b_8_new)
HXLINE(  22)		this->onChangedCallback = null();
HXLINE(  21)		this->onScrollCallback = null();
HXLINE(  19)		this->vscrollNativeWheel = false;
HXLINE(  18)		this->vscrollPageStep = null();
HXLINE(  17)		this->vscrollPageSize = ((Float)0);
HXLINE(  16)		this->vscrollMax = ((Float)0);
HXLINE(  15)		this->vscrollPos = ((Float)0);
HXLINE(  13)		this->hscrollPageSize = ((Float)0);
HXLINE(  12)		this->hscrollMax = ((Float)0);
HXLINE(  11)		this->hscrollPos = ((Float)0);
HXLINE(   9)		this->password = false;
            	}

Dynamic TextInputData_obj::__CreateEmpty() { return new TextInputData_obj; }

void *TextInputData_obj::_hx_vtable = 0;

Dynamic TextInputData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextInputData_obj > _hx_result = new TextInputData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInputData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59281f8e;
}


TextInputData_obj::TextInputData_obj()
{
}

void TextInputData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInputData);
	HX_MARK_MEMBER_NAME(password,"password");
	HX_MARK_MEMBER_NAME(hscrollPos,"hscrollPos");
	HX_MARK_MEMBER_NAME(hscrollMax,"hscrollMax");
	HX_MARK_MEMBER_NAME(hscrollPageSize,"hscrollPageSize");
	HX_MARK_MEMBER_NAME(vscrollPos,"vscrollPos");
	HX_MARK_MEMBER_NAME(vscrollMax,"vscrollMax");
	HX_MARK_MEMBER_NAME(vscrollPageSize,"vscrollPageSize");
	HX_MARK_MEMBER_NAME(vscrollPageStep,"vscrollPageStep");
	HX_MARK_MEMBER_NAME(vscrollNativeWheel,"vscrollNativeWheel");
	HX_MARK_MEMBER_NAME(onScrollCallback,"onScrollCallback");
	HX_MARK_MEMBER_NAME(onChangedCallback,"onChangedCallback");
	HX_MARK_END_CLASS();
}

void TextInputData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(password,"password");
	HX_VISIT_MEMBER_NAME(hscrollPos,"hscrollPos");
	HX_VISIT_MEMBER_NAME(hscrollMax,"hscrollMax");
	HX_VISIT_MEMBER_NAME(hscrollPageSize,"hscrollPageSize");
	HX_VISIT_MEMBER_NAME(vscrollPos,"vscrollPos");
	HX_VISIT_MEMBER_NAME(vscrollMax,"vscrollMax");
	HX_VISIT_MEMBER_NAME(vscrollPageSize,"vscrollPageSize");
	HX_VISIT_MEMBER_NAME(vscrollPageStep,"vscrollPageStep");
	HX_VISIT_MEMBER_NAME(vscrollNativeWheel,"vscrollNativeWheel");
	HX_VISIT_MEMBER_NAME(onScrollCallback,"onScrollCallback");
	HX_VISIT_MEMBER_NAME(onChangedCallback,"onChangedCallback");
}

::hx::Val TextInputData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { return ::hx::Val( password ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { return ::hx::Val( hscrollPos ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { return ::hx::Val( hscrollMax ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { return ::hx::Val( vscrollPos ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return ::hx::Val( vscrollMax ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { return ::hx::Val( hscrollPageSize ); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { return ::hx::Val( vscrollPageSize ); }
		if (HX_FIELD_EQ(inName,"vscrollPageStep") ) { return ::hx::Val( vscrollPageStep ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onScrollCallback") ) { return ::hx::Val( onScrollCallback ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onChangedCallback") ) { return ::hx::Val( onChangedCallback ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vscrollNativeWheel") ) { return ::hx::Val( vscrollNativeWheel ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextInputData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { password=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { hscrollPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { hscrollMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { vscrollPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { vscrollMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { hscrollPageSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { vscrollPageSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollPageStep") ) { vscrollPageStep=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onScrollCallback") ) { onScrollCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onChangedCallback") ) { onChangedCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vscrollNativeWheel") ) { vscrollNativeWheel=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInputData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("password",1b,23,d0,48));
	outFields->push(HX_("hscrollPos",1f,b6,47,5c));
	outFields->push(HX_("hscrollMax",2f,63,45,5c));
	outFields->push(HX_("hscrollPageSize",45,4a,45,67));
	outFields->push(HX_("vscrollPos",51,44,5a,e0));
	outFields->push(HX_("vscrollMax",61,f1,57,e0));
	outFields->push(HX_("vscrollPageSize",d3,06,08,8d));
	outFields->push(HX_("vscrollPageStep",5e,4d,10,8d));
	outFields->push(HX_("vscrollNativeWheel",41,23,4b,55));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextInputData_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TextInputData_obj,password),HX_("password",1b,23,d0,48)},
	{::hx::fsFloat,(int)offsetof(TextInputData_obj,hscrollPos),HX_("hscrollPos",1f,b6,47,5c)},
	{::hx::fsFloat,(int)offsetof(TextInputData_obj,hscrollMax),HX_("hscrollMax",2f,63,45,5c)},
	{::hx::fsFloat,(int)offsetof(TextInputData_obj,hscrollPageSize),HX_("hscrollPageSize",45,4a,45,67)},
	{::hx::fsFloat,(int)offsetof(TextInputData_obj,vscrollPos),HX_("vscrollPos",51,44,5a,e0)},
	{::hx::fsFloat,(int)offsetof(TextInputData_obj,vscrollMax),HX_("vscrollMax",61,f1,57,e0)},
	{::hx::fsFloat,(int)offsetof(TextInputData_obj,vscrollPageSize),HX_("vscrollPageSize",d3,06,08,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextInputData_obj,vscrollPageStep),HX_("vscrollPageStep",5e,4d,10,8d)},
	{::hx::fsBool,(int)offsetof(TextInputData_obj,vscrollNativeWheel),HX_("vscrollNativeWheel",41,23,4b,55)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextInputData_obj,onScrollCallback),HX_("onScrollCallback",71,90,4d,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextInputData_obj,onChangedCallback),HX_("onChangedCallback",7a,dc,c2,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextInputData_obj_sStaticStorageInfo = 0;
#endif

static ::String TextInputData_obj_sMemberFields[] = {
	HX_("password",1b,23,d0,48),
	HX_("hscrollPos",1f,b6,47,5c),
	HX_("hscrollMax",2f,63,45,5c),
	HX_("hscrollPageSize",45,4a,45,67),
	HX_("vscrollPos",51,44,5a,e0),
	HX_("vscrollMax",61,f1,57,e0),
	HX_("vscrollPageSize",d3,06,08,8d),
	HX_("vscrollPageStep",5e,4d,10,8d),
	HX_("vscrollNativeWheel",41,23,4b,55),
	HX_("onScrollCallback",71,90,4d,17),
	HX_("onChangedCallback",7a,dc,c2,96),
	::String(null()) };

::hx::Class TextInputData_obj::__mClass;

void TextInputData_obj::__register()
{
	TextInputData_obj _hx_dummy;
	TextInputData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.TextInputData",0a,19,ad,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextInputData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextInputData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInputData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInputData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
