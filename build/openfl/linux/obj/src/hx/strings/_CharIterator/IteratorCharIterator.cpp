#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_IteratorCharIterator
#include <hx/strings/_CharIterator/IteratorCharIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_239ad1591cfeeb91_252_new,"hx.strings._CharIterator.IteratorCharIterator","new",0x0b7b61f9,"hx.strings._CharIterator.IteratorCharIterator.new","hx/strings/CharIterator.hx",252,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_239ad1591cfeeb91_259_isEOF,"hx.strings._CharIterator.IteratorCharIterator","isEOF",0x92acfccb,"hx.strings._CharIterator.IteratorCharIterator.isEOF","hx/strings/CharIterator.hx",259,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_239ad1591cfeeb91_264_getChar,"hx.strings._CharIterator.IteratorCharIterator","getChar",0x7154e0a5,"hx.strings._CharIterator.IteratorCharIterator.getChar","hx/strings/CharIterator.hx",264,0x1504f62e)
namespace hx{
namespace strings{
namespace _CharIterator{

void IteratorCharIterator_obj::__construct( ::Dynamic chars,int prevBufferSize){
            	HX_STACKFRAME(&_hx_pos_239ad1591cfeeb91_252_new)
HXLINE( 253)		super::__construct(prevBufferSize);
HXLINE( 254)		this->chars = chars;
            	}

Dynamic IteratorCharIterator_obj::__CreateEmpty() { return new IteratorCharIterator_obj; }

void *IteratorCharIterator_obj::_hx_vtable = 0;

Dynamic IteratorCharIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IteratorCharIterator_obj > _hx_result = new IteratorCharIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IteratorCharIterator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x59db4936) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x59db4936;
	} else {
		return inClassId==(int)0x69b66667;
	}
}

bool IteratorCharIterator_obj::isEOF(){
            	HX_STACKFRAME(&_hx_pos_239ad1591cfeeb91_259_isEOF)
HXDLIN( 259)		return !(( (bool)(this->chars->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ));
            	}


int IteratorCharIterator_obj::getChar(){
            	HX_STACKFRAME(&_hx_pos_239ad1591cfeeb91_264_getChar)
HXDLIN( 264)		return ( (int)(this->chars->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
            	}



::hx::ObjectPtr< IteratorCharIterator_obj > IteratorCharIterator_obj::__new( ::Dynamic chars,int prevBufferSize) {
	::hx::ObjectPtr< IteratorCharIterator_obj > __this = new IteratorCharIterator_obj();
	__this->__construct(chars,prevBufferSize);
	return __this;
}

::hx::ObjectPtr< IteratorCharIterator_obj > IteratorCharIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic chars,int prevBufferSize) {
	IteratorCharIterator_obj *__this = (IteratorCharIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IteratorCharIterator_obj), true, "hx.strings._CharIterator.IteratorCharIterator"));
	*(void **)__this = IteratorCharIterator_obj::_hx_vtable;
	__this->__construct(chars,prevBufferSize);
	return __this;
}

IteratorCharIterator_obj::IteratorCharIterator_obj()
{
}

void IteratorCharIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IteratorCharIterator);
	HX_MARK_MEMBER_NAME(chars,"chars");
	 ::hx::strings::CharIterator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IteratorCharIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chars,"chars");
	 ::hx::strings::CharIterator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IteratorCharIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { return ::hx::Val( chars ); }
		if (HX_FIELD_EQ(inName,"isEOF") ) { return ::hx::Val( isEOF_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getChar") ) { return ::hx::Val( getChar_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IteratorCharIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IteratorCharIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("chars",dd,9c,b3,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IteratorCharIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(IteratorCharIterator_obj,chars),HX_("chars",dd,9c,b3,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IteratorCharIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String IteratorCharIterator_obj_sMemberFields[] = {
	HX_("chars",dd,9c,b3,45),
	HX_("isEOF",f2,12,4b,c1),
	HX_("getChar",8c,0e,42,14),
	::String(null()) };

::hx::Class IteratorCharIterator_obj::__mClass;

void IteratorCharIterator_obj::__register()
{
	IteratorCharIterator_obj _hx_dummy;
	IteratorCharIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._CharIterator.IteratorCharIterator",87,f1,da,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IteratorCharIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IteratorCharIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IteratorCharIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IteratorCharIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator
