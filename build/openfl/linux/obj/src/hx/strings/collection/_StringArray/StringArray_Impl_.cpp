#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings_collection_StringSet
#include <hx/strings/collection/StringSet.h>
#endif
#ifndef INCLUDED_hx_strings_collection__StringArray_StringArray_Impl_
#include <hx/strings/collection/_StringArray/StringArray_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_21__new,"hx.strings.collection._StringArray.StringArray_Impl_","_new",0x1d0080e6,"hx.strings.collection._StringArray.StringArray_Impl_._new","hx/strings/collection/StringArray.hx",21,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_38_get_first,"hx.strings.collection._StringArray.StringArray_Impl_","get_first",0xd3d886e2,"hx.strings.collection._StringArray.StringArray_Impl_.get_first","hx/strings/collection/StringArray.hx",38,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_51_get_last,"hx.strings.collection._StringArray.StringArray_Impl_","get_last",0x1e25d7e4,"hx.strings.collection._StringArray.StringArray_Impl_.get_last","hx/strings/collection/StringArray.hx",51,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_61_contains,"hx.strings.collection._StringArray.StringArray_Impl_","contains",0x83396c24,"hx.strings.collection._StringArray.StringArray_Impl_.contains","hx/strings/collection/StringArray.hx",61,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_72_isEmpty,"hx.strings.collection._StringArray.StringArray_Impl_","isEmpty",0x62dcb3de,"hx.strings.collection._StringArray.StringArray_Impl_.isEmpty","hx/strings/collection/StringArray.hx",72,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_82_clear,"hx.strings.collection._StringArray.StringArray_Impl_","clear",0x8fb81a68,"hx.strings.collection._StringArray.StringArray_Impl_.clear","hx/strings/collection/StringArray.hx",82,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_87_pushAll,"hx.strings.collection._StringArray.StringArray_Impl_","pushAll",0xcba69902,"hx.strings.collection._StringArray.StringArray_Impl_.pushAll","hx/strings/collection/StringArray.hx",87,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_110_sortAscending,"hx.strings.collection._StringArray.StringArray_Impl_","sortAscending",0x9156f675,"hx.strings.collection._StringArray.StringArray_Impl_.sortAscending","hx/strings/collection/StringArray.hx",110,0xf7d5159b)
HX_LOCAL_STACK_FRAME(_hx_pos_a478129eed130b7d_120_sortDescending,"hx.strings.collection._StringArray.StringArray_Impl_","sortDescending",0xb7e245bb,"hx.strings.collection._StringArray.StringArray_Impl_.sortDescending","hx/strings/collection/StringArray.hx",120,0xf7d5159b)
namespace hx{
namespace strings{
namespace collection{
namespace _StringArray{

void StringArray_Impl__obj::__construct() { }

Dynamic StringArray_Impl__obj::__CreateEmpty() { return new StringArray_Impl__obj; }

void *StringArray_Impl__obj::_hx_vtable = 0;

Dynamic StringArray_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringArray_Impl__obj > _hx_result = new StringArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fb49577;
}

::Array< ::String > StringArray_Impl__obj::_new( ::hx::strings::internal::_Either2::_Either2 initialItems){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_21__new)
HXDLIN(  21)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXLINE(  24)		if (::hx::IsNotNull( initialItems )) {
HXLINE(  25)			::hx::strings::collection::_StringArray::StringArray_Impl__obj::pushAll(this1,initialItems);
            		}
HXLINE(  21)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,_new,return )

::String StringArray_Impl__obj::get_first(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_38_get_first)
HXDLIN(  38)		if ((this1->length == 0)) {
HXDLIN(  38)			return null();
            		}
            		else {
HXDLIN(  38)			return this1->__get(0);
            		}
HXDLIN(  38)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,get_first,return )

::String StringArray_Impl__obj::get_last(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_51_get_last)
HXDLIN(  51)		if ((this1->length == 0)) {
HXDLIN(  51)			return null();
            		}
            		else {
HXDLIN(  51)			return this1->__get((this1->length - 1));
            		}
HXDLIN(  51)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,get_last,return )

