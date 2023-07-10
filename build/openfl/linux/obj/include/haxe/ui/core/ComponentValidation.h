#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#define INCLUDED_haxe_ui_core_ComponentValidation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
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


class HXCPP_CLASS_ATTRIBUTES ComponentValidation_obj : public  ::haxe::ui::core::ComponentEvents_obj
{
	public:
		typedef  ::haxe::ui::core::ComponentEvents_obj super;
		typedef ComponentValidation_obj OBJ_;
		ComponentValidation_obj();

	public:
		enum { _hx_ClassId = 0x2ccba775 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentValidation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentValidation"); }
		static ::hx::ObjectPtr< ComponentValidation_obj > __new();
		static ::hx::ObjectPtr< ComponentValidation_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentValidation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentValidation",36,a7,d0,74); }

		 ::haxe::ds::StringMap _invalidationFlags;
		 ::haxe::ds::StringMap _delayedInvalidationFlags;
		bool _isAllInvalid;
		bool _isValidating;
		bool _isInitialized;
		bool _isDisposed;
		int _invalidateCount;
		int _depth;
		int get_depth();
		::Dynamic get_depth_dyn();

		int set_depth(int value);
		::Dynamic set_depth_dyn();

		bool isComponentInvalid(::String flag);
		::Dynamic isComponentInvalid_dyn();

		void invalidateComponent(::String flag,::hx::Null< bool >  recursive);
		::Dynamic invalidateComponent_dyn();

		void invalidateComponentData(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentData_dyn();

		void invalidateComponentLayout(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentLayout_dyn();

		void invalidateComponentPosition(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentPosition_dyn();

		void invalidateComponentDisplay(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentDisplay_dyn();

		void invalidateComponentStyle(::hx::Null< bool >  force,::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentStyle_dyn();

		void validateComponent(::hx::Null< bool >  nextFrame);
		::Dynamic validateComponent_dyn();

		void validateNow();
		::Dynamic validateNow_dyn();

		void syncComponentValidation(::hx::Null< bool >  nextFrame);
		::Dynamic syncComponentValidation_dyn();

		virtual void validateComponentInternal(::hx::Null< bool >  nextFrame);
		::Dynamic validateComponentInternal_dyn();

		virtual void initializeComponent();
		::Dynamic initializeComponent_dyn();

		virtual void validateInitialSize(bool isInitialized);
		::Dynamic validateInitialSize_dyn();

		virtual void validateComponentData();
		::Dynamic validateComponentData_dyn();

		virtual bool validateComponentLayout();
		::Dynamic validateComponentLayout_dyn();

		virtual void validateComponentStyle();
		::Dynamic validateComponentStyle_dyn();

		virtual void validateComponentPosition();
		::Dynamic validateComponentPosition_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentValidation */ 
