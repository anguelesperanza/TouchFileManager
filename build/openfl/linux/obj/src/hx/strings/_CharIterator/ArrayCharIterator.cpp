#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_ArrayCharIterator
#include <hx/strings/_CharIterator/ArrayCharIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a83acc06c24d0261_229_new,"hx.strings._CharIterator.ArrayCharIterator","new",0x30e2f85a,"hx.strings._CharIterator.ArrayCharIterator.new","hx/strings/CharIterator.hx",229,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_a83acc06c24d0261_238_isEOF,"hx.strings._CharIterator.ArrayCharIterator","isEOF",0x91efad6c,"hx.strings._CharIterator.ArrayCharIterator.isEOF","hx/strings/CharIterator.hx",238,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_a83acc06c24d0261_243_getChar,"hx.strings._CharIterator.ArrayCharIterator","getChar",0xcb1dbb86,"hx.strings._CharIterator.ArrayCharIterator.getChar","hx/strings/CharIterator.hx",243,0x1504f62e)
namespace hx{
namespace strings{
namespace _CharIterator{

void ArrayCharIterator_obj::__construct(::Array< int > chars,int prevBufferSize){
            	HX_STACKFRAME(&_hx_pos_a83acc06c24d0261_229_new)
HXLINE( 230)		super::__construct(prevBufferSize);
HXLINE( 231)		this->chars = chars;
HXLINE( 232)		this->charsMaxIndex = (chars->length - 1);
            	}

Dynamic ArrayCharIterator_obj::__CreateEmpty() { return new ArrayCharIterator_obj; }

void *ArrayCharIterator_obj::_hx_vtable = 0;

Dynamic ArrayCharIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayCharIterator_obj > _hx_result = new ArrayCharIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ArrayCharIterator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x59db4936) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x59db4936;
	} else {
		return inClassId==(int)0x6fb4426c;
	}
}

bool ArrayCharIterator_obj::isEOF(){
            	HX_STACKFRAME(&_hx_pos_a83acc06c24d0261_238_isEOF)
HXDLIN( 238)		return (this->index >= this->charsMaxIndex);
            	}


int ArrayCharIterator_obj::getChar(){
            	HX_STACKFRAME(&_hx_pos_a83acc06c24d0261_243_getChar)
HXDLIN( 243)		return this->chars->__get(this->index);
            	}



::hx::ObjectPtr< ArrayCharIterator_obj > ArrayCharIterator_obj::__new(::Array< int > chars,int prevBufferSize) {
	::hx::ObjectPtr< ArrayCharIterator_obj > __this = new ArrayCharIterator_obj();
	__this->__construct(chars,prevBufferSize);
	return __this;
}

::hx::ObjectPtr< ArrayCharIterator_obj > ArrayCharIterator_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< int > chars,int prevBufferSize) {
	ArrayCharIterator_obj *__this = (ArrayCharIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayCharIterator_obj), true, "hx.strings._CharIterator.ArrayCharIterator"));
	*(void **)__this = ArrayCharIterator_obj::_hx_vtable;
	__this->__construct(chars,prevBufferSize);
	return __this;
}

ArrayCharIterator_obj::ArrayCharIterator_obj()
{
}

void ArrayCharIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayCharIterator);
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(charsMaxIndex,"charsMaxIndex");
	 ::hx::strings::CharIterator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayCharIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(charsMaxIndex,"charsMaxIndex");
	 ::hx::strings::CharIterator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ArrayCharIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { return ::hx::Val( chars ); }
		if (HX_FIELD_EQ(inName,"isEOF") ) { return ::hx::Val( isEOF_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getChar") ) { return ::hx::Val( getChar_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"charsMaxIndex") ) { return ::hx::Val( charsMaxIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayCharIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"charsMaxIndex") ) { charsMaxIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayCharIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("chars",dd,9c,b3,45));
	outFields->push(HX_("charsMaxIndex",cb,eb,fa,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayCharIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ArrayCharIterator_obj,chars),HX_("chars",dd,9c,b3,45)},
	{::hx::fsInt,(int)offsetof(ArrayCharIterator_obj,charsMaxIndex),HX_("charsMaxIndex",cb,eb,fa,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayCharIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayCharIterator_obj_sMemberFields[] = {
	HX_("chars",dd,9c,b3,45),
	HX_("charsMaxIndex",cb,eb,fa,28),
	HX_("isEOF",f2,12,4b,c1),
	HX_("getChar",8c,0e,42,14),
	::String(null()) };

::hx::Class ArrayCharIterator_obj::__mClass;

void ArrayCharIterator_obj::__register()
{
	ArrayCharIterator_obj _hx_dummy;
	ArrayCharIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._CharIterator.ArrayCharIterator",68,83,fd,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayCharIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayCharIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayCharIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayCharIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator
