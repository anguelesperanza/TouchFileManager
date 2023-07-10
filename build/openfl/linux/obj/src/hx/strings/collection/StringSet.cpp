#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hx_strings_collection_StringSet
#include <hx/strings/collection/StringSet.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9955053dada0979_18_new,"hx.strings.collection.StringSet","new",0xb774b51d,"hx.strings.collection.StringSet.new","hx/strings/collection/StringSet.hx",18,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_44__initMap,"hx.strings.collection.StringSet","_initMap",0x69d9f910,"hx.strings.collection.StringSet._initMap","hx/strings/collection/StringSet.hx",44,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_56_add,"hx.strings.collection.StringSet","add",0xb76ad6de,"hx.strings.collection.StringSet.add","hx/strings/collection/StringSet.hx",56,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_79_addAll,"hx.strings.collection.StringSet","addAll",0x4d6df8e3,"hx.strings.collection.StringSet.addAll","hx/strings/collection/StringSet.hx",79,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_110_clear,"hx.strings.collection.StringSet","clear",0xb50cbf8a,"hx.strings.collection.StringSet.clear","hx/strings/collection/StringSet.hx",110,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_125_contains,"hx.strings.collection.StringSet","contains",0x91132842,"hx.strings.collection.StringSet.contains","hx/strings/collection/StringSet.hx",125,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_137_isEmpty,"hx.strings.collection.StringSet","isEmpty",0x027e6580,"hx.strings.collection.StringSet.isEmpty","hx/strings/collection/StringSet.hx",137,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_145_iterator,"hx.strings.collection.StringSet","iterator",0xf8321811,"hx.strings.collection.StringSet.iterator","hx/strings/collection/StringSet.hx",145,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_158_remove,"hx.strings.collection.StringSet","remove",0xb2fb8ba7,"hx.strings.collection.StringSet.remove","hx/strings/collection/StringSet.hx",158,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_179_toArray,"hx.strings.collection.StringSet","toArray",0xe832415b,"hx.strings.collection.StringSet.toArray","hx/strings/collection/StringSet.hx",179,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_190_toString,"hx.strings.collection.StringSet","toString",0x9d069ecf,"hx.strings.collection.StringSet.toString","hx/strings/collection/StringSet.hx",190,0xc1df11b2)
HX_LOCAL_STACK_FRAME(_hx_pos_d9955053dada0979_20_boot,"hx.strings.collection.StringSet","boot",0xc6c2c4d5,"hx.strings.collection.StringSet.boot","hx/strings/collection/StringSet.hx",20,0xc1df11b2)
namespace hx{
namespace strings{
namespace collection{

void StringSet_obj::__construct( ::hx::strings::internal::_Either2::_Either2 initialItems){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_18_new)
HXLINE(  31)		this->size = 0;
HXLINE(  22)		this->map = ::hx::strings::collection::StringSet_obj::EMPTY_MAP;
HXLINE(  36)		this->_initMap();
HXLINE(  38)		if (::hx::IsNotNull( initialItems )) {
HXLINE(  39)			this->addAll(initialItems);
            		}
            	}

Dynamic StringSet_obj::__CreateEmpty() { return new StringSet_obj; }

void *StringSet_obj::_hx_vtable = 0;

Dynamic StringSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringSet_obj > _hx_result = new StringSet_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StringSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f3dc729;
}

void StringSet_obj::_initMap(){
            	HX_GC_STACKFRAME(&_hx_pos_d9955053dada0979_44__initMap)
HXDLIN(  44)		::Dynamic this1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  44)		this->map = this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringSet_obj,_initMap,(void))

bool StringSet_obj::add(::String item){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_56_add)
HXLINE(  57)		if (::hx::IsNull( item )) {
HXLINE(  58)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[item] must not be null!",10,20,2b,19)));
            		}
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		if (::hx::IsNull( item )) {
HXLINE(  60)			_hx_tmp = false;
            		}
            		else {
HXLINE(  60)			_hx_tmp = ::haxe::IMap_obj::exists(this->map,item);
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  61)			return false;
            		}
HXLINE(  63)		::haxe::IMap_obj::set(this->map,item,true);
HXLINE(  64)		this->size++;
HXLINE(  65)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringSet_obj,add,return )

int StringSet_obj::addAll( ::hx::strings::internal::_Either2::_Either2 items){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_79_addAll)
HXLINE(  80)		if (::hx::IsNull( items )) {
HXLINE(  81)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[items] must not be null!",99,af,60,2f)));
            		}
HXLINE(  83)		int count = 0;
HXLINE(  84)		{
HXLINE(  84)			 ::hx::strings::internal::_Either2::_Either2 _g = items;
HXDLIN(  84)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  85)					 ::hx::strings::collection::StringSet set = ( ( ::hx::strings::collection::StringSet)(_g->_hx_getObject(0)) );
HXDLIN(  85)					{
HXLINE(  86)						if (::hx::IsNull( set )) {
HXLINE(  87)							return 0;
            						}
HXLINE(  88)						{
HXLINE(  88)							 ::Dynamic str = ::haxe::IMap_obj::keys(set->map);
HXDLIN(  88)							while(( (bool)(str->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  88)								::String str1 = ( (::String)(str->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  89)								bool _hx_tmp;
HXDLIN(  89)								if (::hx::IsNotNull( str1 )) {
HXLINE(  89)									_hx_tmp = this->add(str1);
            								}
            								else {
HXLINE(  89)									_hx_tmp = false;
            								}
HXDLIN(  89)								if (_hx_tmp) {
HXLINE(  90)									count = (count + 1);
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  93)					::Array< ::String > array = ( (::Array< ::String >)(_g->_hx_getObject(0)) );
HXDLIN(  93)					{
HXLINE(  94)						if (::hx::IsNull( array )) {
HXLINE(  95)							return 0;
            						}
HXLINE(  96)						{
HXLINE(  96)							int _g1 = 0;
HXDLIN(  96)							while((_g1 < array->length)){
HXLINE(  96)								::String str = array->__get(_g1);
HXDLIN(  96)								_g1 = (_g1 + 1);
HXLINE(  97)								bool _hx_tmp;
HXDLIN(  97)								if (::hx::IsNotNull( str )) {
HXLINE(  97)									_hx_tmp = this->add(str);
            								}
            								else {
HXLINE(  97)									_hx_tmp = false;
            								}
HXDLIN(  97)								if (_hx_tmp) {
HXLINE(  98)									count = (count + 1);
            								}
            							}
            						}
            					}
            				}
            				break;
            			}
            		}
HXLINE( 101)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringSet_obj,addAll,return )

void StringSet_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_110_clear)
HXDLIN( 110)		::haxe::IMap_obj::clear(this->map);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringSet_obj,clear,(void))

