#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_hx_strings_collection_OrderedStringMapImpl
#include <hx/strings/collection/OrderedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection__OrderedStringMap_OrderedStringMap_Impl_
#include <hx/strings/collection/_OrderedStringMap/OrderedStringMap_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6097ad6c8e5ce2d4_16__new,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_","_new",0x643b239a,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_._new","hx/strings/collection/OrderedStringMap.hx",16,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_6097ad6c8e5ce2d4_23___toStringMap,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_","__toStringMap",0xb19dc8d7,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_.__toStringMap","hx/strings/collection/OrderedStringMap.hx",23,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_6097ad6c8e5ce2d4_31___arrayGet,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_","__arrayGet",0xe3850296,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_.__arrayGet","hx/strings/collection/OrderedStringMap.hx",31,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_6097ad6c8e5ce2d4_38___arrayWrite,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_","__arrayWrite",0xcfb46edf,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_.__arrayWrite","hx/strings/collection/OrderedStringMap.hx",38,0x8be45a5b)
namespace hx{
namespace strings{
namespace collection{
namespace _OrderedStringMap{

void OrderedStringMap_Impl__obj::__construct() { }

Dynamic OrderedStringMap_Impl__obj::__CreateEmpty() { return new OrderedStringMap_Impl__obj; }

void *OrderedStringMap_Impl__obj::_hx_vtable = 0;

Dynamic OrderedStringMap_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OrderedStringMap_Impl__obj > _hx_result = new OrderedStringMap_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OrderedStringMap_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dfa214f;
}

 ::hx::strings::collection::OrderedStringMapImpl OrderedStringMap_Impl__obj::_new(){
            	HX_GC_STACKFRAME(&_hx_pos_6097ad6c8e5ce2d4_16__new)
HXDLIN(  16)		 ::hx::strings::collection::OrderedStringMapImpl this1 =  ::hx::strings::collection::OrderedStringMapImpl_obj::__alloc( HX_CTX );
HXDLIN(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMap_Impl__obj,_new,return )

::Dynamic OrderedStringMap_Impl__obj::_hx___toStringMap( ::hx::strings::collection::OrderedStringMapImpl this1){
            	HX_STACKFRAME(&_hx_pos_6097ad6c8e5ce2d4_23___toStringMap)
HXDLIN(  23)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OrderedStringMap_Impl__obj,_hx___toStringMap,return )

 ::Dynamic OrderedStringMap_Impl__obj::_hx___arrayGet( ::hx::strings::collection::OrderedStringMapImpl this1,::String key){
            	HX_STACKFRAME(&_hx_pos_6097ad6c8e5ce2d4_31___arrayGet)
HXDLIN(  31)		return ::haxe::IMap_obj::get(this1->__map,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OrderedStringMap_Impl__obj,_hx___arrayGet,return )

 ::Dynamic OrderedStringMap_Impl__obj::_hx___arrayWrite( ::hx::strings::collection::OrderedStringMapImpl this1,::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6097ad6c8e5ce2d4_38___arrayWrite)
HXLINE(  39)		this1->set(key,value);
HXLINE(  40)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OrderedStringMap_Impl__obj,_hx___arrayWrite,return )


OrderedStringMap_Impl__obj::OrderedStringMap_Impl__obj()
{
}

bool OrderedStringMap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *OrderedStringMap_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OrderedStringMap_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OrderedStringMap_Impl__obj::__mClass;

static ::String OrderedStringMap_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("__toStringMap",30,e6,16,77),
	HX_("__arrayGet",9d,03,a3,92),
	HX_("__arrayWrite",a6,ff,19,03),
	::String(null())
};

void OrderedStringMap_Impl__obj::__register()
{
	OrderedStringMap_Impl__obj _hx_dummy;
	OrderedStringMap_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_",d5,fc,c4,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OrderedStringMap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OrderedStringMap_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OrderedStringMap_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OrderedStringMap_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OrderedStringMap_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _OrderedStringMap
