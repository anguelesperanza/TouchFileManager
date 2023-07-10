#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_hx_strings_collection_SortedStringMapImpl
#include <hx/strings/collection/SortedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection__SortedStringMap_SortedStringMap_Impl_
#include <hx/strings/collection/_SortedStringMap/SortedStringMap_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1b5d49f1003573ca_18__new,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_","_new",0xf35ca3da,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_._new","hx/strings/collection/SortedStringMap.hx",18,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_1b5d49f1003573ca_25___toStringMap,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_","__toStringMap",0x04ea4097,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_.__toStringMap","hx/strings/collection/SortedStringMap.hx",25,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_1b5d49f1003573ca_32___arrayGet,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_","__arrayGet",0x222432d6,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_.__arrayGet","hx/strings/collection/SortedStringMap.hx",32,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_1b5d49f1003573ca_39___arrayWrite,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_","__arrayWrite",0x58b02f1f,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_.__arrayWrite","hx/strings/collection/SortedStringMap.hx",39,0x247e4b95)
namespace hx{
namespace strings{
namespace collection{
namespace _SortedStringMap{

void SortedStringMap_Impl__obj::__construct() { }

Dynamic SortedStringMap_Impl__obj::__CreateEmpty() { return new SortedStringMap_Impl__obj; }

void *SortedStringMap_Impl__obj::_hx_vtable = 0;

Dynamic SortedStringMap_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SortedStringMap_Impl__obj > _hx_result = new SortedStringMap_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SortedStringMap_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x375fceef;
}

 ::hx::strings::collection::SortedStringMapImpl SortedStringMap_Impl__obj::_new( ::Dynamic comparator){
            	HX_GC_STACKFRAME(&_hx_pos_1b5d49f1003573ca_18__new)
HXDLIN(  18)		 ::hx::strings::collection::SortedStringMapImpl this1 =  ::hx::strings::collection::SortedStringMapImpl_obj::__alloc( HX_CTX ,comparator);
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SortedStringMap_Impl__obj,_new,return )

::Dynamic SortedStringMap_Impl__obj::_hx___toStringMap( ::hx::strings::collection::SortedStringMapImpl this1){
            	HX_STACKFRAME(&_hx_pos_1b5d49f1003573ca_25___toStringMap)
HXDLIN(  25)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SortedStringMap_Impl__obj,_hx___toStringMap,return )

 ::Dynamic SortedStringMap_Impl__obj::_hx___arrayGet( ::hx::strings::collection::SortedStringMapImpl this1,::String key){
            	HX_STACKFRAME(&_hx_pos_1b5d49f1003573ca_32___arrayGet)
HXDLIN(  32)		return this1->get(key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SortedStringMap_Impl__obj,_hx___arrayGet,return )

 ::Dynamic SortedStringMap_Impl__obj::_hx___arrayWrite( ::hx::strings::collection::SortedStringMapImpl this1,::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1b5d49f1003573ca_39___arrayWrite)
HXLINE(  40)		this1->set(key,value);
HXLINE(  41)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SortedStringMap_Impl__obj,_hx___arrayWrite,return )


SortedStringMap_Impl__obj::SortedStringMap_Impl__obj()
{
}

bool SortedStringMap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__arrayGet") ) { outValue = _hx___arrayGet_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__arrayWrite") ) { outValue = _hx___arrayWrite_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__toStringMap") ) { outValue = _hx___toStringMap_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SortedStringMap_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SortedStringMap_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class SortedStringMap_Impl__obj::__mClass;

static ::String SortedStringMap_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("__toStringMap",30,e6,16,77),
	HX_("__arrayGet",9d,03,a3,92),
	HX_("__arrayWrite",a6,ff,19,03),
	::String(null())
};

void SortedStringMap_Impl__obj::__register()
{
	SortedStringMap_Impl__obj _hx_dummy;
	SortedStringMap_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection._SortedStringMap.SortedStringMap_Impl_",95,64,93,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SortedStringMap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SortedStringMap_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SortedStringMap_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SortedStringMap_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SortedStringMap_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _SortedStringMap
