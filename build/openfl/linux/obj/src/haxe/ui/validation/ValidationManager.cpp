#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_events_ValidationEvent
#include <haxe/ui/events/ValidationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#include <haxe/ui/validation/ValidationManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4cd6909a403eb58f_8_new,"haxe.ui.validation.ValidationManager","new",0x8377e923,"haxe.ui.validation.ValidationManager.new","haxe/ui/validation/ValidationManager.hx",8,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_29_registerEvent,"haxe.ui.validation.ValidationManager","registerEvent",0xc6cb553a,"haxe.ui.validation.ValidationManager.registerEvent","haxe/ui/validation/ValidationManager.hx",29,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_38_unregisterEvent,"haxe.ui.validation.ValidationManager","unregisterEvent",0xff2f1201,"haxe.ui.validation.ValidationManager.unregisterEvent","haxe/ui/validation/ValidationManager.hx",38,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_44_dispatch,"haxe.ui.validation.ValidationManager","dispatch",0x41001317,"haxe.ui.validation.ValidationManager.dispatch","haxe/ui/validation/ValidationManager.hx",44,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_49_dispose,"haxe.ui.validation.ValidationManager","dispose",0x857fb6e2,"haxe.ui.validation.ValidationManager.dispose","haxe/ui/validation/ValidationManager.hx",49,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_54_add,"haxe.ui.validation.ValidationManager","add",0x836e0ae4,"haxe.ui.validation.ValidationManager.add","haxe/ui/validation/ValidationManager.hx",54,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_95_addDisplay,"haxe.ui.validation.ValidationManager","addDisplay",0x58502bbe,"haxe.ui.validation.ValidationManager.addDisplay","haxe/ui/validation/ValidationManager.hx",95,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_112_process,"haxe.ui.validation.ValidationManager","process",0xbb7dd8b2,"haxe.ui.validation.ValidationManager.process","haxe/ui/validation/ValidationManager.hx",112,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_181_queueSortFunction,"haxe.ui.validation.ValidationManager","queueSortFunction",0xbeec53ca,"haxe.ui.validation.ValidationManager.queueSortFunction","haxe/ui/validation/ValidationManager.hx",181,0xc7e02f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd6909a403eb58f_10_get_instance,"haxe.ui.validation.ValidationManager","get_instance",0x7b4d0a7b,"haxe.ui.validation.ValidationManager.get_instance","haxe/ui/validation/ValidationManager.hx",10,0xc7e02f8e)
namespace haxe{
namespace ui{
namespace validation{

void ValidationManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_8_new)
HXLINE(  21)		this->_displayQueue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)		this->_queue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		this->isValidating = false;
HXLINE(  26)		this->isPending = false;
            	}

Dynamic ValidationManager_obj::__CreateEmpty() { return new ValidationManager_obj; }

void *ValidationManager_obj::_hx_vtable = 0;

Dynamic ValidationManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidationManager_obj > _hx_result = new ValidationManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValidationManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69bc9741;
}

