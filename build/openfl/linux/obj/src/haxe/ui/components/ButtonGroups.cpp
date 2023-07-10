#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonGroups
#include <haxe/ui/components/ButtonGroups.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_252aa3a8395220c3_723_new,"haxe.ui.components.ButtonGroups","new",0x31be707e,"haxe.ui.components.ButtonGroups.new","haxe/ui/components/Button.hx",723,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_728_get,"haxe.ui.components.ButtonGroups","get",0x31b920b4,"haxe.ui.components.ButtonGroups.get","haxe/ui/components/Button.hx",728,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_732_set,"haxe.ui.components.ButtonGroups","set",0x31c23bc0,"haxe.ui.components.ButtonGroups.set","haxe/ui/components/Button.hx",732,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_735_add,"haxe.ui.components.ButtonGroups","add",0x31b4923f,"haxe.ui.components.ButtonGroups.add","haxe/ui/components/Button.hx",735,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_747_remove,"haxe.ui.components.ButtonGroups","remove",0xe75662e6,"haxe.ui.components.ButtonGroups.remove","haxe/ui/components/Button.hx",747,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_759_reset,"haxe.ui.components.ButtonGroups","reset",0x4031ad6d,"haxe.ui.components.ButtonGroups.reset","haxe/ui/components/Button.hx",759,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_780_setSelection,"haxe.ui.components.ButtonGroups","setSelection",0x1766246c,"haxe.ui.components.ButtonGroups.setSelection","haxe/ui/components/Button.hx",780,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_252aa3a8395220c3_713_get_instance,"haxe.ui.components.ButtonGroups","get_instance",0x73f63fc0,"haxe.ui.components.ButtonGroups.get_instance","haxe/ui/components/Button.hx",713,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonGroups_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_252aa3a8395220c3_723_new)
HXDLIN( 723)		this->_groups =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ButtonGroups_obj::__CreateEmpty() { return new ButtonGroups_obj; }

void *ButtonGroups_obj::_hx_vtable = 0;

Dynamic ButtonGroups_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonGroups_obj > _hx_result = new ButtonGroups_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonGroups_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d7e8896;
}

::Array< ::Dynamic> ButtonGroups_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_252aa3a8395220c3_728_get)
HXDLIN( 728)		return ( (::Array< ::Dynamic>)(this->_groups->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonGroups_obj,get,return )

void ButtonGroups_obj::set(::String name,::Array< ::Dynamic> buttons){
            	HX_STACKFRAME(&_hx_pos_252aa3a8395220c3_732_set)
HXDLIN( 732)		this->_groups->set(name,buttons);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonGroups_obj,set,(void))

void ButtonGroups_obj::add(::String name, ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_252aa3a8395220c3_735_add)
HXLINE( 736)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 737)		if (::hx::IsNull( arr )) {
HXLINE( 738)			arr = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 741)		if ((arr->indexOf(button,null()) == -1)) {
HXLINE( 742)			arr->push(button);
            		}
HXLINE( 744)		this->set(name,arr);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonGroups_obj,add,(void))

void ButtonGroups_obj::remove(::String name, ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_252aa3a8395220c3_747_remove)
HXLINE( 748)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 749)		if (::hx::IsNull( arr )) {
HXLINE( 750)			return;
            		}
HXLINE( 753)		arr->remove(button);
HXLINE( 754)		if ((arr->length == 0)) {
HXLINE( 755)			this->_groups->remove(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonGroups_obj,remove,(void))

void ButtonGroups_obj::reset(::String name){
            	HX_STACKFRAME(&_hx_pos_252aa3a8395220c3_759_reset)
HXLINE( 760)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 761)		if (::hx::IsNull( arr )) {
HXLINE( 762)			return;
            		}
HXLINE( 765)		 ::haxe::ui::components::Button selection = null();
HXLINE( 766)		{
HXLINE( 766)			int _g = 0;
HXDLIN( 766)			while((_g < arr->length)){
HXLINE( 766)				 ::haxe::ui::components::Button item = arr->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 766)				_g = (_g + 1);
HXLINE( 767)				if ((item->get_selected() == true)) {
HXLINE( 768)					selection = item;
HXLINE( 769)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 773)		if (::hx::IsNull( selection )) {
HXLINE( 774)			return;
            		}
HXLINE( 777)		::haxe::ui::components::ButtonGroups_obj::get_instance()->setSelection(selection,false,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonGroups_obj,reset,(void))

void ButtonGroups_obj::setSelection( ::haxe::ui::components::Button button,bool value,::hx::Null< bool >  __o_allowDeselection){
            		bool allowDeselection = __o_allowDeselection.Default(false);
            	HX_STACKFRAME(&_hx_pos_252aa3a8395220c3_780_setSelection)
HXLINE( 781)		bool _hx_tmp;
HXDLIN( 781)		bool _hx_tmp1;
HXDLIN( 781)		if (::hx::IsNotNull( button->get_componentGroup() )) {
HXLINE( 781)			_hx_tmp1 = (value == false);
            		}
            		else {
HXLINE( 781)			_hx_tmp1 = false;
            		}
HXDLIN( 781)		if (_hx_tmp1) {
HXLINE( 781)			_hx_tmp = (allowDeselection == false);
            		}
            		else {
HXLINE( 781)			_hx_tmp = false;
            		}
HXDLIN( 781)		if (_hx_tmp) {
HXLINE( 782)			 ::haxe::ui::components::ButtonGroups arr = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 782)			::Array< ::Dynamic> arr1 = arr->get(button->get_componentGroup());
HXLINE( 783)			bool hasSelection = false;
HXLINE( 784)			if (::hx::IsNotNull( arr1 )) {
HXLINE( 785)				int _g = 0;
HXDLIN( 785)				while((_g < arr1->length)){
HXLINE( 785)					 ::haxe::ui::components::Button b = arr1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 785)					_g = (_g + 1);
HXLINE( 786)					bool _hx_tmp;
HXDLIN( 786)					if (::hx::IsInstanceNotEq( b,button )) {
HXLINE( 786)						_hx_tmp = (b->get_selected() == true);
            					}
            					else {
HXLINE( 786)						_hx_tmp = false;
            					}
HXDLIN( 786)					if (_hx_tmp) {
HXLINE( 787)						hasSelection = true;
HXLINE( 788)						goto _hx_goto_7;
            					}
            				}
            				_hx_goto_7:;
            			}
HXLINE( 792)			bool _hx_tmp;
HXDLIN( 792)			if ((hasSelection == false)) {
HXLINE( 792)				_hx_tmp = (allowDeselection == false);
            			}
            			else {
HXLINE( 792)				_hx_tmp = false;
            			}
HXDLIN( 792)			if (_hx_tmp) {
HXLINE( 793)				 ::haxe::ui::behaviours::Behaviours button1 = button->behaviours;
HXDLIN( 793)				button1->softSet(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
HXLINE( 794)				return;
            			}
            		}
HXLINE( 798)		bool _hx_tmp2;
HXDLIN( 798)		if (::hx::IsNotNull( button->get_componentGroup() )) {
HXLINE( 798)			_hx_tmp2 = (value == true);
            		}
            		else {
HXLINE( 798)			_hx_tmp2 = false;
            		}
HXDLIN( 798)		if (_hx_tmp2) {
HXLINE( 799)			 ::haxe::ui::components::ButtonGroups arr = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 799)			::Array< ::Dynamic> arr1 = arr->get(button->get_componentGroup());
HXLINE( 800)			if (::hx::IsNotNull( arr1 )) {
HXLINE( 801)				int _g = 0;
HXDLIN( 801)				while((_g < arr1->length)){
HXLINE( 801)					 ::haxe::ui::components::Button b = arr1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 801)					_g = (_g + 1);
HXLINE( 802)					if (::hx::IsInstanceNotEq( b,button )) {
HXLINE( 803)						b->set_selected(false);
            					}
            				}
            			}
            		}
