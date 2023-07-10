#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Preloader
#include <haxe/ui/Preloader.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_186b1b74991ba353_13_new,"haxe.ui.Preloader","new",0xd0b111f6,"haxe.ui.Preloader.new","haxe/ui/Preloader.hx",13,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_21_createChildren,"haxe.ui.Preloader","createChildren",0xe6673285,"haxe.ui.Preloader.createChildren","haxe/ui/Preloader.hx",21,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_29_validateComponentLayout,"haxe.ui.Preloader","validateComponentLayout",0x0689dfe7,"haxe.ui.Preloader.validateComponentLayout","haxe/ui/Preloader.hx",29,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_40_progress,"haxe.ui.Preloader","progress",0x70aa3657,"haxe.ui.Preloader.progress","haxe/ui/Preloader.hx",40,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_57_increment,"haxe.ui.Preloader","increment",0x76d69c45,"haxe.ui.Preloader.increment","haxe/ui/Preloader.hx",57,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_61_complete,"haxe.ui.Preloader","complete",0x6a473f63,"haxe.ui.Preloader.complete","haxe/ui/Preloader.hx",61,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_3272413211a8f5fe_523_registerBehaviours,"haxe.ui.Preloader","registerBehaviours",0x45539f03,"haxe.ui.Preloader.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_7d3e1c8290b31e6a_651_cloneComponent,"haxe.ui.Preloader","cloneComponent",0x4a1983ca,"haxe.ui.Preloader.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3272413211a8f5fe_493_self,"haxe.ui.Preloader","self",0xcd8cad36,"haxe.ui.Preloader.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{

void Preloader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_13_new)
HXLINE(  14)		super::__construct();
HXLINE(  15)		this->set_id(HX_("preloader",76,e4,7b,82));
HXLINE(  16)		this->set_styleString(HX_("width:100%;height:100%;",87,37,23,16));
HXLINE(  17)		this->set_percentWidth(this->set_percentHeight(100));
HXLINE(  18)		this->set_styleNames(HX_("default-background",3a,3b,23,a8));
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0d718cdc) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0d718cdc;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				if (inClassId<=(int)0x1395e371) {
					return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
				} else {
					return inClassId==(int)0x13d76ae7;
				}
			} else {
				return inClassId==(int)0x1f4df417;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x2ccba775) {
				if (inClassId<=(int)0x241b0321) {
					return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
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

void Preloader_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_186b1b74991ba353_21_createChildren)
HXLINE(  22)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  23)		label->set_text(HX_("Loading",5c,f6,43,d6));
HXLINE(  24)		label->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE(  25)		label->set_horizontalAlign(HX_("center",d5,25,db,05));
HXLINE(  26)		this->addComponent(label);
            	}


bool Preloader_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_29_validateComponentLayout)
HXLINE(  30)		bool b = this->super::validateComponentLayout();
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		if ((this->get_actualComponentWidth() > 0)) {
HXLINE(  31)			_hx_tmp = (this->get_actualComponentHeight() > 0);
            		}
            		else {
HXLINE(  31)			_hx_tmp = false;
            		}
HXLINE(  35)		return b;
            	}


void Preloader_obj::progress(int current,int max){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_40_progress)
HXLINE(  41)		this->_current = current;
HXLINE(  42)		this->_max = max;
HXLINE(  44)		if ((current > 0)) {
HXLINE(  45)			 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE(  46)			if (::hx::IsNotNull( label )) {
HXLINE(  47)				::String text = label->get_text();
HXLINE(  48)				if (::StringTools_obj::endsWith(text,HX_("....",80,e0,8a,1e))) {
HXLINE(  49)					text = HX_("Loading",5c,f6,43,d6);
            				}
HXLINE(  51)				label->set_text(text);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,progress,(void))

void Preloader_obj::increment(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_57_increment)
HXDLIN(  57)		this->progress((this->_current + 1),this->_max);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,increment,(void))

void Preloader_obj::complete(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_61_complete)
HXDLIN(  61)		::haxe::ui::core::Screen_obj::get_instance()->removeComponent(::hx::ObjectPtr<OBJ_>(this),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,complete,(void))

void Preloader_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_3272413211a8f5fe_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Preloader_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_7d3e1c8290b31e6a_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::Preloader c = ( ( ::haxe::ui::Preloader)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Preloader_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3272413211a8f5fe_493_self)
HXDLIN( 493)		return  ::haxe::ui::Preloader_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Preloader_obj > Preloader_obj::__new() {
	::hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Preloader_obj *__this = (Preloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "haxe.ui.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

::hx::Val Preloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { return ::hx::Val( _max ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return ::hx::Val( _current ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Preloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_current",ba,f5,9b,05));
	outFields->push(HX_("_max",a5,4f,1e,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Preloader_obj,_current),HX_("_current",ba,f5,9b,05)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,_max),HX_("_max",a5,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_("createChildren",5b,98,a4,c2),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("_current",ba,f5,9b,05),
	HX_("_max",a5,4f,1e,3f),
	HX_("progress",ad,f7,2a,86),
	HX_("increment",2f,06,ff,31),
	HX_("complete",b9,00,c8,7f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	Preloader_obj _hx_dummy;
	Preloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.Preloader",04,9f,9f,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
