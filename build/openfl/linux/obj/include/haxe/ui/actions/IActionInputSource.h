#ifndef INCLUDED_haxe_ui_actions_IActionInputSource
#define INCLUDED_haxe_ui_actions_IActionInputSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,actions,IActionInputSource)

namespace haxe{
namespace ui{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES IActionInputSource_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_start)(); 
		static inline void start( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::actions::IActionInputSource_obj *>(_hx_.mPtr->_hx_getInterface(0xd15cd5e9)))->_hx_start)();
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace actions

#endif /* INCLUDED_haxe_ui_actions_IActionInputSource */ 
