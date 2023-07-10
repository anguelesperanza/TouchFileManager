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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_EnsureVisible
#include <haxe/ui/containers/_ScrollView/EnsureVisible.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
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
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a8a20d9a8bfd55af_93_new,"haxe.ui.containers._ScrollView.EnsureVisible","new",0x41307f7f,"haxe.ui.containers._ScrollView.EnsureVisible.new","haxe/ui/containers/ScrollView.hx",93,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_a8a20d9a8bfd55af_94_call,"haxe.ui.containers._ScrollView.EnsureVisible","call",0xc1f6a49f,"haxe.ui.containers._ScrollView.EnsureVisible.call","haxe/ui/containers/ScrollView.hx",94,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_a8a20d9a8bfd55af_162_calcOffset,"haxe.ui.containers._ScrollView.EnsureVisible","calcOffset",0x50f144c9,"haxe.ui.containers._ScrollView.EnsureVisible.calcOffset","haxe/ui/containers/ScrollView.hx",162,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void EnsureVisible_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a8a20d9a8bfd55af_93_new)
HXDLIN(  93)		super::__construct(component);
            	}

Dynamic EnsureVisible_obj::__CreateEmpty() { return new EnsureVisible_obj; }

void *EnsureVisible_obj::_hx_vtable = 0;

Dynamic EnsureVisible_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EnsureVisible_obj > _hx_result = new EnsureVisible_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EnsureVisible_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x3491e1cf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3491e1cf;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType EnsureVisible_obj::call( ::Dynamic param){
            	HX_GC_STACKFRAME(&_hx_pos_a8a20d9a8bfd55af_94_call)
HXLINE(  95)		 ::haxe::ui::containers::ScrollView scrollview = ::hx::TCast<  ::haxe::ui::containers::ScrollView >::cast(this->_component);
HXLINE(  96)		if ((scrollview->get_allowAutoScroll() == false)) {
HXLINE(  97)			return null();
            		}
HXLINE( 100)		 ::haxe::ui::core::Component c = ::hx::TCast<  ::haxe::ui::core::Component >::cast(param);
HXLINE( 101)		if (::hx::IsInstanceEq( c,scrollview )) {
HXLINE( 102)			return null();
            		}
HXLINE( 105)		 ::haxe::ui::components::HorizontalScroll hscroll = scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 106)		Float hscrollPos = ( (Float)(0) );
HXLINE( 107)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 108)			hscrollPos = hscroll->get_pos();
            		}
HXLINE( 111)		 ::haxe::ui::components::VerticalScroll vscroll = scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 112)		Float vscrollPos = ( (Float)(0) );
HXLINE( 113)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 114)			vscrollPos = vscroll->get_pos();
            		}
HXLINE( 117)		Float componentScreenRect = c->get_screenLeft();
HXDLIN( 117)		Float componentScreenRect1 = c->get_screenTop();
HXDLIN( 117)		Float componentScreenRect2 = c->get_width();
HXDLIN( 117)		 ::haxe::ui::geom::Rectangle componentScreenRect3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,componentScreenRect,componentScreenRect1,componentScreenRect2,c->get_height());
HXLINE( 118)		Float componentRect = (c->get_screenLeft() + hscrollPos);
HXDLIN( 118)		Float componentRect1 = (c->get_screenTop() + vscrollPos);
HXDLIN( 118)		Float componentRect2 = c->get_width();
HXDLIN( 118)		 ::haxe::ui::geom::Rectangle componentRect3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,componentRect,componentRect1,componentRect2,c->get_height());
HXLINE( 119)		Float scrollRect = scrollview->get_screenLeft();
HXDLIN( 119)		Float scrollRect1 = scrollview->get_screenTop();
HXDLIN( 119)		Float scrollRect2 = scrollview->get_width();
HXDLIN( 119)		 ::haxe::ui::geom::Rectangle scrollRect3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,scrollRect,scrollRect1,scrollRect2,scrollview->get_height());
HXLINE( 121)		 ::haxe::ui::geom::Rectangle scrollRectFixed = scrollRect3->copy();
HXLINE( 122)		 ::haxe::ui::geom::Size usableSize = scrollview->get_layout()->get_usableSize();
HXLINE( 123)		scrollRectFixed->width = usableSize->width;
HXLINE( 124)		scrollRectFixed->height = usableSize->height;
HXLINE( 126)		if (scrollRectFixed->containsRect(componentScreenRect3)) {
HXLINE( 127)			return null();
            		}
