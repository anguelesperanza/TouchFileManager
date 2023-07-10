#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharPos
#include <hx/strings/CharPos.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_CharWithPos
#include <hx/strings/_CharIterator/CharWithPos.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c2c1e05a45d1a03_200_new,"hx.strings._CharIterator.CharWithPos","new",0x8a6cb875,"hx.strings._CharIterator.CharWithPos.new","hx/strings/CharIterator.hx",200,0x1504f62e)
namespace hx{
namespace strings{
namespace _CharIterator{

void CharWithPos_obj::__construct(int _hx_char,int index,int line,int col){
            	HX_STACKFRAME(&_hx_pos_4c2c1e05a45d1a03_200_new)
HXLINE( 201)		super::__construct(index,line,col);
HXLINE( 202)		this->_hx_char = _hx_char;
            	}

Dynamic CharWithPos_obj::__CreateEmpty() { return new CharWithPos_obj; }

void *CharWithPos_obj::_hx_vtable = 0;

Dynamic CharWithPos_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharWithPos_obj > _hx_result = new CharWithPos_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CharWithPos_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c74bc40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c74bc40;
	} else {
		return inClassId==(int)0x4f2f0123;
	}
}


CharWithPos_obj::CharWithPos_obj()
{
}

::hx::Val CharWithPos_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharWithPos_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharWithPos_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("char",d6,5e,bf,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharWithPos_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CharWithPos_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharWithPos_obj_sStaticStorageInfo = 0;
#endif

static ::String CharWithPos_obj_sMemberFields[] = {
	HX_("char",d6,5e,bf,41),
	::String(null()) };

::hx::Class CharWithPos_obj::__mClass;

void CharWithPos_obj::__register()
{
	CharWithPos_obj _hx_dummy;
	CharWithPos_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._CharIterator.CharWithPos",03,5a,48,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharWithPos_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharWithPos_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharWithPos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharWithPos_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator
