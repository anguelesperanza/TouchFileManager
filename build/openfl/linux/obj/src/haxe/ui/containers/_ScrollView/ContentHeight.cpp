#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentHeight
#include <haxe/ui/containers/_ScrollView/ContentHeight.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f301618448c2b1d3_260_new,"haxe.ui.containers._ScrollView.ContentHeight","new",0xbc9a012b,"haxe.ui.containers._ScrollView.ContentHeight.new","haxe/ui/containers/ScrollView.hx",260,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_f301618448c2b1d3_261_get,"haxe.ui.containers._ScrollView.ContentHeight","get",0xbc94b161,"haxe.ui.containers._ScrollView.ContentHeight.get","haxe/ui/containers/ScrollView.hx",261,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_f301618448c2b1d3_269_set,"haxe.ui.containers._ScrollView.ContentHeight","set",0xbc9dcc6d,"haxe.ui.containers._ScrollView.ContentHeight.set","haxe/ui/containers/ScrollView.hx",269,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void ContentHeight_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f301618448c2b1d3_260_new)
HXDLIN( 260)		super::__construct(component);
            	}

Dynamic ContentHeight_obj::__CreateEmpty() { return new ContentHeight_obj; }

void *ContentHeight_obj::_hx_vtable = 0;

Dynamic ContentHeight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ContentHeight_obj > _hx_result = new ContentHeight_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ContentHeight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x574216df;
	}
}

 ::haxe::ui::util::VariantType ContentHeight_obj::get(){
            	HX_STACKFRAME(&_hx_pos_f301618448c2b1d3_261_get)
HXLINE( 262)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 263)		if (::hx::IsNull( contents )) {
HXLINE( 264)			return null();
            		}
HXLINE( 266)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(contents->get_height());
            	}


void ContentHeight_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_f301618448c2b1d3_269_set)
HXLINE( 270)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 271)		if (::hx::IsNotNull( contents )) {
HXLINE( 272)			contents->set_percentHeight(null());
HXLINE( 273)			contents->set_height(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value)) ));
            		}
            	}



::hx::ObjectPtr< ContentHeight_obj > ContentHeight_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ContentHeight_obj > __this = new ContentHeight_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ContentHeight_obj > ContentHeight_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ContentHeight_obj *__this = (ContentHeight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ContentHeight_obj), true, "haxe.ui.containers._ScrollView.ContentHeight"));
	*(void **)__this = ContentHeight_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ContentHeight_obj::ContentHeight_obj()
{
}

::hx::Val ContentHeight_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ContentHeight_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ContentHeight_obj_sStaticStorageInfo = 0;
#endif

static ::String ContentHeight_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class ContentHeight_obj::__mClass;

void ContentHeight_obj::__register()
{
	ContentHeight_obj _hx_dummy;
	ContentHeight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.ContentHeight",b9,8f,49,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ContentHeight_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ContentHeight_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContentHeight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContentHeight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
