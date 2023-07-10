#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#define INCLUDED_haxe_ui_backend_AssetsImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsBase)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsImpl)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AssetsImpl_obj : public  ::haxe::ui::backend::AssetsBase_obj
{
	public:
		typedef  ::haxe::ui::backend::AssetsBase_obj super;
		typedef AssetsImpl_obj OBJ_;
		AssetsImpl_obj();

	public:
		enum { _hx_ClassId = 0x7f0c8145 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.AssetsImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.AssetsImpl"); }
		static ::hx::ObjectPtr< AssetsImpl_obj > __new();
		static ::hx::ObjectPtr< AssetsImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetsImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetsImpl",23,f5,09,78); }

		static bool isEmbeddedFont(::String name);
		static ::Dynamic isEmbeddedFont_dyn();

		::String getTextDelegate(::String resourceId);

		void getImageInternal(::String resourceId, ::Dynamic callback);

		void getImageFromHaxeResource(::String resourceId, ::Dynamic callback);

		void imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback);

		void getFontInternal(::String resourceId, ::Dynamic callback);

		void getFontFromHaxeResource(::String resourceId, ::Dynamic callback);

		 ::Dynamic imageInfoFromImageData( ::openfl::display::BitmapData imageData);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AssetsImpl */ 
