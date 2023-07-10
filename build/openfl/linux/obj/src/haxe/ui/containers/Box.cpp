#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_15_new,"haxe.ui.containers.Box","new",0xf4b94f93,"haxe.ui.containers.Box.new","haxe/ui/containers/Box.hx",15,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_30_get_layoutName,"haxe.ui.containers.Box","get_layoutName",0x35d42a0b,"haxe.ui.containers.Box.get_layoutName","haxe/ui/containers/Box.hx",30,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_32_set_layoutName,"haxe.ui.containers.Box","set_layoutName",0x55f4127f,"haxe.ui.containers.Box.set_layoutName","haxe/ui/containers/Box.hx",32,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_45_createDefaults,"haxe.ui.containers.Box","createDefaults",0xde14075b,"haxe.ui.containers.Box.createDefaults","haxe/ui/containers/Box.hx",45,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_53_applyStyle,"haxe.ui.containers.Box","applyStyle",0x2d543e10,"haxe.ui.containers.Box.applyStyle","haxe/ui/containers/Box.hx",53,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_193_registerComposite,"haxe.ui.containers.Box","registerComposite",0x7c067797,"haxe.ui.containers.Box.registerComposite","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_522_registerBehaviours,"haxe.ui.containers.Box","registerBehaviours",0x8ca13a06,"haxe.ui.containers.Box.registerBehaviours","haxe/ui/macros/Macros.hx",522,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_566_get_icon,"haxe.ui.containers.Box","get_icon",0x79ef2aef,"haxe.ui.containers.Box.get_icon","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_613_set_icon,"haxe.ui.containers.Box","set_icon",0x284c8463,"haxe.ui.containers.Box.set_icon","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_96fe4c9de6174193_651_cloneComponent,"haxe.ui.containers.Box","cloneComponent",0x0296a14d,"haxe.ui.containers.Box.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_493_self,"haxe.ui.containers.Box","self",0x30ba58f9,"haxe.ui.containers.Box.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void Box_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_15_new)
HXLINE(  52)		this->_direction = null();
HXLINE(  15)		super::__construct();
            	}

Dynamic Box_obj::__CreateEmpty() { return new Box_obj; }

void *Box_obj::_hx_vtable = 0;

Dynamic Box_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Box_obj > _hx_result = new Box_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Box_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x1f4df417;
				}
			} else {
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x4af7dd8e;
				}
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

::String Box_obj::get_layoutName(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_30_get_layoutName)
HXDLIN(  30)		return this->_layoutName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_layoutName,return )

::String Box_obj::set_layoutName(::String value){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_32_set_layoutName)
HXLINE(  33)		if ((this->_layoutName == value)) {
HXLINE(  34)			return value;
            		}
HXLINE(  37)		this->_layoutName = value;
HXLINE(  38)		this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->get_layoutName()));
HXLINE(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_layoutName,return )

void Box_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_45_createDefaults)
HXLINE(  46)		this->super::createDefaults();
HXLINE(  47)		if (::hx::IsNull( this->_defaultLayoutClass )) {
HXLINE(  48)			this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::DefaultLayout >();
            		}
            	}


void Box_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_53_applyStyle)
HXLINE(  54)		this->super::applyStyle(style);
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (::hx::IsNotNull( style->direction )) {
HXLINE(  56)			_hx_tmp = (style->direction != this->_direction);
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  57)			this->_direction = style->direction;
HXLINE(  58)			this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->_direction));
            		}
            	}


void Box_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_193_registerComposite)
HXLINE( 194)		this->super::registerComposite();
HXLINE( 210)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::DefaultLayout >();
            	}


void Box_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_522_registerBehaviours)
HXLINE( 523)		this->super::registerBehaviours();
HXLINE( 632)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


 ::haxe::ui::util::VariantType Box_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_566_get_icon)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return null();
            		}
HXLINE( 570)		return this->behaviours->get(HX_("icon",79,e7,b2,45));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_icon,return )

 ::haxe::ui::util::VariantType Box_obj::set_icon( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_613_set_icon)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		this->behaviours->set(HX_("icon",79,e7,b2,45),value);
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("icon",79,e7,b2,45)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_icon,return )

 ::haxe::ui::core::ComponentContainer Box_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_96fe4c9de6174193_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::containers::Box c = ( ( ::haxe::ui::containers::Box)(this->super::cloneComponent()) );
HXLINE( 450)		if (::hx::IsNotNull( this->get_layoutName() )) {
HXLINE( 450)			c->set_layoutName(this->get_layoutName());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_icon() )) {
HXLINE( 450)			c->set_icon(this->get_icon());
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


 ::haxe::ui::core::ComponentContainer Box_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_493_self)
HXDLIN( 493)		return  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Box_obj > Box_obj::__new() {
	::hx::ObjectPtr< Box_obj > __this = new Box_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Box_obj > Box_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Box_obj *__this = (Box_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Box_obj), true, "haxe.ui.containers.Box"));
	*(void **)__this = Box_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Box_obj::Box_obj()
{
}

void Box_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Box);
	HX_MARK_MEMBER_NAME(_layoutName,"_layoutName");
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Box_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layoutName,"_layoutName");
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Box_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layoutName() ); }
		if (HX_FIELD_EQ(inName,"_direction") ) { return ::hx::Val( _direction ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { return ::hx::Val( _layoutName ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layoutName") ) { return ::hx::Val( get_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layoutName") ) { return ::hx::Val( set_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Box_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layoutName(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { _layoutName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Box_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_layoutName",34,b7,28,b6));
	outFields->push(HX_("layoutName",15,ea,9e,e3));
	outFields->push(HX_("_direction",00,de,e2,6b));
	outFields->push(HX_("icon",79,e7,b2,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Box_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Box_obj,_layoutName),HX_("_layoutName",34,b7,28,b6)},
	{::hx::fsString,(int)offsetof(Box_obj,_direction),HX_("_direction",00,de,e2,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Box_obj_sStaticStorageInfo = 0;
#endif

static ::String Box_obj_sMemberFields[] = {
	HX_("_layoutName",34,b7,28,b6),
	HX_("get_layoutName",5e,72,94,59),
	HX_("set_layoutName",d2,5a,b4,79),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("_direction",00,de,e2,6b),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Box_obj::__mClass;

void Box_obj::__register()
{
	Box_obj _hx_dummy;
	Box_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.Box",21,8a,37,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Box_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Box_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Box_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Box_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
