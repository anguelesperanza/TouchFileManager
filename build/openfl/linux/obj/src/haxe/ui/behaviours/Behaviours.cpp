#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_17_new,"haxe.ui.behaviours.Behaviours","new",0x1cb17c2e,"haxe.ui.behaviours.Behaviours.new","haxe/ui/behaviours/Behaviours.hx",17,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_27_register,"haxe.ui.behaviours.Behaviours","register",0x275a6fd5,"haxe.ui.behaviours.Behaviours.register","haxe/ui/behaviours/Behaviours.hx",27,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_42_isRegistered,"haxe.ui.behaviours.Behaviours","isRegistered",0x30c1307e,"haxe.ui.behaviours.Behaviours.isRegistered","haxe/ui/behaviours/Behaviours.hx",42,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_45_replaceNative,"haxe.ui.behaviours.Behaviours","replaceNative",0xa2d75e39,"haxe.ui.behaviours.Behaviours.replaceNative","haxe/ui/behaviours/Behaviours.hx",45,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_86_validateData,"haxe.ui.behaviours.Behaviours","validateData",0x0064c052,"haxe.ui.behaviours.Behaviours.validateData","haxe/ui/behaviours/Behaviours.hx",86,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_97_get_updateOrder,"haxe.ui.behaviours.Behaviours","get_updateOrder",0x44323a2a,"haxe.ui.behaviours.Behaviours.get_updateOrder","haxe/ui/behaviours/Behaviours.hx",97,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_99_set_updateOrder,"haxe.ui.behaviours.Behaviours","set_updateOrder",0x3ffdb736,"haxe.ui.behaviours.Behaviours.set_updateOrder","haxe/ui/behaviours/Behaviours.hx",99,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_107_get_actualUpdateOrder,"haxe.ui.behaviours.Behaviours","get_actualUpdateOrder",0x0e346ffc,"haxe.ui.behaviours.Behaviours.get_actualUpdateOrder","haxe/ui/behaviours/Behaviours.hx",107,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_120_update,"haxe.ui.behaviours.Behaviours","update",0x526eaefb,"haxe.ui.behaviours.Behaviours.update","haxe/ui/behaviours/Behaviours.hx",120,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_128_find,"haxe.ui.behaviours.Behaviours","find",0xf95478ab,"haxe.ui.behaviours.Behaviours.find","haxe/ui/behaviours/Behaviours.hx",128,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_153_cache,"haxe.ui.behaviours.Behaviours","cache",0x710f5590,"haxe.ui.behaviours.Behaviours.cache","haxe/ui/behaviours/Behaviours.hx",153,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_167_dispose,"haxe.ui.behaviours.Behaviours","dispose",0xebe72b6d,"haxe.ui.behaviours.Behaviours.dispose","haxe/ui/behaviours/Behaviours.hx",167,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_180_detatch,"haxe.ui.behaviours.Behaviours","detatch",0xdbf9d879,"haxe.ui.behaviours.Behaviours.detatch","haxe/ui/behaviours/Behaviours.hx",180,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_187_restore,"haxe.ui.behaviours.Behaviours","restore",0x9b4b121c,"haxe.ui.behaviours.Behaviours.restore","haxe/ui/behaviours/Behaviours.hx",187,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_202_lock,"haxe.ui.behaviours.Behaviours","lock",0xfd50445d,"haxe.ui.behaviours.Behaviours.lock","haxe/ui/behaviours/Behaviours.hx",202,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_205_unlock,"haxe.ui.behaviours.Behaviours","unlock",0x30f5cbb6,"haxe.ui.behaviours.Behaviours.unlock","haxe/ui/behaviours/Behaviours.hx",205,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_208_setDynamic,"haxe.ui.behaviours.Behaviours","setDynamic",0x1b0a4def,"haxe.ui.behaviours.Behaviours.setDynamic","haxe/ui/behaviours/Behaviours.hx",208,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_227_set,"haxe.ui.behaviours.Behaviours","set",0x1cb54770,"haxe.ui.behaviours.Behaviours.set","haxe/ui/behaviours/Behaviours.hx",227,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_246_softSet,"haxe.ui.behaviours.Behaviours","softSet",0x48274fa6,"haxe.ui.behaviours.Behaviours.softSet","haxe/ui/behaviours/Behaviours.hx",246,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_253_ready,"haxe.ui.behaviours.Behaviours","ready",0x16b55bb1,"haxe.ui.behaviours.Behaviours.ready","haxe/ui/behaviours/Behaviours.hx",253,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_267_performAutoDispatch,"haxe.ui.behaviours.Behaviours","performAutoDispatch",0xedc1bb58,"haxe.ui.behaviours.Behaviours.performAutoDispatch","haxe/ui/behaviours/Behaviours.hx",267,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_297_get,"haxe.ui.behaviours.Behaviours","get",0x1cac2c64,"haxe.ui.behaviours.Behaviours.get","haxe/ui/behaviours/Behaviours.hx",297,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_315_getDynamic,"haxe.ui.behaviours.Behaviours","getDynamic",0x178caf7b,"haxe.ui.behaviours.Behaviours.getDynamic","haxe/ui/behaviours/Behaviours.hx",315,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_329_call,"haxe.ui.behaviours.Behaviours","call",0xf752c110,"haxe.ui.behaviours.Behaviours.call","haxe/ui/behaviours/Behaviours.hx",329,0xee0f0d01)
HX_LOCAL_STACK_FRAME(_hx_pos_f0d8bf5bec48185a_332_applyDefaults,"haxe.ui.behaviours.Behaviours","applyDefaults",0x470ae96e,"haxe.ui.behaviours.Behaviours.applyDefaults","haxe/ui/behaviours/Behaviours.hx",332,0xee0f0d01)
namespace haxe{
namespace ui{
namespace behaviours{

void Behaviours_obj::__construct( ::haxe::ui::core::Component component){
            	HX_GC_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_17_new)
HXLINE( 105)		this->_actualUpdateOrder = null();
HXLINE(  94)		this->_updateOrder = ::Array_obj< ::String >::__new(0);
HXLINE(  21)		this->_instances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  20)		this->_registry =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  24)		this->_component = component;
            	}

