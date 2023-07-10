#ifndef INCLUDED_hx_files_Dir
#define INCLUDED_hx_files_Dir

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,files,Dir)
HX_DECLARE_CLASS2(hx,files,DirCopyOption)
HX_DECLARE_CLASS2(hx,files,DirMoveOption)
HX_DECLARE_CLASS2(hx,files,DirRenameOption)
HX_DECLARE_CLASS2(hx,files,File)
HX_DECLARE_CLASS2(hx,files,Path)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)

namespace hx{
namespace files{


class HXCPP_CLASS_ATTRIBUTES Dir_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Dir_obj OBJ_;
		Dir_obj();

	public:
		enum { _hx_ClassId = 0x1c53ad8a };

		void __construct( ::hx::files::Path path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.files.Dir")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.files.Dir"); }
		static ::hx::ObjectPtr< Dir_obj > __new( ::hx::files::Path path);
		static ::hx::ObjectPtr< Dir_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Dir_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Dir",2d,f5,33,00); }

		static  ::hx::files::Dir getCWD();
		static ::Dynamic getCWD_dyn();

		static  ::hx::files::Dir getUserHome();
		static ::Dynamic getUserHome_dyn();

		static  ::hx::files::Dir of( ::hx::strings::internal::_Either2::_Either2 path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic of_dyn();

		 ::hx::files::Path path;
		void assertValidPath(::hx::Null< bool >  mustExist);
		::Dynamic assertValidPath_dyn();

		bool create();
		::Dynamic create_dyn();

		 ::hx::files::Dir copyTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options);
		::Dynamic copyTo_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		bool _hx_delete(::hx::Null< bool >  recursively);
		::Dynamic _hx_delete_dyn();

		void find(::String globPattern, ::Dynamic onFileMatch, ::Dynamic onDirMatch);
		::Dynamic find_dyn();

		::Array< ::Dynamic> findDirs(::String globPattern);
		::Dynamic findDirs_dyn();

		::Array< ::Dynamic> findFiles(::String globPattern);
		::Dynamic findFiles_dyn();

		::Array< ::Dynamic> list();
		::Dynamic list_dyn();

		::Array< ::Dynamic> listDirs();
		::Dynamic listDirs_dyn();

		::Array< ::Dynamic> listFiles();
		::Dynamic listFiles_dyn();

		 ::hx::files::Dir moveTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options);
		::Dynamic moveTo_dyn();

		 ::hx::files::Dir renameTo(::String newDirName,::Array< ::Dynamic> options);
		::Dynamic renameTo_dyn();

		void setCWD();
		::Dynamic setCWD_dyn();

		int size();
		::Dynamic size_dyn();

		void walk( ::Dynamic onFile, ::Dynamic onDir);
		::Dynamic walk_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_Dir */ 
