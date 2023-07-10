#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_ComponentDisabledBehaviour
#include <haxe/ui/core/ComponentDisabledBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentTextBehaviour
#include <haxe/ui/core/ComponentTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentToolTipBehaviour
#include <haxe/ui/core/ComponentToolTipBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentToolTipRendererBehaviour
#include <haxe/ui/core/ComponentToolTipRendererBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValueBehaviour
#include <haxe/ui/core/ComponentValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ee6acef0653865e7_15_new,"haxe.ui.core.ComponentContainer","new",0x020a2b33,"haxe.ui.core.ComponentContainer.new","haxe/ui/core/ComponentContainer.hx",15,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_58_dispatch,"haxe.ui.core.ComponentContainer","dispatch",0xa4b45707,"haxe.ui.core.ComponentContainer.dispatch","haxe/ui/core/ComponentContainer.hx",58,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_67_get_isReady,"haxe.ui.core.ComponentContainer","get_isReady",0x6cd48a03,"haxe.ui.core.ComponentContainer.get_isReady","haxe/ui/core/ComponentContainer.hx",67,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_78_get_childComponents,"haxe.ui.core.ComponentContainer","get_childComponents",0x33ab3dbc,"haxe.ui.core.ComponentContainer.get_childComponents","haxe/ui/core/ComponentContainer.hx",78,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_85_registerBehaviours,"haxe.ui.core.ComponentContainer","registerBehaviours",0xaa987266,"haxe.ui.core.ComponentContainer.registerBehaviours","haxe/ui/core/ComponentContainer.hx",85,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_96_addComponent,"haxe.ui.core.ComponentContainer","addComponent",0xd1b74529,"haxe.ui.core.ComponentContainer.addComponent","haxe/ui/core/ComponentContainer.hx",96,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_112_addComponentAt,"haxe.ui.core.ComponentContainer","addComponentAt",0x21f1da7c,"haxe.ui.core.ComponentContainer.addComponentAt","haxe/ui/core/ComponentContainer.hx",112,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_124_removeComponent,"haxe.ui.core.ComponentContainer","removeComponent",0x34ef572c,"haxe.ui.core.ComponentContainer.removeComponent","haxe/ui/core/ComponentContainer.hx",124,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_136_removeComponentAt,"haxe.ui.core.ComponentContainer","removeComponentAt",0xd0d4b33f,"haxe.ui.core.ComponentContainer.removeComponentAt","haxe/ui/core/ComponentContainer.hx",136,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_143_moveComponentToBack,"haxe.ui.core.ComponentContainer","moveComponentToBack",0xb4f506a1,"haxe.ui.core.ComponentContainer.moveComponentToBack","haxe/ui/core/ComponentContainer.hx",143,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_154_moveComponentBackward,"haxe.ui.core.ComponentContainer","moveComponentBackward",0x567df302,"haxe.ui.core.ComponentContainer.moveComponentBackward","haxe/ui/core/ComponentContainer.hx",154,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_171_moveComponentToFront,"haxe.ui.core.ComponentContainer","moveComponentToFront",0xfa50d6ef,"haxe.ui.core.ComponentContainer.moveComponentToFront","haxe/ui/core/ComponentContainer.hx",171,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_182_moveComponentFrontward,"haxe.ui.core.ComponentContainer","moveComponentFrontward",0xea33a766,"haxe.ui.core.ComponentContainer.moveComponentFrontward","haxe/ui/core/ComponentContainer.hx",182,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_199_get_bottomComponent,"haxe.ui.core.ComponentContainer","get_bottomComponent",0xc848743c,"haxe.ui.core.ComponentContainer.get_bottomComponent","haxe/ui/core/ComponentContainer.hx",199,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_210_get_topComponent,"haxe.ui.core.ComponentContainer","get_topComponent",0x8a3d793e,"haxe.ui.core.ComponentContainer.get_topComponent","haxe/ui/core/ComponentContainer.hx",210,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_217_postCloneComponent,"haxe.ui.core.ComponentContainer","postCloneComponent",0x16f4b4ad,"haxe.ui.core.ComponentContainer.postCloneComponent","haxe/ui/core/ComponentContainer.hx",217,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_255_get_id,"haxe.ui.core.ComponentContainer","get_id",0x1fe5de31,"haxe.ui.core.ComponentContainer.get_id","haxe/ui/core/ComponentContainer.hx",255,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_ee6acef0653865e7_257_set_id,"haxe.ui.core.ComponentContainer","set_id",0xec2e32a5,"haxe.ui.core.ComponentContainer.set_id","haxe/ui/core/ComponentContainer.hx",257,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_566_get_disabled,"haxe.ui.core.ComponentContainer","get_disabled",0xf42d2852,"haxe.ui.core.ComponentContainer.get_disabled","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_613_set_disabled,"haxe.ui.core.ComponentContainer","set_disabled",0x09264bc6,"haxe.ui.core.ComponentContainer.set_disabled","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_556_get_tooltip,"haxe.ui.core.ComponentContainer","get_tooltip",0x5420f2ed,"haxe.ui.core.ComponentContainer.get_tooltip","haxe/ui/macros/Macros.hx",556,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_593_set_tooltip,"haxe.ui.core.ComponentContainer","set_tooltip",0x5e8df9f9,"haxe.ui.core.ComponentContainer.set_tooltip","haxe/ui/macros/Macros.hx",593,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_559_get_tooltipRenderer,"haxe.ui.core.ComponentContainer","get_tooltipRenderer",0x7f6ea950,"haxe.ui.core.ComponentContainer.get_tooltipRenderer","haxe/ui/macros/Macros.hx",559,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_613_set_tooltipRenderer,"haxe.ui.core.ComponentContainer","set_tooltipRenderer",0xbc0b9c5c,"haxe.ui.core.ComponentContainer.set_tooltipRenderer","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_566_get_text,"haxe.ui.core.ComponentContainer","get_text",0x53051083,"haxe.ui.core.ComponentContainer.get_text","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_599_set_text,"haxe.ui.core.ComponentContainer","set_text",0x016269f7,"haxe.ui.core.ComponentContainer.set_text","haxe/ui/macros/Macros.hx",599,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_556_get_value,"haxe.ui.core.ComponentContainer","get_value",0x758896db,"haxe.ui.core.ComponentContainer.get_value","haxe/ui/macros/Macros.hx",556,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_593_set_value,"haxe.ui.core.ComponentContainer","set_value",0x58d982e7,"haxe.ui.core.ComponentContainer.set_value","haxe/ui/macros/Macros.hx",593,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5b663bee1d7a53_651_cloneComponent,"haxe.ui.core.ComponentContainer","cloneComponent",0x31b229ad,"haxe.ui.core.ComponentContainer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_27d32c4cde0bea00_493_self,"haxe.ui.core.ComponentContainer","self",0xca29a959,"haxe.ui.core.ComponentContainer.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace core{