Dynamic Behaviours_obj::__CreateEmpty() { return new Behaviours_obj; }

void *Behaviours_obj::_hx_vtable = 0;

Dynamic Behaviours_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Behaviours_obj > _hx_result = new Behaviours_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Behaviours_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2733e6f2;
}

void Behaviours_obj::_hx_register(::String id,::hx::Class cls, ::haxe::ui::util::VariantType defaultValue){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_27_register)
HXLINE(  28)		 ::Dynamic info =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("isSet",d8,c5,55,c1),false)
            			->setFixed(1,HX_("defaultValue",f0,ba,13,e7),defaultValue)
            			->setFixed(2,HX_("id",db,5b,00,00),id)
            			->setFixed(3,HX_("cls",aa,7d,4b,00),cls));
HXLINE(  35)		this->_registry->set(id,info);
HXLINE(  36)		this->_updateOrder->remove(id);
HXLINE(  37)		this->_updateOrder->push(id);
HXLINE(  38)		this->_actualUpdateOrder = null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Behaviours_obj,_hx_register,(void))

bool Behaviours_obj::isRegistered(::String id){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_42_isRegistered)
HXDLIN(  42)		return this->_registry->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviours_obj,isRegistered,return )

void Behaviours_obj::replaceNative(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_45_replaceNative)
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if (::hx::IsNotEq( this->_component->get_native(),false )) {
HXLINE(  46)			_hx_tmp = (this->_component->get_hasNativeEntry() == false);
            		}
            		else {
HXLINE(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			return;
            		}
HXLINE(  50)		::Array< ::String > ids = ::Array_obj< ::String >::__new(0);
HXLINE(  51)		{
HXLINE(  51)			 ::Dynamic id = this->_registry->keys();
HXDLIN(  51)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  51)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  52)				ids->push(id1);
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			while((_g < ids->length)){
HXLINE(  54)				::String id = ids->__get(_g);
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  55)				 ::haxe::ds::StringMap nativeProps = this->_component->getNativeConfigProperties(((HX_(".behaviour[id=",56,be,99,36) + id) + HX_("]",5d,00,00,00)));
HXLINE(  56)				bool _hx_tmp;
HXDLIN(  56)				if (::hx::IsNotNull( nativeProps )) {
HXLINE(  56)					_hx_tmp = nativeProps->exists(HX_("class",38,78,58,48));
            				}
            				else {
HXLINE(  56)					_hx_tmp = false;
            				}
