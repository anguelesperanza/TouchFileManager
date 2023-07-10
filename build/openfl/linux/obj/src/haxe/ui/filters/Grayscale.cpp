#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Grayscale
#include <haxe/ui/filters/Grayscale.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad0ee81a21535fff_3_new,"haxe.ui.filters.Grayscale","new",0xcea69dd4,"haxe.ui.filters.Grayscale.new","haxe/ui/filters/Grayscale.hx",3,0x9d1fbc3d)
namespace haxe{
namespace ui{
namespace filters{

void Grayscale_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad0ee81a21535fff_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Grayscale_obj::__CreateEmpty() { return new Grayscale_obj; }

void *Grayscale_obj::_hx_vtable = 0;

Dynamic Grayscale_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grayscale_obj > _hx_result = new Grayscale_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grayscale_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0acce5c6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0acce5c6;
	} else {
		return inClassId==(int)0x2b166675;
	}
}


Grayscale_obj::Grayscale_obj()
{
}

::hx::Val Grayscale_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( amount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grayscale_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { amount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grayscale_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("amount",d8,11,03,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grayscale_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Grayscale_obj,amount),HX_("amount",d8,11,03,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grayscale_obj_sStaticStorageInfo = 0;
#endif

static ::String Grayscale_obj_sMemberFields[] = {
	HX_("amount",d8,11,03,d5),
	::String(null()) };

::hx::Class Grayscale_obj::__mClass;

void Grayscale_obj::__register()
{
	Grayscale_obj _hx_dummy;
	Grayscale_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Grayscale",e2,63,ee,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grayscale_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grayscale_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grayscale_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grayscale_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