void ComponentContainer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ee6acef0653865e7_15_new)
HXLINE( 249)		this->_id = null();
HXLINE( 231)		this->_style = null();
HXLINE( 226)		this->_layoutLocked = false;
HXLINE( 224)		this->_layout = null();
HXLINE(  61)		this->_componentReady = false;
HXLINE(  48)		this->parentComponent = null();
HXLINE(  54)		super::__construct();
HXLINE(  55)		this->behaviours =  ::haxe::ui::behaviours::Behaviours_obj::__alloc( HX_CTX ,::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this)));
            	}

Dynamic ComponentContainer_obj::__CreateEmpty() { return new ComponentContainer_obj; }

void *ComponentContainer_obj::_hx_vtable = 0;

Dynamic ComponentContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentContainer_obj > _hx_result = new ComponentContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0330636f) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x0330636f;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x241b0321 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::haxe::ui::core::IClonable_obj _hx_haxe_ui_core_ComponentContainer__hx_haxe_ui_core_IClonable= {
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::core::ComponentContainer_obj::cloneComponent_2aa2127b,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::core::ComponentContainer_obj::self_2aa2127b,
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::core::ComponentContainer_obj::postCloneComponent,
};

 ::Dynamic ComponentContainer_obj::self_2aa2127b() {
			return self();
}

 ::Dynamic ComponentContainer_obj::cloneComponent_2aa2127b() {
			return cloneComponent();
}
void *ComponentContainer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x7e9cb512: return &_hx_haxe_ui_core_ComponentContainer__hx_haxe_ui_core_IClonable;
	}
	return super::_hx_getInterface(inHash);
}