HXDLIN(  56)				if (_hx_tmp) {
HXLINE(  57)					 ::Dynamic registered = this->_registry->get(id);
HXLINE(  58)					 ::Dynamic info =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("isSet",d8,c5,55,c1),false)
            						->setFixed(1,HX_("config",c2,56,d2,c7),nativeProps)
            						->setFixed(2,HX_("defaultValue",f0,ba,13,e7), ::Dynamic(registered->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic)))
            						->setFixed(3,HX_("id",db,5b,00,00),id)
            						->setFixed(4,HX_("cls",aa,7d,4b,00),::Type_obj::resolveClass(nativeProps->get_string(HX_("class",38,78,58,48)))));
HXLINE(  65)					this->_registry->set(id,info);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,replaceNative,(void))

void Behaviours_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_86_validateData)
HXDLIN(  86)		int _g = 0;
HXDLIN(  86)		::Array< ::String > _g1 = this->get_actualUpdateOrder();
HXDLIN(  86)		while((_g < _g1->length)){
HXDLIN(  86)			::String key = _g1->__get(_g);
HXDLIN(  86)			_g = (_g + 1);
HXLINE(  87)			 ::haxe::ui::behaviours::Behaviour b = ( ( ::haxe::ui::behaviours::Behaviour)(this->_instances->get(key)) );
HXLINE(  88)			if (::Std_obj::isOfType(b,::hx::ClassOf< ::haxe::ui::behaviours::IValidatingBehaviour >())) {
HXLINE(  89)				::haxe::ui::behaviours::IValidatingBehaviour_obj::validate( ::hx::interface_check(b,0x359109f1));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,validateData,(void))

::Array< ::String > Behaviours_obj::get_updateOrder(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_97_get_updateOrder)
HXDLIN(  97)		return this->_updateOrder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,get_updateOrder,return )

::Array< ::String > Behaviours_obj::set_updateOrder(::Array< ::String > value){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_99_set_updateOrder)
HXLINE( 100)		this->_updateOrder = value;
HXLINE( 101)		this->_actualUpdateOrder = null();
HXLINE( 102)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviours_obj,set_updateOrder,return )

::Array< ::String > Behaviours_obj::get_actualUpdateOrder(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_107_get_actualUpdateOrder)
HXLINE( 108)		if (::hx::IsNull( this->_actualUpdateOrder )) {
HXLINE( 109)			this->_actualUpdateOrder = this->_updateOrder->copy();
HXLINE( 110)			{
HXLINE( 110)				 ::Dynamic key = this->_instances->keys();
HXDLIN( 110)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 110)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 111)					if ((this->_actualUpdateOrder->indexOf(key1,null()) == -1)) {
HXLINE( 112)						this->_actualUpdateOrder->push(key1);
            					}
            				}
            			}
            		}
HXLINE( 116)		return this->_actualUpdateOrder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,get_actualUpdateOrder,return )

