#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_DropShadow
#include <haxe/ui/filters/DropShadow.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_65985b75449d76b8_3_new,"haxe.ui.filters.DropShadow","new",0x720927e6,"haxe.ui.filters.DropShadow.new","haxe/ui/filters/DropShadow.hx",3,0xd5f9af09)
namespace haxe{
namespace ui{
namespace filters{

void DropShadow_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_65985b75449d76b8_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic DropShadow_obj::__CreateEmpty() { return new DropShadow_obj; }

void *DropShadow_obj::_hx_vtable = 0;

Dynamic DropShadow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropShadow_obj > _hx_result = new DropShadow_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DropShadow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b166675) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
	} else {
		return inClassId==(int)0x7f1882c4;
	}
}


DropShadow_obj::DropShadow_obj()
{
}

::hx::Val DropShadow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { return ::hx::Val( blurX ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { return ::hx::Val( blurY ); }
		if (HX_FIELD_EQ(inName,"inner") ) { return ::hx::Val( inner ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return ::hx::Val( quality ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance ); }
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropShadow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropShadow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("blurX",d1,0f,01,b5));
	outFields->push(HX_("blurY",d2,0f,01,b5));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("inner",96,31,1c,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropShadow_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DropShadow_obj,distance),HX_("distance",35,93,f9,6b)},
	{::hx::fsFloat,(int)offsetof(DropShadow_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsInt,(int)offsetof(DropShadow_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(DropShadow_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(DropShadow_obj,blurX),HX_("blurX",d1,0f,01,b5)},
	{::hx::fsFloat,(int)offsetof(DropShadow_obj,blurY),HX_("blurY",d2,0f,01,b5)},
	{::hx::fsFloat,(int)offsetof(DropShadow_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsInt,(int)offsetof(DropShadow_obj,quality),HX_("quality",bf,04,4c,44)},
	{::hx::fsBool,(int)offsetof(DropShadow_obj,inner),HX_("inner",96,31,1c,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropShadow_obj_sStaticStorageInfo = 0;
#endif

static ::String DropShadow_obj_sMemberFields[] = {
	HX_("distance",35,93,f9,6b),
	HX_("angle",d3,43,e2,22),
	HX_("color",63,71,5c,4a),
	HX_("alpha",5e,a7,96,21),
	HX_("blurX",d1,0f,01,b5),
	HX_("blurY",d2,0f,01,b5),
	HX_("strength",81,d2,8e,8e),
	HX_("quality",bf,04,4c,44),
	HX_("inner",96,31,1c,be),
	::String(null()) };

::hx::Class DropShadow_obj::__mClass;

void DropShadow_obj::__register()
{
	DropShadow_obj _hx_dummy;
	DropShadow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.DropShadow",f4,fc,d9,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropShadow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropShadow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropShadow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropShadow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
