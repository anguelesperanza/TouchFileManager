// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#include <openfl/display/_internal/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObjectContainer
#include <openfl/display/_internal/DOMDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMShape
#include <openfl/display/_internal/DOMShape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8d5a21e4727bbbb1_8_renderDrawable,"openfl.display._internal.DOMDisplayObjectContainer","renderDrawable",0x78f8d07c,"openfl.display._internal.DOMDisplayObjectContainer.renderDrawable","openfl/display/_internal/DOMDisplayObjectContainer.hx",8,0x52e3047b)
HX_LOCAL_STACK_FRAME(_hx_pos_8d5a21e4727bbbb1_57_renderDrawableClear,"openfl.display._internal.DOMDisplayObjectContainer","renderDrawableClear",0xaedecf71,"openfl.display._internal.DOMDisplayObjectContainer.renderDrawableClear","openfl/display/_internal/DOMDisplayObjectContainer.hx",57,0x52e3047b)
namespace openfl{
namespace display{
namespace _internal{

void DOMDisplayObjectContainer_obj::__construct() { }

Dynamic DOMDisplayObjectContainer_obj::__CreateEmpty() { return new DOMDisplayObjectContainer_obj; }

void *DOMDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DOMDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMDisplayObjectContainer_obj > _hx_result = new DOMDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d0dc1f8;
}

void DOMDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8d5a21e4727bbbb1_8_renderDrawable)
HXLINE(   9)		{
HXLINE(   9)			 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(   9)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(   9)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  11)				if (::hx::IsNull( orphan1->stage )) {
HXLINE(  13)					renderer->_hx___renderDrawable(orphan1);
            				}
            			}
            		}
HXLINE(  17)		{
HXLINE(  17)			{
HXLINE(  17)				 ::Dynamic orphan2 = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  17)				while(( (bool)(orphan2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  17)					 ::openfl::display::DisplayObject orphan3 = ( ( ::openfl::display::DisplayObject)(orphan2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  17)					if (::hx::IsNull( orphan3->stage )) {
HXLINE(  17)						orphan3->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  17)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  19)		::openfl::display::_internal::DOMDisplayObject_obj::renderDrawable(displayObjectContainer,renderer);
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  21)			_hx_tmp = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  21)			_hx_tmp = false;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  23)			{
HXLINE(  23)				int _g = 0;
HXDLIN(  23)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  23)				while((_g < _g1->length)){
HXLINE(  23)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  23)					_g = (_g + 1);
HXLINE(  25)					renderer->_hx___renderDrawableClear(child);
            				}
            			}
HXLINE(  28)			::openfl::display::_internal::DOMShape_obj::clear(displayObjectContainer,renderer);
HXLINE(  29)			displayObjectContainer->_hx___cacheBitmap->stage = displayObjectContainer->stage;
HXLINE(  30)			return;
            		}
HXLINE(  33)		renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  35)		if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  37)			{
HXLINE(  37)				int _g2 = 0;
HXDLIN(  37)				::Array< ::Dynamic> _g3 = displayObjectContainer->_hx___children;
HXDLIN(  37)				while((_g2 < _g3->length)){
HXLINE(  37)					 ::openfl::display::DisplayObject child1 = _g3->__get(_g2).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  37)					_g2 = (_g2 + 1);
HXLINE(  39)					renderer->_hx___renderDrawable(child1);
HXLINE(  40)					child1->_hx___renderDirty = false;
            				}
            			}
HXLINE(  43)			displayObjectContainer->_hx___renderDirty = false;
            		}
            		else {
HXLINE(  47)			int _g4 = 0;
HXDLIN(  47)			::Array< ::Dynamic> _g5 = displayObjectContainer->_hx___children;
HXDLIN(  47)			while((_g4 < _g5->length)){
HXLINE(  47)				 ::openfl::display::DisplayObject child2 = _g5->__get(_g4).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  47)				_g4 = (_g4 + 1);
HXLINE(  49)				renderer->_hx___renderDrawable(child2);
            			}
            		}
HXLINE(  53)		renderer->_hx___popMaskObject(displayObjectContainer,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObjectContainer_obj,renderDrawable,(void))

void DOMDisplayObjectContainer_obj::renderDrawableClear( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8d5a21e4727bbbb1_57_renderDrawableClear)
HXLINE(  58)		{
HXLINE(  58)			 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  58)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  58)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  60)				if (::hx::IsNull( orphan1->stage )) {
HXLINE(  62)					renderer->_hx___renderDrawableClear(orphan1);
            				}
            			}
            		}
HXLINE(  66)		{
HXLINE(  66)			{
HXLINE(  66)				 ::Dynamic orphan2 = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  66)				while(( (bool)(orphan2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  66)					 ::openfl::display::DisplayObject orphan3 = ( ( ::openfl::display::DisplayObject)(orphan2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  66)					if (::hx::IsNull( orphan3->stage )) {
HXLINE(  66)						orphan3->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  66)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  68)		{
HXLINE(  68)			int _g = 0;
HXDLIN(  68)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  68)			while((_g < _g1->length)){
HXLINE(  68)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  68)				_g = (_g + 1);
HXLINE(  70)				renderer->_hx___renderDrawableClear(child);
            			}
            		}
HXLINE(  73)		::openfl::display::_internal::DOMDisplayObject_obj::clear(displayObjectContainer,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObjectContainer_obj,renderDrawableClear,(void))


DOMDisplayObjectContainer_obj::DOMDisplayObjectContainer_obj()
{
}

bool DOMDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMDisplayObjectContainer_obj::__mClass;

static ::String DOMDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMDisplayObjectContainer_obj::__register()
{
	DOMDisplayObjectContainer_obj _hx_dummy;
	DOMDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMDisplayObjectContainer",06,b4,39,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
