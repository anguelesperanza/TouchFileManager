#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_49c59bbbec578e16_133_new,"haxe.ui.components.ButtonLayout","new",0xc6d1ddd4,"haxe.ui.components.ButtonLayout.new","haxe/ui/components/Button.hx",133,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_135_get_iconPosition,"haxe.ui.components.ButtonLayout","get_iconPosition",0x015f6bd7,"haxe.ui.components.ButtonLayout.get_iconPosition","haxe/ui/components/Button.hx",135,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_142_resizeChildren,"haxe.ui.components.ButtonLayout","resizeChildren",0x32c1025f,"haxe.ui.components.ButtonLayout.resizeChildren","haxe/ui/components/Button.hx",142,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_160_get_usableSize,"haxe.ui.components.ButtonLayout","get_usableSize",0xb0864b2e,"haxe.ui.components.ButtonLayout.get_usableSize","haxe/ui/components/Button.hx",160,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_169_calcAutoSize,"haxe.ui.components.ButtonLayout","calcAutoSize",0x60d62591,"haxe.ui.components.ButtonLayout.calcAutoSize","haxe/ui/components/Button.hx",169,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_183_isIconRelevant,"haxe.ui.components.ButtonLayout","isIconRelevant",0x982c45cc,"haxe.ui.components.ButtonLayout.isIconRelevant","haxe/ui/components/Button.hx",183,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_188_repositionChildren,"haxe.ui.components.ButtonLayout","repositionChildren",0x87f235c7,"haxe.ui.components.ButtonLayout.repositionChildren","haxe/ui/components/Button.hx",188,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_300_getTextAlignPos,"haxe.ui.components.ButtonLayout","getTextAlignPos",0x0e58c6c6,"haxe.ui.components.ButtonLayout.getTextAlignPos","haxe/ui/components/Button.hx",300,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_133_new)
HXDLIN( 133)		super::__construct();
            	}

Dynamic ButtonLayout_obj::__CreateEmpty() { return new ButtonLayout_obj; }

void *ButtonLayout_obj::_hx_vtable = 0;

Dynamic ButtonLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonLayout_obj > _hx_result = new ButtonLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x02db37b4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02db37b4;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

::String ButtonLayout_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_135_get_iconPosition)
HXLINE( 136)		bool _hx_tmp;
HXDLIN( 136)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 136)			_hx_tmp = ::hx::IsNull( this->get_component()->get_style()->iconPosition );
            		}
            		else {
HXLINE( 136)			_hx_tmp = true;
            		}
HXDLIN( 136)		if (_hx_tmp) {
HXLINE( 137)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 139)		return this->get_component()->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,get_iconPosition,return )

void ButtonLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_142_resizeChildren)
HXLINE( 143)		this->super::resizeChildren();
HXLINE( 145)		if ((this->_component->get_autoWidth() == false)) {
HXLINE( 146)			 ::haxe::ui::components::Label label = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 147)			 ::haxe::ui::geom::Size ucx = this->get_usableSize();
HXLINE( 148)			Float cx = ucx->width;
HXLINE( 149)			if (::hx::IsNotNull( label )) {
HXLINE( 150)				label->set_width(cx);
            			}
HXLINE( 153)			 ::haxe::ui::core::ItemRenderer itemRenderer = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 154)			if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 155)				itemRenderer->set_width(cx);
            			}
            		}
            	}


 ::haxe::ui::geom::Size ButtonLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_160_get_usableSize)
HXLINE( 161)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE( 162)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		if (::hx::IsNotNull( icon )) {
HXLINE( 163)			bool _hx_tmp1;
HXDLIN( 163)			bool _hx_tmp2;
HXDLIN( 163)			if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 163)				_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            			}
            			else {
HXLINE( 163)				_hx_tmp2 = true;
            			}
HXDLIN( 163)			if (!(_hx_tmp2)) {
HXLINE( 163)				_hx_tmp1 = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 163)				_hx_tmp1 = true;
            			}
