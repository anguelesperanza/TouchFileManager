#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
#endif
#ifndef INCLUDED_hx_strings_collection_OrderedStringMapImpl
#include <hx/strings/collection/OrderedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection__OrderedStringMap_ValueIterator
#include <hx/strings/collection/_OrderedStringMap/ValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d255cb20afc1832_47_new,"hx.strings.collection.OrderedStringMapImpl","new",0x9ee263f6,"hx.strings.collection.OrderedStringMapImpl.new","hx/strings/collection/OrderedStringMap.hx",47,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_57_get_size,"hx.strings.collection.OrderedStringMapImpl","get_size",0x1a5308f4,"hx.strings.collection.OrderedStringMapImpl.get_size","hx/strings/collection/OrderedStringMap.hx",57,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_71_clear,"hx.strings.collection.OrderedStringMapImpl","clear",0x966696a3,"hx.strings.collection.OrderedStringMapImpl.clear","hx/strings/collection/OrderedStringMap.hx",71,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_83_copy,"hx.strings.collection.OrderedStringMapImpl","copy",0x5ff74b5f,"hx.strings.collection.OrderedStringMapImpl.copy","hx/strings/collection/OrderedStringMap.hx",83,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_93_exists,"hx.strings.collection.OrderedStringMapImpl","exists",0xbb956c06,"hx.strings.collection.OrderedStringMapImpl.exists","hx/strings/collection/OrderedStringMap.hx",93,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_103_get,"hx.strings.collection.OrderedStringMapImpl","get",0x9edd142c,"hx.strings.collection.OrderedStringMapImpl.get","hx/strings/collection/OrderedStringMap.hx",103,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_114_isEmpty,"hx.strings.collection.OrderedStringMapImpl","isEmpty",0x4f4ef4d9,"hx.strings.collection.OrderedStringMapImpl.isEmpty","hx/strings/collection/OrderedStringMap.hx",114,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_119_iterator,"hx.strings.collection.OrderedStringMapImpl","iterator",0xe1def698,"hx.strings.collection.OrderedStringMapImpl.iterator","hx/strings/collection/OrderedStringMap.hx",119,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_124_keys,"hx.strings.collection.OrderedStringMapImpl","keys",0x6539719e,"hx.strings.collection.OrderedStringMapImpl.keys","hx/strings/collection/OrderedStringMap.hx",124,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_129_keyValueIterator,"hx.strings.collection.OrderedStringMapImpl","keyValueIterator",0xc40f340a,"hx.strings.collection.OrderedStringMapImpl.keyValueIterator","hx/strings/collection/OrderedStringMap.hx",129,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_132_remove,"hx.strings.collection.OrderedStringMapImpl","remove",0x003dea6e,"hx.strings.collection.OrderedStringMapImpl.remove","hx/strings/collection/OrderedStringMap.hx",132,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_144_set,"hx.strings.collection.OrderedStringMapImpl","set",0x9ee62f38,"hx.strings.collection.OrderedStringMapImpl.set","hx/strings/collection/OrderedStringMap.hx",144,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_7d255cb20afc1832_152_toString,"hx.strings.collection.OrderedStringMapImpl","toString",0x86b37d56,"hx.strings.collection.OrderedStringMapImpl.toString","hx/strings/collection/OrderedStringMap.hx",152,0x8be45a5b)
namespace hx{
namespace strings{
namespace collection{

void OrderedStringMapImpl_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_47_new)
HXLINE(  51)		::Dynamic this1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  51)		this->__map = this1;
HXLINE(  62)		this->_hx___keys = ::Array_obj< ::String >::__new();
HXDLIN(  62)		::haxe::IMap_obj::clear(this->__map);
            	}

Dynamic OrderedStringMapImpl_obj::__CreateEmpty() { return new OrderedStringMapImpl_obj; }

void *OrderedStringMapImpl_obj::_hx_vtable = 0;

Dynamic OrderedStringMapImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OrderedStringMapImpl_obj > _hx_result = new OrderedStringMapImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OrderedStringMapImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x040d8162;
}

