#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
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
#ifndef INCLUDED_haxe_ui_util_ComponentUtil
#include <haxe/ui/util/ComponentUtil.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_6_getDepth,"haxe.ui.util.ComponentUtil","getDepth",0xfefab0b6,"haxe.ui.util.ComponentUtil.getDepth","haxe/ui/util/ComponentUtil.hx",6,0x7c776dda)
HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_20_dumpComponentTree,"haxe.ui.util.ComponentUtil","dumpComponentTree",0xed0a7d9e,"haxe.ui.util.ComponentUtil.dumpComponentTree","haxe/ui/util/ComponentUtil.hx",20,0x7c776dda)
HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_25_walkComponentTree,"haxe.ui.util.ComponentUtil","walkComponentTree",0xb3019ca9,"haxe.ui.util.ComponentUtil.walkComponentTree","haxe/ui/util/ComponentUtil.hx",25,0x7c776dda)
HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_28_recurseTree,"haxe.ui.util.ComponentUtil","recurseTree",0x01139df4,"haxe.ui.util.ComponentUtil.recurseTree","haxe/ui/util/ComponentUtil.hx",28,0x7c776dda)
HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_35_recurseTreeTrace,"haxe.ui.util.ComponentUtil","recurseTreeTrace",0x7a144bf1,"haxe.ui.util.ComponentUtil.recurseTreeTrace","haxe/ui/util/ComponentUtil.hx",35,0x7c776dda)
HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_49_recurseTreeGrouped,"haxe.ui.util.ComponentUtil","recurseTreeGrouped",0x5fa789ca,"haxe.ui.util.ComponentUtil.recurseTreeGrouped","haxe/ui/util/ComponentUtil.hx",49,0x7c776dda)
namespace haxe{
namespace ui{
namespace util{

void ComponentUtil_obj::__construct() { }

Dynamic ComponentUtil_obj::__CreateEmpty() { return new ComponentUtil_obj; }

void *ComponentUtil_obj::_hx_vtable = 0;

Dynamic ComponentUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentUtil_obj > _hx_result = new ComponentUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11f462c3;
}

int ComponentUtil_obj::getDepth( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_6_getDepth)
HXLINE(   7)		int count = 0;
HXLINE(   8)		while(::hx::IsNotNull( target->parentComponent )){
HXLINE(   9)			target = target->parentComponent;
HXLINE(  10)			count = (count + 1);
            		}
HXLINE(  13)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentUtil_obj,getDepth,return )

void ComponentUtil_obj::dumpComponentTree( ::haxe::ui::core::Component from,::hx::Null< bool >  __o_verbose){
            		bool verbose = __o_verbose.Default(false);
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_20_dumpComponentTree)
HXDLIN(  20)		::haxe::ui::util::ComponentUtil_obj::recurseTreeTrace(from,0,verbose);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentUtil_obj,dumpComponentTree,(void))

void ComponentUtil_obj::walkComponentTree( ::haxe::ui::core::Component from, ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_25_walkComponentTree)
HXDLIN(  25)		::haxe::ui::util::ComponentUtil_obj::recurseTree(0,from,cb);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentUtil_obj,walkComponentTree,(void))

void ComponentUtil_obj::recurseTree(int depth, ::haxe::ui::core::Component c, ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_28_recurseTree)
HXLINE(  29)		cb(depth,c);
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1;
HXDLIN(  30)			if (::hx::IsNull( c->_children )) {
HXLINE(  30)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  30)				_g1 = c->_children;
            			}
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  31)				::haxe::ui::util::ComponentUtil_obj::recurseTree((depth + 1),child,cb);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ComponentUtil_obj,recurseTree,(void))

void ComponentUtil_obj::recurseTreeTrace( ::haxe::ui::core::Component c,int level,bool verbose){
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_35_recurseTreeTrace)
HXLINE(  36)		::String display = c->get_className();
HXLINE(  37)		if (::hx::IsNotNull( c->get_id() )) {
HXLINE(  38)			display = (display + (HX_("#",23,00,00,00) + c->get_id()));
            		}
HXLINE(  40)		::String space = ::StringTools_obj::lpad(HX_("",00,00,00,00),HX_(" ",20,00,00,00),(level * 4));
HXLINE(  41)		display = (space + display);
HXLINE(  42)		::haxe::Log_obj::trace(display,::hx::SourceInfo(HX_("haxe/ui/util/ComponentUtil.hx",da,6d,77,7c),42,HX_("haxe.ui.util.ComponentUtil",65,59,d5,fd),HX_("recurseTreeTrace",c8,ca,40,d0)));
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			::Array< ::Dynamic> _g1;
HXDLIN(  44)			if (::hx::IsNull( c->_children )) {
HXLINE(  44)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  44)				_g1 = c->_children;
            			}
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  45)				::haxe::ui::util::ComponentUtil_obj::recurseTreeTrace(child,(level + 1),verbose);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ComponentUtil_obj,recurseTreeTrace,(void))

void ComponentUtil_obj::recurseTreeGrouped( ::haxe::ui::core::Component c,bool verbose){
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_49_recurseTreeGrouped)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentUtil_obj,recurseTreeGrouped,(void))


ComponentUtil_obj::ComponentUtil_obj()
{
}

bool ComponentUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getDepth") ) { outValue = getDepth_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"recurseTree") ) { outValue = recurseTree_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"recurseTreeTrace") ) { outValue = recurseTreeTrace_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dumpComponentTree") ) { outValue = dumpComponentTree_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"walkComponentTree") ) { outValue = walkComponentTree_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"recurseTreeGrouped") ) { outValue = recurseTreeGrouped_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ComponentUtil_obj::__mClass;

static ::String ComponentUtil_obj_sStaticFields[] = {
	HX_("getDepth",8d,00,01,37),
	HX_("dumpComponentTree",e7,fa,cc,fd),
	HX_("walkComponentTree",f2,19,c4,c3),
	HX_("recurseTree",7d,8e,c5,d6),
	HX_("recurseTreeTrace",c8,ca,40,d0),
	HX_("recurseTreeGrouped",61,ac,12,f9),
	::String(null())
};

void ComponentUtil_obj::__register()
{
	ComponentUtil_obj _hx_dummy;
	ComponentUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.ComponentUtil",65,59,d5,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ComponentUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComponentUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
