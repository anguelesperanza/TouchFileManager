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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_6_new,"haxe.ui.core.ComponentBounds","new",0x466bd567,"haxe.ui.core.ComponentBounds.new","haxe/ui/core/ComponentBounds.hx",6,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_20_get_autoWidth,"haxe.ui.core.ComponentBounds","get_autoWidth",0x1c16fbb5,"haxe.ui.core.ComponentBounds.get_autoWidth","haxe/ui/core/ComponentBounds.hx",20,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_43_get_autoHeight,"haxe.ui.core.ComponentBounds","get_autoHeight",0x2e54bb58,"haxe.ui.core.ComponentBounds.get_autoHeight","haxe/ui/core/ComponentBounds.hx",43,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_62_resizeComponent,"haxe.ui.core.ComponentBounds","resizeComponent",0x20c18bb0,"haxe.ui.core.ComponentBounds.resizeComponent","haxe/ui/core/ComponentBounds.hx",62,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_87_get_actualComponentWidth,"haxe.ui.core.ComponentBounds","get_actualComponentWidth",0xa12a6459,"haxe.ui.core.ComponentBounds.get_actualComponentWidth","haxe/ui/core/ComponentBounds.hx",87,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_97_get_actualComponentHeight,"haxe.ui.core.ComponentBounds","get_actualComponentHeight",0x1a3ce234,"haxe.ui.core.ComponentBounds.get_actualComponentHeight","haxe/ui/core/ComponentBounds.hx",97,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_109_get_componentWidth,"haxe.ui.core.ComponentBounds","get_componentWidth",0x6d0a03ab,"haxe.ui.core.ComponentBounds.get_componentWidth","haxe/ui/core/ComponentBounds.hx",109,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_115_set_componentWidth,"haxe.ui.core.ComponentBounds","set_componentWidth",0x49b9361f,"haxe.ui.core.ComponentBounds.set_componentWidth","haxe/ui/core/ComponentBounds.hx",115,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_129_get_componentHeight,"haxe.ui.core.ComponentBounds","get_componentHeight",0xb208aaa2,"haxe.ui.core.ComponentBounds.get_componentHeight","haxe/ui/core/ComponentBounds.hx",129,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_135_set_componentHeight,"haxe.ui.core.ComponentBounds","set_componentHeight",0xeea59dae,"haxe.ui.core.ComponentBounds.set_componentHeight","haxe/ui/core/ComponentBounds.hx",135,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_148_get_percentWidth,"haxe.ui.core.ComponentBounds","get_percentWidth",0x83006023,"haxe.ui.core.ComponentBounds.get_percentWidth","haxe/ui/core/ComponentBounds.hx",148,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_150_set_percentWidth,"haxe.ui.core.ComponentBounds","set_percentWidth",0xd9424d97,"haxe.ui.core.ComponentBounds.set_percentWidth","haxe/ui/core/ComponentBounds.hx",150,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_173_get_percentHeight,"haxe.ui.core.ComponentBounds","get_percentHeight",0xd3a3372a,"haxe.ui.core.ComponentBounds.get_percentHeight","haxe/ui/core/ComponentBounds.hx",173,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_175_set_percentHeight,"haxe.ui.core.ComponentBounds","set_percentHeight",0xf7110f36,"haxe.ui.core.ComponentBounds.set_percentHeight","haxe/ui/core/ComponentBounds.hx",175,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_191_cachePercentSizes,"haxe.ui.core.ComponentBounds","cachePercentSizes",0x8bf00836,"haxe.ui.core.ComponentBounds.cachePercentSizes","haxe/ui/core/ComponentBounds.hx",191,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_206_restorePercentSizes,"haxe.ui.core.ComponentBounds","restorePercentSizes",0x2c55d702,"haxe.ui.core.ComponentBounds.restorePercentSizes","haxe/ui/core/ComponentBounds.hx",206,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_218_set_x,"haxe.ui.core.ComponentBounds","set_x",0x7a183022,"haxe.ui.core.ComponentBounds.set_x","haxe/ui/core/ComponentBounds.hx",218,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_229_set_y,"haxe.ui.core.ComponentBounds","set_y",0x7a183023,"haxe.ui.core.ComponentBounds.set_y","haxe/ui/core/ComponentBounds.hx",229,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_241_set_width,"haxe.ui.core.ComponentBounds","set_width",0xe7dd02b0,"haxe.ui.core.ComponentBounds.set_width","haxe/ui/core/ComponentBounds.hx",241,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_256_get_width,"haxe.ui.core.ComponentBounds","get_width",0x048c16a4,"haxe.ui.core.ComponentBounds.get_width","haxe/ui/core/ComponentBounds.hx",256,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_263_set_height,"haxe.ui.core.ComponentBounds","set_height",0xafd4cffd,"haxe.ui.core.ComponentBounds.set_height","haxe/ui/core/ComponentBounds.hx",263,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_278_get_height,"haxe.ui.core.ComponentBounds","get_height",0xac573189,"haxe.ui.core.ComponentBounds.get_height","haxe/ui/core/ComponentBounds.hx",278,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_374_get_hasScreen,"haxe.ui.core.ComponentBounds","get_hasScreen",0xfbeef604,"haxe.ui.core.ComponentBounds.get_hasScreen","haxe/ui/core/ComponentBounds.hx",374,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_391_hitTest,"haxe.ui.core.ComponentBounds","hitTest",0x1d4bf4cc,"haxe.ui.core.ComponentBounds.hitTest","haxe/ui/core/ComponentBounds.hx",391,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_439_autoSize,"haxe.ui.core.ComponentBounds","autoSize",0x67aef169,"haxe.ui.core.ComponentBounds.autoSize","haxe/ui/core/ComponentBounds.hx",439,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_464_moveComponent,"haxe.ui.core.ComponentBounds","moveComponent",0xdc48b733,"haxe.ui.core.ComponentBounds.moveComponent","haxe/ui/core/ComponentBounds.hx",464,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_489_get_left,"haxe.ui.core.ComponentBounds","get_left",0xffa02529,"haxe.ui.core.ComponentBounds.get_left","haxe/ui/core/ComponentBounds.hx",489,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_491_set_left,"haxe.ui.core.ComponentBounds","set_left",0xadfd7e9d,"haxe.ui.core.ComponentBounds.set_left","haxe/ui/core/ComponentBounds.hx",491,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_505_get_top,"haxe.ui.core.ComponentBounds","get_top",0x6199c3b3,"haxe.ui.core.ComponentBounds.get_top","haxe/ui/core/ComponentBounds.hx",505,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_507_set_top,"haxe.ui.core.ComponentBounds","set_top",0x549b54bf,"haxe.ui.core.ComponentBounds.set_top","haxe/ui/core/ComponentBounds.hx",507,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_517_get_screenLeft,"haxe.ui.core.ComponentBounds","get_screenLeft",0x80243835,"haxe.ui.core.ComponentBounds.get_screenLeft","haxe/ui/core/ComponentBounds.hx",517,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_541_get_screenTop,"haxe.ui.core.ComponentBounds","get_screenTop",0xaba5d627,"haxe.ui.core.ComponentBounds.get_screenTop","haxe/ui/core/ComponentBounds.hx",541,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_570_get_componentClipRect,"haxe.ui.core.ComponentBounds","get_componentClipRect",0xeaa1978f,"haxe.ui.core.ComponentBounds.get_componentClipRect","haxe/ui/core/ComponentBounds.hx",570,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_576_set_componentClipRect,"haxe.ui.core.ComponentBounds","set_componentClipRect",0x3eaa659b,"haxe.ui.core.ComponentBounds.set_componentClipRect","haxe/ui/core/ComponentBounds.hx",576,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_587_get_isComponentClipped,"haxe.ui.core.ComponentBounds","get_isComponentClipped",0xa554c16e,"haxe.ui.core.ComponentBounds.get_isComponentClipped","haxe/ui/core/ComponentBounds.hx",587,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_598_get_isComponentOffscreen,"haxe.ui.core.ComponentBounds","get_isComponentOffscreen",0x03f1bf4a,"haxe.ui.core.ComponentBounds.get_isComponentOffscreen","haxe/ui/core/ComponentBounds.hx",598,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_2051edeb640839da_523_registerBehaviours,"haxe.ui.core.ComponentBounds","registerBehaviours",0xec6e62b2,"haxe.ui.core.ComponentBounds.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_eca886cf6a046070_651_cloneComponent,"haxe.ui.core.ComponentBounds","cloneComponent",0x709f03f9,"haxe.ui.core.ComponentBounds.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_2051edeb640839da_493_self,"haxe.ui.core.ComponentBounds","self",0x5b3ceca5,"haxe.ui.core.ComponentBounds.self","haxe/ui/macros/Macros.hx",493,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_6_boot,"haxe.ui.core.ComponentBounds","boot",0x5007e54b,"haxe.ui.core.ComponentBounds.boot","haxe/ui/core/ComponentBounds.hx",6,0xcd40c58a)
namespace haxe{
namespace ui{
namespace core{

void ComponentBounds_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_6_new)
HXLINE( 563)		this->_componentClipRect = null();
HXLINE( 496)		this->_top = ((Float)0);
HXLINE( 480)		this->_left = ((Float)0);
HXLINE( 368)		this->_hasScreen = null();
HXLINE( 190)		this->_cachedPercentHeight = null();
HXLINE( 189)		this->_cachedPercentWidth = null();
HXLINE(   6)		super::__construct();
            	}

Dynamic ComponentBounds_obj::__CreateEmpty() { return new ComponentBounds_obj; }

void *ComponentBounds_obj::_hx_vtable = 0;

Dynamic ComponentBounds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentBounds_obj > _hx_result = new ComponentBounds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentBounds_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x1f4df417;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x2ccba775 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x715d6dae || inClassId==(int)0x7ec24579;
		}
	}
}

