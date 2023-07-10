#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#define INCLUDED_haxe_ui_backend_ComponentGraphicsBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,graphics,DrawCommand)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
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


class HXCPP_CLASS_ATTRIBUTES ComponentGraphicsBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ComponentGraphicsBase_obj OBJ_;
		ComponentGraphicsBase_obj();

	public:
		enum { _hx_ClassId = 0x292a8ee7 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentGraphicsBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentGraphicsBase"); }
		static ::hx::ObjectPtr< ComponentGraphicsBase_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ComponentGraphicsBase_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentGraphicsBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentGraphicsBase",b9,e2,43,07); }

		 ::haxe::ui::core::Component _component;
		::Array< ::Dynamic> _drawCommands;
		virtual void clear();
		::Dynamic clear_dyn();

		virtual void setPixel(Float x,Float y,int color);
		::Dynamic setPixel_dyn();

		virtual void setPixels( ::haxe::io::Bytes pixels);
		::Dynamic setPixels_dyn();

		virtual void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		virtual void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		virtual void strokeStyle( ::Dynamic color, ::Dynamic thickness, ::Dynamic alpha);
		::Dynamic strokeStyle_dyn();

		virtual void circle(Float x,Float y,Float radius);
		::Dynamic circle_dyn();

		virtual void fillStyle( ::Dynamic color, ::Dynamic alpha);
		::Dynamic fillStyle_dyn();

		virtual void curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		::Dynamic curveTo_dyn();

		virtual void cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		::Dynamic cubicCurveTo_dyn();

		virtual void rectangle(Float x,Float y,Float width,Float height);
		::Dynamic rectangle_dyn();

		virtual void image( ::haxe::ui::util::VariantType resource, ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height);
		::Dynamic image_dyn();

		virtual void resize( ::Dynamic width, ::Dynamic height);
		::Dynamic resize_dyn();

		void setProperty(::String name,::String value);
		::Dynamic setProperty_dyn();

		void detach();
		::Dynamic detach_dyn();

		void replayDrawCommands();
		::Dynamic replayDrawCommands_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentGraphicsBase */ 
