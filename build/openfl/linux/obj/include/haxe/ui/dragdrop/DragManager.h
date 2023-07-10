#ifndef INCLUDED_haxe_ui_dragdrop_DragManager
#define INCLUDED_haxe_ui_dragdrop_DragManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,dragdrop,DragManager)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
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
namespace dragdrop{


class HXCPP_CLASS_ATTRIBUTES DragManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DragManager_obj OBJ_;
		DragManager_obj();

	public:
		enum { _hx_ClassId = 0x498f437c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.dragdrop.DragManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.dragdrop.DragManager"); }
		static ::hx::ObjectPtr< DragManager_obj > __new();
		static ::hx::ObjectPtr< DragManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DragManager_obj();

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
		::String __ToString() const { return HX_("DragManager",b9,4c,15,ae); }

		static  ::haxe::ui::dragdrop::DragManager _instance;
		static  ::haxe::ui::dragdrop::DragManager instance;
		static  ::haxe::ui::dragdrop::DragManager get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::ObjectMap _dragComponents;
		 ::haxe::ds::ObjectMap _mouseTargetToDragTarget;
		 ::haxe::ui::core::Component _currentComponent;
		 ::Dynamic _currentOptions;
		 ::haxe::ui::geom::Point _mouseOffset;
		 ::Dynamic getDragOptions( ::haxe::ui::core::Component component);
		::Dynamic getDragOptions_dyn();

		 ::Dynamic registerDraggable( ::haxe::ui::core::Component component, ::Dynamic dragOptions);
		::Dynamic registerDraggable_dyn();

		void unregisterDraggable( ::haxe::ui::core::Component component);
		::Dynamic unregisterDraggable_dyn();

		bool isRegisteredDraggable( ::haxe::ui::core::Component component);
		::Dynamic isRegisteredDraggable_dyn();

		void onMouseDown( ::haxe::ui::events::MouseEvent e);
		::Dynamic onMouseDown_dyn();

		void onScreenCheckForDrag( ::haxe::ui::events::MouseEvent e);
		::Dynamic onScreenCheckForDrag_dyn();

		void onScreenDrag( ::haxe::ui::events::MouseEvent e);
		::Dynamic onScreenDrag_dyn();

		void onScreenMouseUp( ::haxe::ui::events::MouseEvent e);
		::Dynamic onScreenMouseUp_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace dragdrop

#endif /* INCLUDED_haxe_ui_dragdrop_DragManager */ 
