#ifndef INCLUDED_haxe_ui_core_IScrollView
#define INCLUDED_haxe_ui_core_IScrollView

#ifndef HXCPP_H
#include <hxcpp.h>
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
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
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
namespace core{


class HXCPP_CLASS_ATTRIBUTES IScrollView_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_ensureVisible)( ::haxe::ui::core::Component component); 
		static inline void ensureVisible( ::Dynamic _hx_, ::haxe::ui::core::Component component) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IScrollView_obj *>(_hx_.mPtr->_hx_getInterface(0x6fc0ac82)))->_hx_ensureVisible)(component);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IScrollView */ 