HXLINE( 809)		bool _hx_tmp3;
HXDLIN( 809)		if ((allowDeselection == true)) {
HXLINE( 809)			_hx_tmp3 = (value == false);
            		}
            		else {
HXLINE( 809)			_hx_tmp3 = false;
            		}
HXDLIN( 809)		if (_hx_tmp3) {
HXLINE( 810)			 ::haxe::ui::behaviours::Behaviours button1 = button->behaviours;
HXDLIN( 810)			button1->softSet(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ButtonGroups_obj,setSelection,(void))

 ::haxe::ui::components::ButtonGroups ButtonGroups_obj::_instance;

 ::haxe::ui::components::ButtonGroups ButtonGroups_obj::instance;

 ::haxe::ui::components::ButtonGroups ButtonGroups_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_252aa3a8395220c3_713_get_instance)
HXLINE( 714)		if (::hx::IsNull( ::haxe::ui::components::ButtonGroups_obj::_instance )) {
HXLINE( 715)			::haxe::ui::components::ButtonGroups_obj::_instance =  ::haxe::ui::components::ButtonGroups_obj::__alloc( HX_CTX );
            		}
HXLINE( 717)		return ::haxe::ui::components::ButtonGroups_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ButtonGroups_obj,get_instance,return )


::hx::ObjectPtr< ButtonGroups_obj > ButtonGroups_obj::__new() {
	::hx::ObjectPtr< ButtonGroups_obj > __this = new ButtonGroups_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ButtonGroups_obj > ButtonGroups_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ButtonGroups_obj *__this = (ButtonGroups_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonGroups_obj), true, "haxe.ui.components.ButtonGroups"));
	*(void **)__this = ButtonGroups_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonGroups_obj::ButtonGroups_obj()
{
}

void ButtonGroups_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonGroups);
	HX_MARK_MEMBER_NAME(_groups,"_groups");
	HX_MARK_END_CLASS();
}

void ButtonGroups_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groups,"_groups");
}

::hx::Val ButtonGroups_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return ::hx::Val( _groups ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSelection") ) { return ::hx::Val( setSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ButtonGroups_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ButtonGroups_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ButtonGroups_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::components::ButtonGroups >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::components::ButtonGroups >(); return true; }
	}
	return false;
}

void ButtonGroups_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_groups",f3,35,9f,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonGroups_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ButtonGroups_obj,_groups),HX_("_groups",f3,35,9f,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ButtonGroups_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::ButtonGroups */ ,(void *) &ButtonGroups_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::components::ButtonGroups */ ,(void *) &ButtonGroups_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ButtonGroups_obj_sMemberFields[] = {
	HX_("_groups",f3,35,9f,8a),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("reset",cf,49,c8,e6),
	HX_("setSelection",4a,b8,6a,b2),
	::String(null()) };

static void ButtonGroups_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonGroups_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ButtonGroups_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonGroups_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonGroups_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ButtonGroups_obj::instance,"instance");
};

#endif

::hx::Class ButtonGroups_obj::__mClass;

static ::String ButtonGroups_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ButtonGroups_obj::__register()
{
	ButtonGroups_obj _hx_dummy;
	ButtonGroups_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonGroups",8c,19,e9,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ButtonGroups_obj::__GetStatic;
	__mClass->mSetStaticField = &ButtonGroups_obj::__SetStatic;
	__mClass->mMarkFunc = ButtonGroups_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ButtonGroups_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonGroups_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonGroups_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonGroups_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonGroups_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonGroups_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
