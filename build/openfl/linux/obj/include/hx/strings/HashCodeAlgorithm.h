#ifndef INCLUDED_hx_strings_HashCodeAlgorithm
#define INCLUDED_hx_strings_HashCodeAlgorithm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,strings,HashCodeAlgorithm)
namespace hx{
namespace strings{


class HashCodeAlgorithm_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef HashCodeAlgorithm_obj OBJ_;

	public:
		HashCodeAlgorithm_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.strings.HashCodeAlgorithm",ea,e4,ff,74); }
		::String __ToString() const { return HX_("HashCodeAlgorithm.",fa,b8,4c,b6) + _hx_tag; }

		static ::hx::strings::HashCodeAlgorithm ADLER32;
		static inline ::hx::strings::HashCodeAlgorithm ADLER32_dyn() { return ADLER32; }
		static ::hx::strings::HashCodeAlgorithm CRC32B;
		static inline ::hx::strings::HashCodeAlgorithm CRC32B_dyn() { return CRC32B; }
		static ::hx::strings::HashCodeAlgorithm DJB2A;
		static inline ::hx::strings::HashCodeAlgorithm DJB2A_dyn() { return DJB2A; }
		static ::hx::strings::HashCodeAlgorithm JAVA;
		static inline ::hx::strings::HashCodeAlgorithm JAVA_dyn() { return JAVA; }
		static ::hx::strings::HashCodeAlgorithm PLATFORM_SPECIFIC;
		static inline ::hx::strings::HashCodeAlgorithm PLATFORM_SPECIFIC_dyn() { return PLATFORM_SPECIFIC; }
		static ::hx::strings::HashCodeAlgorithm SDBM;
		static inline ::hx::strings::HashCodeAlgorithm SDBM_dyn() { return SDBM; }
};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_HashCodeAlgorithm */ 