bool StringSet_obj::contains(::String item){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_125_contains)
HXDLIN( 125)		if (::hx::IsNull( item )) {
HXDLIN( 125)			return false;
            		}
            		else {
HXDLIN( 125)			return ::haxe::IMap_obj::exists(this->map,item);
            		}
HXDLIN( 125)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringSet_obj,contains,return )

bool StringSet_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_137_isEmpty)
HXDLIN( 137)		return (this->size == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringSet_obj,isEmpty,return )

 ::Dynamic StringSet_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_145_iterator)
HXDLIN( 145)		return ::haxe::IMap_obj::keys(this->map);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringSet_obj,iterator,return )

bool StringSet_obj::remove(::String item){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_158_remove)
HXLINE( 159)		if (::hx::IsNull( item )) {
HXLINE( 160)			return false;
            		}
HXLINE( 162)		if (::haxe::IMap_obj::remove(this->map,item)) {
HXLINE( 163)			this->size--;
HXLINE( 164)			return true;
            		}
HXLINE( 166)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringSet_obj,remove,return )

::Array< ::String > StringSet_obj::toArray(){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_179_toArray)
HXDLIN( 179)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 179)		{
HXDLIN( 179)			 ::Dynamic k = ::haxe::IMap_obj::keys(this->map);
HXDLIN( 179)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 179)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 179)				_g->push(k1);
            			}
            		}
HXDLIN( 179)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringSet_obj,toArray,return )

::String StringSet_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_190_toString)
HXLINE( 191)		if ((this->size == 0)) {
HXLINE( 191)			return HX_("[]",a2,4f,00,00);
            		}
HXLINE( 192)		return ((HX_("[ \"",1d,29,45,00) + this->toArray()->join(HX_("\", \"",4c,c0,9a,16))) + HX_("\" ]",df,e8,19,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringSet_obj,toString,return )

::Dynamic StringSet_obj::EMPTY_MAP;


::hx::ObjectPtr< StringSet_obj > StringSet_obj::__new( ::hx::strings::internal::_Either2::_Either2 initialItems) {
	::hx::ObjectPtr< StringSet_obj > __this = new StringSet_obj();
	__this->__construct(initialItems);
	return __this;
}

::hx::ObjectPtr< StringSet_obj > StringSet_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::strings::internal::_Either2::_Either2 initialItems) {
	StringSet_obj *__this = (StringSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringSet_obj), true, "hx.strings.collection.StringSet"));
	*(void **)__this = StringSet_obj::_hx_vtable;
	__this->__construct(initialItems);
	return __this;
}

StringSet_obj::StringSet_obj()
{
}

void StringSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringSet);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void StringSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(size,"size");
}

::hx::Val StringSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addAll") ) { return ::hx::Val( addAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return ::hx::Val( toArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_initMap") ) { return ::hx::Val( _initMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StringSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"EMPTY_MAP") ) { outValue = ( EMPTY_MAP ); return true; }
	}
	return false;
}

::hx::Val StringSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StringSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"EMPTY_MAP") ) { EMPTY_MAP=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

void StringSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringSet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(StringSet_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsInt,(int)offsetof(StringSet_obj,size),HX_("size",c1,a0,53,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StringSet_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &StringSet_obj::EMPTY_MAP,HX_("EMPTY_MAP",6a,98,9c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StringSet_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("size",c1,a0,53,4c),
	HX_("_initMap",ed,2a,42,05),
	HX_("add",21,f2,49,00),
	HX_("addAll",80,09,fb,9e),
	HX_("clear",8d,71,5b,48),
	HX_("contains",1f,5a,7b,2c),
	HX_("isEmpty",43,de,5f,0c),
	HX_("iterator",ee,49,9a,93),
	HX_("remove",44,9c,88,04),
	HX_("toArray",1e,ba,13,f2),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void StringSet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringSet_obj::EMPTY_MAP,"EMPTY_MAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringSet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringSet_obj::EMPTY_MAP,"EMPTY_MAP");
};

#endif

::hx::Class StringSet_obj::__mClass;

static ::String StringSet_obj_sStaticFields[] = {
	HX_("EMPTY_MAP",6a,98,9c,21),
	::String(null())
};

void StringSet_obj::__register()
{
	StringSet_obj _hx_dummy;
	StringSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection.StringSet",ab,e2,1a,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringSet_obj::__GetStatic;
	__mClass->mSetStaticField = &StringSet_obj::__SetStatic;
	__mClass->mMarkFunc = StringSet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringSet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringSet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StringSet_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_d9955053dada0979_20_boot)
HXDLIN(  20)			::Dynamic this1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  20)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d9955053dada0979_20_boot)
HXDLIN(  20)		EMPTY_MAP =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
