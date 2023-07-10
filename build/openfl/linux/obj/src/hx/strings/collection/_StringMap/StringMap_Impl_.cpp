#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hx_strings_collection_OrderedStringMapImpl
#include <hx/strings/collection/OrderedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection_SortedStringMapImpl
#include <hx/strings/collection/SortedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection__StringMap_StringMap_Impl_
#include <hx/strings/collection/_StringMap/StringMap_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_17__new,"hx.strings.collection._StringMap.StringMap_Impl_","_new",0x0c9bd460,"hx.strings.collection._StringMap.StringMap_Impl_._new","hx/strings/collection/StringMap.hx",17,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_24___toMap,"hx.strings.collection._StringMap.StringMap_Impl_","__toMap",0x858e7f22,"hx.strings.collection._StringMap.StringMap_Impl_.__toMap","hx/strings/collection/StringMap.hx",24,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_32___arrayGet,"hx.strings.collection._StringMap.StringMap_Impl_","__arrayGet",0xff238bdc,"hx.strings.collection._StringMap.StringMap_Impl_.__arrayGet","hx/strings/collection/StringMap.hx",32,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_39___arrayWrite,"hx.strings.collection._StringMap.StringMap_Impl_","__arrayWrite",0xf6fc55a5,"hx.strings.collection._StringMap.StringMap_Impl_.__arrayWrite","hx/strings/collection/StringMap.hx",39,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_55_get_size,"hx.strings.collection._StringMap.StringMap_Impl_","get_size",0xfcf006c9,"hx.strings.collection._StringMap.StringMap_Impl_.get_size","hx/strings/collection/StringMap.hx",55,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_70_copy,"hx.strings.collection._StringMap.StringMap_Impl_","copy",0x0f417ab4,"hx.strings.collection._StringMap.StringMap_Impl_.copy","hx/strings/collection/StringMap.hx",70,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_96_isEmpty,"hx.strings.collection._StringMap.StringMap_Impl_","isEmpty",0x137b48a4,"hx.strings.collection._StringMap.StringMap_Impl_.isEmpty","hx/strings/collection/StringMap.hx",96,0x0b7bbaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_7921b5be1f59f753_110_setAll,"hx.strings.collection._StringMap.StringMap_Impl_","setAll",0x24cb435e,"hx.strings.collection._StringMap.StringMap_Impl_.setAll","hx/strings/collection/StringMap.hx",110,0x0b7bbaf8)
namespace hx{
namespace strings{
namespace collection{
namespace _StringMap{

void StringMap_Impl__obj::__construct() { }

Dynamic StringMap_Impl__obj::__CreateEmpty() { return new StringMap_Impl__obj; }

void *StringMap_Impl__obj::_hx_vtable = 0;

Dynamic StringMap_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringMap_Impl__obj > _hx_result = new StringMap_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringMap_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15f43a0f;
}

::Dynamic StringMap_Impl__obj::_new(){
            	HX_GC_STACKFRAME(&_hx_pos_7921b5be1f59f753_17__new)
HXDLIN(  17)		::Dynamic this1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  17)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StringMap_Impl__obj,_new,return )

 ::haxe::ds::StringMap StringMap_Impl__obj::_hx___toMap(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_7921b5be1f59f753_24___toMap)
HXDLIN(  24)		return ( ( ::haxe::ds::StringMap)(this1) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringMap_Impl__obj,_hx___toMap,return )

 ::Dynamic StringMap_Impl__obj::_hx___arrayGet(::Dynamic this1,::String key){
            	HX_STACKFRAME(&_hx_pos_7921b5be1f59f753_32___arrayGet)
HXDLIN(  32)		return ::haxe::IMap_obj::get(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringMap_Impl__obj,_hx___arrayGet,return )

 ::Dynamic StringMap_Impl__obj::_hx___arrayWrite(::Dynamic this1,::String k, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_7921b5be1f59f753_39___arrayWrite)
HXLINE(  40)		::haxe::IMap_obj::set(this1,k,v);
HXLINE(  41)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringMap_Impl__obj,_hx___arrayWrite,return )

int StringMap_Impl__obj::get_size(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_7921b5be1f59f753_55_get_size)
HXLINE(  56)		int count = 0;
HXLINE(  57)		 ::Dynamic it = ::haxe::IMap_obj::keys(this1);
HXLINE(  58)		while(( (bool)(it->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  59)			it->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  60)			count = (count + 1);
            		}
HXLINE(  62)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringMap_Impl__obj,get_size,return )

::Dynamic StringMap_Impl__obj::copy(::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_7921b5be1f59f753_70_copy)
HXLINE(  71)		if (::Std_obj::isOfType(this1,( ( ::Dynamic)(::hx::ClassOf< ::hx::strings::collection::SortedStringMapImpl >()) ))) {
HXLINE(  72)			 ::hx::strings::collection::SortedStringMapImpl m = ( ( ::hx::strings::collection::SortedStringMapImpl)(this1) );
HXLINE(  73)			return m->copy();
            		}
HXLINE(  76)		if (::Std_obj::isOfType(this1,( ( ::Dynamic)(::hx::ClassOf< ::hx::strings::collection::OrderedStringMapImpl >()) ))) {
HXLINE(  77)			 ::hx::strings::collection::OrderedStringMapImpl m = ( ( ::hx::strings::collection::OrderedStringMapImpl)(this1) );
HXLINE(  78)			 ::hx::strings::collection::OrderedStringMapImpl clone =  ::hx::strings::collection::OrderedStringMapImpl_obj::__alloc( HX_CTX );
HXDLIN(  78)			{
HXLINE(  78)				::Dynamic map = m;
HXDLIN(  78)				::Dynamic _g_map = map;
HXDLIN(  78)				 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(  78)				while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  78)					::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  78)					 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN(  78)					::String _g1_key = key;
HXDLIN(  78)					::String k = _g1_key;
HXDLIN(  78)					 ::Dynamic v = _g1_value;
HXDLIN(  78)					clone->set(k,v);
            				}
            			}
