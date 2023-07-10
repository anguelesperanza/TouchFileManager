#ifndef INCLUDED_hx_files_WindowsPath
#define INCLUDED_hx_files_WindowsPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
HX_DECLARE_CLASS2(hx,files,Path)
HX_DECLARE_CLASS2(hx,files,WindowsPath)

namespace hx{
namespace files{


class HXCPP_CLASS_ATTRIBUTES WindowsPath_obj : public  ::hx::files::Path_obj
{
	public:
		typedef  ::hx::files::Path_obj super;
		typedef WindowsPath_obj OBJ_;
		WindowsPath_obj();

	public:
		enum { _hx_ClassId = 0x1f8f56a1 };

		void __construct( ::hx::files::Path parent,::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.files.WindowsPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.files.WindowsPath"); }
		static ::hx::ObjectPtr< WindowsPath_obj > __new( ::hx::files::Path parent,::String path);
		static ::hx::ObjectPtr< WindowsPath_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path parent,::String path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WindowsPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WindowsPath",a8,85,17,ae); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String DIR_SEP;
		static ::String UNC_PREFIX;
		static  ::hx::files::WindowsPath DRIVE_ROOT;
		static  ::hx::files::WindowsPath EMPTY;
		static  ::hx::files::WindowsPath CURRENT;
		static  ::hx::files::WindowsPath PARENT;
		static  ::hx::files::WindowsPath of(::String path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic of_dyn();

		static ::Array< ::String > clean(::String path,bool trimWhiteSpaces);
		static ::Dynamic clean_dyn();

		 ::hx::files::Path get_root();

		 ::hx::files::Path newPathForString(::String path,bool trimWhiteSpaces);

		 ::hx::files::Path newPathForChild(::String filename);

};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_WindowsPath */ 