HXLINE( 130)		Float newHScrollPos = hscrollPos;
HXLINE( 131)		Float newVScrollPos = vscrollPos;
HXLINE( 133)		Float fixedRight = componentRect3->get_right();
HXDLIN( 133)		Float fixedRight1 = (fixedRight - scrollRect3->left);
HXLINE( 134)		Float fixedLeft = (componentRect3->left - scrollRect3->left);
HXLINE( 135)		Float fixedBottom = componentRect3->get_bottom();
HXDLIN( 135)		Float fixedBottom1 = (fixedBottom - scrollRect3->top);
HXLINE( 136)		Float fixedTop = (componentRect3->top - scrollRect3->top);
HXLINE( 137)		int offsetLeft = 1;
HXLINE( 138)		int offsetTop = 1;
HXLINE( 140)		Float _hx_tmp = componentScreenRect3->get_right();
HXDLIN( 140)		if ((scrollRectFixed->containsPoint(_hx_tmp,componentScreenRect3->top) == false)) {
HXLINE( 141)			Float newHScrollPos1 = (fixedRight1 - usableSize->width);
HXDLIN( 141)			newHScrollPos = (newHScrollPos1 + (this->calcOffset(c,HX_("right",dc,0b,64,e9)) - ( (Float)(offsetLeft) )));
            		}
            		else {
HXLINE( 142)			if ((scrollRectFixed->containsPoint(componentScreenRect3->left,componentScreenRect3->top) == false)) {
HXLINE( 143)				newHScrollPos = (fixedLeft - (this->calcOffset(c,HX_("left",07,08,b0,47)) + offsetLeft));
            			}
            		}
HXLINE( 146)		Float componentScreenRect4 = componentScreenRect3->left;
HXDLIN( 146)		if ((scrollRectFixed->containsPoint(componentScreenRect4,componentScreenRect3->get_bottom()) == false)) {
HXLINE( 147)			Float newVScrollPos1 = (fixedBottom1 - usableSize->height);
HXDLIN( 147)			newVScrollPos = (newVScrollPos1 + (this->calcOffset(c,HX_("bottom",eb,e6,78,65)) - ( (Float)(offsetTop) )));
            		}
            		else {
HXLINE( 148)			if ((scrollRectFixed->containsPoint(componentScreenRect3->left,componentScreenRect3->top) == false)) {
HXLINE( 149)				newVScrollPos = (fixedTop - (this->calcOffset(c,HX_("top",95,66,58,00)) + offsetTop));
            			}
            		}
HXLINE( 152)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 153)			hscroll->set_pos(newHScrollPos);
            		}
HXLINE( 155)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 156)			vscroll->set_pos(newVScrollPos);
            		}
HXLINE( 159)		return null();
            	}


Float EnsureVisible_obj::calcOffset( ::haxe::ui::core::Component c,::String which){
            	HX_STACKFRAME(&_hx_pos_a8a20d9a8bfd55af_162_calcOffset)
HXLINE( 163)		Float p = ( (Float)(0) );
HXLINE( 164)		 ::haxe::ui::core::Component r = c->parentComponent;
HXLINE( 165)		while(::hx::IsNotNull( r )){
HXLINE( 166)			if (::hx::IsNotNull( r->get_style() )) {
HXLINE( 167)				::String _hx_switch_0 = which;
            				if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 181)					if (::hx::IsNotNull( r->get_paddingBottom() )) {
HXLINE( 182)						p = (p + r->get_paddingBottom());
            					}
HXLINE( 181)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 169)					if (::hx::IsNotNull( r->get_paddingLeft() )) {
HXLINE( 170)						p = (p + r->get_paddingLeft());
            					}
HXLINE( 169)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 173)					if (::hx::IsNotNull( r->get_paddingRight() )) {
HXLINE( 174)						p = (p + r->get_paddingRight());
            					}
HXLINE( 173)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 177)					if (::hx::IsNotNull( r->get_paddingTop() )) {
HXLINE( 178)						p = (p + r->get_paddingTop());
            					}
HXLINE( 177)					goto _hx_goto_3;
            				}
            				_hx_goto_3:;
            			}
HXLINE( 186)			r = r->parentComponent;
HXLINE( 187)			if (::hx::IsInstanceEq( r,this->_component )) {
HXLINE( 188)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 191)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EnsureVisible_obj,calcOffset,return )


::hx::ObjectPtr< EnsureVisible_obj > EnsureVisible_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< EnsureVisible_obj > __this = new EnsureVisible_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< EnsureVisible_obj > EnsureVisible_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	EnsureVisible_obj *__this = (EnsureVisible_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EnsureVisible_obj), true, "haxe.ui.containers._ScrollView.EnsureVisible"));
	*(void **)__this = EnsureVisible_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

EnsureVisible_obj::EnsureVisible_obj()
{
}

::hx::Val EnsureVisible_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"calcOffset") ) { return ::hx::Val( calcOffset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EnsureVisible_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EnsureVisible_obj_sStaticStorageInfo = 0;
#endif

static ::String EnsureVisible_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	HX_("calcOffset",08,42,2e,15),
	::String(null()) };

::hx::Class EnsureVisible_obj::__mClass;

void EnsureVisible_obj::__register()
{
	EnsureVisible_obj _hx_dummy;
	EnsureVisible_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.EnsureVisible",0d,54,05,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EnsureVisible_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EnsureVisible_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnsureVisible_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnsureVisible_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