void ComponentContainer_obj::dispatch( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_58_dispatch)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,dispatch,(void))

bool ComponentContainer_obj::get_isReady(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_67_get_isReady)
HXDLIN(  67)		return this->_componentReady;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_isReady,return )

::Array< ::Dynamic> ComponentContainer_obj::get_childComponents(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_78_get_childComponents)
HXLINE(  79)		if (::hx::IsNull( this->_children )) {
HXLINE(  80)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  82)		return this->_children;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_childComponents,return )

void ComponentContainer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_85_registerBehaviours)
HXLINE( 632)		this->behaviours->_hx_register(HX_("disabled",7c,41,04,7c),::hx::ClassOf< ::haxe::ui::core::ComponentDisabledBehaviour >(),null());
HXLINE( 636)		this->behaviours->_hx_register(HX_("tooltip",03,ad,8c,6a),::hx::ClassOf< ::haxe::ui::core::ComponentToolTipBehaviour >(),null());
HXDLIN( 636)		this->behaviours->_hx_register(HX_("tooltipRenderer",66,69,e3,ff),::hx::ClassOf< ::haxe::ui::core::ComponentToolTipRendererBehaviour >(),null());
HXLINE( 632)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::core::ComponentTextBehaviour >(),null());
HXDLIN( 632)		this->behaviours->_hx_register(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::core::ComponentValueBehaviour >(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,registerBehaviours,(void))

 ::haxe::ui::core::Component ComponentContainer_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_96_addComponent)
HXDLIN(  96)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,addComponent,return )

 ::haxe::ui::core::Component ComponentContainer_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_112_addComponentAt)
HXDLIN( 112)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentContainer_obj,addComponentAt,return )

 ::haxe::ui::core::Component ComponentContainer_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_124_removeComponent)
HXDLIN( 124)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentContainer_obj,removeComponent,return )

 ::haxe::ui::core::Component ComponentContainer_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_136_removeComponentAt)
HXDLIN( 136)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentContainer_obj,removeComponentAt,return )

void ComponentContainer_obj::moveComponentToBack(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_143_moveComponentToBack)
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 144)			_hx_tmp = (this->parentComponent->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 144)			_hx_tmp = true;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 145)			return;
            		}
HXLINE( 148)		this->parentComponent->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,moveComponentToBack,(void))

void ComponentContainer_obj::moveComponentBackward(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_154_moveComponentBackward)
HXLINE( 155)		bool _hx_tmp;
HXDLIN( 155)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 155)			_hx_tmp = (this->parentComponent->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 155)			_hx_tmp = true;
            		}
HXDLIN( 155)		if (_hx_tmp) {
HXLINE( 156)			return;
            		}
HXLINE( 159)		int index = this->parentComponent->getComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 160)		if ((index == 0)) {
HXLINE( 161)			return;
            		}
HXLINE( 164)		this->parentComponent->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),(index - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,moveComponentBackward,(void))

void ComponentContainer_obj::moveComponentToFront(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_171_moveComponentToFront)
HXLINE( 172)		bool _hx_tmp;
HXDLIN( 172)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 172)			_hx_tmp = (this->parentComponent->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 172)			_hx_tmp = true;
            		}
HXDLIN( 172)		if (_hx_tmp) {
HXLINE( 173)			return;
            		}