HXDLIN( 163)			if (!(_hx_tmp1)) {
HXLINE( 163)				_hx_tmp = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 163)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 163)			_hx_tmp = false;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 164)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 164)			Float size2 = size1->width;
HXDLIN( 164)			Float _hx_tmp = icon->get_width();
HXDLIN( 164)			size1->width = (size2 - (_hx_tmp + this->get_verticalSpacing()));
            		}
HXLINE( 166)		return size;
            	}


 ::haxe::ui::geom::Size ButtonLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_169_calcAutoSize)
HXLINE( 170)		::Array< ::Dynamic> exclusions1 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 171)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 172)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 173)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN( 173)			if (::hx::IsNotNull( icon )) {
HXLINE( 173)				bool _hx_tmp1;
HXDLIN( 173)				bool _hx_tmp2;
HXDLIN( 173)				if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 173)					_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            				}
            				else {
HXLINE( 173)					_hx_tmp2 = true;
            				}
HXDLIN( 173)				if (!(_hx_tmp2)) {
HXLINE( 173)					_hx_tmp1 = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            				}
            				else {
HXLINE( 173)					_hx_tmp1 = true;
            				}
HXDLIN( 173)				if (!(_hx_tmp1)) {
HXLINE( 173)					_hx_tmp = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            				}
            				else {
HXLINE( 173)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 173)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 173)			_hx_tmp = false;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 174)			exclusions1->push(icon);
            		}
HXLINE( 176)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions1);
HXLINE( 177)		bool _hx_tmp1;
HXDLIN( 177)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 177)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN( 177)			if (::hx::IsNotNull( icon )) {
HXLINE( 177)				bool _hx_tmp;
HXDLIN( 177)				bool _hx_tmp2;
HXDLIN( 177)				if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 177)					_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            				}
            				else {
HXLINE( 177)					_hx_tmp2 = true;
            				}
HXDLIN( 177)				if (!(_hx_tmp2)) {
HXLINE( 177)					_hx_tmp = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            				}
            				else {
HXLINE( 177)					_hx_tmp = true;
            				}
HXDLIN( 177)				if (!(_hx_tmp)) {
HXLINE( 177)					_hx_tmp1 = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            				}
            				else {
HXLINE( 177)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 177)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 177)			_hx_tmp1 = false;
            		}
HXDLIN( 177)		if (_hx_tmp1) {
HXLINE( 178)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 178)			Float size2 = size1->width;
HXDLIN( 178)			Float _hx_tmp = icon->get_width();
HXDLIN( 178)			size1->width = (size2 + (_hx_tmp + this->get_verticalSpacing()));
            		}
HXLINE( 180)		return size;
            	}


bool ButtonLayout_obj::isIconRelevant(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_183_isIconRelevant)
HXLINE( 184)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 185)		if (::hx::IsNotNull( icon )) {
HXLINE( 185)			bool _hx_tmp;
HXDLIN( 185)			bool _hx_tmp1;
HXDLIN( 185)			if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 185)				_hx_tmp1 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            			}
            			else {
HXLINE( 185)				_hx_tmp1 = true;
            			}
HXDLIN( 185)			if (!(_hx_tmp1)) {
HXLINE( 185)				_hx_tmp = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 185)				_hx_tmp = true;
            			}
HXDLIN( 185)			if (!(_hx_tmp)) {
HXLINE( 185)				return (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 185)				return true;
            			}
            		}
            		else {
HXLINE( 185)			return false;
            		}
HXDLIN( 185)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,isIconRelevant,return )

void ButtonLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_188_repositionChildren)
HXLINE( 189)		this->super::repositionChildren();
HXLINE( 191)		 ::haxe::ui::components::Label label = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 192)		bool _hx_tmp;
HXDLIN( 192)		if (::hx::IsNotNull( label )) {
HXLINE( 192)			_hx_tmp = (label->get_hidden() == true);
            		}
            		else {
HXLINE( 192)			_hx_tmp = false;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 193)			label = null();
            		}
