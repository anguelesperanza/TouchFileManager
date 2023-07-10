#ifndef INCLUDED_haxe_ui_tooltips_ToolTipManager
#define INCLUDED_haxe_ui_tooltips_ToolTipManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TimerImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,tooltips,ToolTip)
HX_DECLARE_CLASS3(haxe,ui,tooltips,ToolTipManager)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)
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
namespace tooltips{


class HXCPP_CLASS_ATTRIBUTES ToolTipManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ToolTipManager_obj OBJ_;
		ToolTipManager_obj();

	public:
		enum { _hx_ClassId = 0x3668ea20 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.tooltips.ToolTipManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.tooltips.ToolTipManager"); }
		static ::hx::ObjectPtr< ToolTipManager_obj > __new();
		static ::hx::ObjectPtr< ToolTipManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ToolTipManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ToolTipManager",ea,9b,c3,83); }

		static void __boot();
		static int defaultDelay;
		static  ::haxe::ui::core::ItemRenderer defaultRenderer;
		static bool fade;
		static  ::haxe::ui::tooltips::ToolTipManager _instance;
		static  ::haxe::ui::tooltips::ToolTipManager instance;
		static  ::haxe::ui::tooltips::ToolTipManager get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ui::events::MouseEvent _lastMouseEvent;
		 ::haxe::ds::ObjectMap _toolTipOptions;
		void registerTooltip( ::haxe::ui::core::Component target, ::Dynamic options);
		::Dynamic registerTooltip_dyn();

		void unregisterTooltip( ::haxe::ui::core::Component target);
		::Dynamic unregisterTooltip_dyn();

		 ::Dynamic getTooltipOptions( ::haxe::ui::core::Component target);
		::Dynamic getTooltipOptions_dyn();

		void updateTooltipRenderer( ::haxe::ui::core::Component target, ::haxe::ui::core::ItemRenderer renderer);
		::Dynamic updateTooltipRenderer_dyn();

		 ::haxe::ui::core::Component _currentComponent;
		 ::haxe::ui::util::Timer _timer;
		void onTargetMouseOver( ::haxe::ui::events::MouseEvent event);
		::Dynamic onTargetMouseOver_dyn();

		void onTargetMouseMove( ::haxe::ui::events::MouseEvent event);
		::Dynamic onTargetMouseMove_dyn();

		void onTargetMouseOut( ::haxe::ui::events::MouseEvent event);
		::Dynamic onTargetMouseOut_dyn();

		void onDelayTimer();
		::Dynamic onDelayTimer_dyn();

		void onScreenMouseMove( ::haxe::ui::events::MouseEvent event);
		::Dynamic onScreenMouseMove_dyn();

		void onScreenMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onScreenMouseDown_dyn();

		void startTimer();
		::Dynamic startTimer_dyn();

		void stopTimer();
		::Dynamic stopTimer_dyn();

		void stopCurrent();
		::Dynamic stopCurrent_dyn();

		 ::haxe::ui::tooltips::ToolTip _toolTip;
		 ::haxe::ui::core::ItemRenderer _toolTipContents;
		void createToolTip();
		::Dynamic createToolTip_dyn();

		void showToolTip();
		::Dynamic showToolTip_dyn();

		void positionToolTip();
		::Dynamic positionToolTip_dyn();

		void hideToolTip();
		::Dynamic hideToolTip_dyn();

		 ::haxe::ui::core::ItemRenderer createToolTipRenderer( ::Dynamic options);
		::Dynamic createToolTipRenderer_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace tooltips

#endif /* INCLUDED_haxe_ui_tooltips_ToolTipManager */ 
