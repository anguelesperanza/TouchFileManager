#ifndef INCLUDED_haxe_ui_loaders_image_HttpImageLoader
#define INCLUDED_haxe_ui_loaders_image_HttpImageLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoaderBase
#include <haxe/ui/loaders/image/ImageLoaderBase.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,loaders,image,HttpImageLoader)
HX_DECLARE_CLASS4(haxe,ui,loaders,image,ImageLoaderBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace loaders{
namespace image{


class HXCPP_CLASS_ATTRIBUTES HttpImageLoader_obj : public  ::haxe::ui::loaders::image::ImageLoaderBase_obj
{
	public:
		typedef  ::haxe::ui::loaders::image::ImageLoaderBase_obj super;
		typedef HttpImageLoader_obj OBJ_;
		HttpImageLoader_obj();

	public:
		enum { _hx_ClassId = 0x03d72b51 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.loaders.image.HttpImageLoader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.loaders.image.HttpImageLoader"); }
		static ::hx::ObjectPtr< HttpImageLoader_obj > __new();
		static ::hx::ObjectPtr< HttpImageLoader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HttpImageLoader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HttpImageLoader",06,73,29,01); }

		void load( ::haxe::ui::util::VariantType resource, ::Dynamic callback);

		void loadFromHttp(::String url, ::Dynamic callback);
		::Dynamic loadFromHttp_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image

#endif /* INCLUDED_haxe_ui_loaders_image_HttpImageLoader */ 
