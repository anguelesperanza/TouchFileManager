#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Defines
#include <haxe/ui/util/Defines.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_09f6276ed7b601ca_7_getAll,"haxe.ui.util.Defines","getAll",0x67f4ff3b,"haxe.ui.util.Defines.getAll","haxe/ui/util/Defines.hx",7,0x24a808c1)
HX_LOCAL_STACK_FRAME(_hx_pos_09f6276ed7b601ca_12_set,"haxe.ui.util.Defines","set",0xc3500492,"haxe.ui.util.Defines.set","haxe/ui/util/Defines.hx",12,0x24a808c1)
HX_LOCAL_STACK_FRAME(_hx_pos_09f6276ed7b601ca_22_popuplate,"haxe.ui.util.Defines","popuplate",0xd5865842,"haxe.ui.util.Defines.popuplate","haxe/ui/util/Defines.hx",22,0x24a808c1)
HX_LOCAL_STACK_FRAME(_hx_pos_09f6276ed7b601ca_63_toObject,"haxe.ui.util.Defines","toObject",0xc9b357aa,"haxe.ui.util.Defines.toObject","haxe/ui/util/Defines.hx",63,0x24a808c1)
HX_LOCAL_STACK_FRAME(_hx_pos_09f6276ed7b601ca_6_boot,"haxe.ui.util.Defines","boot",0x177eed42,"haxe.ui.util.Defines.boot","haxe/ui/util/Defines.hx",6,0x24a808c1)
namespace haxe{
namespace ui{
namespace util{

void Defines_obj::__construct() { }

Dynamic Defines_obj::__CreateEmpty() { return new Defines_obj; }

void *Defines_obj::_hx_vtable = 0;

Dynamic Defines_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Defines_obj > _hx_result = new Defines_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Defines_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42ad203c;
}

 ::haxe::ds::StringMap Defines_obj::_map;

 ::haxe::ds::StringMap Defines_obj::getAll(){
            	HX_STACKFRAME(&_hx_pos_09f6276ed7b601ca_7_getAll)
HXLINE(   8)		::haxe::ui::util::Defines_obj::popuplate();
HXLINE(   9)		return ::haxe::ui::util::Defines_obj::_map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Defines_obj,getAll,return )

void Defines_obj::set(::String name,::String value,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(false);
            	HX_STACKFRAME(&_hx_pos_09f6276ed7b601ca_12_set)
HXLINE(  13)		::haxe::ui::util::Defines_obj::popuplate();
HXLINE(  15)		bool _hx_tmp;
HXDLIN(  15)		if ((overwrite == false)) {
HXLINE(  15)			_hx_tmp = ::haxe::ui::util::Defines_obj::_map->exists(name);
            		}
            		else {
HXLINE(  15)			_hx_tmp = false;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		::haxe::ui::util::Defines_obj::_map->set(name,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Defines_obj,set,(void))

void Defines_obj::popuplate(){
            	HX_GC_STACKFRAME(&_hx_pos_09f6276ed7b601ca_22_popuplate)
HXLINE(  23)		if (::hx::IsNotNull( ::haxe::ui::util::Defines_obj::_map )) {
HXLINE(  24)			return;
            		}
HXLINE(  51)		::haxe::ui::util::Defines_obj::_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  52)		if (::haxe::ui::core::Platform_obj::get_instance()->get_isWindows()) {
HXLINE(  53)			::haxe::ui::util::Defines_obj::set(HX_("windows",83,de,74,e8),HX_("1",31,00,00,00),null());
            		}
            		else {
HXLINE(  54)			if (::haxe::ui::core::Platform_obj::get_instance()->get_isLinux()) {
HXLINE(  55)				::haxe::ui::util::Defines_obj::set(HX_("linux",f4,eb,01,75),HX_("1",31,00,00,00),null());
            			}
            			else {
HXLINE(  56)				if (::haxe::ui::core::Platform_obj::get_instance()->get_isMac()) {
HXLINE(  57)					::haxe::ui::util::Defines_obj::set(HX_("mac",8f,0a,53,00),HX_("1",31,00,00,00),null());
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Defines_obj,popuplate,(void))

 ::Dynamic Defines_obj::toObject(){
            	HX_STACKFRAME(&_hx_pos_09f6276ed7b601ca_63_toObject)
HXLINE(  64)		::haxe::ui::util::Defines_obj::popuplate();
HXLINE(  65)		 ::Dynamic o =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  66)		{
HXLINE(  66)			 ::Dynamic k = ::haxe::ui::util::Defines_obj::_map->keys();
HXDLIN(  66)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  66)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  67)				::String v = ::haxe::ui::util::Defines_obj::_map->get_string(k1);
HXLINE(  68)				::Reflect_obj::setField(o,k1,v);
            			}
            		}
HXLINE(  70)		return o;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Defines_obj,toObject,return )


Defines_obj::Defines_obj()
{
}

bool Defines_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getAll") ) { outValue = getAll_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toObject") ) { outValue = toObject_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popuplate") ) { outValue = popuplate_dyn(); return true; }
	}
	return false;
}

bool Defines_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Defines_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Defines_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Defines_obj::_map,HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Defines_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Defines_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Defines_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Defines_obj::_map,"_map");
};

#endif

::hx::Class Defines_obj::__mClass;

static ::String Defines_obj_sStaticFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("getAll",2b,32,19,a3),
	HX_("set",a2,9b,57,00),
	HX_("popuplate",52,9b,30,d4),
	HX_("toObject",9a,26,7e,3c),
	::String(null())
};

void Defines_obj::__register()
{
	Defines_obj _hx_dummy;
	Defines_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.Defines",5e,91,49,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Defines_obj::__GetStatic;
	__mClass->mSetStaticField = &Defines_obj::__SetStatic;
	__mClass->mMarkFunc = Defines_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Defines_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Defines_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Defines_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Defines_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Defines_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Defines_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_09f6276ed7b601ca_6_boot)
HXDLIN(   6)		_map = null();
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
