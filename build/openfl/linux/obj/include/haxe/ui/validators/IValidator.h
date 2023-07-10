#ifndef INCLUDED_haxe_ui_validators_IValidator
#define INCLUDED_haxe_ui_validators_IValidator

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
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace validators{


class HXCPP_CLASS_ATTRIBUTES IValidator_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_setup)( ::haxe::ui::core::Component component); 
		static inline void setup( ::Dynamic _hx_, ::haxe::ui::core::Component component) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::validators::IValidator_obj *>(_hx_.mPtr->_hx_getInterface(0xc5d6bfe4)))->_hx_setup)(component);
		}
		 ::Dynamic (::hx::Object :: *_hx_validate)( ::haxe::ui::core::Component component); 
		static inline  ::Dynamic validate( ::Dynamic _hx_, ::haxe::ui::core::Component component) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::validators::IValidator_obj *>(_hx_.mPtr->_hx_getInterface(0xc5d6bfe4)))->_hx_validate)(component);
		}
		void (::hx::Object :: *_hx_setProperty)(::String name, ::Dynamic value); 
		static inline void setProperty( ::Dynamic _hx_,::String name, ::Dynamic value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::validators::IValidator_obj *>(_hx_.mPtr->_hx_getInterface(0xc5d6bfe4)))->_hx_setProperty)(name,value);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace validators

#endif /* INCLUDED_haxe_ui_validators_IValidator */ 
