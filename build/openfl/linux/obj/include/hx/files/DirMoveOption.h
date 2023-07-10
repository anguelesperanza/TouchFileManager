#ifndef INCLUDED_hx_files_DirMoveOption
#define INCLUDED_hx_files_DirMoveOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,DirMoveOption)
namespace hx{
namespace files{


class DirMoveOption_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DirMoveOption_obj OBJ_;

	public:
		DirMoveOption_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.files.DirMoveOption",5e,d4,84,0d); }
		::String __ToString() const { return HX_("DirMoveOption.",db,73,e9,35) + _hx_tag; }

		static ::hx::files::DirMoveOption NO_WHITESPACE_TRIMMING;
		static inline ::hx::files::DirMoveOption NO_WHITESPACE_TRIMMING_dyn() { return NO_WHITESPACE_TRIMMING; }
		static ::hx::files::DirMoveOption OVERWRITE;
		static inline ::hx::files::DirMoveOption OVERWRITE_dyn() { return OVERWRITE; }
};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_DirMoveOption */ 
