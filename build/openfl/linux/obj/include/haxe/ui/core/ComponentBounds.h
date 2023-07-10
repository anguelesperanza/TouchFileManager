#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#define INCLUDED_haxe_ui_core_ComponentBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentBounds_obj : public  ::haxe::ui::core::ComponentLayout_obj
{
	public:
		typedef  ::haxe::ui::core::ComponentLayout_obj super;
		typedef ComponentBounds_obj OBJ_;
		ComponentBounds_obj();

	public:
		enum { _hx_ClassId = 0x7ec24579 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentBounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentBounds"); }
		static ::hx::ObjectPtr< ComponentBounds_obj > __new();
		static ::hx::ObjectPtr< ComponentBounds_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentBounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentBounds",f2,9e,7e,9d); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool autoWidth;
		bool get_autoWidth();
		::Dynamic get_autoWidth_dyn();

		bool autoHeight;
		bool get_autoHeight();
		::Dynamic get_autoHeight_dyn();

		void resizeComponent( ::Dynamic w, ::Dynamic h);
		::Dynamic resizeComponent_dyn();

		Float actualComponentWidth;
		Float get_actualComponentWidth();
		::Dynamic get_actualComponentWidth_dyn();

		Float actualComponentHeight;
		Float get_actualComponentHeight();
		::Dynamic get_actualComponentHeight_dyn();

		 ::Dynamic _componentWidth;
		 ::Dynamic get_componentWidth();
		::Dynamic get_componentWidth_dyn();

		 ::Dynamic set_componentWidth( ::Dynamic value);
		::Dynamic set_componentWidth_dyn();

		 ::Dynamic _componentHeight;
		 ::Dynamic get_componentHeight();
		::Dynamic get_componentHeight_dyn();

		 ::Dynamic set_componentHeight( ::Dynamic value);
		::Dynamic set_componentHeight_dyn();

		 ::Dynamic _percentWidth;
		 ::Dynamic get_percentWidth();
		::Dynamic get_percentWidth_dyn();

		 ::Dynamic set_percentWidth( ::Dynamic value);
		::Dynamic set_percentWidth_dyn();

		 ::Dynamic _percentHeight;
		 ::Dynamic get_percentHeight();
		::Dynamic get_percentHeight_dyn();

		 ::Dynamic set_percentHeight( ::Dynamic value);
		::Dynamic set_percentHeight_dyn();

		 ::Dynamic _cachedPercentWidth;
		 ::Dynamic _cachedPercentHeight;
		void cachePercentSizes(::hx::Null< bool >  clearExisting);
		::Dynamic cachePercentSizes_dyn();

		void restorePercentSizes();
		::Dynamic restorePercentSizes_dyn();

		Float set_x(Float value);

		Float set_y(Float value);

		 ::Dynamic _width;
		Float set_width(Float value);

		Float get_width();

		 ::Dynamic _height;
		Float set_height(Float value);

		Float get_height();

		 ::Dynamic _actualWidth;
		 ::Dynamic _actualHeight;
		 ::Dynamic _hasScreen;
		bool hasScreen;
		bool get_hasScreen();
		::Dynamic get_hasScreen_dyn();

		bool hitTest(Float left,Float top,::hx::Null< bool >  allowZeroSized);
		::Dynamic hitTest_dyn();

		bool autoSize();
		::Dynamic autoSize_dyn();

		void moveComponent( ::Dynamic left, ::Dynamic top);
		::Dynamic moveComponent_dyn();

		 ::Dynamic _left;
		 ::Dynamic get_left();
		::Dynamic get_left_dyn();

		 ::Dynamic set_left( ::Dynamic value);
		::Dynamic set_left_dyn();

		 ::Dynamic _top;
		 ::Dynamic get_top();
		::Dynamic get_top_dyn();

		 ::Dynamic set_top( ::Dynamic value);
		::Dynamic set_top_dyn();

		Float screenLeft;
		Float get_screenLeft();
		::Dynamic get_screenLeft_dyn();

		Float screenTop;
		Float get_screenTop();
		::Dynamic get_screenTop_dyn();

		 ::haxe::ui::geom::Rectangle _componentClipRect;
		 ::haxe::ui::geom::Rectangle get_componentClipRect();
		::Dynamic get_componentClipRect_dyn();

		 ::haxe::ui::geom::Rectangle set_componentClipRect( ::haxe::ui::geom::Rectangle value);
		::Dynamic set_componentClipRect_dyn();

		bool isComponentClipped;
		virtual bool get_isComponentClipped();
		::Dynamic get_isComponentClipped_dyn();

		bool isComponentOffscreen;
		bool get_isComponentOffscreen();
		::Dynamic get_isComponentOffscreen_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentBounds */ 
