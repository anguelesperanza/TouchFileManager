#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_NullCharIterator
#include <hx/strings/_CharIterator/NullCharIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d3f0cbf0498235f6_214_new,"hx.strings._CharIterator.NullCharIterator","new",0x769e4a12,"hx.strings._CharIterator.NullCharIterator.new","hx/strings/CharIterator.hx",214,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_d3f0cbf0498235f6_219_isEOF,"hx.strings._CharIterator.NullCharIterator","isEOF",0x3a6cdd24,"hx.strings._CharIterator.NullCharIterator.isEOF","hx/strings/CharIterator.hx",219,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_d3f0cbf0498235f6_210_boot,"hx.strings._CharIterator.NullCharIterator","boot",0x4bfb8640,"hx.strings._CharIterator.NullCharIterator.boot","hx/strings/CharIterator.hx",210,0x1504f62e)
namespace hx{
namespace strings{
namespace _CharIterator{

void NullCharIterator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d3f0cbf0498235f6_214_new)
HXDLIN( 214)		super::__construct(0);
            	}

Dynamic NullCharIterator_obj::__CreateEmpty() { return new NullCharIterator_obj; }

void *NullCharIterator_obj::_hx_vtable = 0;

Dynamic NullCharIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NullCharIterator_obj > _hx_result = new NullCharIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NullCharIterator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x59db4936) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x59db4936;
	} else {
		return inClassId==(int)0x6784a69c;
	}
}

bool NullCharIterator_obj::isEOF(){
            	HX_STACKFRAME(&_hx_pos_d3f0cbf0498235f6_219_isEOF)
HXDLIN( 219)		return true;
            	}


 ::hx::strings::_CharIterator::NullCharIterator NullCharIterator_obj::INSTANCE;


::hx::ObjectPtr< NullCharIterator_obj > NullCharIterator_obj::__new() {
	::hx::ObjectPtr< NullCharIterator_obj > __this = new NullCharIterator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NullCharIterator_obj > NullCharIterator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NullCharIterator_obj *__this = (NullCharIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NullCharIterator_obj), true, "hx.strings._CharIterator.NullCharIterator"));
	*(void **)__this = NullCharIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NullCharIterator_obj::NullCharIterator_obj()
{
}

::hx::Val NullCharIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isEOF") ) { return ::hx::Val( isEOF_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NullCharIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"INSTANCE") ) { outValue = ( INSTANCE ); return true; }
	}
	return false;
}

bool NullCharIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"INSTANCE") ) { INSTANCE=ioValue.Cast<  ::hx::strings::_CharIterator::NullCharIterator >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NullCharIterator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NullCharIterator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hx::strings::_CharIterator::NullCharIterator */ ,(void *) &NullCharIterator_obj::INSTANCE,HX_("INSTANCE",95,af,66,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NullCharIterator_obj_sMemberFields[] = {
	HX_("isEOF",f2,12,4b,c1),
	::String(null()) };

static void NullCharIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NullCharIterator_obj::INSTANCE,"INSTANCE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NullCharIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NullCharIterator_obj::INSTANCE,"INSTANCE");
};

#endif

::hx::Class NullCharIterator_obj::__mClass;

static ::String NullCharIterator_obj_sStaticFields[] = {
	HX_("INSTANCE",95,af,66,b3),
	::String(null())
};

void NullCharIterator_obj::__register()
{
	NullCharIterator_obj _hx_dummy;
	NullCharIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._CharIterator.NullCharIterator",20,99,cf,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NullCharIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &NullCharIterator_obj::__SetStatic;
	__mClass->mMarkFunc = NullCharIterator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NullCharIterator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NullCharIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NullCharIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NullCharIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NullCharIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NullCharIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NullCharIterator_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d3f0cbf0498235f6_210_boot)
HXDLIN( 210)		INSTANCE =  ::hx::strings::_CharIterator::NullCharIterator_obj::__alloc( HX_CTX );
            	}
}

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator
