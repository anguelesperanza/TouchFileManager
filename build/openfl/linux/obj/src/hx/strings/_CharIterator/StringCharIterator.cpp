#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_StringCharIterator
#include <hx/strings/_CharIterator/StringCharIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_785ea054742048e2_395_new,"hx.strings._CharIterator.StringCharIterator","new",0x3166579c,"hx.strings._CharIterator.StringCharIterator.new","hx/strings/CharIterator.hx",395,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_785ea054742048e2_404_isEOF,"hx.strings._CharIterator.StringCharIterator","isEOF",0x417ae12e,"hx.strings._CharIterator.StringCharIterator.isEOF","hx/strings/CharIterator.hx",404,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_785ea054742048e2_409_getChar,"hx.strings._CharIterator.StringCharIterator","getChar",0xdaaee3c8,"hx.strings._CharIterator.StringCharIterator.getChar","hx/strings/CharIterator.hx",409,0x1504f62e)
namespace hx{
namespace strings{
namespace _CharIterator{

void StringCharIterator_obj::__construct(::String chars,int prevBufferSize){
            	HX_STACKFRAME(&_hx_pos_785ea054742048e2_395_new)
HXLINE( 396)		super::__construct(prevBufferSize);
HXLINE( 397)		this->chars = chars;
HXLINE( 398)		int _hx_tmp;
HXDLIN( 398)		if (::hx::IsNull( chars )) {
HXLINE( 398)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 398)			_hx_tmp = chars.length;
            		}
HXDLIN( 398)		this->charsMaxIndex = (_hx_tmp - 1);
            	}

Dynamic StringCharIterator_obj::__CreateEmpty() { return new StringCharIterator_obj; }

void *StringCharIterator_obj::_hx_vtable = 0;

Dynamic StringCharIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringCharIterator_obj > _hx_result = new StringCharIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StringCharIterator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x207bfe26) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x207bfe26;
	} else {
		return inClassId==(int)0x59db4936;
	}
}

bool StringCharIterator_obj::isEOF(){
            	HX_STACKFRAME(&_hx_pos_785ea054742048e2_404_isEOF)
HXDLIN( 404)		return (this->index >= this->charsMaxIndex);
            	}


int StringCharIterator_obj::getChar(){
            	HX_STACKFRAME(&_hx_pos_785ea054742048e2_409_getChar)
HXDLIN( 409)		return ( (int)(this->chars.charCodeAt(this->index)) );
            	}



::hx::ObjectPtr< StringCharIterator_obj > StringCharIterator_obj::__new(::String chars,int prevBufferSize) {
	::hx::ObjectPtr< StringCharIterator_obj > __this = new StringCharIterator_obj();
	__this->__construct(chars,prevBufferSize);
	return __this;
}

::hx::ObjectPtr< StringCharIterator_obj > StringCharIterator_obj::__alloc(::hx::Ctx *_hx_ctx,::String chars,int prevBufferSize) {
	StringCharIterator_obj *__this = (StringCharIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringCharIterator_obj), true, "hx.strings._CharIterator.StringCharIterator"));
	*(void **)__this = StringCharIterator_obj::_hx_vtable;
	__this->__construct(chars,prevBufferSize);
	return __this;
}

StringCharIterator_obj::StringCharIterator_obj()
{
}

void StringCharIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringCharIterator);
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(charsMaxIndex,"charsMaxIndex");
	 ::hx::strings::CharIterator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StringCharIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(charsMaxIndex,"charsMaxIndex");
	 ::hx::strings::CharIterator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StringCharIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val StringCharIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"charsMaxIndex") ) { charsMaxIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringCharIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("chars",dd,9c,b3,45));
	outFields->push(HX_("charsMaxIndex",cb,eb,fa,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringCharIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StringCharIterator_obj,chars),HX_("chars",dd,9c,b3,45)},
	{::hx::fsInt,(int)offsetof(StringCharIterator_obj,charsMaxIndex),HX_("charsMaxIndex",cb,eb,fa,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringCharIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String StringCharIterator_obj_sMemberFields[] = {
	HX_("chars",dd,9c,b3,45),
	HX_("charsMaxIndex",cb,eb,fa,28),
	HX_("isEOF",f2,12,4b,c1),
	HX_("getChar",8c,0e,42,14),
	::String(null()) };

::hx::Class StringCharIterator_obj::__mClass;

void StringCharIterator_obj::__register()
{
	StringCharIterator_obj _hx_dummy;
	StringCharIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._CharIterator.StringCharIterator",aa,99,4b,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringCharIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringCharIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringCharIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringCharIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator
