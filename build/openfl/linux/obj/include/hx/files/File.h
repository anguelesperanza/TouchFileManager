#ifndef INCLUDED_hx_files_File
#define INCLUDED_hx_files_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(hx,files,File)
HX_DECLARE_CLASS2(hx,files,FileCopyOption)
HX_DECLARE_CLASS2(hx,files,FileMoveOption)
HX_DECLARE_CLASS2(hx,files,FileRenameOption)
HX_DECLARE_CLASS2(hx,files,FileWriteMode)
HX_DECLARE_CLASS2(hx,files,Path)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)
HX_DECLARE_CLASS2(sys,io,FileInput)
HX_DECLARE_CLASS2(sys,io,FileOutput)

namespace hx{
namespace files{


class HXCPP_CLASS_ATTRIBUTES File_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef File_obj OBJ_;
		File_obj();

	public:
		enum { _hx_ClassId = 0x7f2d4483 };

		void __construct( ::hx::files::Path path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.files.File")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.files.File"); }
		static ::hx::ObjectPtr< File_obj > __new( ::hx::files::Path path);
		static ::hx::ObjectPtr< File_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("File",9c,fa,94,2e); }

		static  ::hx::files::File of( ::hx::strings::internal::_Either2::_Either2 path,::hx::Null< bool >  trimWhiteSpaces);
		static ::Dynamic of_dyn();

		 ::hx::files::Path path;
		void assertValidPath(::hx::Null< bool >  mustExist);
		::Dynamic assertValidPath_dyn();

		 ::sys::io::FileInput openInput(::hx::Null< bool >  binary);
		::Dynamic openInput_dyn();

		 ::sys::io::FileOutput openOutput( ::hx::files::FileWriteMode mode,::hx::Null< bool >  binary);
		::Dynamic openOutput_dyn();

		void appendString(::String content);
		::Dynamic appendString_dyn();

		bool _hx_delete();
		::Dynamic _hx_delete_dyn();

		 ::haxe::io::Bytes readAsBytes();
		::Dynamic readAsBytes_dyn();

		::String readAsString(::String defaultValue);
		::Dynamic readAsString_dyn();

		 ::hx::files::File copyTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options);
		::Dynamic copyTo_dyn();

		 ::hx::files::File moveTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options);
		::Dynamic moveTo_dyn();

		 ::hx::files::File renameTo(::String newFileName,::Array< ::Dynamic> options);
		::Dynamic renameTo_dyn();

		int size();
		::Dynamic size_dyn();

		void touch();
		::Dynamic touch_dyn();

		void writeBytes( ::haxe::io::Bytes content,::hx::Null< bool >  overwrite);
		::Dynamic writeBytes_dyn();

		void writeString(::String content,::hx::Null< bool >  overwrite);
		::Dynamic writeString_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_File */ 