HXLINE( 195)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 196)		bool _hx_tmp1;
HXDLIN( 196)		if (::hx::IsNotNull( icon )) {
HXLINE( 196)			_hx_tmp1 = (icon->get_hidden() == true);
            		}
            		else {
HXLINE( 196)			_hx_tmp1 = false;
            		}
HXDLIN( 196)		if (_hx_tmp1) {
HXLINE( 197)			icon = null();
            		}
HXLINE( 199)		::String _hx_switch_0 = this->get_iconPosition();
            		if (  (_hx_switch_0==HX_("far-left",7d,bc,22,51)) ){
HXLINE( 227)			bool _hx_tmp;
HXDLIN( 227)			if (::hx::IsNotNull( label )) {
HXLINE( 227)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 227)				_hx_tmp = false;
            			}
HXDLIN( 227)			if (_hx_tmp) {
HXLINE( 228)				Float x = this->get_paddingLeft();
HXLINE( 230)				if ((this->get_iconPosition() == HX_("far-left",7d,bc,22,51))) {
HXLINE( 231)					Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 231)					icon->set_left((_hx_tmp - this->marginRight(icon)));
HXLINE( 232)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 232)					x = (x + (x1 + icon->get_componentWidth()));
HXLINE( 233)					Float _hx_tmp1 = (x + this->marginLeft(label));
HXDLIN( 233)					label->set_left((_hx_tmp1 - this->marginRight(label)));
            				}
HXLINE( 236)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 236)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 236)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 236)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 237)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 237)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 237)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 237)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 238)				if (::hx::IsNotNull( label )) {
HXLINE( 239)					label->set_left(this->get_paddingLeft());
HXLINE( 240)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 240)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 240)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 240)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 241)					if (::hx::IsNotNull( icon )) {
HXLINE( 242)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 242)						icon->set_left(::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) )))));
HXLINE( 243)						Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 243)						int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 243)						Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(icon));
HXDLIN( 243)						icon->set_top((_hx_tmp3 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 227)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("far-right",a6,3e,4f,24)) ){
HXLINE( 201)			bool _hx_tmp;
HXDLIN( 201)			if (::hx::IsNotNull( label )) {
HXLINE( 201)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 201)				_hx_tmp = false;
            			}
HXDLIN( 201)			if (_hx_tmp) {
HXLINE( 202)				 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 202)				Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 202)				Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 203)				Float x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) )) - (cx2 / ( (Float)(2) ))))) );
HXLINE( 205)				if ((this->get_iconPosition() == HX_("far-right",a6,3e,4f,24))) {
HXLINE( 206)					Float _hx_tmp = (cx2 + this->get_paddingLeft());
HXDLIN( 206)					Float _hx_tmp1 = (_hx_tmp + this->get_paddingRight());
HXDLIN( 206)					if (::hx::IsLess( _hx_tmp1,this->get_component()->get_componentWidth() )) {
HXLINE( 207)						label->set_left(this->get_paddingLeft());
HXLINE( 208)						Float x1 = this->get_horizontalSpacing();
HXDLIN( 208)						x = (x + (x1 + label->get_componentWidth()));
HXLINE( 209)						 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 209)						Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 209)						Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 209)						Float _hx_tmp3 = (_hx_tmp2 + this->marginLeft(icon));
HXDLIN( 209)						icon->set_left((_hx_tmp3 - this->marginRight(icon)));
            					}
            					else {
HXLINE( 211)						label->set_left(this->get_paddingLeft());
HXLINE( 212)						Float x1 = this->get_horizontalSpacing();
HXDLIN( 212)						x = (x + (x1 + label->get_componentWidth()));
HXLINE( 213)						Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 213)						icon->set_left((_hx_tmp - this->marginRight(icon)));
            					}
            				}
