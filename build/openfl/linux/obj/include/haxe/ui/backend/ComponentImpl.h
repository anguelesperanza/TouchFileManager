#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#define INCLUDED_haxe_ui_backend_ComponentImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,ImageDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextInput)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ComponentImpl_obj : public  ::haxe::ui::backend::ComponentBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentBase_obj super;
		typedef ComponentImpl_obj OBJ_;
		ComponentImpl_obj();

	public:
		enum { _hx_ClassId = 0x13d76ae7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentImpl"); }
		static ::hx::ObjectPtr< ComponentImpl_obj > __new();
		static ::hx::ObjectPtr< ComponentImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentImpl",1d,8e,4b,2b); }

		 ::haxe::ds::StringMap _eventMap;
		void onAddedToStage( ::openfl::events::Event event);
		::Dynamic onAddedToStage_dyn();

		void onRemovedFromStage( ::openfl::events::Event event);
		::Dynamic onRemovedFromStage_dyn();

		void recursiveReady();
		::Dynamic recursiveReady_dyn();

		void handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style);

		bool styleable;
		void handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style);

		void handleClipRect( ::haxe::ui::geom::Rectangle value);

		 ::haxe::ui::core::TextDisplay createTextDisplay(::String text);

		 ::haxe::ui::core::TextInput createTextInput(::String text);

		 ::haxe::ui::core::ImageDisplay createImageDisplay();

		void removeImageDisplay();

		 ::haxe::ui::core::Component handleAddComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component handleAddComponentAt( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::core::Component handleRemoveComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose);

		 ::haxe::ui::core::Component handleRemoveComponentAt(int index,::hx::Null< bool >  dispose);

		void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);

		virtual void applyStyle( ::haxe::ui::styles::Style style);

		void applyUseHandCursor(bool use);
		::Dynamic applyUseHandCursor_dyn();

		bool set_visible(bool value);

		void handleVisibility(bool show);

		 ::haxe::ui::geom::Point getComponentOffset();

		void handleFrameworkProperty(::String id, ::Dynamic value);

		void mapEvent(::String type, ::Dynamic listener);

		void unmapEvent(::String type, ::Dynamic listener);

		void _hx___onMouseEvent( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onMouseEvent_dyn();

		void _hx___onKeyboardEvent( ::openfl::events::KeyboardEvent event);
		::Dynamic _hx___onKeyboardEvent_dyn();

		void _hx___onTextInputChange( ::openfl::events::Event event);
		::Dynamic _hx___onTextInputChange_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentImpl */ 
