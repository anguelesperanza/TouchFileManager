#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_5_new,"haxe.ui.core.Platform","new",0x66444e62,"haxe.ui.core.Platform.new","haxe/ui/core/Platform.hx",5,0xdfc8f78d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_29_getMetric,"haxe.ui.core.Platform","getMetric",0xe346fce8,"haxe.ui.core.Platform.getMetric","haxe/ui/core/Platform.hx",29,0xdfc8f78d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_11_get_vscrollWidth,"haxe.ui.core.Platform","get_vscrollWidth",0xdf8edb4a,"haxe.ui.core.Platform.get_vscrollWidth","haxe/ui/core/Platform.hx",11,0xdfc8f78d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_16_get_hscrollHeight,"haxe.ui.core.Platform","get_hscrollHeight",0xa339a115,"haxe.ui.core.Platform.get_hscrollHeight","haxe/ui/core/Platform.hx",16,0xdfc8f78d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_21_get_instance,"haxe.ui.core.Platform","get_instance",0x929f855c,"haxe.ui.core.Platform.get_instance","haxe/ui/core/Platform.hx",21,0xdfc8f78d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_6_boot,"haxe.ui.core.Platform","boot",0x0d9947f0,"haxe.ui.core.Platform.boot","haxe/ui/core/Platform.hx",6,0xdfc8f78d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dedffe49f6d71d8_7_boot,"haxe.ui.core.Platform","boot",0x0d9947f0,"haxe.ui.core.Platform.boot","haxe/ui/core/Platform.hx",7,0xdfc8f78d)
namespace haxe{
namespace ui{
namespace core{

void Platform_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Platform_obj::__CreateEmpty() { return new Platform_obj; }

void *Platform_obj::_hx_vtable = 0;

Dynamic Platform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Platform_obj > _hx_result = new Platform_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Platform_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7903ebde) {
		if (inClassId<=(int)0x1e4daad0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1e4daad0;
		} else {
			return inClassId==(int)0x7903ebde;
		}
	} else {
		return inClassId==(int)0x7dad82ad;
	}
}

Float Platform_obj::getMetric(::String id){
            	HX_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_29_getMetric)
HXDLIN(  29)		return this->super::getMetric(id);
            	}


::String Platform_obj::METRIC_VSCROLL_WIDTH;

::String Platform_obj::METRIC_HSCROLL_HEIGHT;

Float Platform_obj::vscrollWidth;

Float Platform_obj::get_vscrollWidth(){
            	HX_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_11_get_vscrollWidth)
HXDLIN(  11)		return ::haxe::ui::core::Platform_obj::get_instance()->getMetric(HX_("patform.metrics.vscroll.width",69,87,e4,8d));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_vscrollWidth,return )

Float Platform_obj::hscrollHeight;

Float Platform_obj::get_hscrollHeight(){
            	HX_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_16_get_hscrollHeight)
HXDLIN(  16)		return ::haxe::ui::core::Platform_obj::get_instance()->getMetric(HX_("patform.metrics.hscroll.height",f2,dd,e6,aa));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_hscrollHeight,return )

 ::haxe::ui::core::Platform Platform_obj::_instance;

 ::haxe::ui::core::Platform Platform_obj::instance;

 ::haxe::ui::core::Platform Platform_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_21_get_instance)
HXLINE(  22)		if (::hx::IsNull( ::haxe::ui::core::Platform_obj::_instance )) {
HXLINE(  23)			::haxe::ui::core::Platform_obj::_instance =  ::haxe::ui::core::Platform_obj::__alloc( HX_CTX );
            		}
HXLINE(  25)		return ::haxe::ui::core::Platform_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_instance,return )


::hx::ObjectPtr< Platform_obj > Platform_obj::__new() {
	::hx::ObjectPtr< Platform_obj > __this = new Platform_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Platform_obj > Platform_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Platform_obj *__this = (Platform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Platform_obj), true, "haxe.ui.core.Platform"));
	*(void **)__this = Platform_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Platform_obj::Platform_obj()
{
}