void Behaviours_obj::update(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_120_update)
HXDLIN( 120)		int _g = 0;
HXDLIN( 120)		::Array< ::String > _g1 = this->get_actualUpdateOrder();
HXDLIN( 120)		while((_g < _g1->length)){
HXDLIN( 120)			::String key = _g1->__get(_g);
HXDLIN( 120)			_g = (_g + 1);
HXLINE( 121)			 ::haxe::ui::behaviours::Behaviour b = ( ( ::haxe::ui::behaviours::Behaviour)(this->_instances->get(key)) );
HXLINE( 122)			if (::hx::IsNotNull( b )) {
HXLINE( 123)				b->update();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,update,(void))

 ::haxe::ui::behaviours::Behaviour Behaviours_obj::find(::String id,::hx::Null< bool >  __o_create){
            		bool create = __o_create.Default(true);
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_128_find)
HXLINE( 129)		 ::haxe::ui::behaviours::Behaviour b = ( ( ::haxe::ui::behaviours::Behaviour)(this->_instances->get(id)) );
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if (::hx::IsNull( b )) {
HXLINE( 130)			_hx_tmp = (create == true);
            		}
            		else {
HXLINE( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 131)			 ::Dynamic info = this->_registry->get(id);
HXLINE( 132)			if (::hx::IsNotNull( info )) {
HXLINE( 133)				b = ( ( ::haxe::ui::behaviours::Behaviour)(::Type_obj::createInstance(info->__Field(HX_("cls",aa,7d,4b,00),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(1)->init(0,this->_component))) );
HXLINE( 134)				if (::hx::IsNotNull( b )) {
HXLINE( 135)					b->config = ( ( ::haxe::ds::StringMap)(info->__Field(HX_("config",c2,56,d2,c7),::hx::paccDynamic)) );
HXLINE( 136)					b->id = id;
HXLINE( 137)					this->_instances->set(id,b);
HXLINE( 138)					this->_actualUpdateOrder = null();
            				}
            				else {
HXLINE( 140)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 140)					::String _hx_tmp1 = ((HX_("WARNING: problem creating behaviour class '",38,b8,f9,d5) + ::Std_obj::string( ::Dynamic(info->__Field(HX_("cls",aa,7d,4b,00),::hx::paccDynamic)))) + HX_("' for '",97,1a,c5,25));
HXDLIN( 140)					::String _hx_tmp2 = ((((_hx_tmp1 + ::Type_obj::getClassName(::Type_obj::getClass(this->_component))) + HX_(":",3a,00,00,00)) + id) + HX_("'",27,00,00,00));
HXDLIN( 140)					_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("haxe/ui/behaviours/Behaviours.hx",01,0d,0f,ee),140,HX_("haxe.ui.behaviours.Behaviours",3c,8d,20,62),HX_("find",39,d0,bb,43)));
            				}
            			}
            		}
HXLINE( 145)		if (::hx::IsNull( b )) {
HXLINE( 146)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("behaviour ",43,03,c8,c0) + id) + HX_(" not found",55,f3,a5,21))));
            		}
HXLINE( 149)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviours_obj,find,return )

void Behaviours_obj::cache(){
            	HX_GC_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_153_cache)
HXLINE( 154)		this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 155)		{
HXLINE( 155)			 ::Dynamic registeredKey = this->_registry->keys();
HXDLIN( 155)			while(( (bool)(registeredKey->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 155)				::String registeredKey1 = ( (::String)(registeredKey->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 156)				 ::haxe::ui::util::VariantType v = this->_registry->get(registeredKey1)->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic);
HXLINE( 157)				 ::haxe::ui::behaviours::Behaviour instance = ( ( ::haxe::ui::behaviours::Behaviour)(this->_instances->get(registeredKey1)) );
HXLINE( 158)				if (::hx::IsNotNull( instance )) {
HXLINE( 159)					v = instance->get();
            				}
HXLINE( 161)				if (::hx::IsNotNull( v )) {
HXLINE( 162)					this->_cache->set(registeredKey1,v);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,cache,(void))

void Behaviours_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_167_dispose)
HXLINE( 168)		this->_component = null();
HXLINE( 169)		this->_registry = null();
HXLINE( 170)		{
HXLINE( 170)			 ::Dynamic key = this->_instances->keys();
HXDLIN( 170)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 170)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 171)				 ::haxe::ui::behaviours::Behaviour inst = ( ( ::haxe::ui::behaviours::Behaviour)(this->_instances->get(key1)) );
HXLINE( 172)				inst->_component = null();
            			}
            		}
HXLINE( 174)		this->_instances = null();
HXLINE( 175)		this->_cache = null();
HXLINE( 176)		this->_actualUpdateOrder = null();
HXLINE( 177)		this->_updateOrder = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,dispose,(void))

