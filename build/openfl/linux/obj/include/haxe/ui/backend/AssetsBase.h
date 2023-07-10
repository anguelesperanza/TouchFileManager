#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#define INCLUDED_haxe_ui_backend_AssetsBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsBase)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AssetsBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetsBase_obj OBJ_;
		AssetsBase_obj();

	public:
		enum { _hx_ClassId = 0x7ff6ca06 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.AssetsBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.AssetsBase"); }
		static ::hx::ObjectPtr< AssetsBase_obj > __new();
		static ::hx::ObjectPtr< AssetsBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetsBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetsBase",54,5e,60,73); }

		static bool isAbsolutePath(::String path);
		static ::Dynamic isAbsolutePath_dyn();

		virtual ::String getTextDelegate(::String resourceId);
		::Dynamic getTextDelegate_dyn();

		virtual void getImageInternal(::String resourceId, ::Dynamic callback);
		::Dynamic getImageInternal_dyn();

		virtual void getImageFromHaxeResource(::String resourceId, ::Dynamic callback);
		::Dynamic getImageFromHaxeResource_dyn();

		virtual void imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback);
		::Dynamic imageFromBytes_dyn();

		void imageFromFile(::String filename, ::Dynamic callback);
		::Dynamic imageFromFile_dyn();

		virtual void getFontInternal(::String resourceId, ::Dynamic callback);
		::Dynamic getFontInternal_dyn();

		virtual void getFontFromHaxeResource(::String resourceId, ::Dynamic callback);
		::Dynamic getFontFromHaxeResource_dyn();

		virtual  ::Dynamic imageInfoFromImageData( ::openfl::display::BitmapData imageData);
		::Dynamic imageInfoFromImageData_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AssetsBase */ 
