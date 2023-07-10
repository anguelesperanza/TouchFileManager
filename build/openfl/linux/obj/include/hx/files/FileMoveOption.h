#ifndef INCLUDED_hx_files_FileMoveOption
#define INCLUDED_hx_files_FileMoveOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,FileMoveOption)
namespace hx{
namespace files{


class FileMoveOption_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileMoveOption_obj OBJ_;

	public:
		FileMoveOption_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.FileMoveOption",57,b1,00,6f); }
		::String __ToString() const { return HX_("FileMoveOption.",cc,16,4d,90) + _hx_tag; }

		static ::hx::files::FileMoveOption NO_WHITESPACE_TRIMMING;
		static inline ::hx::files::FileMoveOption NO_WHITESPACE_TRIMMING_dyn() { return NO_WHITESPACE_TRIMMING; }
		static ::hx::files::FileMoveOption OVERWRITE;
		static inline ::hx::files::FileMoveOption OVERWRITE_dyn() { return OVERWRITE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_FileMoveOption */ 
