#ifndef INCLUDED_hx_files_FileWriteMode
#define INCLUDED_hx_files_FileWriteMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,FileWriteMode)
namespace hx{
namespace files{


class FileWriteMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileWriteMode_obj OBJ_;

	public:
		FileWriteMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.FileWriteMode",11,ed,bd,f1); }
		::String __ToString() const { return HX_("FileWriteMode.",c8,f7,a5,03) + _hx_tag; }

		static ::hx::files::FileWriteMode APPEND;
		static inline ::hx::files::FileWriteMode APPEND_dyn() { return APPEND; }
		static ::hx::files::FileWriteMode REPLACE;
		static inline ::hx::files::FileWriteMode REPLACE_dyn() { return REPLACE; }
		static ::hx::files::FileWriteMode UPDATE;
		static inline ::hx::files::FileWriteMode UPDATE_dyn() { return UPDATE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_FileWriteMode */ 