void ValidationManager_obj::registerEvent(::String type, ::Dynamic listener){
            	HX_GC_STACKFRAME(&_hx_pos_4cd6909a403eb58f_29_registerEvent)
HXLINE(  30)		if (::hx::IsNull( this->_events )) {
HXLINE(  31)			this->_events =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  34)		this->_events->add(type,listener,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ValidationManager_obj,registerEvent,(void))

void ValidationManager_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_38_unregisterEvent)
HXDLIN(  38)		if (::hx::IsNull( this->_events )) {
HXLINE(  39)			this->_events->remove(type,listener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ValidationManager_obj,unregisterEvent,(void))

void ValidationManager_obj::dispatch( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_44_dispatch)
HXDLIN(  44)		if (::hx::IsNotNull( this->_events )) {
HXLINE(  45)			this->_events->invoke(event->type,event,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidationManager_obj,dispatch,(void))

void ValidationManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_49_dispose)
HXLINE(  50)		this->isValidating = false;
HXLINE(  51)		this->_queue->removeRange(0,this->_queue->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidationManager_obj,dispose,(void))

void ValidationManager_obj::add(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_54_add)
HXLINE(  55)		if ((this->_queue->indexOf(object,null()) != -1)) {
HXLINE(  56)			return;
            		}
HXLINE(  59)		int queueLength = this->_queue->length;
HXLINE(  60)		if ((this->isValidating == true)) {
HXLINE(  62)			int depth = ::haxe::ui::validation::IValidating_obj::get_depth(object);
HXLINE(  63)			int min = 0;
HXLINE(  64)			int max = queueLength;
HXLINE(  65)			int i = 0;
HXLINE(  66)			int otherDepth = 0;
HXLINE(  67)			while((max > min)){
HXLINE(  68)				i = ::hx::UShr((min + max),1);
HXLINE(  69)				otherDepth = ::haxe::ui::validation::IValidating_obj::get_depth(this->_queue->__get(i));
HXLINE(  70)				if ((otherDepth == depth)) {
HXLINE(  71)					goto _hx_goto_5;
            				}
            				else {
HXLINE(  72)					if ((otherDepth < depth)) {
HXLINE(  73)						max = i;
            					}
            					else {
HXLINE(  76)						min = (i + 1);
            					}
            				}
            			}
            			_hx_goto_5:;
HXLINE(  81)			if ((otherDepth >= depth)) {
HXLINE(  82)				i = (i + 1);
            			}
HXLINE(  85)			this->_queue->insert(i,object);
            		}
            		else {
HXLINE(  87)			this->_queue[queueLength] = object;
HXLINE(  88)			if ((this->isPending == false)) {
HXLINE(  89)				this->isPending = true;
HXLINE(  90)				::haxe::ui::Toolkit_obj::callLater(this->process_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidationManager_obj,add,(void))

void ValidationManager_obj::addDisplay( ::haxe::ui::core::Component item,::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_95_addDisplay)
HXLINE(  96)		if ((this->_displayQueue->indexOf(item,null()) == -1)) {
HXLINE(  97)			this->_displayQueue->push(item);
            		}
HXLINE(  99)		if ((nextFrame == false)) {
HXLINE( 100)			this->process();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ValidationManager_obj,addDisplay,(void))

void ValidationManager_obj::process(){
            	HX_GC_STACKFRAME(&_hx_pos_4cd6909a403eb58f_112_process)
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if ((this->isValidating != true)) {
HXLINE( 113)			_hx_tmp = (this->isPending == false);
            		}
            		else {
HXLINE( 113)			_hx_tmp = true;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			return;
            		}
HXLINE( 117)		int queueLength = this->_queue->length;
HXLINE( 118)		if ((queueLength == 0)) {
HXLINE( 119)			this->isPending = false;
HXLINE( 120)			return;
            		}
HXLINE( 127)		this->isValidating = true;
HXLINE( 128)		if ((queueLength > 1)) {
HXLINE( 129)			this->_queue->sort(this->queueSortFunction_dyn());
            		}
HXLINE( 132)		this->dispatch( ::haxe::ui::events::ValidationEvent_obj::__alloc( HX_CTX ,HX_("validationstart",89,79,aa,99)));
HXLINE( 135)		while((this->_queue->length > 0)){
HXLINE( 136)			::Dynamic item = this->_queue->shift();
HXLINE( 137)			if ((::haxe::ui::validation::IValidating_obj::get_depth(item) < 0)) {
HXLINE( 138)				continue;
            			}
HXLINE( 140)			::haxe::ui::validation::IValidating_obj::validateComponent(item,null());
            		}
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			int _g1 = this->_displayQueue->length;
HXDLIN( 143)			while((_g < _g1)){
HXLINE( 143)				_g = (_g + 1);
HXDLIN( 143)				int i = (_g - 1);
HXLINE( 144)				 ::haxe::ui::core::Component item = this->_displayQueue->__get(i).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 145)				item->updateComponentDisplay();
            			}
            		}
HXLINE( 147)		this->_displayQueue->removeRange(0,this->_displayQueue->length);
HXLINE( 149)		this->isValidating = false;
HXLINE( 157)		this->isPending = false;
HXLINE( 177)		this->dispatch( ::haxe::ui::events::ValidationEvent_obj::__alloc( HX_CTX ,HX_("validationstop",bb,0c,96,c9)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidationManager_obj,process,(void))

int ValidationManager_obj::queueSortFunction(::Dynamic first,::Dynamic second){
            	HX_STACKFRAME(&_hx_pos_4cd6909a403eb58f_181_queueSortFunction)
HXLINE( 182)		int difference = ::haxe::ui::validation::IValidating_obj::get_depth(second);
HXDLIN( 182)		int difference1 = (difference - ::haxe::ui::validation::IValidating_obj::get_depth(first));
HXLINE( 184)		if ((difference1 > 0)) {
HXLINE( 184)			return 1;
            		}
            		else {
HXLINE( 184)			if ((difference1 < 0)) {
HXLINE( 184)				return -1;
            			}
            			else {
HXLINE( 184)				return 0;
            			}
            		}
HXDLIN( 184)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ValidationManager_obj,queueSortFunction,return )

 ::haxe::ui::validation::ValidationManager ValidationManager_obj::instance;

 ::haxe::ui::validation::ValidationManager ValidationManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_4cd6909a403eb58f_10_get_instance)
HXLINE(  11)		if (::hx::IsNull( ::haxe::ui::validation::ValidationManager_obj::instance )) {
HXLINE(  12)			::haxe::ui::validation::ValidationManager_obj::instance =  ::haxe::ui::validation::ValidationManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  14)		return ::haxe::ui::validation::ValidationManager_obj::instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationManager_obj,get_instance,return )


::hx::ObjectPtr< ValidationManager_obj > ValidationManager_obj::__new() {
	::hx::ObjectPtr< ValidationManager_obj > __this = new ValidationManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ValidationManager_obj > ValidationManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ValidationManager_obj *__this = (ValidationManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidationManager_obj), true, "haxe.ui.validation.ValidationManager"));
	*(void **)__this = ValidationManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ValidationManager_obj::ValidationManager_obj()
{
}

void ValidationManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValidationManager);
	HX_MARK_MEMBER_NAME(isValidating,"isValidating");
	HX_MARK_MEMBER_NAME(isPending,"isPending");
	HX_MARK_MEMBER_NAME(_queue,"_queue");
	HX_MARK_MEMBER_NAME(_displayQueue,"_displayQueue");
	HX_MARK_MEMBER_NAME(_events,"_events");
	HX_MARK_END_CLASS();
}

void ValidationManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isValidating,"isValidating");
	HX_VISIT_MEMBER_NAME(isPending,"isPending");
	HX_VISIT_MEMBER_NAME(_queue,"_queue");
	HX_VISIT_MEMBER_NAME(_displayQueue,"_displayQueue");
	HX_VISIT_MEMBER_NAME(_events,"_events");
}

::hx::Val ValidationManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_queue") ) { return ::hx::Val( _queue ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_events") ) { return ::hx::Val( _events ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"process") ) { return ::hx::Val( process_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPending") ) { return ::hx::Val( isPending ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addDisplay") ) { return ::hx::Val( addDisplay_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidating") ) { return ::hx::Val( isValidating ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_displayQueue") ) { return ::hx::Val( _displayQueue ); }
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"queueSortFunction") ) { return ::hx::Val( queueSortFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ValidationManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ValidationManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_queue") ) { _queue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_events") ) { _events=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPending") ) { isPending=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidating") ) { isValidating=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_displayQueue") ) { _displayQueue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ValidationManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::validation::ValidationManager >(); return true; }
	}
	return false;
}

void ValidationManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isValidating",dd,33,0c,b4));
	outFields->push(HX_("isPending",8d,15,eb,2f));
	outFields->push(HX_("_queue",d2,d4,d1,59));
	outFields->push(HX_("_displayQueue",ce,f6,b1,4c));
	outFields->push(HX_("_events",b8,60,e1,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValidationManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ValidationManager_obj,isValidating),HX_("isValidating",dd,33,0c,b4)},
	{::hx::fsBool,(int)offsetof(ValidationManager_obj,isPending),HX_("isPending",8d,15,eb,2f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ValidationManager_obj,_queue),HX_("_queue",d2,d4,d1,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ValidationManager_obj,_displayQueue),HX_("_displayQueue",ce,f6,b1,4c)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ValidationManager_obj,_events),HX_("_events",b8,60,e1,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ValidationManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::validation::ValidationManager */ ,(void *) &ValidationManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ValidationManager_obj_sMemberFields[] = {
	HX_("isValidating",dd,33,0c,b4),
	HX_("isPending",8d,15,eb,2f),
	HX_("_queue",d2,d4,d1,59),
	HX_("_displayQueue",ce,f6,b1,4c),
	HX_("_events",b8,60,e1,04),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("dispatch",ba,ce,63,1e),
	HX_("dispose",9f,80,4c,bb),
	HX_("add",21,f2,49,00),
	HX_("addDisplay",21,56,d4,22),
	HX_("process",6f,a2,4a,f1),
	HX_("queueSortFunction",c7,8b,23,72),
	::String(null()) };

static void ValidationManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValidationManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValidationManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidationManager_obj::instance,"instance");
};

#endif

::hx::Class ValidationManager_obj::__mClass;

static ::String ValidationManager_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ValidationManager_obj::__register()
{
	ValidationManager_obj _hx_dummy;
	ValidationManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validation.ValidationManager",b1,1b,26,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValidationManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ValidationManager_obj::__SetStatic;
	__mClass->mMarkFunc = ValidationManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValidationManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidationManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidationManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValidationManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidationManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidationManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validation