HXDLIN(  78)			return clone;
            		}
HXLINE(  81)		::Dynamic this2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  81)		::Dynamic clone = this2;
HXLINE(  82)		{
HXLINE(  82)			 ::Dynamic _g = ::haxe::IMap_obj::keyValueIterator(this1);
HXDLIN(  82)			while(( (bool)(_g->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  82)				 ::Dynamic _g1 = _g->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  82)				::String k = ( (::String)(_g1->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)) );
HXDLIN(  82)				 ::Dynamic v =  ::Dynamic(_g1->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXLINE(  83)				::haxe::IMap_obj::set(clone,k,v);
            			}
            		}
HXLINE(  84)		return clone;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringMap_Impl__obj,copy,return )

bool StringMap_Impl__obj::isEmpty(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_7921b5be1f59f753_96_isEmpty)
HXDLIN(  96)		return !(( (bool)(::haxe::IMap_obj::iterator(this1)->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringMap_Impl__obj,isEmpty,return )

int StringMap_Impl__obj::setAll(::Dynamic this1,::Dynamic items,::hx::Null< bool >  __o_replace){
            		bool replace = __o_replace.Default(true);
            	HX_STACKFRAME(&_hx_pos_7921b5be1f59f753_110_setAll)
HXLINE( 111)		if (::hx::IsNull( items )) {
HXLINE( 112)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[items] must not be null!",99,af,60,2f)));
            		}
HXLINE( 114)		int count = 0;
HXLINE( 115)		if (replace) {
HXLINE( 116)			 ::Dynamic _g = ::haxe::IMap_obj::keyValueIterator(items);
HXDLIN( 116)			while(( (bool)(_g->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 116)				 ::Dynamic _g1 = _g->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 116)				::String k = ( (::String)(_g1->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)) );
HXDLIN( 116)				 ::Dynamic v =  ::Dynamic(_g1->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXDLIN( 116)				{
HXLINE( 117)					::haxe::IMap_obj::set(this1,k,v);
HXLINE( 118)					count = (count + 1);
            				}
            			}
            		}
            		else {
HXLINE( 121)			 ::Dynamic _g = ::haxe::IMap_obj::keyValueIterator(items);
HXDLIN( 121)			while(( (bool)(_g->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 121)				 ::Dynamic _g1 = _g->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 121)				::String k = ( (::String)(_g1->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)) );
HXDLIN( 121)				 ::Dynamic v =  ::Dynamic(_g1->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXLINE( 122)				if (!(::haxe::IMap_obj::exists(this1,k))) {
HXLINE( 123)					::haxe::IMap_obj::set(this1,k,v);
HXLINE( 124)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 128)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringMap_Impl__obj,setAll,return )


StringMap_Impl__obj::StringMap_Impl__obj()
{
}

bool StringMap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setAll") ) { outValue = setAll_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__toMap") ) { outValue = _hx___toMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { outValue = isEmpty_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { outValue = get_size_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__arrayGet") ) { outValue = _hx___arrayGet_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__arrayWrite") ) { outValue = _hx___arrayWrite_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringMap_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StringMap_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class StringMap_Impl__obj::__mClass;

static ::String StringMap_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("__toMap",c1,14,73,7e),
	HX_("__arrayGet",9d,03,a3,92),
	HX_("__arrayWrite",a6,ff,19,03),
	HX_("get_size",4a,5c,0e,cc),
	HX_("copy",b5,bb,c4,41),
	HX_("isEmpty",43,de,5f,0c),
	HX_("setAll",9f,86,61,6f),
	::String(null())
};

void StringMap_Impl__obj::__register()
{
	StringMap_Impl__obj _hx_dummy;
	StringMap_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection._StringMap.StringMap_Impl_",cf,01,6e,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringMap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringMap_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringMap_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringMap_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringMap_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _StringMap