bool ComponentBounds_obj::get_autoWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_20_get_autoWidth)
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNull( this->_percentWidth )) {
HXLINE(  21)			_hx_tmp = ::hx::IsNotNull( this->_width );
            		}
            		else {
HXLINE(  21)			_hx_tmp = true;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  22)			return false;
            		}
HXLINE(  25)		if (::hx::IsNull( this->get_style() )) {
HXLINE(  26)			return true;
            		}
HXLINE(  29)		if (::hx::IsNull( this->get_style()->autoWidth )) {
HXLINE(  30)			return false;
            		}
HXLINE(  32)		return ( (bool)(this->get_style()->autoWidth) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_autoWidth,return )

bool ComponentBounds_obj::get_autoHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_43_get_autoHeight)
HXLINE(  44)		bool _hx_tmp;
HXDLIN(  44)		bool _hx_tmp1;
HXDLIN(  44)		if (::hx::IsNull( this->_percentHeight )) {
HXLINE(  44)			_hx_tmp1 = ::hx::IsNotNull( this->_height );
            		}
            		else {
HXLINE(  44)			_hx_tmp1 = true;
            		}
HXDLIN(  44)		if (!(_hx_tmp1)) {
HXLINE(  44)			_hx_tmp = ::hx::IsNull( this->get_style() );
            		}
            		else {
HXLINE(  44)			_hx_tmp = true;
            		}
