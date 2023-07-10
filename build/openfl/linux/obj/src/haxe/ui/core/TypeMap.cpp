#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_TypeMap
#include <haxe/ui/core/TypeMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_RTTI
#include <haxe/ui/util/RTTI.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7b09f2cf14efc678_8_getTypeInfo,"haxe.ui.core.TypeMap","getTypeInfo",0x473718f5,"haxe.ui.core.TypeMap.getTypeInfo","haxe/ui/core/TypeMap.hx",8,0x18e6049a)
namespace haxe{
namespace ui{
namespace core{

void TypeMap_obj::__construct() { }

Dynamic TypeMap_obj::__CreateEmpty() { return new TypeMap_obj; }

void *TypeMap_obj::_hx_vtable = 0;

Dynamic TypeMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypeMap_obj > _hx_result = new TypeMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TypeMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21c5fa85;
}

::String TypeMap_obj::getTypeInfo(::String className,::String property){
            	HX_STACKFRAME(&_hx_pos_7b09f2cf14efc678_8_getTypeInfo)
HXLINE(   9)		 ::Dynamic propInfo = ::haxe::ui::util::RTTI_obj::getClassProperty(className,property);
HXLINE(  10)		if (::hx::IsNull( propInfo )) {
HXLINE(  11)			return null();
            		}
HXLINE(  14)		return ( (::String)(propInfo->__Field(HX_("propertyType",af,b5,ed,2a),::hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeMap_obj,getTypeInfo,return )


TypeMap_obj::TypeMap_obj()
{
}

bool TypeMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getTypeInfo") ) { outValue = getTypeInfo_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TypeMap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TypeMap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TypeMap_obj::__mClass;

static ::String TypeMap_obj_sStaticFields[] = {
	HX_("getTypeInfo",fe,fe,79,d8),
	::String(null())
};

void TypeMap_obj::__register()
{
	TypeMap_obj _hx_dummy;
	TypeMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.TypeMap",e5,a3,3e,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeMap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TypeMap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TypeMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
