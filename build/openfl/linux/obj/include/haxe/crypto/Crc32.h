#ifndef INCLUDED_haxe_crypto_Crc32
#define INCLUDED_haxe_crypto_Crc32

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Crc32)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Crc32_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Crc32_obj OBJ_;
		Crc32_obj();

	public:
		enum { _hx_ClassId = 0x7617df8c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Crc32")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.crypto.Crc32"); }

		inline static ::hx::ObjectPtr< Crc32_obj > __new() {
			::hx::ObjectPtr< Crc32_obj > __this = new Crc32_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Crc32_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Crc32_obj *__this = (Crc32_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Crc32_obj), false, "haxe.crypto.Crc32"));
			*(void **)__this = Crc32_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Crc32_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Crc32",53,7c,7e,df); }

		static int make( ::haxe::io::Bytes data);
		static ::Dynamic make_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Crc32 */ 