HXDLIN(  44)		if (_hx_tmp) {
HXLINE(  45)			return false;
            		}
HXLINE(  47)		if (::hx::IsNull( this->get_style()->autoHeight )) {
HXLINE(  48)			return false;
            		}
HXLINE(  50)		return ( (bool)(this->get_style()->autoHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_autoHeight,return )

void ComponentBounds_obj::resizeComponent( ::Dynamic w, ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_62_resizeComponent)
HXLINE(  63)		bool invalidate = false;
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if (::hx::IsNotNull( w )) {
HXLINE(  65)			_hx_tmp = ::hx::IsNotEq( this->_componentWidth,w );
            		}
            		else {
HXLINE(  65)			_hx_tmp = false;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  66)			this->_componentWidth = w;
HXLINE(  67)			invalidate = true;
            		}
HXLINE(  70)		bool _hx_tmp1;
HXDLIN(  70)		if (::hx::IsNotNull( h )) {
HXLINE(  70)			_hx_tmp1 = ::hx::IsNotEq( this->_componentHeight,h );
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = false;
            		}
HXDLIN(  70)		if (_hx_tmp1) {
HXLINE(  71)			this->_componentHeight = h;
HXLINE(  72)			invalidate = true;
            		}
HXLINE(  75)		bool _hx_tmp2;
HXDLIN(  75)		if ((invalidate == true)) {
HXLINE(  75)			_hx_tmp2 = (this->isComponentInvalid(HX_("layout",aa,ae,b8,58)) == false);
            		}
            		else {
HXLINE(  75)			_hx_tmp2 = false;
            		}
HXDLIN(  75)		if (_hx_tmp2) {
HXLINE(  76)			bool _hx_tmp;
HXDLIN(  76)			if (::hx::IsNotNull( this->_layout )) {
HXLINE(  76)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(  76)				_hx_tmp = true;
            			}
HXDLIN(  76)			if (!(_hx_tmp)) {
HXLINE(  76)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBounds_obj,resizeComponent,(void))

Float ComponentBounds_obj::get_actualComponentWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_87_get_actualComponentWidth)
HXDLIN(  87)		 ::Dynamic _hx_tmp = this->get_componentWidth();
HXDLIN(  87)		return (( (Float)(_hx_tmp) ) * ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_actualComponentWidth,return )

Float ComponentBounds_obj::get_actualComponentHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_97_get_actualComponentHeight)
HXDLIN(  97)		 ::Dynamic _hx_tmp = this->get_componentHeight();
HXDLIN(  97)		return (( (Float)(_hx_tmp) ) * ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_actualComponentHeight,return )

 ::Dynamic ComponentBounds_obj::get_componentWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_109_get_componentWidth)
HXLINE( 110)		if (::hx::IsNull( this->_componentWidth )) {
HXLINE( 111)			return 0;
            		}
HXLINE( 113)		return this->_componentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_componentWidth,return )

 ::Dynamic ComponentBounds_obj::set_componentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_115_set_componentWidth)
HXLINE( 116)		this->resizeComponent(value,null());
HXLINE( 117)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_componentWidth,return )

 ::Dynamic ComponentBounds_obj::get_componentHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_129_get_componentHeight)
HXLINE( 130)		if (::hx::IsNull( this->_componentHeight )) {
HXLINE( 131)			return 0;
            		}
HXLINE( 133)		return this->_componentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_componentHeight,return )

 ::Dynamic ComponentBounds_obj::set_componentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_135_set_componentHeight)
HXLINE( 136)		this->resizeComponent(null(),value);
HXLINE( 137)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_componentHeight,return )

 ::Dynamic ComponentBounds_obj::get_percentWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_148_get_percentWidth)
HXDLIN( 148)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_percentWidth,return )

 ::Dynamic ComponentBounds_obj::set_percentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_150_set_percentWidth)
HXLINE( 151)		if (::hx::IsEq( this->_percentWidth,value )) {
HXLINE( 152)			return value;
            		}
HXLINE( 155)		this->_percentWidth = value;
HXLINE( 157)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 158)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 158)			bool _hx_tmp;
HXDLIN( 158)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 158)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 158)				_hx_tmp = true;
            			}
HXDLIN( 158)			if (!(_hx_tmp)) {
HXLINE( 158)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            		else {
HXLINE( 160)			::haxe::ui::core::Screen_obj::get_instance()->resizeRootComponents();
            		}
HXLINE( 162)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_percentWidth,return )

 ::Dynamic ComponentBounds_obj::get_percentHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_173_get_percentHeight)
HXDLIN( 173)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_percentHeight,return )

 ::Dynamic ComponentBounds_obj::set_percentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_175_set_percentHeight)
HXLINE( 176)		if (::hx::IsEq( this->_percentHeight,value )) {
HXLINE( 177)			return value;
            		}
HXLINE( 179)		this->_percentHeight = value;
HXLINE( 181)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 182)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 182)			bool _hx_tmp;
HXDLIN( 182)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 182)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 182)				_hx_tmp = true;
            			}
HXDLIN( 182)			if (!(_hx_tmp)) {
HXLINE( 182)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            		else {
HXLINE( 184)			::haxe::ui::core::Screen_obj::get_instance()->resizeRootComponents();
            		}
HXLINE( 186)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_percentHeight,return )