HXLINE( 217)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 217)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 217)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 217)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 218)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 218)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 218)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 218)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 219)				if (::hx::IsNotNull( label )) {
HXLINE( 220)					label->set_left(this->get_paddingLeft());
HXLINE( 221)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 221)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 221)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 221)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 222)					if (::hx::IsNotNull( icon )) {
HXLINE( 223)						 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 223)						Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 223)						Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 223)						Float _hx_tmp3 = (_hx_tmp2 + this->marginLeft(icon));
HXDLIN( 223)						icon->set_left((_hx_tmp3 - this->marginRight(icon)));
HXLINE( 224)						Float _hx_tmp4 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 224)						int _hx_tmp5 = ::Std_obj::_hx_int((_hx_tmp4 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 224)						Float _hx_tmp6 = (_hx_tmp5 + this->marginTop(icon));
HXDLIN( 224)						icon->set_top((_hx_tmp6 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 201)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ||  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 246)			bool _hx_tmp;
HXDLIN( 246)			if (::hx::IsNotNull( label )) {
HXLINE( 246)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 246)				_hx_tmp = false;
            			}
HXDLIN( 246)			if (_hx_tmp) {
HXLINE( 247)				 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 247)				Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 247)				Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 248)				Float x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) )) - (cx2 / ( (Float)(2) ))))) );
HXLINE( 249)				if ((::hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign() == HX_("left",07,08,b0,47))) {
HXLINE( 250)					x = this->get_paddingLeft();
            				}
HXLINE( 253)				if ((this->get_iconPosition() == HX_("right",dc,0b,64,e9))) {
HXLINE( 254)					Float _hx_tmp = (x + this->marginLeft(label));
HXDLIN( 254)					label->set_left((_hx_tmp - this->marginRight(label)));
HXLINE( 255)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 255)					x = (x + (x1 + label->get_componentWidth()));
HXLINE( 256)					Float _hx_tmp1 = (x + this->marginLeft(icon));
HXDLIN( 256)					icon->set_left((_hx_tmp1 - this->marginRight(icon)));
            				}
            				else {
HXLINE( 258)					Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 258)					icon->set_left((_hx_tmp - this->marginRight(icon)));
HXLINE( 259)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 259)					x = (x + (x1 + icon->get_componentWidth()));
HXLINE( 260)					Float _hx_tmp1 = (x + this->marginLeft(label));
HXDLIN( 260)					label->set_left((_hx_tmp1 - this->marginRight(label)));
            				}
HXLINE( 263)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 263)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 263)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 263)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 264)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 264)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 264)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 264)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 265)				if (::hx::IsNotNull( label )) {
HXLINE( 266)					label->set_left(this->getTextAlignPos(label,( (Float)(this->get_component()->get_componentWidth()) )));
HXLINE( 267)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 267)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 267)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 267)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 268)					if (::hx::IsNotNull( icon )) {
HXLINE( 269)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 269)						icon->set_left(::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) )))));
HXLINE( 270)						Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 270)						int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 270)						Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(icon));
HXDLIN( 270)						icon->set_top((_hx_tmp3 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 246)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ||  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 273)			bool _hx_tmp;
HXDLIN( 273)			if (::hx::IsNotNull( label )) {
HXLINE( 273)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 273)				_hx_tmp = false;
            			}
HXDLIN( 273)			if (_hx_tmp) {
HXLINE( 274)				 ::Dynamic cy = label->get_componentHeight();
HXDLIN( 274)				Float cy1 = (cy + icon->get_componentHeight());
HXDLIN( 274)				Float cy2 = (cy1 + this->get_verticalSpacing());
HXLINE( 275)				Float y = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) )) - (cy2 / ( (Float)(2) ))))) );
HXLINE( 277)				if ((this->get_iconPosition() == HX_("bottom",eb,e6,78,65))) {
HXLINE( 278)					Float _hx_tmp = (y + this->marginTop(label));
HXDLIN( 278)					label->set_top((_hx_tmp - this->marginBottom(label)));
HXLINE( 279)					Float y1 = this->get_verticalSpacing();
HXDLIN( 279)					y = (y + (y1 + label->get_componentHeight()));
HXLINE( 280)					Float _hx_tmp1 = (y + this->marginTop(icon));
HXDLIN( 280)					icon->set_top((_hx_tmp1 - this->marginBottom(icon)));
            				}
            				else {
HXLINE( 282)					Float _hx_tmp = (y + this->marginTop(icon));
HXDLIN( 282)					icon->set_top((_hx_tmp - this->marginBottom(icon)));
HXLINE( 283)					Float y1 = this->get_verticalSpacing();
HXDLIN( 283)					y = (y + (y1 + icon->get_componentHeight()));
HXLINE( 284)					Float _hx_tmp1 = (y + this->marginTop(label));
HXDLIN( 284)					label->set_top((_hx_tmp1 - this->marginBottom(label)));
            				}
