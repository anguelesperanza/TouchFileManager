#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_hx_strings_collection_OrderedStringMapImpl
#include <hx/strings/collection/OrderedStringMapImpl.h>
#endif
#ifndef INCLUDED_hx_strings_collection__OrderedStringMap_ValueIterator
#include <hx/strings/collection/_OrderedStringMap/ValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c634338a1cfecdc8_168_new,"hx.strings.collection._OrderedStringMap.ValueIterator","new",0x827cd0ba,"hx.strings.collection._OrderedStringMap.ValueIterator.new","hx/strings/collection/OrderedStringMap.hx",168,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_c634338a1cfecdc8_181_hasNext,"hx.strings.collection._OrderedStringMap.ValueIterator","hasNext",0x34ffdac7,"hx.strings.collection._OrderedStringMap.ValueIterator.hasNext","hx/strings/collection/OrderedStringMap.hx",181,0x8be45a5b)
HX_LOCAL_STACK_FRAME(_hx_pos_c634338a1cfecdc8_186_next,"hx.strings.collection._OrderedStringMap.ValueIterator","next",0xaab9d359,"hx.strings.collection._OrderedStringMap.ValueIterator.next","hx/strings/collection/OrderedStringMap.hx",186,0x8be45a5b)
namespace hx{
namespace strings{
namespace collection{
namespace _OrderedStringMap{

void ValueIterator_obj::__construct( ::hx::strings::collection::OrderedStringMapImpl map){
            	HX_STACKFRAME(&_hx_pos_c634338a1cfecdc8_168_new)
HXLINE( 171)		this->pos = -1;
HXLINE( 176)		this->map = map;
            	}

Dynamic ValueIterator_obj::__CreateEmpty() { return new ValueIterator_obj; }

void *ValueIterator_obj::_hx_vtable = 0;

Dynamic ValueIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValueIterator_obj > _hx_result = new ValueIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValueIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27b14472;
}

bool ValueIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_c634338a1cfecdc8_181_hasNext)
HXDLIN( 181)		return ((this->pos + 1) < this->map->_hx___keys->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValueIterator_obj,hasNext,return )

 ::Dynamic ValueIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_c634338a1cfecdc8_186_next)
HXDLIN( 186)		return ::haxe::IMap_obj::get(this->map->__map,this->map->_hx___keys->__get(++this->pos));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValueIterator_obj,next,return )


::hx::ObjectPtr< ValueIterator_obj > ValueIterator_obj::__new( ::hx::strings::collection::OrderedStringMapImpl map) {
	::hx::ObjectPtr< ValueIterator_obj > __this = new ValueIterator_obj();
	__this->__construct(map);
	return __this;
}

::hx::ObjectPtr< ValueIterator_obj > ValueIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::strings::collection::OrderedStringMapImpl map) {
	ValueIterator_obj *__this = (ValueIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValueIterator_obj), true, "hx.strings.collection._OrderedStringMap.ValueIterator"));
	*(void **)__this = ValueIterator_obj::_hx_vtable;
	__this->__construct(map);
	return __this;
}

ValueIterator_obj::ValueIterator_obj()
{
}

void ValueIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValueIterator);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void ValueIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

::hx::Val ValueIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ValueIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::hx::strings::collection::OrderedStringMapImpl >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ValueIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValueIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::strings::collection::OrderedStringMapImpl */ ,(int)offsetof(ValueIterator_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsInt,(int)offsetof(ValueIterator_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ValueIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ValueIterator_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("pos",94,5d,55,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ValueIterator_obj::__mClass;

void ValueIterator_obj::__register()
{
	ValueIterator_obj _hx_dummy;
	ValueIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.collection._OrderedStringMap.ValueIterator",c8,ab,eb,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValueIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValueIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _OrderedStringMap