void ComponentBounds_obj::cachePercentSizes(::hx::Null< bool >  __o_clearExisting){
            		bool clearExisting = __o_clearExisting.Default(true);
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_191_cachePercentSizes)
HXLINE( 192)		if (::hx::IsNotNull( this->_percentWidth )) {
HXLINE( 193)			this->_cachedPercentWidth = this->_percentWidth;
HXLINE( 194)			if ((clearExisting == true)) {
HXLINE( 195)				this->_percentWidth = null();
            			}
            		}
HXLINE( 198)		if (::hx::IsNotNull( this->_percentHeight )) {
HXLINE( 199)			this->_cachedPercentHeight = this->_percentHeight;
HXLINE( 200)			if ((clearExisting == true)) {
HXLINE( 201)				this->_percentHeight = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,cachePercentSizes,(void))

void ComponentBounds_obj::restorePercentSizes(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_206_restorePercentSizes)
HXLINE( 207)		if (::hx::IsNotNull( this->_cachedPercentWidth )) {
HXLINE( 208)			this->set_percentWidth(this->_cachedPercentWidth);
            		}
HXLINE( 210)		if (::hx::IsNotNull( this->_cachedPercentHeight )) {
HXLINE( 211)			this->set_percentHeight(this->_cachedPercentHeight);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,restorePercentSizes,(void))

Float ComponentBounds_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_218_set_x)
HXLINE( 222)		this->super::set_x(value);
HXLINE( 224)		this->set_left(value);
HXLINE( 225)		return value;
            	}


Float ComponentBounds_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_229_set_y)
HXLINE( 233)		this->super::set_y(value);
HXLINE( 235)		this->set_top(value);
HXLINE( 236)		return value;
            	}


Float ComponentBounds_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_241_set_width)
HXLINE( 242)		if (::hx::IsEq( this->_width,value )) {
HXLINE( 243)			return value;
            		}
HXLINE( 245)		if ((value == (int)-2147483648)) {
HXLINE( 246)			this->_width = null();
HXLINE( 247)			this->set_componentWidth(null());
            		}
            		else {
HXLINE( 249)			this->_width = value;
HXLINE( 250)			this->set_componentWidth(value);
            		}
HXLINE( 252)		return value;
            	}


Float ComponentBounds_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_256_get_width)
HXLINE( 257)		Float f = ( (Float)(this->get_componentWidth()) );
HXLINE( 258)		return f;
            	}


Float ComponentBounds_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_263_set_height)
HXLINE( 264)		if (::hx::IsEq( this->_height,value )) {
HXLINE( 265)			return value;
            		}
HXLINE( 267)		if ((value == (int)-2147483648)) {
HXLINE( 268)			this->_height = null();
HXLINE( 269)			this->set_componentHeight(null());
            		}
            		else {
HXLINE( 271)			this->_height = value;
HXLINE( 272)			this->set_componentHeight(value);
            		}
HXLINE( 274)		return value;
            	}


Float ComponentBounds_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_278_get_height)
HXLINE( 279)		Float f = ( (Float)(this->get_componentHeight()) );
HXLINE( 280)		return f;
            	}


bool ComponentBounds_obj::get_hasScreen(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_374_get_hasScreen)
HXLINE( 375)		 ::haxe::ui::core::ComponentBounds p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 376)		while(::hx::IsNotNull( p )){
HXLINE( 377)			if (::hx::IsEq( p->_hasScreen,false )) {
HXLINE( 378)				return false;
            			}
HXLINE( 380)			p = p->parentComponent;
            		}
HXLINE( 382)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_hasScreen,return )

bool ComponentBounds_obj::hitTest(Float left,Float top,::hx::Null< bool >  __o_allowZeroSized){
            		bool allowZeroSized = __o_allowZeroSized.Default(false);
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_391_hitTest)
HXLINE( 393)		if ((this->get_hasScreen() == false)) {
HXLINE( 394)			return false;
            		}
HXLINE( 397)		left = (left * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE( 398)		top = (top * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE( 400)		bool b = false;
HXLINE( 401)		Float sx = this->get_screenLeft();
HXLINE( 402)		Float sy = this->get_screenTop();
HXLINE( 404)		Float cx = ( (Float)(0) );
HXLINE( 405)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE( 406)			cx = this->get_actualComponentWidth();
            		}
HXLINE( 408)		Float cy = ( (Float)(0) );
HXLINE( 409)		if (::hx::IsNotNull( this->get_componentHeight() )) {
HXLINE( 410)			cy = this->get_actualComponentHeight();
            		}
HXLINE( 413)		if ((allowZeroSized == true)) {
HXLINE( 423)			bool _hx_tmp;
HXDLIN( 423)			if (!((this->get_width() <= 0))) {
HXLINE( 423)				_hx_tmp = (this->get_height() <= 0);
            			}
            			else {
HXLINE( 423)				_hx_tmp = true;
            			}
HXDLIN( 423)			if (_hx_tmp) {
HXLINE( 424)				return true;
            			}
            		}
HXLINE( 428)		bool _hx_tmp;
HXDLIN( 428)		bool _hx_tmp1;
HXDLIN( 428)		bool _hx_tmp2;
HXDLIN( 428)		if ((left >= sx)) {
HXLINE( 428)			_hx_tmp2 = (left < (sx + cx));
            		}
            		else {
HXLINE( 428)			_hx_tmp2 = false;
            		}
HXDLIN( 428)		if (_hx_tmp2) {
HXLINE( 428)			_hx_tmp1 = (top >= sy);
            		}
            		else {
HXLINE( 428)			_hx_tmp1 = false;
            		}
HXDLIN( 428)		if (_hx_tmp1) {
HXLINE( 428)			_hx_tmp = (top < (sy + cy));
            		}
            		else {
HXLINE( 428)			_hx_tmp = false;
            		}
HXDLIN( 428)		if (_hx_tmp) {
HXLINE( 429)			b = true;
            		}
HXLINE( 432)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBounds_obj,hitTest,return )

