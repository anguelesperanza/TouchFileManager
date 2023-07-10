#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#define INCLUDED_haxe_ui_behaviours_IValidatingBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,behaviours,IValidatingBehaviour)

namespace haxe{
namespace ui{
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES IValidatingBehaviour_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_validate)(); 
		static inline void validate( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::behaviours::IValidatingBehaviour_obj *>(_hx_.mPtr->_hx_getInterface(0x359109f1)))->_hx_validate)();
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_behaviours_IValidatingBehaviour */ 