::hx::Val Platform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { return ::hx::Val( getMetric_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Platform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vscrollWidth") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_vscrollWidth() : vscrollWidth ); return true; }
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hscrollHeight") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_hscrollHeight() : hscrollHeight ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vscrollWidth") ) { outValue = get_vscrollWidth_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_hscrollHeight") ) { outValue = get_hscrollHeight_dyn(); return true; }
	}
	return false;
}

bool Platform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::core::Platform >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::core::Platform >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vscrollWidth") ) { vscrollWidth=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hscrollHeight") ) { hscrollHeight=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Platform_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Platform_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Platform_obj::METRIC_VSCROLL_WIDTH,HX_("METRIC_VSCROLL_WIDTH",bb,02,74,ee)},
	{::hx::fsString,(void *) &Platform_obj::METRIC_HSCROLL_HEIGHT,HX_("METRIC_HSCROLL_HEIGHT",40,4a,e3,c7)},
	{::hx::fsFloat,(void *) &Platform_obj::vscrollWidth,HX_("vscrollWidth",03,86,7c,62)},
	{::hx::fsFloat,(void *) &Platform_obj::hscrollHeight,HX_("hscrollHeight",3c,58,41,b0)},
	{::hx::fsObject /*  ::haxe::ui::core::Platform */ ,(void *) &Platform_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::core::Platform */ ,(void *) &Platform_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Platform_obj_sMemberFields[] = {
	HX_("getMetric",66,11,b9,85),
	::String(null()) };

static void Platform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Platform_obj::METRIC_VSCROLL_WIDTH,"METRIC_VSCROLL_WIDTH");
	HX_MARK_MEMBER_NAME(Platform_obj::METRIC_HSCROLL_HEIGHT,"METRIC_HSCROLL_HEIGHT");
	HX_MARK_MEMBER_NAME(Platform_obj::vscrollWidth,"vscrollWidth");
	HX_MARK_MEMBER_NAME(Platform_obj::hscrollHeight,"hscrollHeight");
	HX_MARK_MEMBER_NAME(Platform_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Platform_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Platform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Platform_obj::METRIC_VSCROLL_WIDTH,"METRIC_VSCROLL_WIDTH");
	HX_VISIT_MEMBER_NAME(Platform_obj::METRIC_HSCROLL_HEIGHT,"METRIC_HSCROLL_HEIGHT");
	HX_VISIT_MEMBER_NAME(Platform_obj::vscrollWidth,"vscrollWidth");
	HX_VISIT_MEMBER_NAME(Platform_obj::hscrollHeight,"hscrollHeight");
	HX_VISIT_MEMBER_NAME(Platform_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Platform_obj::instance,"instance");
};

#endif

::hx::Class Platform_obj::__mClass;

static ::String Platform_obj_sStaticFields[] = {
	HX_("METRIC_VSCROLL_WIDTH",bb,02,74,ee),
	HX_("METRIC_HSCROLL_HEIGHT",40,4a,e3,c7),
	HX_("vscrollWidth",03,86,7c,62),
	HX_("get_vscrollWidth",8c,72,1b,67),
	HX_("hscrollHeight",3c,58,41,b0),
	HX_("get_hscrollHeight",93,63,b1,b6),
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void Platform_obj::__register()
{
	Platform_obj _hx_dummy;
	Platform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.Platform",70,35,69,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Platform_obj::__GetStatic;
	__mClass->mSetStaticField = &Platform_obj::__SetStatic;
	__mClass->mMarkFunc = Platform_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Platform_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Platform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Platform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Platform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Platform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Platform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Platform_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_6_boot)
HXDLIN(   6)		METRIC_VSCROLL_WIDTH = HX_("patform.metrics.vscroll.width",69,87,e4,8d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dedffe49f6d71d8_7_boot)
HXDLIN(   7)		METRIC_HSCROLL_HEIGHT = HX_("patform.metrics.hscroll.height",f2,dd,e6,aa);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
