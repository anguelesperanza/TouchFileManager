#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharPos
#include <hx/strings/CharPos.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_343c8e38fe80fc32_4272_new,"hx.strings.CharPos","new",0x7dfab3e6,"hx.strings.CharPos.new","hx/strings/Strings.hx",4272,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_343c8e38fe80fc32_4300_toString,"hx.strings.CharPos","toString",0x17c36766,"hx.strings.CharPos.toString","hx/strings/Strings.hx",4300,0x74f74a28)
namespace hx{
namespace strings{

void CharPos_obj::__construct(int index,int line,int col){
            	HX_STACKFRAME(&_hx_pos_343c8e38fe80fc32_4272_new)
HXLINE(4273)		this->index = index;
HXLINE(4274)		this->line = line;
HXLINE(4275)		this->col = col;
            	}

Dynamic CharPos_obj::__CreateEmpty() { return new CharPos_obj; }

void *CharPos_obj::_hx_vtable = 0;

Dynamic CharPos_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharPos_obj > _hx_result = new CharPos_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CharPos_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c74bc40;
}

::String CharPos_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_343c8e38fe80fc32_4300_toString)
HXDLIN(4300)		return ((((((HX_("CharPos[index=",08,a7,d3,31) + this->index) + HX_(", line=",d5,d2,1d,66)) + this->line) + HX_(", col=",71,28,4b,46)) + this->col) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharPos_obj,toString,return )


CharPos_obj::CharPos_obj()
{
}

::hx::Val CharPos_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { return ::hx::Val( col ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharPos_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { col=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharPos_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("col",40,80,4b,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharPos_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CharPos_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(CharPos_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsInt,(int)offsetof(CharPos_obj,col),HX_("col",40,80,4b,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharPos_obj_sStaticStorageInfo = 0;
#endif

static ::String CharPos_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("line",f4,17,b3,47),
	HX_("col",40,80,4b,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class CharPos_obj::__mClass;

void CharPos_obj::__register()
{
	CharPos_obj _hx_dummy;
	CharPos_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.CharPos",f4,88,15,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharPos_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharPos_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharPos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharPos_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
