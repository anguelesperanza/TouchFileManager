#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentClassMap
#include <haxe/ui/core/ComponentClassMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b11db090752fc413_39_new,"haxe.ui.core.ComponentClassMap","new",0x05877fb6,"haxe.ui.core.ComponentClassMap.new","haxe/ui/core/ComponentClassMap.hx",39,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_46_getClassName,"haxe.ui.core.ComponentClassMap","getClassName",0xa8f6e517,"haxe.ui.core.ComponentClassMap.getClassName","haxe/ui/core/ComponentClassMap.hx",46,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_52_registerClassName,"haxe.ui.core.ComponentClassMap","registerClassName",0x6f480196,"haxe.ui.core.ComponentClassMap.registerClassName","haxe/ui/core/ComponentClassMap.hx",52,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_61_hasClassName,"haxe.ui.core.ComponentClassMap","hasClassName",0x26f22dd3,"haxe.ui.core.ComponentClassMap.hasClassName","haxe/ui/core/ComponentClassMap.hx",61,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_71_load,"haxe.ui.core.ComponentClassMap","load",0xcfbd5610,"haxe.ui.core.ComponentClassMap.load","haxe/ui/core/ComponentClassMap.hx",71,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_87_save,"haxe.ui.core.ComponentClassMap","save",0xd4534727,"haxe.ui.core.ComponentClassMap.save","haxe/ui/core/ComponentClassMap.hx",87,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_6_get_instance,"haxe.ui.core.ComponentClassMap","get_instance",0xcc5d8988,"haxe.ui.core.ComponentClassMap.get_instance","haxe/ui/core/ComponentClassMap.hx",6,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_13_get,"haxe.ui.core.ComponentClassMap","get",0x05822fec,"haxe.ui.core.ComponentClassMap.get","haxe/ui/core/ComponentClassMap.hx",13,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_19_register,"haxe.ui.core.ComponentClassMap","register",0xe9629f4d,"haxe.ui.core.ComponentClassMap.register","haxe/ui/core/ComponentClassMap.hx",19,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_22_list,"haxe.ui.core.ComponentClassMap","list",0xcfb8d848,"haxe.ui.core.ComponentClassMap.list","haxe/ui/core/ComponentClassMap.hx",22,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_28_clear,"haxe.ui.core.ComponentClassMap","clear",0xc55a2263,"haxe.ui.core.ComponentClassMap.clear","haxe/ui/core/ComponentClassMap.hx",28,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_32_hasClass,"haxe.ui.core.ComponentClassMap","hasClass",0xed73bb68,"haxe.ui.core.ComponentClassMap.hasClass","haxe/ui/core/ComponentClassMap.hx",32,0xb6f7845b)
namespace haxe{
namespace ui{
namespace core{

void ComponentClassMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_39_new)
HXDLIN(  39)		this->_map = null();
            	}

Dynamic ComponentClassMap_obj::__CreateEmpty() { return new ComponentClassMap_obj; }

void *ComponentClassMap_obj::_hx_vtable = 0;

Dynamic ComponentClassMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentClassMap_obj > _hx_result = new ComponentClassMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentClassMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1016c548;
}

::String ComponentClassMap_obj::getClassName(::String alias){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_46_getClassName)
HXLINE(  47)		this->load();
HXLINE(  48)		alias = alias.toLowerCase();
HXLINE(  49)		return this->_map->get_string(alias);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentClassMap_obj,getClassName,return )

void ComponentClassMap_obj::registerClassName(::String alias,::String className){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_52_registerClassName)
HXLINE(  53)		this->load();
HXLINE(  54)		alias = alias.toLowerCase();
HXLINE(  55)		if ((this->_map->exists(alias) == false)) {
HXLINE(  56)			this->_map->set(alias,className);
            		}
HXLINE(  58)		this->save();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentClassMap_obj,registerClassName,(void))

bool ComponentClassMap_obj::hasClassName(::String className){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_61_hasClassName)
HXLINE(  62)		this->load();
HXLINE(  63)		{
HXLINE(  63)			 ::Dynamic k = this->_map->keys();
HXDLIN(  63)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  63)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  64)				if (::hx::IsEq( this->_map->get(k1),className )) {
HXLINE(  65)					return true;
            				}
            			}
            		}
HXLINE(  68)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentClassMap_obj,hasClassName,return )

void ComponentClassMap_obj::load(){
            	HX_GC_STACKFRAME(&_hx_pos_b11db090752fc413_71_load)
HXLINE(  73)		if (::hx::IsNotNull( this->_map )) {
HXLINE(  74)			return;
            		}
HXLINE(  77)		::String s = ::haxe::Resource_obj::getString(HX_("haxeui_classmap",89,3d,08,ee));
HXLINE(  78)		if (::hx::IsNull( s )) {
HXLINE(  79)			return;
            		}
HXLINE(  82)		 ::haxe::Unserializer unserializer =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,s);
HXLINE(  83)		this->_map = ( ( ::haxe::ds::StringMap)(unserializer->unserialize()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,load,(void))

void ComponentClassMap_obj::save(){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_87_save)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,save,(void))

 ::haxe::ui::core::ComponentClassMap ComponentClassMap_obj::_instance;

 ::haxe::ui::core::ComponentClassMap ComponentClassMap_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_b11db090752fc413_6_get_instance)
HXLINE(   7)		if (::hx::IsNull( ::haxe::ui::core::ComponentClassMap_obj::_instance )) {
HXLINE(   8)			::haxe::ui::core::ComponentClassMap_obj::_instance =  ::haxe::ui::core::ComponentClassMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  10)		return ::haxe::ui::core::ComponentClassMap_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,get_instance,return )

::String ComponentClassMap_obj::get(::String alias){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_13_get)
HXLINE(  14)		alias = ::StringTools_obj::replace(alias,HX_("-",2d,00,00,00),HX_("",00,00,00,00)).toLowerCase();
HXLINE(  15)		return ::haxe::ui::core::ComponentClassMap_obj::get_instance()->getClassName(alias);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentClassMap_obj,get,return )

void ComponentClassMap_obj::_hx_register(::String alias,::String className){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_19_register)
HXDLIN(  19)		 ::haxe::ui::core::ComponentClassMap _hx_tmp = ::haxe::ui::core::ComponentClassMap_obj::get_instance();
HXDLIN(  19)		_hx_tmp->registerClassName(alias.toLowerCase(),className);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentClassMap_obj,_hx_register,(void))

 ::Dynamic ComponentClassMap_obj::list(){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_22_list)
HXLINE(  23)		::haxe::ui::core::ComponentClassMap_obj::get_instance()->load();
HXLINE(  24)		return ::haxe::ui::core::ComponentClassMap_obj::get_instance()->_map->keys();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,list,return )

void ComponentClassMap_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_b11db090752fc413_28_clear)
HXDLIN(  28)		::haxe::ui::core::ComponentClassMap_obj::get_instance()->_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,clear,(void))

bool ComponentClassMap_obj::hasClass(::String className){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_32_hasClass)
HXDLIN(  32)		return ::haxe::ui::core::ComponentClassMap_obj::get_instance()->hasClassName(className);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentClassMap_obj,hasClass,return )


::hx::ObjectPtr< ComponentClassMap_obj > ComponentClassMap_obj::__new() {
	::hx::ObjectPtr< ComponentClassMap_obj > __this = new ComponentClassMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentClassMap_obj > ComponentClassMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentClassMap_obj *__this = (ComponentClassMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentClassMap_obj), true, "haxe.ui.core.ComponentClassMap"));
	*(void **)__this = ComponentClassMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentClassMap_obj::ComponentClassMap_obj()
{
}

void ComponentClassMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentClassMap);
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void ComponentClassMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

::hx::Val ComponentClassMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return ::hx::Val( _map ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return ::hx::Val( getClassName_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasClassName") ) { return ::hx::Val( hasClassName_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerClassName") ) { return ::hx::Val( registerClassName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ComponentClassMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasClass") ) { outValue = hasClass_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ComponentClassMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComponentClassMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::core::ComponentClassMap >(); return true; }
	}
	return false;
}

void ComponentClassMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_map",9d,4f,1e,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentClassMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentClassMap_obj,_map),HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ComponentClassMap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::ComponentClassMap */ ,(void *) &ComponentClassMap_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ComponentClassMap_obj_sMemberFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("getClassName",2d,2f,94,eb),
	HX_("registerClassName",c0,67,18,c8),
	HX_("hasClassName",e9,77,8f,69),
	HX_("load",26,9a,b7,47),
	HX_("save",3d,8b,4d,4c),
	::String(null()) };

static void ComponentClassMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentClassMap_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentClassMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentClassMap_obj::_instance,"_instance");
};

#endif

::hx::Class ComponentClassMap_obj::__mClass;

static ::String ComponentClassMap_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("get_instance",9e,d3,fa,0e),
	HX_("get",96,80,4e,00),
	HX_("register",63,a6,9f,d0),
	HX_("list",5e,1c,b3,47),
	HX_("clear",8d,71,5b,48),
	HX_("hasClass",7e,c2,b0,d4),
	::String(null())
};

void ComponentClassMap_obj::__register()
{
	ComponentClassMap_obj _hx_dummy;
	ComponentClassMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentClassMap",c4,2c,bc,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentClassMap_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentClassMap_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentClassMap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ComponentClassMap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentClassMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentClassMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentClassMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentClassMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentClassMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
