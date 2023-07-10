#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#define INCLUDED_haxe_ui_backend_ComponentGraphicsImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ComponentGraphicsImpl_obj : public  ::haxe::ui::backend::ComponentGraphicsBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentGraphicsBase_obj super;
		typedef ComponentGraphicsImpl_obj OBJ_;
		ComponentGraphicsImpl_obj();

	public:
		enum { _hx_ClassId = 0x2dd425b6 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentGraphicsImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentGraphicsImpl"); }
		static ::hx::ObjectPtr< ComponentGraphicsImpl_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ComponentGraphicsImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentGraphicsImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentGraphicsImpl",88,79,ed,0b); }

		 ::Dynamic _currentFillColor;
		 ::Dynamic _currentFillAlpha;
		bool _hasSize;
		void clear();

		void moveTo(Float x,Float y);

		void lineTo(Float x,Float y);

		void strokeStyle( ::Dynamic color, ::Dynamic thickness, ::Dynamic alpha);

		void fillStyle( ::Dynamic color, ::Dynamic alpha);

		void circle(Float x,Float y,Float radius);

		void curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);

		void cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);

		void rectangle(Float x,Float y,Float width,Float height);

		void image( ::haxe::ui::util::VariantType resource, ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height);

		void setPixel(Float x,Float y,int color);

		 ::openfl::display::Bitmap _bitmap;
		 ::openfl::display::BitmapData _bitmapData;
		void setPixels( ::haxe::io::Bytes pixels);

		void resize( ::Dynamic width, ::Dynamic height);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentGraphicsImpl */ 