void Behaviours_obj::detatch(){
            	HX_GC_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_180_detatch)
HXLINE( 181)		{
HXLINE( 181)			 ::Dynamic b = this->_instances->iterator();
HXDLIN( 181)			while(( (bool)(b->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 181)				 ::haxe::ui::behaviours::Behaviour b1 = ( ( ::haxe::ui::behaviours::Behaviour)(b->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 182)				b1->detatch();
            			}
            		}
HXLINE( 184)		this->_instances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,detatch,(void))

void Behaviours_obj::restore(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_187_restore)
HXLINE( 188)		if (::hx::IsNull( this->_cache )) {
HXLINE( 189)			return;
            		}
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			::Array< ::String > _g1 = this->get_actualUpdateOrder();
HXDLIN( 192)			while((_g < _g1->length)){
HXLINE( 192)				::String key = _g1->__get(_g);
HXDLIN( 192)				_g = (_g + 1);
HXLINE( 193)				 ::haxe::ui::util::VariantType v = this->_cache->get(key);
HXLINE( 194)				if (::hx::IsNotNull( v )) {
HXLINE( 195)					this->set(key,v);
            				}
            			}
            		}
HXLINE( 199)		this->_cache = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,restore,(void))

void Behaviours_obj::lock(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_202_lock)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,lock,(void))

void Behaviours_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_205_unlock)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,unlock,(void))

void Behaviours_obj::setDynamic(::String id, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_208_setDynamic)
HXLINE( 209)		this->lock();
HXLINE( 211)		 ::haxe::ui::behaviours::Behaviour b = this->find(id,null());
HXLINE( 212)		 ::Dynamic changed = null();
HXLINE( 213)		if (::Std_obj::isOfType(b,::hx::ClassOf< ::haxe::ui::behaviours::ValueBehaviour >())) {
HXLINE( 214)			 ::Dynamic v = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(::hx::TCast<  ::haxe::ui::behaviours::ValueBehaviour >::cast(b)->_value);
HXLINE( 215)			changed = ::hx::IsNotEq( v,value );
            		}
HXLINE( 218)		b->setDynamic(value);
HXLINE( 219)		 ::Dynamic info = this->_registry->get(id);
HXLINE( 220)		info->__SetField(HX_("isSet",d8,c5,55,c1),true,::hx::paccDynamic);
HXLINE( 222)		this->unlock();
HXLINE( 224)		this->performAutoDispatch(b,changed);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviours_obj,setDynamic,(void))

void Behaviours_obj::set(::String id, ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_227_set)
HXLINE( 228)		this->lock();
HXLINE( 230)		 ::haxe::ui::behaviours::Behaviour b = this->find(id,null());
HXLINE( 231)		 ::Dynamic changed = null();
HXLINE( 232)		if (::Std_obj::isOfType(b,::hx::ClassOf< ::haxe::ui::behaviours::ValueBehaviour >())) {
HXLINE( 233)			 ::haxe::ui::util::VariantType v = ::hx::TCast<  ::haxe::ui::behaviours::ValueBehaviour >::cast(b)->_value;
HXLINE( 234)			changed = ::haxe::ui::util::_Variant::Variant_Impl__obj::neq(v,value);
            		}
HXLINE( 237)		b->set(value);
HXLINE( 238)		 ::Dynamic info = this->_registry->get(id);
HXLINE( 239)		info->__SetField(HX_("isSet",d8,c5,55,c1),true,::hx::paccDynamic);
HXLINE( 241)		this->unlock();
HXLINE( 243)		this->performAutoDispatch(b,changed);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviours_obj,set,(void))

void Behaviours_obj::softSet(::String id, ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_246_softSet)
HXLINE( 247)		 ::haxe::ui::behaviours::Behaviour b = this->find(id,null());
HXLINE( 248)		if (::Std_obj::isOfType(b,::hx::ClassOf< ::haxe::ui::behaviours::ValueBehaviour >())) {
HXLINE( 249)			::hx::TCast<  ::haxe::ui::behaviours::ValueBehaviour >::cast(b)->_value = value;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviours_obj,softSet,(void))

