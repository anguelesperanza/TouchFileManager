#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoaderBase
#define INCLUDED_haxe_ui_loaders_image_ImageLoaderBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,loaders,image,ImageLoaderBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace loaders{
namespace image{


class HXCPP_CLASS_ATTRIBUTES ImageLoaderBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageLoaderBase_obj OBJ_;
		ImageLoaderBase_obj();

	public:
		enum { _hx_ClassId = 0x64efe746 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.loaders.image.ImageLoaderBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.loaders.image.ImageLoaderBase"); }
		static ::hx::ObjectPtr< ImageLoaderBase_obj > __new();
		static ::hx::ObjectPtr< ImageLoaderBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageLoaderBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageLoaderBase",df,6c,2d,c2); }

		virtual void load( ::haxe::ui::util::VariantType resource, ::Dynamic callback);
		::Dynamic load_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image

#endif /* INCLUDED_haxe_ui_loaders_image_ImageLoaderBase */ 
