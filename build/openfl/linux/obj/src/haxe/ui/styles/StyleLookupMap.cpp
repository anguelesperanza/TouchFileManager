#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleLookupMap
#include <haxe/ui/styles/StyleLookupMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6dddcb6c9de66e97_17_new,"haxe.ui.styles.StyleLookupMap","new",0x7a64e7dd,"haxe.ui.styles.StyleLookupMap.new","haxe/ui/styles/StyleLookupMap.hx",17,0x89f587b2)
HX_LOCAL_STACK_FRAME(_hx_pos_6dddcb6c9de66e97_23_set,"haxe.ui.styles.StyleLookupMap","set",0x7a68b31f,"haxe.ui.styles.StyleLookupMap.set","haxe/ui/styles/StyleLookupMap.hx",23,0x89f587b2)
HX_LOCAL_STACK_FRAME(_hx_pos_6dddcb6c9de66e97_27_get,"haxe.ui.styles.StyleLookupMap","get",0x7a5f9813,"haxe.ui.styles.StyleLookupMap.get","haxe/ui/styles/StyleLookupMap.hx",27,0x89f587b2)
HX_LOCAL_STACK_FRAME(_hx_pos_6dddcb6c9de66e97_31_remove,"haxe.ui.styles.StyleLookupMap","remove",0xf19f90e7,"haxe.ui.styles.StyleLookupMap.remove","haxe/ui/styles/StyleLookupMap.hx",31,0x89f587b2)
HX_LOCAL_STACK_FRAME(_hx_pos_6dddcb6c9de66e97_7_get_instance,"haxe.ui.styles.StyleLookupMap","get_instance",0xdfeb6481,"haxe.ui.styles.StyleLookupMap.get_instance","haxe/ui/styles/StyleLookupMap.hx",7,0x89f587b2)
namespace haxe{
namespace ui{
namespace styles{

void StyleLookupMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6dddcb6c9de66e97_17_new)
HXDLIN(  17)		this->_valueMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic StyleLookupMap_obj::__CreateEmpty() { return new StyleLookupMap_obj; }

void *StyleLookupMap_obj::_hx_vtable = 0;

Dynamic StyleLookupMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleLookupMap_obj > _hx_result = new StyleLookupMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleLookupMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x750fb18d;
}

void StyleLookupMap_obj::set(::String name, ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_6dddcb6c9de66e97_23_set)
HXDLIN(  23)		this->_valueMap->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleLookupMap_obj,set,(void))

 ::haxe::ui::util::VariantType StyleLookupMap_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_6dddcb6c9de66e97_27_get)
HXDLIN(  27)		return this->_valueMap->get(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleLookupMap_obj,get,return )

void StyleLookupMap_obj::remove(::String name){
            	HX_STACKFRAME(&_hx_pos_6dddcb6c9de66e97_31_remove)
HXDLIN(  31)		this->_valueMap->remove(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleLookupMap_obj,remove,(void))

 ::haxe::ui::styles::StyleLookupMap StyleLookupMap_obj::_instance;

 ::haxe::ui::styles::StyleLookupMap StyleLookupMap_obj::instance;

 ::haxe::ui::styles::StyleLookupMap StyleLookupMap_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_6dddcb6c9de66e97_7_get_instance)
HXLINE(   8)		if (::hx::IsNull( ::haxe::ui::styles::StyleLookupMap_obj::_instance )) {
HXLINE(   9)			::haxe::ui::styles::StyleLookupMap_obj::_instance =  ::haxe::ui::styles::StyleLookupMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  11)		return ::haxe::ui::styles::StyleLookupMap_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleLookupMap_obj,get_instance,return )


::hx::ObjectPtr< StyleLookupMap_obj > StyleLookupMap_obj::__new() {
	::hx::ObjectPtr< StyleLookupMap_obj > __this = new StyleLookupMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StyleLookupMap_obj > StyleLookupMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StyleLookupMap_obj *__this = (StyleLookupMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleLookupMap_obj), true, "haxe.ui.styles.StyleLookupMap"));
	*(void **)__this = StyleLookupMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StyleLookupMap_obj::StyleLookupMap_obj()
{
}

void StyleLookupMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleLookupMap);
	HX_MARK_MEMBER_NAME(_valueMap,"_valueMap");
	HX_MARK_END_CLASS();
}

void StyleLookupMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_valueMap,"_valueMap");
}

::hx::Val StyleLookupMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_valueMap") ) { return ::hx::Val( _valueMap ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StyleLookupMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val StyleLookupMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_valueMap") ) { _valueMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleLookupMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::styles::StyleLookupMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::styles::StyleLookupMap >(); return true; }
	}
	return false;
}

void StyleLookupMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_valueMap",0a,b7,e2,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StyleLookupMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(StyleLookupMap_obj,_valueMap),HX_("_valueMap",0a,b7,e2,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StyleLookupMap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::styles::StyleLookupMap */ ,(void *) &StyleLookupMap_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleLookupMap */ ,(void *) &StyleLookupMap_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StyleLookupMap_obj_sMemberFields[] = {
	HX_("_valueMap",0a,b7,e2,35),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("remove",44,9c,88,04),
	::String(null()) };

static void StyleLookupMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleLookupMap_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(StyleLookupMap_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StyleLookupMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleLookupMap_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(StyleLookupMap_obj::instance,"instance");
};

#endif

::hx::Class StyleLookupMap_obj::__mClass;

static ::String StyleLookupMap_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void StyleLookupMap_obj::__register()
{
	StyleLookupMap_obj _hx_dummy;
	StyleLookupMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.StyleLookupMap",6b,b5,ca,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleLookupMap_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleLookupMap_obj::__SetStatic;
	__mClass->mMarkFunc = StyleLookupMap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyleLookupMap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StyleLookupMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StyleLookupMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StyleLookupMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleLookupMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleLookupMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