HXLINE( 287)				label->set_left(this->getTextAlignPos(label,( (Float)(this->get_component()->get_componentWidth()) )));
HXLINE( 288)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 288)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 288)				Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(icon));
HXDLIN( 288)				icon->set_left((_hx_tmp2 - this->marginRight(icon)));
            			}
            			else {
HXLINE( 289)				if (::hx::IsNotNull( label )) {
HXLINE( 290)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 290)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 290)					Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(label));
HXDLIN( 290)					label->set_left((_hx_tmp2 - this->marginRight(label)));
HXLINE( 291)					Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 291)					int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 291)					Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(label));
HXDLIN( 291)					label->set_top((_hx_tmp5 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 292)					if (::hx::IsNotNull( icon )) {
HXLINE( 293)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 293)						int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 293)						Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(icon));
HXDLIN( 293)						icon->set_left((_hx_tmp2 - this->marginRight(icon)));
HXLINE( 294)						Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 294)						int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 294)						Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 294)						icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 273)			goto _hx_goto_6;
            		}
            		_hx_goto_6:;
            	}


Float ButtonLayout_obj::getTextAlignPos( ::haxe::ui::components::Label label,Float usableWidth){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_300_getTextAlignPos)
HXDLIN( 300)		::String _hx_switch_0 = ::hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign();
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 302)			Float _hx_tmp = this->marginLeft(label);
HXDLIN( 302)			return (_hx_tmp + this->get_paddingLeft());
HXDLIN( 302)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 304)			Float _hx_tmp = (usableWidth - ( (Float)(label->get_componentWidth()) ));
HXDLIN( 304)			Float _hx_tmp1 = (_hx_tmp - this->marginRight(label));
HXDLIN( 304)			return (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 304)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 306)			int _hx_tmp = ::Std_obj::_hx_int(((usableWidth / ( (Float)(2) )) - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 306)			Float _hx_tmp1 = (_hx_tmp + this->marginLeft(label));
HXDLIN( 306)			return (_hx_tmp1 - this->marginRight(label));
            		}
            		_hx_goto_8:;
HXLINE( 300)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonLayout_obj,getTextAlignPos,return )


::hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__new() {
	::hx::ObjectPtr< ButtonLayout_obj > __this = new ButtonLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ButtonLayout_obj *__this = (ButtonLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonLayout_obj), true, "haxe.ui.components.ButtonLayout"));
	*(void **)__this = ButtonLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonLayout_obj::ButtonLayout_obj()
{
}

void ButtonLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLayout);
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_iconPosition() : iconPosition ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isIconRelevant") ) { return ::hx::Val( isIconRelevant_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextAlignPos") ) { return ::hx::Val( getTextAlignPos_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return ::hx::Val( get_iconPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iconPosition",42,e5,38,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ButtonLayout_obj,iconPosition),HX_("iconPosition",42,e5,38,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonLayout_obj_sMemberFields[] = {
	HX_("iconPosition",42,e5,38,76),
	HX_("get_iconPosition",cb,d1,d7,7a),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("isIconRelevant",c0,86,9b,26),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("getTextAlignPos",52,5b,42,21),
	::String(null()) };

::hx::Class ButtonLayout_obj::__mClass;

void ButtonLayout_obj::__register()
{
	ButtonLayout_obj _hx_dummy;
	ButtonLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonLayout",e2,a3,79,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
