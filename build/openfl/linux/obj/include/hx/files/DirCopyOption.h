#ifndef INCLUDED_hx_files_DirCopyOption
#define INCLUDED_hx_files_DirCopyOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,Dir)
HX_DECLARE_CLASS2(hx,files,DirCopyOption)
HX_DECLARE_CLASS2(hx,files,File)
namespace hx{
namespace files{


class DirCopyOption_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DirCopyOption_obj OBJ_;

	public:
		DirCopyOption_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.DirCopyOption",02,c0,1a,73); }
		::String __ToString() const { return HX_("DirCopyOption.",b7,b7,81,b3) + _hx_tag; }

		static ::hx::files::DirCopyOption LISTENER( ::Dynamic onFile, ::Dynamic onDir);
		static ::Dynamic LISTENER_dyn();
		static ::hx::files::DirCopyOption MERGE;
		static inline ::hx::files::DirCopyOption MERGE_dyn() { return MERGE; }
		static ::hx::files::DirCopyOption NO_WHITESPACE_TRIMMING;
		static inline ::hx::files::DirCopyOption NO_WHITESPACE_TRIMMING_dyn() { return NO_WHITESPACE_TRIMMING; }
		static ::hx::files::DirCopyOption OVERWRITE;
		static inline ::hx::files::DirCopyOption OVERWRITE_dyn() { return OVERWRITE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_DirCopyOption */ 
