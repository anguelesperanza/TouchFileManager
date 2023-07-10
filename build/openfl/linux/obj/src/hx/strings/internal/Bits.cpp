#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal_Bits
#include <hx/strings/internal/Bits.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8aa286964f949adf_21_clearBit,"hx.strings.internal.Bits","clearBit",0x54c006a1,"hx.strings.internal.Bits.clearBit","hx/strings/internal/Bits.hx",21,0x7921fcd2)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa286964f949adf_32_setBit,"hx.strings.internal.Bits","setBit",0x8092cd6c,"hx.strings.internal.Bits.setBit","hx/strings/internal/Bits.hx",32,0x7921fcd2)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa286964f949adf_43_toggleBit,"hx.strings.internal.Bits","toggleBit",0xdcd18918,"hx.strings.internal.Bits.toggleBit","hx/strings/internal/Bits.hx",43,0x7921fcd2)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa286964f949adf_56_getBit,"hx.strings.internal.Bits","getBit",0xb44a78f8,"hx.strings.internal.Bits.getBit","hx/strings/internal/Bits.hx",56,0x7921fcd2)
namespace hx{
namespace strings{
namespace internal{

void Bits_obj::__construct() { }

Dynamic Bits_obj::__CreateEmpty() { return new Bits_obj; }

void *Bits_obj::_hx_vtable = 0;

Dynamic Bits_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bits_obj > _hx_result = new Bits_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Bits_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e508ae9;
}

int Bits_obj::clearBit(int num,int bitPos){
            	HX_STACKFRAME(&_hx_pos_8aa286964f949adf_21_clearBit)
HXDLIN(  21)		return (num & ~((1 << (bitPos - 1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bits_obj,clearBit,return )

int Bits_obj::setBit(int num,int bitPos){
            	HX_STACKFRAME(&_hx_pos_8aa286964f949adf_32_setBit)
HXDLIN(  32)		return (num | (1 << (bitPos - 1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bits_obj,setBit,return )

int Bits_obj::toggleBit(int num,int bitPos){
            	HX_STACKFRAME(&_hx_pos_8aa286964f949adf_43_toggleBit)
HXDLIN(  43)		return (num ^ (1 << (bitPos - 1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bits_obj,toggleBit,return )

bool Bits_obj::getBit(int num,int bitPos){
            	HX_STACKFRAME(&_hx_pos_8aa286964f949adf_56_getBit)
HXDLIN(  56)		return (1 == ((num >> (bitPos - 1)) & 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bits_obj,getBit,return )


Bits_obj::Bits_obj()
{
}

bool Bits_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"setBit") ) { outValue = setBit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBit") ) { outValue = getBit_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clearBit") ) { outValue = clearBit_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleBit") ) { outValue = toggleBit_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Bits_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Bits_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Bits_obj::__mClass;

static ::String Bits_obj_sStaticFields[] = {
	HX_("clearBit",40,b5,06,31),
	HX_("setBit",4b,46,62,6f),
	HX_("toggleBit",99,a5,63,be),
	HX_("getBit",d7,f1,19,a3),
	::String(null())
};

void Bits_obj::__register()
{
	Bits_obj _hx_dummy;
	Bits_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal.Bits",2d,bf,6e,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bits_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Bits_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Bits_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bits_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bits_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