static ::haxe::IMap_obj _hx_hx_strings_collection_OrderedStringMapImpl__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::hx::strings::collection::OrderedStringMapImpl_obj::get_a7a2487a,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::hx::strings::collection::OrderedStringMapImpl_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::hx::strings::collection::OrderedStringMapImpl_obj::exists_64bfc92f,
	( bool (::hx::Object::*)( ::Dynamic))&::hx::strings::collection::OrderedStringMapImpl_obj::remove_64bfc92f,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::collection::OrderedStringMapImpl_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::collection::OrderedStringMapImpl_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::collection::OrderedStringMapImpl_obj::keyValueIterator,
	( void (::hx::Object::*)())&::hx::strings::collection::OrderedStringMapImpl_obj::clear,
};

bool OrderedStringMapImpl_obj::remove_64bfc92f( ::Dynamic k) {
			return remove(k);
}

bool OrderedStringMapImpl_obj::exists_64bfc92f( ::Dynamic k) {
			return exists(k);
}

void OrderedStringMapImpl_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}

 ::Dynamic OrderedStringMapImpl_obj::get_a7a2487a( ::Dynamic k) {
			return get(k);
}
void *OrderedStringMapImpl_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_hx_strings_collection_OrderedStringMapImpl__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

int OrderedStringMapImpl_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7d255cb20afc1832_57_get_size)
HXDLIN(  57)		return this->_hx___keys->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,get_size,return )

void OrderedStringMapImpl_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_7d255cb20afc1832_71_clear)
HXLINE(  72)		this->_hx___keys = ::Array_obj< ::String >::__new();
HXLINE(  73)		::haxe::IMap_obj::clear(this->__map);
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,clear,(void))

 ::hx::strings::collection::OrderedStringMapImpl OrderedStringMapImpl_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_83_copy)
HXLINE(  84)		 ::hx::strings::collection::OrderedStringMapImpl clone =  ::hx::strings::collection::OrderedStringMapImpl_obj::__alloc( HX_CTX );
HXLINE(  85)		{
HXLINE(  85)			::Dynamic _g_map = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  85)			 ::Dynamic _g_keys = this->keys();
HXDLIN(  85)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  85)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  85)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN(  85)				::String _g1_key = key;
HXDLIN(  85)				::String k = _g1_key;
HXDLIN(  85)				 ::Dynamic v = _g1_value;
HXLINE(  86)				clone->set(k,v);
            			}
            		}
HXLINE(  87)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,copy,return )

bool OrderedStringMapImpl_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_7d255cb20afc1832_93_exists)
HXDLIN(  93)		return ::haxe::IMap_obj::exists(this->__map,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OrderedStringMapImpl_obj,exists,return )

 ::Dynamic OrderedStringMapImpl_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_7d255cb20afc1832_103_get)
HXDLIN( 103)		return ::haxe::IMap_obj::get(this->__map,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OrderedStringMapImpl_obj,get,return )

bool OrderedStringMapImpl_obj::isEmpty(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_114_isEmpty)
HXDLIN( 114)		return !(( (bool)( ::hx::strings::collection::_OrderedStringMap::ValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this))->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,isEmpty,return )

 ::Dynamic OrderedStringMapImpl_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_119_iterator)
HXDLIN( 119)		return  ::hx::strings::collection::_OrderedStringMap::ValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,iterator,return )

 ::Dynamic OrderedStringMapImpl_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_124_keys)
HXDLIN( 124)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->_hx___keys);
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,keys,return )

 ::Dynamic OrderedStringMapImpl_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_129_keyValueIterator)
HXDLIN( 129)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,keyValueIterator,return )

bool OrderedStringMapImpl_obj::remove(::String key){
            	HX_STACKFRAME(&_hx_pos_7d255cb20afc1832_132_remove)
HXLINE( 133)		if (::haxe::IMap_obj::remove(this->__map,key)) {
HXLINE( 134)			this->_hx___keys->remove(key);
HXLINE( 135)			return true;
            		}
HXLINE( 137)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OrderedStringMapImpl_obj,remove,return )

void OrderedStringMapImpl_obj::set(::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_7d255cb20afc1832_144_set)
HXLINE( 145)		bool isNew = !(::haxe::IMap_obj::exists(this->__map,key));
HXLINE( 146)		::haxe::IMap_obj::set(this->__map,key,value);
HXLINE( 147)		if (isNew) {
HXLINE( 148)			this->_hx___keys->push(key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(OrderedStringMapImpl_obj,set,(void))

::String OrderedStringMapImpl_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_7d255cb20afc1832_152_toString)
HXLINE( 153)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,HX_("{",7b,00,00,00));
HXLINE( 154)		bool isFirst = true;
HXLINE( 155)		{
HXLINE( 155)			::Dynamic _g_map = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 155)			 ::Dynamic _g_keys = this->keys();
HXDLIN( 155)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 155)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 155)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 155)				::String _g1_key = key;
HXDLIN( 155)				::String key1 = _g1_key;
HXDLIN( 155)				 ::Dynamic v = _g1_value;
HXDLIN( 155)				{
HXLINE( 156)					if (isFirst) {
HXLINE( 157)						isFirst = false;
            					}
            					else {
HXLINE( 159)						sb->add(HX_(", ",74,26,00,00));
            					}
HXLINE( 160)					 ::hx::strings::StringBuilder _hx_tmp = sb->add(key1)->add(HX_(" => ",7f,53,55,15));
HXDLIN( 160)					_hx_tmp->add(::Std_obj::string(v));
            				}
            			}
            		}
HXLINE( 162)		sb->add(HX_("}",7d,00,00,00));
HXLINE( 163)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedStringMapImpl_obj,toString,return )


::hx::ObjectPtr< OrderedStringMapImpl_obj > OrderedStringMapImpl_obj::__new() {
	::hx::ObjectPtr< OrderedStringMapImpl_obj > __this = new OrderedStringMapImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OrderedStringMapImpl_obj > OrderedStringMapImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OrderedStringMapImpl_obj *__this = (OrderedStringMapImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OrderedStringMapImpl_obj), true, "hx.strings.collection.OrderedStringMapImpl"));
	*(void **)__this = OrderedStringMapImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OrderedStringMapImpl_obj::OrderedStringMapImpl_obj()
{
}

void OrderedStringMapImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedStringMapImpl);
	HX_MARK_MEMBER_NAME(_hx___keys,"__keys");
	HX_MARK_MEMBER_NAME(__map,"__map");
	HX_MARK_END_CLASS();
}

void OrderedStringMapImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___keys,"__keys");
	HX_VISIT_MEMBER_NAME(__map,"__map");
}

::hx::Val OrderedStringMapImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__map") ) { return ::hx::Val( __map ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__keys") ) { return ::hx::Val( _hx___keys ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OrderedStringMapImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__map") ) { __map=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__keys") ) { _hx___keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OrderedStringMapImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__keys",14,45,ff,f5));
	outFields->push(HX_("__map",7c,6b,2f,f2));
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OrderedStringMapImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OrderedStringMapImpl_obj,_hx___keys),HX_("__keys",14,45,ff,f5)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(OrderedStringMapImpl_obj,__map),HX_("__map",7c,6b,2f,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OrderedStringMapImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String OrderedStringMapImpl_obj_sMemberFields[] = {
	HX_("__keys",14,45,ff,f5),
	HX_("__map",7c,6b,2f,f2),
	HX_("get_size",4a,5c,0e,cc),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("isEmpty",43,de,5f,0c),
	HX_("iterator",ee,49,9a,93),
	HX_("keys",f4,e1,06,47),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class OrderedStringMapImpl_obj::__mClass;

void OrderedStringMapImpl_obj::__register()
{
	OrderedStringMapImpl_obj _hx_dummy;
	OrderedStringMapImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection.OrderedStringMapImpl",04,f1,3f,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OrderedStringMapImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OrderedStringMapImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OrderedStringMapImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OrderedStringMapImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