void Behaviours_obj::ready(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_253_ready)
HXLINE( 254)		if (::hx::IsNull( this->_autoDispatch )) {
HXLINE( 255)			return;
            		}
HXLINE( 258)		{
HXLINE( 258)			 ::Dynamic b = this->_autoDispatch->keys();
HXDLIN( 258)			while(( (bool)(b->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 258)				 ::haxe::ui::behaviours::Behaviour b1 = ( ( ::haxe::ui::behaviours::Behaviour)(b->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 259)				 ::Dynamic changed = this->_autoDispatch->get(b1);
HXLINE( 260)				this->performAutoDispatch(b1,changed);
            			}
            		}
HXLINE( 263)		this->_autoDispatch = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,ready,(void))

void Behaviours_obj::performAutoDispatch( ::haxe::ui::behaviours::Behaviour b, ::Dynamic changed){
            	HX_GC_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_267_performAutoDispatch)
HXLINE( 268)		if ((this->_component->get_isReady() == false)) {
HXLINE( 269)			if (::hx::IsNull( this->_autoDispatch )) {
HXLINE( 270)				this->_autoDispatch =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 272)			this->_autoDispatch->set(b,changed);
HXLINE( 273)			return;
            		}
HXLINE( 276)		::String autoDispatch = b->getConfigValue(HX_("autoDispatch",49,f1,af,5f),null());
HXLINE( 277)		if (::hx::IsNotNull( autoDispatch )) {
HXLINE( 278)			::Array< ::String > arr = autoDispatch.split(HX_(".",2e,00,00,00));
HXLINE( 279)			::String eventName = ( (::String)(arr->pop()) ).toLowerCase();
HXLINE( 280)			::String cls = arr->join(HX_(".",2e,00,00,00));
HXLINE( 286)			 ::haxe::ui::events::UIEvent event = ( ( ::haxe::ui::events::UIEvent)(::Type_obj::createInstance(::Type_obj::resolveClass(cls),::cpp::VirtualArray_obj::__new(1)->init(0,eventName))) );
HXLINE( 289)			if ((eventName != HX_("change",70,91,72,b7))) {
HXLINE( 290)				b->_component->dispatch(event);
            			}
            			else {
HXLINE( 291)				bool _hx_tmp;
HXDLIN( 291)				if (::hx::IsNotEq( changed,true )) {
HXLINE( 291)					_hx_tmp = ::hx::IsNull( changed );
            				}
            				else {
HXLINE( 291)					_hx_tmp = true;
            				}
HXDLIN( 291)				if (_hx_tmp) {
HXLINE( 292)					b->_component->dispatch(event);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviours_obj,performAutoDispatch,(void))

 ::haxe::ui::util::VariantType Behaviours_obj::get(::String id){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_297_get)
HXLINE( 298)		this->lock();
HXLINE( 300)		 ::haxe::ui::behaviours::Behaviour b = this->find(id,null());
HXLINE( 301)		 ::haxe::ui::util::VariantType v = null();
HXLINE( 302)		if (::hx::IsNotNull( b )) {
HXLINE( 303)			 ::Dynamic info = this->_registry->get(id);
HXLINE( 304)			bool _hx_tmp;
HXDLIN( 304)			bool _hx_tmp1;
HXDLIN( 304)			if (::hx::IsEq( info->__Field(HX_("isSet",d8,c5,55,c1),::hx::paccDynamic),false )) {
HXLINE( 304)				_hx_tmp1 = ::hx::IsNotNull( info->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 304)				_hx_tmp1 = false;
            			}
HXDLIN( 304)			if (_hx_tmp1) {
HXLINE( 304)				_hx_tmp = ::hx::IsPointerEq( ::Type_obj::getClass(b),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >() );
            			}
            			else {
HXLINE( 304)				_hx_tmp = false;
            			}
HXDLIN( 304)			if (_hx_tmp) {
HXLINE( 305)				v = info->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic);
            			}
            			else {
HXLINE( 307)				v = b->get();
            			}
            		}
HXLINE( 311)		this->unlock();
HXLINE( 312)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviours_obj,get,return )

 ::Dynamic Behaviours_obj::getDynamic(::String id){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_315_getDynamic)
HXLINE( 316)		this->lock();
HXLINE( 318)		 ::haxe::ui::behaviours::Behaviour b = this->find(id,null());
HXLINE( 319)		 ::Dynamic v = null();
HXLINE( 320)		if (::hx::IsNotNull( b )) {
HXLINE( 321)			v = b->getDynamic();
            		}
HXLINE( 324)		this->unlock();
HXLINE( 325)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviours_obj,getDynamic,return )

 ::haxe::ui::util::VariantType Behaviours_obj::call(::String id, ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_329_call)
