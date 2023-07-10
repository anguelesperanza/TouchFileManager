#ifndef INCLUDED_hx_files_DirRenameOption
#define INCLUDED_hx_files_DirRenameOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,DirRenameOption)
namespace hx{
namespace files{


class DirRenameOption_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DirRenameOption_obj OBJ_;

	public:
		DirRenameOption_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.DirRenameOption",8b,5a,fe,33); }
		::String __ToString() const { return HX_("DirRenameOption.",ce,9d,26,48) + _hx_tag; }

		static ::hx::files::DirRenameOption OVERWRITE;
		static inline ::hx::files::DirRenameOption OVERWRITE_dyn() { return OVERWRITE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_DirRenameOption */ 