bool StringArray_Impl__obj::contains(::Array< ::String > this1,::String str){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_61_contains)
HXDLIN(  61)		return (this1->indexOf(str,null()) > -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringArray_Impl__obj,contains,return )

bool StringArray_Impl__obj::isEmpty(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_72_isEmpty)
HXDLIN(  72)		return (this1->length == 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,isEmpty,return )

void StringArray_Impl__obj::clear(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_82_clear)
HXDLIN(  82)		while((this1->length > 0)){
HXLINE(  83)			this1->pop();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,clear,(void))

void StringArray_Impl__obj::pushAll(::Array< ::String > this1, ::hx::strings::internal::_Either2::_Either2 items){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_87_pushAll)
HXLINE(  88)		if (::hx::IsNull( items )) {
HXLINE(  89)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[items] must not be null!",99,af,60,2f)));
            		}
HXLINE(  91)		{
HXLINE(  91)			 ::hx::strings::internal::_Either2::_Either2 _g = items;
HXDLIN(  91)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  92)					 ::hx::strings::collection::StringSet set = ( ( ::hx::strings::collection::StringSet)(_g->_hx_getObject(0)) );
HXLINE(  93)					{
HXLINE(  93)						 ::Dynamic str = ::haxe::IMap_obj::keys(set->map);
HXDLIN(  93)						while(( (bool)(str->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  93)							::String str1 = ( (::String)(str->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  94)							this1->push(str1);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  96)					::Array< ::String > array = ( (::Array< ::String >)(_g->_hx_getObject(0)) );
HXLINE(  97)					{
HXLINE(  97)						int _g1 = 0;
HXDLIN(  97)						while((_g1 < array->length)){
HXLINE(  97)							::String str = array->__get(_g1);
HXDLIN(  97)							_g1 = (_g1 + 1);
HXLINE(  98)							this1->push(str);
            						}
            					}
            				}
            				break;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringArray_Impl__obj,pushAll,(void))

void StringArray_Impl__obj::sortAscending(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_110_sortAscending)
HXDLIN( 110)		this1->sort(::hx::strings::Strings_obj::compare_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,sortAscending,(void))

void StringArray_Impl__obj::sortDescending(::Array< ::String > this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(::String s1,::String s2){
            			HX_STACKFRAME(&_hx_pos_a478129eed130b7d_120_sortDescending)
HXDLIN( 120)			return (-1 * ::hx::strings::Strings_obj::compare(s1,s2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_a478129eed130b7d_120_sortDescending)
HXDLIN( 120)		this1->sort( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringArray_Impl__obj,sortDescending,(void))


StringArray_Impl__obj::StringArray_Impl__obj()
{
}

bool StringArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { outValue = isEmpty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pushAll") ) { outValue = pushAll_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_last") ) { outValue = get_last_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_first") ) { outValue = get_first_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sortAscending") ) { outValue = sortAscending_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sortDescending") ) { outValue = sortDescending_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringArray_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StringArray_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class StringArray_Impl__obj::__mClass;

static ::String StringArray_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_first",87,d4,46,44),
	HX_("get_last",df,c5,67,c7),
	HX_("contains",1f,5a,7b,2c),
	HX_("isEmpty",43,de,5f,0c),
	HX_("clear",8d,71,5b,48),
	HX_("pushAll",67,c3,29,75),
	HX_("sortAscending",9a,7a,8d,ac),
	HX_("sortDescending",f6,61,5f,6c),
	::String(null())
};

void StringArray_Impl__obj::__register()
{
	StringArray_Impl__obj _hx_dummy;
	StringArray_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection._StringArray.StringArray_Impl_",09,a3,14,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringArray_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringArray_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringArray_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _StringArray
