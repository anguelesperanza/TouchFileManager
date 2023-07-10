#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_ApplyPageFromCoord
#define INCLUDED_haxe_ui_components__HorizontalScroll_ApplyPageFromCoord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS4(haxe,ui,components,_HorizontalScroll,ApplyPageFromCoord)
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
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace components{
namespace _HorizontalScroll{


class HXCPP_CLASS_ATTRIBUTES ApplyPageFromCoord_obj : public  ::haxe::ui::behaviours::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::Behaviour_obj super;
		typedef ApplyPageFromCoord_obj OBJ_;
		ApplyPageFromCoord_obj();

	public:
		enum { _hx_ClassId = 0x1777792e };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._HorizontalScroll.ApplyPageFromCoord")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._HorizontalScroll.ApplyPageFromCoord"); }
		static ::hx::ObjectPtr< ApplyPageFromCoord_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ApplyPageFromCoord_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ApplyPageFromCoord_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ApplyPageFromCoord",6e,0a,7a,06); }

		 ::haxe::ui::util::VariantType call( ::Dynamic pos);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _HorizontalScroll

#endif /* INCLUDED_haxe_ui_components__HorizontalScroll_ApplyPageFromCoord */ 