bool ComponentBounds_obj::autoSize(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_439_autoSize)
HXLINE( 440)		bool _hx_tmp;
HXDLIN( 440)		if ((this->_componentReady != false)) {
HXLINE( 440)			_hx_tmp = ::hx::IsNull( this->_layout );
            		}
            		else {
HXLINE( 440)			_hx_tmp = true;
            		}
HXDLIN( 440)		if (_hx_tmp) {
HXLINE( 441)			return false;
            		}
HXLINE( 443)		return this->_layout->autoSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,autoSize,return )

void ComponentBounds_obj::moveComponent( ::Dynamic left, ::Dynamic top){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_464_moveComponent)
HXLINE( 465)		bool invalidate = false;
HXLINE( 466)		bool _hx_tmp;
HXDLIN( 466)		if (::hx::IsNotNull( left )) {
HXLINE( 466)			_hx_tmp = ::hx::IsNotEq( this->_left,left );
            		}
            		else {
HXLINE( 466)			_hx_tmp = false;
            		}
HXDLIN( 466)		if (_hx_tmp) {
HXLINE( 467)			this->_left = left;
HXLINE( 468)			invalidate = true;
            		}
HXLINE( 470)		bool _hx_tmp1;
HXDLIN( 470)		if (::hx::IsNotNull( top )) {
HXLINE( 470)			_hx_tmp1 = ::hx::IsNotEq( this->_top,top );
            		}
            		else {
HXLINE( 470)			_hx_tmp1 = false;
            		}
HXDLIN( 470)		if (_hx_tmp1) {
HXLINE( 471)			this->_top = top;
HXLINE( 472)			invalidate = true;
            		}
HXLINE( 475)		bool _hx_tmp2;
HXDLIN( 475)		if ((invalidate == true)) {
HXLINE( 475)			_hx_tmp2 = (this->isComponentInvalid(HX_("position",a9,a0,fa,ca)) == false);
            		}
            		else {
HXLINE( 475)			_hx_tmp2 = false;
            		}
HXDLIN( 475)		if (_hx_tmp2) {
HXLINE( 476)			this->invalidateComponent(HX_("position",a9,a0,fa,ca),false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBounds_obj,moveComponent,(void))

 ::Dynamic ComponentBounds_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_489_get_left)
HXDLIN( 489)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_left,return )

 ::Dynamic ComponentBounds_obj::set_left( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_491_set_left)
HXLINE( 492)		this->moveComponent(value,null());
HXLINE( 493)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_left,return )

 ::Dynamic ComponentBounds_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_505_get_top)
HXDLIN( 505)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_top,return )

 ::Dynamic ComponentBounds_obj::set_top( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_507_set_top)
HXLINE( 508)		this->moveComponent(null(),value);
HXLINE( 509)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_top,return )

Float ComponentBounds_obj::get_screenLeft(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_517_get_screenLeft)
HXLINE( 518)		 ::haxe::ui::core::ComponentBounds c = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 519)		Float xpos = ( (Float)(0) );
HXLINE( 520)		while(::hx::IsNotNull( c )){
HXLINE( 521)			 ::Dynamic l = c->get_left();
HXLINE( 522)			if (::hx::IsNotNull( c->parentComponent )) {
HXLINE( 523)				l = (l * ::haxe::ui::Toolkit_obj::get_scale());
            			}
HXLINE( 525)			xpos = (xpos + l);
HXLINE( 527)			if (::hx::IsNotNull( c->get_componentClipRect() )) {
HXLINE( 528)				Float xpos1 = c->get_componentClipRect()->left;
HXDLIN( 528)				xpos = (xpos - (xpos1 * ::haxe::ui::Toolkit_obj::get_scaleX()));
            			}
HXLINE( 531)			c = c->parentComponent;
            		}
HXLINE( 533)		return xpos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_screenLeft,return )

Float ComponentBounds_obj::get_screenTop(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_541_get_screenTop)
HXLINE( 542)		 ::haxe::ui::core::ComponentBounds c = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 543)		Float ypos = ( (Float)(0) );
HXLINE( 544)		while(::hx::IsNotNull( c )){
HXLINE( 545)			 ::Dynamic t = c->get_top();
HXLINE( 546)			if (::hx::IsNotNull( c->parentComponent )) {
HXLINE( 547)				t = (t * ::haxe::ui::Toolkit_obj::get_scale());
            			}
HXLINE( 549)			ypos = (ypos + t);
HXLINE( 551)			if (::hx::IsNotNull( c->get_componentClipRect() )) {
HXLINE( 552)				Float ypos1 = c->get_componentClipRect()->top;
HXDLIN( 552)				ypos = (ypos - (ypos1 * ::haxe::ui::Toolkit_obj::get_scaleY()));
            			}
HXLINE( 555)			c = c->parentComponent;
            		}
