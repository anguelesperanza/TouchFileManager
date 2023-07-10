#ifndef INCLUDED_hx_files_FileCopyOption
#define INCLUDED_hx_files_FileCopyOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,FileCopyOption)
namespace hx{
namespace files{


class FileCopyOption_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileCopyOption_obj OBJ_;

	public:
		FileCopyOption_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.FileCopyOption",fb,9c,96,d4); }
		::String __ToString() const { return HX_("FileCopyOption.",a8,5a,e5,0d) + _hx_tag; }

		static ::hx::files::FileCopyOption NO_WHITESPACE_TRIMMING;
		static inline ::hx::files::FileCopyOption NO_WHITESPACE_TRIMMING_dyn() { return NO_WHITESPACE_TRIMMING; }
		static ::hx::files::FileCopyOption OVERWRITE;
		static inline ::hx::files::FileCopyOption OVERWRITE_dyn() { return OVERWRITE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_FileCopyOption */ 
