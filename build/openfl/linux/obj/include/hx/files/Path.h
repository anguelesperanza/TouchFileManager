#ifndef INCLUDED_hx_files_Path
#define INCLUDED_hx_files_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,Dir)
HX_DECLARE_CLASS2(hx,files,File)
HX_DECLARE_CLASS2(hx,files,Path)
HX_DECLARE_CLASS2(hx,files,UnixPath)
HX_DECLARE_CLASS2(hx,files,WindowsPath)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)

namespace hx{
namespace files{


class HXCPP_CLASS_ATTRIBUTES Path_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();

	public:
		enum { _hx_ClassId = 0x12df4900 };

		void __construct( ::hx::files::Path parent,::String filename,::String dirSep,::String pathSep,::String __o_extSep);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.files.Path")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.files.Path"); }

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Path_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Path",c5,11,2b,35); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::hx::files::Path of(::String path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic of_dyn();

		static  ::hx::files::UnixPath unix(::String path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic unix_dyn();

		static  ::hx::files::WindowsPath win(::String path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic win_dyn();

		::String dirSep;
		::String pathSep;
		::String extSep;
		bool get_isAbsolute();
		::Dynamic get_isAbsolute_dyn();

		bool isLocal;
		bool get_isRoot();
		::Dynamic get_isRoot_dyn();

		bool isUnix;
		bool isWindows;
		void assertIsLocal();
		::Dynamic assertIsLocal_dyn();

		bool exists();
		::Dynamic exists_dyn();

		::String filename;
		::String get_filenameStem();
		::Dynamic get_filenameStem_dyn();

		::String get_filenameExt();
		::Dynamic get_filenameExt_dyn();

		::String getAbsolutePath();
		::Dynamic getAbsolutePath_dyn();

		 ::Dynamic stat();
		::Dynamic stat_dyn();

		Float getModificationTime();
		::Dynamic getModificationTime_dyn();

		bool isDirectory();
		::Dynamic isDirectory_dyn();

		bool isFile();
		::Dynamic isFile_dyn();

		 ::hx::files::Path join( ::hx::strings::internal::_Either2::_Either2 path,::hx::Null< bool >  trimWhiteSpaces);
		::Dynamic join_dyn();

		 ::hx::files::Path joinAll(::Array< ::Dynamic> paths,::hx::Null< bool >  trimWhiteSpaces);
		::Dynamic joinAll_dyn();

		 ::hx::files::Path parent;
		 ::hx::files::Path root;
		virtual  ::hx::files::Path get_root();
		::Dynamic get_root_dyn();

		 ::hx::files::Dir toDir();
		::Dynamic toDir_dyn();

		 ::hx::files::File toFile();
		::Dynamic toFile_dyn();

		::String toStringWithTrailingSeparator();
		::Dynamic toStringWithTrailingSeparator_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::hx::files::Path normalize();
		::Dynamic normalize_dyn();

		::String ellipsize(int maxLength,::hx::Null< bool >  startFromLeft,::String ellipsis);
		::Dynamic ellipsize_dyn();

		virtual  ::hx::files::Path newPathForString(::String path,bool trimWhiteSpaces);
		::Dynamic newPathForString_dyn();

		virtual  ::hx::files::Path newPathForChild(::String filename);
		::Dynamic newPathForChild_dyn();

};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_Path */ 