HXLINE( 557)		return ypos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_screenTop,return )

 ::haxe::ui::geom::Rectangle ComponentBounds_obj::get_componentClipRect(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_570_get_componentClipRect)
HXLINE( 571)		bool _hx_tmp;
HXDLIN( 571)		bool _hx_tmp1;
HXDLIN( 571)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 571)			_hx_tmp1 = ::hx::IsNotNull( this->get_style()->clip );
            		}
            		else {
HXLINE( 571)			_hx_tmp1 = false;
            		}
HXDLIN( 571)		if (_hx_tmp1) {
HXLINE( 571)			_hx_tmp = ::hx::IsEq( this->get_style()->clip,true );
            		}
            		else {
HXLINE( 571)			_hx_tmp = false;
            		}
HXDLIN( 571)		if (_hx_tmp) {
HXLINE( 572)			 ::Dynamic _hx_tmp = this->get_componentWidth();
HXDLIN( 572)			return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp,this->get_componentHeight());
            		}
HXLINE( 574)		return this->_componentClipRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_componentClipRect,return )

 ::haxe::ui::geom::Rectangle ComponentBounds_obj::set_componentClipRect( ::haxe::ui::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_576_set_componentClipRect)
HXLINE( 577)		this->_componentClipRect = value;
HXLINE( 578)		this->invalidateComponent(HX_("display",42,2a,4a,bb),false);
HXLINE( 579)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_componentClipRect,return )

bool ComponentBounds_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_587_get_isComponentClipped)
HXDLIN( 587)		return ::hx::IsNotNull( this->get_componentClipRect() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_isComponentClipped,return )

bool ComponentBounds_obj::get_isComponentOffscreen(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_598_get_isComponentOffscreen)
HXLINE( 599)		bool _hx_tmp;
HXDLIN( 599)		if ((this->get_width() == 0)) {
HXLINE( 599)			_hx_tmp = (this->get_height() == 0);
            		}
            		else {
HXLINE( 599)			_hx_tmp = false;
            		}
HXDLIN( 599)		if (_hx_tmp) {
HXLINE( 600)			return false;
            		}
HXLINE( 602)		Float x = this->get_screenLeft();
HXLINE( 603)		Float y = this->get_screenTop();
HXLINE( 604)		Float w = this->get_width();
HXLINE( 605)		Float h = this->get_height();
HXLINE( 607)		 ::haxe::ui::geom::Rectangle thisRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,w,h);
HXLINE( 608)		Float screenRect = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN( 608)		 ::haxe::ui::geom::Rectangle screenRect1 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,screenRect,::haxe::ui::core::Screen_obj::get_instance()->get_height());
HXLINE( 609)		return !(screenRect1->intersects(thisRect));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_isComponentOffscreen,return )

void ComponentBounds_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_2051edeb640839da_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ComponentBounds_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_eca886cf6a046070_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::core::ComponentBounds c = ( ( ::haxe::ui::core::ComponentBounds)(this->super::cloneComponent()) );
HXLINE( 450)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE( 450)			c->set_componentWidth(this->get_componentWidth());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_componentHeight() )) {
HXLINE( 450)			c->set_componentHeight(this->get_componentHeight());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_percentWidth() )) {
HXLINE( 450)			c->set_percentWidth(this->get_percentWidth());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_percentHeight() )) {
HXLINE( 450)			c->set_percentHeight(this->get_percentHeight());
            		}
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


 ::haxe::ui::core::ComponentContainer ComponentBounds_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_2051edeb640839da_493_self)
HXDLIN( 493)		return  ::haxe::ui::core::ComponentBounds_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ComponentBounds_obj > ComponentBounds_obj::__new() {
	::hx::ObjectPtr< ComponentBounds_obj > __this = new ComponentBounds_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentBounds_obj > ComponentBounds_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentBounds_obj *__this = (ComponentBounds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentBounds_obj), true, "haxe.ui.core.ComponentBounds"));
	*(void **)__this = ComponentBounds_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentBounds_obj::ComponentBounds_obj()
{
}

void ComponentBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentBounds);
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(actualComponentWidth,"actualComponentWidth");
	HX_MARK_MEMBER_NAME(actualComponentHeight,"actualComponentHeight");
	HX_MARK_MEMBER_NAME(_componentWidth,"_componentWidth");
	HX_MARK_MEMBER_NAME(_componentHeight,"_componentHeight");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_cachedPercentWidth,"_cachedPercentWidth");
	HX_MARK_MEMBER_NAME(_cachedPercentHeight,"_cachedPercentHeight");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_actualWidth,"_actualWidth");
	HX_MARK_MEMBER_NAME(_actualHeight,"_actualHeight");
	HX_MARK_MEMBER_NAME(_hasScreen,"_hasScreen");
	HX_MARK_MEMBER_NAME(hasScreen,"hasScreen");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(screenLeft,"screenLeft");
	HX_MARK_MEMBER_NAME(screenTop,"screenTop");
	HX_MARK_MEMBER_NAME(_componentClipRect,"_componentClipRect");
	HX_MARK_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_MARK_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	 ::haxe::ui::core::ComponentValidation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(actualComponentWidth,"actualComponentWidth");
	HX_VISIT_MEMBER_NAME(actualComponentHeight,"actualComponentHeight");
	HX_VISIT_MEMBER_NAME(_componentWidth,"_componentWidth");
	HX_VISIT_MEMBER_NAME(_componentHeight,"_componentHeight");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_cachedPercentWidth,"_cachedPercentWidth");
	HX_VISIT_MEMBER_NAME(_cachedPercentHeight,"_cachedPercentHeight");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_actualWidth,"_actualWidth");
	HX_VISIT_MEMBER_NAME(_actualHeight,"_actualHeight");
	HX_VISIT_MEMBER_NAME(_hasScreen,"_hasScreen");
	HX_VISIT_MEMBER_NAME(hasScreen,"hasScreen");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(screenLeft,"screenLeft");
	HX_VISIT_MEMBER_NAME(screenTop,"screenTop");
	HX_VISIT_MEMBER_NAME(_componentClipRect,"_componentClipRect");
	HX_VISIT_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_VISIT_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	 ::haxe::ui::core::ComponentValidation_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentBounds_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		if (HX_FIELD_EQ(inName,"_top") ) { return ::hx::Val( _top ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return ::hx::Val( hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_autoWidth() : autoWidth ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasScreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasScreen() : hasScreen ); }
		if (HX_FIELD_EQ(inName,"screenTop") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenTop() : screenTop ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_autoHeight() : autoHeight ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasScreen") ) { return ::hx::Val( _hasScreen ); }
		if (HX_FIELD_EQ(inName,"screenLeft") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenLeft() : screenLeft ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentWidth() ); }
		if (HX_FIELD_EQ(inName,"_actualWidth") ) { return ::hx::Val( _actualWidth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_autoWidth") ) { return ::hx::Val( get_autoWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return ::hx::Val( _percentWidth ); }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentHeight() ); }
		if (HX_FIELD_EQ(inName,"_actualHeight") ) { return ::hx::Val( _actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_hasScreen") ) { return ::hx::Val( get_hasScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponent") ) { return ::hx::Val( moveComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_screenTop") ) { return ::hx::Val( get_screenTop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_autoHeight") ) { return ::hx::Val( get_autoHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentWidth() ); }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return ::hx::Val( _percentHeight ); }
		if (HX_FIELD_EQ(inName,"get_screenLeft") ) { return ::hx::Val( get_screenLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return ::hx::Val( resizeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentWidth") ) { return ::hx::Val( _componentWidth ); }
		if (HX_FIELD_EQ(inName,"componentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentHeight() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_componentHeight") ) { return ::hx::Val( _componentHeight ); }
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return ::hx::Val( get_percentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return ::hx::Val( set_percentWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return ::hx::Val( get_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return ::hx::Val( set_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"cachePercentSizes") ) { return ::hx::Val( cachePercentSizes_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentClipRect() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_componentWidth") ) { return ::hx::Val( get_componentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentWidth") ) { return ::hx::Val( set_componentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentClipRect") ) { return ::hx::Val( _componentClipRect ); }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentClipped() : isComponentClipped ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_componentHeight") ) { return ::hx::Val( get_componentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentHeight") ) { return ::hx::Val( set_componentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_cachedPercentWidth") ) { return ::hx::Val( _cachedPercentWidth ); }
		if (HX_FIELD_EQ(inName,"restorePercentSizes") ) { return ::hx::Val( restorePercentSizes_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actualComponentWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualComponentWidth() : actualComponentWidth ); }
		if (HX_FIELD_EQ(inName,"_cachedPercentHeight") ) { return ::hx::Val( _cachedPercentHeight ); }
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentOffscreen() : isComponentOffscreen ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"actualComponentHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualComponentHeight() : actualComponentHeight ); }
		if (HX_FIELD_EQ(inName,"get_componentClipRect") ) { return ::hx::Val( get_componentClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentClipRect") ) { return ::hx::Val( set_componentClipRect_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_actualComponentWidth") ) { return ::hx::Val( get_actualComponentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isComponentOffscreen") ) { return ::hx::Val( get_isComponentOffscreen_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_actualComponentHeight") ) { return ::hx::Val( get_actualComponentHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentBounds_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasScreen") ) { hasScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenTop") ) { screenTop=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasScreen") ) { _hasScreen=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenLeft") ) { screenLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_actualWidth") ) { _actualWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_actualHeight") ) { _actualHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"componentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_componentWidth") ) { _componentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"componentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_componentHeight") ) { _componentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentClipRect(inValue.Cast<  ::haxe::ui::geom::Rectangle >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_componentClipRect") ) { _componentClipRect=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { isComponentClipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedPercentWidth") ) { _cachedPercentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actualComponentWidth") ) { actualComponentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedPercentHeight") ) { _cachedPercentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { isComponentOffscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"actualComponentHeight") ) { actualComponentHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoWidth",17,f4,6d,a8));
	outFields->push(HX_("autoHeight",b6,18,17,6e));
	outFields->push(HX_("actualComponentWidth",37,63,0e,06));
	outFields->push(HX_("actualComponentHeight",96,e5,d7,fc));
	outFields->push(HX_("_componentWidth",a8,b0,c9,62));
	outFields->push(HX_("componentWidth",09,68,69,19));
	outFields->push(HX_("_componentHeight",05,5b,00,c4));
	outFields->push(HX_("componentHeight",84,18,21,d9));
	outFields->push(HX_("_percentWidth",e0,e3,89,e0));
	outFields->push(HX_("percentWidth",01,51,1b,fe));
	outFields->push(HX_("_percentHeight",cd,f8,6c,4e));
	outFields->push(HX_("percentHeight",8c,08,1b,10));
	outFields->push(HX_("_cachedPercentWidth",22,cc,7b,fc));
	outFields->push(HX_("_cachedPercentHeight",4b,4a,26,a6));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_actualWidth",99,86,4b,9e));
	outFields->push(HX_("_actualHeight",f4,b7,19,9a));
	outFields->push(HX_("_hasScreen",27,6a,e8,e3));
	outFields->push(HX_("hasScreen",66,ee,45,88));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("_top",96,ab,23,3f));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("screenLeft",93,95,e6,bf));
	outFields->push(HX_("screenTop",89,ce,fc,37));
	outFields->push(HX_("_componentClipRect",b2,66,30,2e));
	outFields->push(HX_("componentClipRect",f1,c1,1a,5b));
	outFields->push(HX_("isComponentClipped",cc,ac,e0,9e));
	outFields->push(HX_("isComponentOffscreen",28,be,d5,68));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentBounds_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,autoWidth),HX_("autoWidth",17,f4,6d,a8)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,autoHeight),HX_("autoHeight",b6,18,17,6e)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,actualComponentWidth),HX_("actualComponentWidth",37,63,0e,06)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,actualComponentHeight),HX_("actualComponentHeight",96,e5,d7,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_componentWidth),HX_("_componentWidth",a8,b0,c9,62)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_componentHeight),HX_("_componentHeight",05,5b,00,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_percentWidth),HX_("_percentWidth",e0,e3,89,e0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_percentHeight),HX_("_percentHeight",cd,f8,6c,4e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_cachedPercentWidth),HX_("_cachedPercentWidth",22,cc,7b,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_cachedPercentHeight),HX_("_cachedPercentHeight",4b,4a,26,a6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_actualWidth),HX_("_actualWidth",99,86,4b,9e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_actualHeight),HX_("_actualHeight",f4,b7,19,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_hasScreen),HX_("_hasScreen",27,6a,e8,e3)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,hasScreen),HX_("hasScreen",66,ee,45,88)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_top),HX_("_top",96,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,screenLeft),HX_("screenLeft",93,95,e6,bf)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,screenTop),HX_("screenTop",89,ce,fc,37)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(ComponentBounds_obj,_componentClipRect),HX_("_componentClipRect",b2,66,30,2e)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,isComponentClipped),HX_("isComponentClipped",cc,ac,e0,9e)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,isComponentOffscreen),HX_("isComponentOffscreen",28,be,d5,68)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentBounds_obj_sMemberFields[] = {
	HX_("autoWidth",17,f4,6d,a8),
	HX_("get_autoWidth",ee,c7,d1,69),
	HX_("autoHeight",b6,18,17,6e),
	HX_("get_autoHeight",ff,a0,0c,e4),
	HX_("resizeComponent",29,98,f2,6b),
	HX_("actualComponentWidth",37,63,0e,06),
	HX_("get_actualComponentWidth",c0,80,aa,48),
	HX_("actualComponentHeight",96,e5,d7,fc),
	HX_("get_actualComponentHeight",ed,9f,d5,02),
	HX_("_componentWidth",a8,b0,c9,62),
	HX_("get_componentWidth",d2,48,03,b5),
	HX_("set_componentWidth",46,7b,b2,91),
	HX_("_componentHeight",05,5b,00,c4),
	HX_("get_componentHeight",9b,e7,2b,64),
	HX_("set_componentHeight",a7,da,c8,a0),
	HX_("_percentWidth",e0,e3,89,e0),
	HX_("get_percentWidth",8a,3d,ba,02),
	HX_("set_percentWidth",fe,2a,fc,58),
	HX_("_percentHeight",cd,f8,6c,4e),
	HX_("get_percentHeight",e3,13,8b,16),
	HX_("set_percentHeight",ef,eb,f8,39),
	HX_("_cachedPercentWidth",22,cc,7b,fc),
	HX_("_cachedPercentHeight",4b,4a,26,a6),
	HX_("cachePercentSizes",ef,e4,d7,ce),
	HX_("restorePercentSizes",fb,13,79,de),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("_width",47,fd,49,c6),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("_height",86,19,c3,70),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("_actualWidth",99,86,4b,9e),
	HX_("_actualHeight",f4,b7,19,9a),
	HX_("_hasScreen",27,6a,e8,e3),
	HX_("hasScreen",66,ee,45,88),
	HX_("get_hasScreen",3d,c2,a9,49),
	HX_("hitTest",45,60,7f,e2),
	HX_("autoSize",d0,8f,79,2f),
	HX_("moveComponent",6c,83,03,2a),
	HX_("_left",e6,23,c1,fa),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("_top",96,ab,23,3f),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("screenLeft",93,95,e6,bf),
	HX_("get_screenLeft",dc,1d,dc,35),
	HX_("screenTop",89,ce,fc,37),
	HX_("get_screenTop",60,a2,60,f9),
	HX_("_componentClipRect",b2,66,30,2e),
	HX_("get_componentClipRect",c8,c4,c8,d9),
	HX_("set_componentClipRect",d4,92,d1,2d),
	HX_("isComponentClipped",cc,ac,e0,9e),
	HX_("get_isComponentClipped",15,26,75,f8),
	HX_("isComponentOffscreen",28,be,d5,68),
	HX_("get_isComponentOffscreen",b1,db,71,ab),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ComponentBounds_obj::__mClass;

void ComponentBounds_obj::__register()
{
	ComponentBounds_obj _hx_dummy;
	ComponentBounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentBounds",f5,95,95,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentBounds_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentBounds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentBounds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentBounds_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_6_boot)
HXDLIN(   6)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("percentWidth",01,51,1b,fe), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(1,HX_("percentHeight",8c,08,1b,10), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