HXDLIN( 329)		return this->find(id,null())->call(param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviours_obj,call,return )

void Behaviours_obj::applyDefaults(){
            	HX_STACKFRAME(&_hx_pos_f0d8bf5bec48185a_332_applyDefaults)
HXLINE( 333)		::Array< ::String > order = this->_updateOrder->copy();
HXLINE( 334)		{
HXLINE( 334)			 ::Dynamic key = this->_registry->keys();
HXDLIN( 334)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 334)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 335)				if ((order->indexOf(key1,null()) == -1)) {
HXLINE( 336)					order->push(key1);
            				}
            			}
            		}
HXLINE( 340)		{
HXLINE( 340)			int _g = 0;
HXDLIN( 340)			while((_g < order->length)){
HXLINE( 340)				::String key = order->__get(_g);
HXDLIN( 340)				_g = (_g + 1);
HXLINE( 341)				 ::Dynamic r = this->_registry->get(key);
HXLINE( 342)				if (::hx::IsNotNull( r->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic) )) {
HXLINE( 343)					this->set(key,r->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviours_obj,applyDefaults,(void))


::hx::ObjectPtr< Behaviours_obj > Behaviours_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Behaviours_obj > __this = new Behaviours_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Behaviours_obj > Behaviours_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Behaviours_obj *__this = (Behaviours_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Behaviours_obj), true, "haxe.ui.behaviours.Behaviours"));
	*(void **)__this = Behaviours_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Behaviours_obj::Behaviours_obj()
{
}

void Behaviours_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Behaviours);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(_registry,"_registry");
	HX_MARK_MEMBER_NAME(_instances,"_instances");
	HX_MARK_MEMBER_NAME(_updateOrder,"_updateOrder");
	HX_MARK_MEMBER_NAME(_actualUpdateOrder,"_actualUpdateOrder");
	HX_MARK_MEMBER_NAME(actualUpdateOrder,"actualUpdateOrder");
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_autoDispatch,"_autoDispatch");
	HX_MARK_END_CLASS();
}

void Behaviours_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(_registry,"_registry");
	HX_VISIT_MEMBER_NAME(_instances,"_instances");
	HX_VISIT_MEMBER_NAME(_updateOrder,"_updateOrder");
	HX_VISIT_MEMBER_NAME(_actualUpdateOrder,"_actualUpdateOrder");
	HX_VISIT_MEMBER_NAME(actualUpdateOrder,"actualUpdateOrder");
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_autoDispatch,"_autoDispatch");
}

