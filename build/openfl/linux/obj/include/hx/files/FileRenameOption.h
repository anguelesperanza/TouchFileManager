#ifndef INCLUDED_hx_files_FileRenameOption
#define INCLUDED_hx_files_FileRenameOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,FileRenameOption)
namespace hx{
namespace files{


class FileRenameOption_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileRenameOption_obj OBJ_;

	public:
		FileRenameOption_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.FileRenameOption",c4,27,e6,d1); }
		::String __ToString() const { return HX_("FileRenameOption.",ff,9e,ed,bc) + _hx_tag; }

		static ::hx::files::FileRenameOption OVERWRITE;
		static inline ::hx::files::FileRenameOption OVERWRITE_dyn() { return OVERWRITE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_FileRenameOption */ 
