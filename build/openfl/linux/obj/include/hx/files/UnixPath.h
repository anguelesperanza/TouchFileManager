#ifndef INCLUDED_hx_files_UnixPath
#define INCLUDED_hx_files_UnixPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
HX_DECLARE_CLASS2(hx,files,Path)
HX_DECLARE_CLASS2(hx,files,UnixPath)

namespace hx{
namespace files{


class HXCPP_CLASS_ATTRIBUTES UnixPath_obj : public  ::hx::files::Path_obj
{
	public:
		typedef  ::hx::files::Path_obj super;
		typedef UnixPath_obj OBJ_;
		UnixPath_obj();

	public:
		enum { _hx_ClassId = 0x405d600c };

		void __construct( ::hx::files::Path parent,::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.files.UnixPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.files.UnixPath"); }
		static ::hx::ObjectPtr< UnixPath_obj > __new( ::hx::files::Path parent,::String path);
		static ::hx::ObjectPtr< UnixPath_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path parent,::String path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UnixPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UnixPath",6d,7c,b2,24); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String DIR_SEP;
		static  ::hx::files::UnixPath EMPTY;
		static  ::hx::files::UnixPath ROOT;
		static  ::hx::files::UnixPath HOME;
		static  ::hx::files::UnixPath CURRENT;
		static  ::hx::files::UnixPath PARENT;
		static  ::hx::files::UnixPath of(::String path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic of_dyn();

		static ::Array< ::String > clean(::String path,bool trimWhiteSpaces);
		static ::Dynamic clean_dyn();

		 ::hx::files::Path get_root();

		 ::hx::files::Path newPathForString(::String path,bool trimWhiteSpaces);

		 ::hx::files::Path newPathForChild(::String filename);

};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_UnixPath */ 
