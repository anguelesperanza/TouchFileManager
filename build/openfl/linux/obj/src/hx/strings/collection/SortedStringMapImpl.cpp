#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings_collection_SortedStringMapImpl
#include <hx/strings/collection/SortedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection__StringMap_StringMap_Impl_
#include <hx/strings/collection/_StringMap/StringMap_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_83_new,"hx.strings.collection.SortedStringMapImpl","new",0x964a021a,"hx.strings.collection.SortedStringMapImpl.new","hx/strings/collection/SortedStringMap.hx",83,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_69_get_size,"hx.strings.collection.SortedStringMapImpl","get_size",0xb567a850,"hx.strings.collection.SortedStringMapImpl.get_size","hx/strings/collection/SortedStringMap.hx",69,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_102___arrayWrite,"hx.strings.collection.SortedStringMapImpl","__arrayWrite",0xf570c6ac,"hx.strings.collection.SortedStringMapImpl.__arrayWrite","hx/strings/collection/SortedStringMap.hx",102,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_114_copy,"hx.strings.collection.SortedStringMapImpl","copy",0xe33a0cbb,"hx.strings.collection.SortedStringMapImpl.copy","hx/strings/collection/SortedStringMap.hx",114,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_125_compare,"hx.strings.collection.SortedStringMapImpl","compare",0x0753af5f,"hx.strings.collection.SortedStringMapImpl.compare","hx/strings/collection/SortedStringMap.hx",125,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_136_get,"hx.strings.collection.SortedStringMapImpl","get",0x9644b250,"hx.strings.collection.SortedStringMapImpl.get","hx/strings/collection/SortedStringMap.hx",136,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_147_isEmpty,"hx.strings.collection.SortedStringMapImpl","isEmpty",0x904a74fd,"hx.strings.collection.SortedStringMapImpl.isEmpty","hx/strings/collection/SortedStringMap.hx",147,0x247e4b95)
HX_LOCAL_STACK_FRAME(_hx_pos_f5bb8b113b4d8c56_157_setAll,"hx.strings.collection.SortedStringMapImpl","setAll",0x5591a525,"hx.strings.collection.SortedStringMapImpl.setAll","hx/strings/collection/SortedStringMap.hx",157,0x247e4b95)
namespace hx{
namespace strings{
namespace collection{

void SortedStringMapImpl_obj::__construct( ::Dynamic comparator){
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_83_new)
HXLINE(  84)		super::__construct();
HXLINE(  85)		if (::hx::IsNull( comparator )) {
HXLINE(  90)			this->cmp = ::hx::strings::Strings_obj::compare_dyn();
            		}
            		else {
HXLINE(  93)			this->cmp = comparator;
            		}
            	}

Dynamic SortedStringMapImpl_obj::__CreateEmpty() { return new SortedStringMapImpl_obj; }

void *SortedStringMapImpl_obj::_hx_vtable = 0;

Dynamic SortedStringMapImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SortedStringMapImpl_obj > _hx_result = new SortedStringMapImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SortedStringMapImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06286c5e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06286c5e;
	} else {
		return inClassId==(int)0x4cc9cf7f;
	}
}

static ::haxe::IMap_obj _hx_hx_strings_collection_SortedStringMapImpl__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::hx::strings::collection::SortedStringMapImpl_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::hx::strings::collection::SortedStringMapImpl_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::hx::strings::collection::SortedStringMapImpl_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::hx::strings::collection::SortedStringMapImpl_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::collection::SortedStringMapImpl_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::collection::SortedStringMapImpl_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::collection::SortedStringMapImpl_obj::keyValueIterator,
	( void (::hx::Object::*)())&::hx::strings::collection::SortedStringMapImpl_obj::clear,
};

void SortedStringMapImpl_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *SortedStringMapImpl_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_hx_strings_collection_SortedStringMapImpl__hx_haxe_IMap;
	}
	return super::_hx_getInterface(inHash);
}

int SortedStringMapImpl_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_69_get_size)
HXLINE(  70)		int count = 0;
HXLINE(  71)		 ::Dynamic it = this->keys();
HXLINE(  72)		while(( (bool)(it->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  73)			it->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  74)			count = (count + 1);
            		}
HXLINE(  76)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SortedStringMapImpl_obj,get_size,return )

 ::Dynamic SortedStringMapImpl_obj::_hx___arrayWrite(::String k, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_102___arrayWrite)
HXLINE( 103)		this->set(k,v);
HXLINE( 104)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SortedStringMapImpl_obj,_hx___arrayWrite,return )

 ::hx::strings::collection::SortedStringMapImpl SortedStringMapImpl_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_114_copy)
HXLINE( 115)		 ::hx::strings::collection::SortedStringMapImpl clone =  ::hx::strings::collection::SortedStringMapImpl_obj::__alloc( HX_CTX ,null());
HXLINE( 116)		{
HXLINE( 116)			::Dynamic _g_map = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 116)			 ::Dynamic _g_keys = this->keys();
HXDLIN( 116)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 116)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 116)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 116)				::String _g1_key = key;
HXDLIN( 116)				::String k = _g1_key;
HXDLIN( 116)				 ::Dynamic v = _g1_value;
HXLINE( 117)				clone->set(k,v);
            			}
            		}
HXLINE( 118)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SortedStringMapImpl_obj,copy,return )

int SortedStringMapImpl_obj::compare( ::Dynamic _tmp_s1, ::Dynamic _tmp_s2){
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_125_compare)
HXDLIN( 125)		::String s1 = ( (::String)(_tmp_s1) );
HXDLIN( 125)		::String s2 = ( (::String)(_tmp_s2) );
HXDLIN( 125)		return ( (int)(this->cmp(s1,s2)) );
            	}


 ::Dynamic SortedStringMapImpl_obj::get( ::Dynamic _tmp_key){
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_136_get)
HXDLIN( 136)		::String key = ( (::String)(_tmp_key) );
HXDLIN( 136)		return this->super::get(key);
            	}


bool SortedStringMapImpl_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_147_isEmpty)
HXDLIN( 147)		return !(( (bool)(this->iterator()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SortedStringMapImpl_obj,isEmpty,return )

int SortedStringMapImpl_obj::setAll(::Dynamic source,::hx::Null< bool >  __o_replace){
            		bool replace = __o_replace.Default(true);
            	HX_STACKFRAME(&_hx_pos_f5bb8b113b4d8c56_157_setAll)
HXLINE( 158)		::Dynamic m = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 159)		return ::hx::strings::collection::_StringMap::StringMap_Impl__obj::setAll(m,source,replace);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SortedStringMapImpl_obj,setAll,return )


::hx::ObjectPtr< SortedStringMapImpl_obj > SortedStringMapImpl_obj::__new( ::Dynamic comparator) {
	::hx::ObjectPtr< SortedStringMapImpl_obj > __this = new SortedStringMapImpl_obj();
	__this->__construct(comparator);
	return __this;
}

::hx::ObjectPtr< SortedStringMapImpl_obj > SortedStringMapImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic comparator) {
	SortedStringMapImpl_obj *__this = (SortedStringMapImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SortedStringMapImpl_obj), true, "hx.strings.collection.SortedStringMapImpl"));
	*(void **)__this = SortedStringMapImpl_obj::_hx_vtable;
	__this->__construct(comparator);
	return __this;
}

SortedStringMapImpl_obj::SortedStringMapImpl_obj()
{
}

void SortedStringMapImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SortedStringMapImpl);
	HX_MARK_MEMBER_NAME(cmp,"cmp");
	 ::haxe::ds::BalancedTree_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SortedStringMapImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cmp,"cmp");
	 ::haxe::ds::BalancedTree_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SortedStringMapImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cmp") ) { return ::hx::Val( cmp ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setAll") ) { return ::hx::Val( setAll_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return ::hx::Val( compare_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__arrayWrite") ) { return ::hx::Val( _hx___arrayWrite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SortedStringMapImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cmp") ) { cmp=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SortedStringMapImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SortedStringMapImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SortedStringMapImpl_obj,cmp),HX_("cmp",86,7e,4b,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SortedStringMapImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String SortedStringMapImpl_obj_sMemberFields[] = {
	HX_("cmp",86,7e,4b,00),
	HX_("get_size",4a,5c,0e,cc),
	HX_("__arrayWrite",a6,ff,19,03),
	HX_("copy",b5,bb,c4,41),
	HX_("compare",a5,18,69,83),
	HX_("get",96,80,4e,00),
	HX_("isEmpty",43,de,5f,0c),
	HX_("setAll",9f,86,61,6f),
	::String(null()) };

::hx::Class SortedStringMapImpl_obj::__mClass;

void SortedStringMapImpl_obj::__register()
{
	SortedStringMapImpl_obj _hx_dummy;
	SortedStringMapImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection.SortedStringMapImpl",28,ad,2c,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SortedStringMapImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SortedStringMapImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SortedStringMapImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SortedStringMapImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
