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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_27a8c01e4f733fda_11_new,"haxe.ui.containers.HBox","new",0x0d7ee91f,"haxe.ui.containers.HBox.new","haxe/ui/containers/HBox.hx",11,0x74d6aff0)
HX_LOCAL_STACK_FRAME(_hx_pos_27a8c01e4f733fda_18_get_continuous,"haxe.ui.containers.HBox","get_continuous",0xd0db3ef9,"haxe.ui.containers.HBox.get_continuous","haxe/ui/containers/HBox.hx",18,0x74d6aff0)
HX_LOCAL_STACK_FRAME(_hx_pos_27a8c01e4f733fda_20_set_continuous,"haxe.ui.containers.HBox","set_continuous",0xf0fb276d,"haxe.ui.containers.HBox.set_continuous","haxe/ui/containers/HBox.hx",20,0x74d6aff0)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a90724db2b87d_523_registerBehaviours,"haxe.ui.containers.HBox","registerBehaviours",0xd0663dfa,"haxe.ui.containers.HBox.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_bafc773041fcaab4_651_cloneComponent,"haxe.ui.containers.HBox","cloneComponent",0xa3259b41,"haxe.ui.containers.HBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a90724db2b87d_493_self,"haxe.ui.containers.HBox","self",0xc4db19ed,"haxe.ui.containers.HBox.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void HBox_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_27a8c01e4f733fda_11_new)
HXLINE(  12)		super::__construct();
HXLINE(  13)		this->set_layout( ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic HBox_obj::__CreateEmpty() { return new HBox_obj; }

void *HBox_obj::_hx_vtable = 0;

Dynamic HBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBox_obj > _hx_result = new HBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBox_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x2ccba775) {
				if (inClassId<=(int)0x2570d72f) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2570d72f;
				} else {
					return inClassId==(int)0x2ccba775;
				}
			} else {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
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

bool HBox_obj::get_continuous(){
            	HX_STACKFRAME(&_hx_pos_27a8c01e4f733fda_18_get_continuous)
HXDLIN(  18)		return ::Std_obj::isOfType(this->_layout,::hx::ClassOf< ::haxe::ui::layouts::HorizontalContinuousLayout >());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HBox_obj,get_continuous,return )

bool HBox_obj::set_continuous(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_27a8c01e4f733fda_20_set_continuous)
HXLINE(  21)		if ((value == true)) {
HXLINE(  22)			this->set_layout( ::haxe::ui::layouts::HorizontalContinuousLayout_obj::__alloc( HX_CTX ));
            		}
            		else {
HXLINE(  24)			this->set_layout( ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX ));
            		}
HXLINE(  26)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HBox_obj,set_continuous,return )

void HBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_6e8a90724db2b87d_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer HBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_bafc773041fcaab4_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::containers::HBox c = ( ( ::haxe::ui::containers::HBox)(this->super::cloneComponent()) );
HXLINE( 452)		c->set_continuous(this->get_continuous());
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


 ::haxe::ui::core::ComponentContainer HBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_6e8a90724db2b87d_493_self)
HXDLIN( 493)		return  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< HBox_obj > HBox_obj::__new() {
	::hx::ObjectPtr< HBox_obj > __this = new HBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HBox_obj > HBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HBox_obj *__this = (HBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBox_obj), true, "haxe.ui.containers.HBox"));
	*(void **)__this = HBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HBox_obj::HBox_obj()
{
}

::hx::Val HBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"continuous") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_continuous() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_continuous") ) { return ::hx::Val( get_continuous_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_continuous") ) { return ::hx::Val( set_continuous_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"continuous") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_continuous(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("continuous",0f,05,17,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBox_obj_sStaticStorageInfo = 0;
#endif

static ::String HBox_obj_sMemberFields[] = {
	HX_("get_continuous",58,8d,0c,54),
	HX_("set_continuous",cc,75,2c,74),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class HBox_obj::__mClass;

void HBox_obj::__register()
{
	HBox_obj _hx_dummy;
	HBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.HBox",ad,6d,36,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