HXLINE( 176)		 ::haxe::ui::core::Component _hx_tmp1 = this->parentComponent;
HXDLIN( 176)		_hx_tmp1->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),(this->parentComponent->get_numComponents() - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,moveComponentToFront,(void))

void ComponentContainer_obj::moveComponentFrontward(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_182_moveComponentFrontward)
HXLINE( 183)		bool _hx_tmp;
HXDLIN( 183)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 183)			_hx_tmp = (this->parentComponent->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 183)			_hx_tmp = true;
            		}
HXDLIN( 183)		if (_hx_tmp) {
HXLINE( 184)			return;
            		}
HXLINE( 187)		int index = this->parentComponent->getComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 188)		if ((index == (this->parentComponent->get_numComponents() - 1))) {
HXLINE( 189)			return;
            		}
HXLINE( 192)		this->parentComponent->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),(index + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,moveComponentFrontward,(void))

 ::haxe::ui::core::Component ComponentContainer_obj::get_bottomComponent(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_199_get_bottomComponent)
HXLINE( 200)		bool _hx_tmp;
HXDLIN( 200)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 200)			_hx_tmp = (this->_children->length == 0);
            		}
            		else {
HXLINE( 200)			_hx_tmp = true;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 201)			return null();
            		}
HXLINE( 203)		return this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_bottomComponent,return )

 ::haxe::ui::core::Component ComponentContainer_obj::get_topComponent(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_210_get_topComponent)
HXLINE( 211)		bool _hx_tmp;
HXDLIN( 211)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 211)			_hx_tmp = (this->_children->length == 0);
            		}
            		else {
HXLINE( 211)			_hx_tmp = true;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 212)			return null();
            		}
HXLINE( 214)		return this->_children->__get((this->_children->length - 1)).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_topComponent,return )

void ComponentContainer_obj::postCloneComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_217_postCloneComponent)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,postCloneComponent,(void))

::String ComponentContainer_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_255_get_id)
HXDLIN( 255)		return this->_id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_id,return )

::String ComponentContainer_obj::set_id(::String value){
            	HX_STACKFRAME(&_hx_pos_ee6acef0653865e7_257_set_id)
HXLINE( 258)		if ((this->_id != value)) {
HXLINE( 259)			this->_id = value;
            		}
HXLINE( 263)		return this->_id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,set_id,return )

bool ComponentContainer_obj::get_disabled(){
            	HX_STACKFRAME(&_hx_pos_27d32c4cde0bea00_566_get_disabled)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return false;
            		}
HXLINE( 570)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("disabled",7c,41,04,7c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_disabled,return )

bool ComponentContainer_obj::set_disabled(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_27d32c4cde0bea00_613_set_disabled)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("disabled",7c,41,04,7c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("disabled",7c,41,04,7c)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,set_disabled,return )

 ::Dynamic ComponentContainer_obj::get_tooltip(){
            	HX_STACKFRAME(&_hx_pos_27d32c4cde0bea00_556_get_tooltip)
HXDLIN( 556)		return this->behaviours->getDynamic(HX_("tooltip",03,ad,8c,6a));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_tooltip,return )

 ::Dynamic ComponentContainer_obj::set_tooltip( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_27d32c4cde0bea00_593_set_tooltip)
HXLINE( 594)		this->behaviours->setDynamic(HX_("tooltip",03,ad,8c,6a),value);
HXLINE( 595)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("tooltip",03,ad,8c,6a)));
HXLINE( 596)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,set_tooltip,return )

 ::haxe::ui::core::Component ComponentContainer_obj::get_tooltipRenderer(){
            	HX_STACKFRAME(&_hx_pos_27d32c4cde0bea00_559_get_tooltipRenderer)
HXLINE( 560)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 561)			return null();
            		}
HXLINE( 563)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("tooltipRenderer",66,69,e3,ff)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_tooltipRenderer,return )

 ::haxe::ui::core::Component ComponentContainer_obj::set_tooltipRenderer( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_27d32c4cde0bea00_613_set_tooltipRenderer)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("tooltipRenderer",66,69,e3,ff),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("tooltipRenderer",66,69,e3,ff)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,set_tooltipRenderer,return )

::String ComponentContainer_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_27d32c4cde0bea00_566_get_text)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return null();
            		}
HXLINE( 570)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("text",ad,cc,f9,4c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_text,return )

::String ComponentContainer_obj::set_text(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_27d32c4cde0bea00_599_set_text)
HXLINE( 600)		{
HXLINE( 600)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 600)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 601)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 602)					bool _hx_tmp;
HXDLIN( 602)					bool _hx_tmp1;
HXDLIN( 602)					if (::hx::IsNotNull( value )) {
HXLINE( 602)						_hx_tmp1 = ::StringTools_obj::startsWith(value,HX_("{{",a0,6b,00,00));
            					}
            					else {
HXLINE( 602)						_hx_tmp1 = false;
            					}
HXDLIN( 602)					if (_hx_tmp1) {
HXLINE( 602)						_hx_tmp = ::StringTools_obj::endsWith(value,HX_("}}",60,6d,00,00));
            					}
            					else {
HXLINE( 602)						_hx_tmp = false;
            					}
HXDLIN( 602)					if (_hx_tmp) {
HXLINE( 603)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("text",ad,cc,f9,4c),null(),value,null());
HXLINE( 604)						return value;
            					}
            				}
            			}
            		}
HXLINE( 608)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 608)		_hx_tmp->set(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 609)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("text",ad,cc,f9,4c)));
HXLINE( 610)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,set_text,return )

 ::Dynamic ComponentContainer_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_27d32c4cde0bea00_556_get_value)
HXDLIN( 556)		return this->behaviours->getDynamic(HX_("value",71,7f,b8,31));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,get_value,return )

 ::Dynamic ComponentContainer_obj::set_value( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_27d32c4cde0bea00_593_set_value)
HXLINE( 594)		this->behaviours->setDynamic(HX_("value",71,7f,b8,31),value);
HXLINE( 595)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("value",71,7f,b8,31)));
HXLINE( 596)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentContainer_obj,set_value,return )

 ::haxe::ui::core::ComponentContainer ComponentContainer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_cc5b663bee1d7a53_651_cloneComponent)
HXLINE( 443)		 ::haxe::ui::core::ComponentContainer c = this->self();
HXLINE( 450)		if (::hx::IsNotNull( this->get_id() )) {
HXLINE( 450)			c->set_id(this->get_id());
            		}
HXLINE( 452)		c->set_disabled(this->get_disabled());
HXLINE( 450)		if (::hx::IsNotNull( this->get_tooltip() )) {
HXLINE( 450)			c->set_tooltip(this->get_tooltip());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_tooltipRenderer() )) {
HXLINE( 450)			c->set_tooltipRenderer(this->get_tooltipRenderer());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_text() )) {
HXLINE( 450)			c->set_text(this->get_text());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_value() )) {
HXLINE( 450)			c->set_value(this->get_value());
            		}
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				::Array< ::Dynamic> _g1;
HXDLIN( 458)				if (::hx::IsNull( this->_children )) {
HXLINE( 458)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 458)					_g1 = this->_children;
            				}
HXDLIN( 458)				while((_g < _g1->length)){
HXLINE( 458)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 458)					_g = (_g + 1);
HXLINE( 459)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 463)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 465)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,cloneComponent,return )

 ::haxe::ui::core::ComponentContainer ComponentContainer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_27d32c4cde0bea00_493_self)
HXDLIN( 493)		return  ::haxe::ui::core::ComponentContainer_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentContainer_obj,self,return )


::hx::ObjectPtr< ComponentContainer_obj > ComponentContainer_obj::__new() {
	::hx::ObjectPtr< ComponentContainer_obj > __this = new ComponentContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentContainer_obj > ComponentContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentContainer_obj *__this = (ComponentContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentContainer_obj), true, "haxe.ui.core.ComponentContainer"));
	*(void **)__this = ComponentContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentContainer_obj::ComponentContainer_obj()
{
}

void ComponentContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentContainer);
	HX_MARK_MEMBER_NAME(behaviours,"behaviours");
	HX_MARK_MEMBER_NAME(parentComponent,"parentComponent");
	HX_MARK_MEMBER_NAME(_componentReady,"_componentReady");
	HX_MARK_MEMBER_NAME(isReady,"isReady");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(childComponents,"childComponents");
	HX_MARK_MEMBER_NAME(bottomComponent,"bottomComponent");
	HX_MARK_MEMBER_NAME(topComponent,"topComponent");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_layoutLocked,"_layoutLocked");
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_id,"_id");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(behaviours,"behaviours");
	HX_VISIT_MEMBER_NAME(parentComponent,"parentComponent");
	HX_VISIT_MEMBER_NAME(_componentReady,"_componentReady");
	HX_VISIT_MEMBER_NAME(isReady,"isReady");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(childComponents,"childComponents");
	HX_VISIT_MEMBER_NAME(bottomComponent,"bottomComponent");
	HX_VISIT_MEMBER_NAME(topComponent,"topComponent");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_layoutLocked,"_layoutLocked");
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return ::hx::Val( _id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { return ::hx::Val( _style ); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isReady() : isReady ); }
		if (HX_FIELD_EQ(inName,"_layout") ) { return ::hx::Val( _layout ); }
		if (HX_FIELD_EQ(inName,"tooltip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tooltip() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabled() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { return ::hx::Val( _children ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"behaviours") ) { return ::hx::Val( behaviours ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isReady") ) { return ::hx::Val( get_isReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tooltip") ) { return ::hx::Val( get_tooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tooltip") ) { return ::hx::Val( set_tooltip_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"topComponent") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_topComponent() : topComponent ); }
		if (HX_FIELD_EQ(inName,"get_disabled") ) { return ::hx::Val( get_disabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return ::hx::Val( set_disabled_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layoutLocked") ) { return ::hx::Val( _layoutLocked ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { return ::hx::Val( parentComponent ); }
		if (HX_FIELD_EQ(inName,"_componentReady") ) { return ::hx::Val( _componentReady ); }
		if (HX_FIELD_EQ(inName,"childComponents") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_childComponents() : childComponents ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"bottomComponent") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomComponent() : bottomComponent ); }
		if (HX_FIELD_EQ(inName,"tooltipRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tooltipRenderer() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_topComponent") ) { return ::hx::Val( get_topComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"postCloneComponent") ) { return ::hx::Val( postCloneComponent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_childComponents") ) { return ::hx::Val( get_childComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponentToBack") ) { return ::hx::Val( moveComponentToBack_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomComponent") ) { return ::hx::Val( get_bottomComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tooltipRenderer") ) { return ::hx::Val( get_tooltipRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tooltipRenderer") ) { return ::hx::Val( set_tooltipRenderer_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"moveComponentToFront") ) { return ::hx::Val( moveComponentToFront_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"moveComponentBackward") ) { return ::hx::Val( moveComponentBackward_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"moveComponentFrontward") ) { return ::hx::Val( moveComponentFrontward_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< ::String >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { isReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast<  ::haxe::ui::layouts::Layout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tooltip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tooltip(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabled(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"behaviours") ) { behaviours=inValue.Cast<  ::haxe::ui::behaviours::Behaviours >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topComponent") ) { topComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layoutLocked") ) { _layoutLocked=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { parentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_componentReady") ) { _componentReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childComponents") ) { childComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomComponent") ) { bottomComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tooltipRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tooltipRenderer(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("behaviours",96,03,c8,c0));
	outFields->push(HX_("parentComponent",33,d6,77,24));
	outFields->push(HX_("_componentReady",05,9b,21,7f));
	outFields->push(HX_("isReady",19,44,40,83));
	outFields->push(HX_("_children",9e,10,00,b8));
	outFields->push(HX_("childComponents",d2,fd,1f,b4));
	outFields->push(HX_("bottomComponent",52,34,bd,48));
	outFields->push(HX_("topComponent",68,6f,e9,7c));
	outFields->push(HX_("_layout",49,c0,2f,c7));
	outFields->push(HX_("_layoutLocked",33,16,7a,57));
	outFields->push(HX_("_style",72,ec,04,80));
	outFields->push(HX_("_id",fa,71,48,00));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("disabled",7c,41,04,7c));
	outFields->push(HX_("tooltip",03,ad,8c,6a));
	outFields->push(HX_("tooltipRenderer",66,69,e3,ff));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::behaviours::Behaviours */ ,(int)offsetof(ComponentContainer_obj,behaviours),HX_("behaviours",96,03,c8,c0)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentContainer_obj,parentComponent),HX_("parentComponent",33,d6,77,24)},
	{::hx::fsBool,(int)offsetof(ComponentContainer_obj,_componentReady),HX_("_componentReady",05,9b,21,7f)},
	{::hx::fsBool,(int)offsetof(ComponentContainer_obj,isReady),HX_("isReady",19,44,40,83)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ComponentContainer_obj,_children),HX_("_children",9e,10,00,b8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ComponentContainer_obj,childComponents),HX_("childComponents",d2,fd,1f,b4)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentContainer_obj,bottomComponent),HX_("bottomComponent",52,34,bd,48)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentContainer_obj,topComponent),HX_("topComponent",68,6f,e9,7c)},
	{::hx::fsObject /*  ::haxe::ui::layouts::Layout */ ,(int)offsetof(ComponentContainer_obj,_layout),HX_("_layout",49,c0,2f,c7)},
	{::hx::fsBool,(int)offsetof(ComponentContainer_obj,_layoutLocked),HX_("_layoutLocked",33,16,7a,57)},
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(ComponentContainer_obj,_style),HX_("_style",72,ec,04,80)},
	{::hx::fsString,(int)offsetof(ComponentContainer_obj,_id),HX_("_id",fa,71,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentContainer_obj_sMemberFields[] = {
	HX_("behaviours",96,03,c8,c0),
	HX_("parentComponent",33,d6,77,24),
	HX_("dispatch",ba,ce,63,1e),
	HX_("_componentReady",05,9b,21,7f),
	HX_("isReady",19,44,40,83),
	HX_("get_isReady",30,a4,3a,09),
	HX_("_children",9e,10,00,b8),
	HX_("childComponents",d2,fd,1f,b4),
	HX_("get_childComponents",e9,cc,2a,3f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("moveComponentToBack",ce,95,74,c0),
	HX_("moveComponentBackward",6f,67,61,ec),
	HX_("moveComponentToFront",22,8f,6e,fe),
	HX_("moveComponentFrontward",59,12,56,7b),
	HX_("bottomComponent",52,34,bd,48),
	HX_("get_bottomComponent",69,03,c8,d3),
	HX_("topComponent",68,6f,e9,7c),
	HX_("get_topComponent",f1,5b,88,81),
	HX_("postCloneComponent",20,ea,c3,a0),
	HX_("_layout",49,c0,2f,c7),
	HX_("_layoutLocked",33,16,7a,57),
	HX_("_style",72,ec,04,80),
	HX_("_id",fa,71,48,00),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("get_disabled",85,f5,1d,31),
	HX_("set_disabled",f9,18,17,46),
	HX_("get_tooltip",1a,0d,87,f0),
	HX_("set_tooltip",26,14,f4,fa),
	HX_("get_tooltipRenderer",7d,38,ee,8a),
	HX_("set_tooltipRenderer",89,2b,8b,c7),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ComponentContainer_obj::__mClass;

void ComponentContainer_obj::__register()
{
	ComponentContainer_obj _hx_dummy;
	ComponentContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentContainer",c1,15,ca,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