::hx::Val Behaviours_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"find") ) { return ::hx::Val( find_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"_cache") ) { return ::hx::Val( _cache ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return ::hx::Val( unlock_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"detatch") ) { return ::hx::Val( detatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		if (HX_FIELD_EQ(inName,"softSet") ) { return ::hx::Val( softSet_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_registry") ) { return ::hx::Val( _registry ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"_instances") ) { return ::hx::Val( _instances ); }
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateOrder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_updateOrder() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isRegistered") ) { return ::hx::Val( isRegistered_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_updateOrder") ) { return ::hx::Val( _updateOrder ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"replaceNative") ) { return ::hx::Val( replaceNative_dyn() ); }
		if (HX_FIELD_EQ(inName,"_autoDispatch") ) { return ::hx::Val( _autoDispatch ); }
		if (HX_FIELD_EQ(inName,"applyDefaults") ) { return ::hx::Val( applyDefaults_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_updateOrder") ) { return ::hx::Val( get_updateOrder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_updateOrder") ) { return ::hx::Val( set_updateOrder_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"actualUpdateOrder") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualUpdateOrder() : actualUpdateOrder ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_actualUpdateOrder") ) { return ::hx::Val( _actualUpdateOrder ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"performAutoDispatch") ) { return ::hx::Val( performAutoDispatch_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_actualUpdateOrder") ) { return ::hx::Val( get_actualUpdateOrder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Behaviours_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_registry") ) { _registry=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateOrder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_updateOrder(inValue.Cast< ::Array< ::String > >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateOrder") ) { _updateOrder=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_autoDispatch") ) { _autoDispatch=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"actualUpdateOrder") ) { actualUpdateOrder=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_actualUpdateOrder") ) { _actualUpdateOrder=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Behaviours_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("_registry",1c,a9,35,18));
	outFields->push(HX_("_instances",ff,fe,bc,a6));
	outFields->push(HX_("_updateOrder",c6,07,c3,80));
	outFields->push(HX_("updateOrder",c5,59,b9,1a));
	outFields->push(HX_("_actualUpdateOrder",98,5a,f1,1d));
	outFields->push(HX_("actualUpdateOrder",d7,b5,db,4a));
	outFields->push(HX_("_cache",83,e1,fb,3c));
	outFields->push(HX_("_autoDispatch",28,84,1e,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Behaviours_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Behaviours_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Behaviours_obj,_registry),HX_("_registry",1c,a9,35,18)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Behaviours_obj,_instances),HX_("_instances",ff,fe,bc,a6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Behaviours_obj,_updateOrder),HX_("_updateOrder",c6,07,c3,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Behaviours_obj,_actualUpdateOrder),HX_("_actualUpdateOrder",98,5a,f1,1d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Behaviours_obj,actualUpdateOrder),HX_("actualUpdateOrder",d7,b5,db,4a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Behaviours_obj,_cache),HX_("_cache",83,e1,fb,3c)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Behaviours_obj,_autoDispatch),HX_("_autoDispatch",28,84,1e,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Behaviours_obj_sStaticStorageInfo = 0;
#endif

static ::String Behaviours_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("_registry",1c,a9,35,18),
	HX_("_instances",ff,fe,bc,a6),
	HX_("register",63,a6,9f,d0),
	HX_("isRegistered",0c,c6,bf,c6),
	HX_("replaceNative",eb,a4,9b,4b),
	HX_("validateData",e0,55,63,96),
	HX_("_updateOrder",c6,07,c3,80),
	HX_("get_updateOrder",5c,11,9b,db),
	HX_("set_updateOrder",68,8e,66,d7),
	HX_("_actualUpdateOrder",98,5a,f1,1d),
	HX_("actualUpdateOrder",d7,b5,db,4a),
	HX_("get_actualUpdateOrder",ae,b8,89,c9),
	HX_("update",09,86,05,87),
	HX_("find",39,d0,bb,43),
	HX_("_cache",83,e1,fb,3c),
	HX_("cache",42,9a,14,41),
	HX_("dispose",9f,80,4c,bb),
	HX_("detatch",ab,2d,5f,ab),
	HX_("restore",4e,67,b0,6a),
	HX_("lock",eb,9b,b7,47),
	HX_("unlock",c4,a2,8c,65),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("set",a2,9b,57,00),
	HX_("softSet",d8,a4,8c,17),
	HX_("ready",63,a0,ba,e6),
	HX_("_autoDispatch",28,84,1e,42),
	HX_("performAutoDispatch",8a,13,eb,49),
	HX_("get",96,80,4e,00),
	HX_("getDynamic",89,25,77,85),
	HX_("call",9e,18,ba,41),
	HX_("applyDefaults",20,30,cf,ef),
	::String(null()) };

::hx::Class Behaviours_obj::__mClass;

void Behaviours_obj::__register()
{
	Behaviours_obj _hx_dummy;
	Behaviours_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.Behaviours",3c,8d,20,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Behaviours_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Behaviours_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Behaviours_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Behaviours_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
