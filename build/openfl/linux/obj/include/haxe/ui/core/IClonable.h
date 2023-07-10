#ifndef INCLUDED_haxe_ui_core_IClonable
#define INCLUDED_haxe_ui_core_IClonable

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


class HXCPP_CLASS_ATTRIBUTES IClonable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (::hx::Object :: *_hx_cloneComponent)(); 
		static inline  ::Dynamic cloneComponent( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IClonable_obj *>(_hx_.mPtr->_hx_getInterface(0x7e9cb512)))->_hx_cloneComponent)();
		}
		 ::Dynamic (::hx::Object :: *_hx_self)(); 
		static inline  ::Dynamic self( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IClonable_obj *>(_hx_.mPtr->_hx_getInterface(0x7e9cb512)))->_hx_self)();
		}
		void (::hx::Object :: *_hx_postCloneComponent)( ::haxe::ui::core::Component c); 
		static inline void postCloneComponent( ::Dynamic _hx_, ::haxe::ui::core::Component c) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IClonable_obj *>(_hx_.mPtr->_hx_getInterface(0x7e9cb512)))->_hx_postCloneComponent)(c);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IClonable */ 
