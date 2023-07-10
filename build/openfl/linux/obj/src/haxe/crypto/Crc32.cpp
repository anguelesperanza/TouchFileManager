#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Crc32
#include <haxe/crypto/Crc32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d37909b7f6cfbea9_59_make,"haxe.crypto.Crc32","make",0x7d9f2fae,"haxe.crypto.Crc32.make","/usr/share/haxe/std/haxe/crypto/Crc32.hx",59,0x64b1ac2b)
namespace haxe{
namespace crypto{

void Crc32_obj::__construct() { }

Dynamic Crc32_obj::__CreateEmpty() { return new Crc32_obj; }

void *Crc32_obj::_hx_vtable = 0;

Dynamic Crc32_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Crc32_obj > _hx_result = new Crc32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Crc32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7617df8c;
}

int Crc32_obj::make( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_d37909b7f6cfbea9_59_make)
HXLINE(  60)		int c_crc = -1;
HXLINE(  61)		{
HXLINE(  61)			::Array< unsigned char > b = data->b;
HXDLIN(  61)			{
HXLINE(  61)				int _g = 0;
HXDLIN(  61)				int _g1 = data->length;
HXDLIN(  61)				while((_g < _g1)){
HXLINE(  61)					_g = (_g + 1);
HXDLIN(  61)					int i = (_g - 1);
HXDLIN(  61)					int tmp = ((c_crc ^ ( (int)(_hx_array_unsafe_get(b,i)) )) & 255);
HXDLIN(  61)					{
HXLINE(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
            					}
HXLINE(  61)					c_crc = (::hx::UShr(c_crc,8) ^ tmp);
            				}
            			}
            		}
HXLINE(  62)		return (c_crc ^ -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Crc32_obj,make,return )


Crc32_obj::Crc32_obj()
{
}

bool Crc32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Crc32_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Crc32_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Crc32_obj::__mClass;

static ::String Crc32_obj_sStaticFields[] = {
	HX_("make",ee,39,56,48),
	::String(null())
};

void Crc32_obj::__register()
{
	Crc32_obj _hx_dummy;
	Crc32_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.crypto.Crc32",ae,42,af,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crc32_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Crc32_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Crc32_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Crc32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Crc32_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
