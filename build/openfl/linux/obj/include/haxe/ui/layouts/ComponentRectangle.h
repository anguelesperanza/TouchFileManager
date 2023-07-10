#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#define INCLUDED_haxe_ui_layouts_ComponentRectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,layouts,ComponentRectangle)
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
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES ComponentRectangle_obj : public  ::haxe::ui::geom::Rectangle_obj
{
	public:
		typedef  ::haxe::ui::geom::Rectangle_obj super;
		typedef ComponentRectangle_obj OBJ_;
		ComponentRectangle_obj();

	public:
		enum { _hx_ClassId = 0x315cada1 };

		void __construct( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.ComponentRectangle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.ComponentRectangle"); }
		static ::hx::ObjectPtr< ComponentRectangle_obj > __new( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height);
		static ::hx::ObjectPtr< ComponentRectangle_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentRectangle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentRectangle",d2,67,7a,24); }

		 ::haxe::ui::core::Component component;
		void apply();
		::Dynamic apply_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_ComponentRectangle */ 
