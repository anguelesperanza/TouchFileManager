#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_FilterParser
#include <haxe/ui/filters/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_16_new,"haxe.ui.styles.Style","new",0x2c473849,"haxe.ui.styles.Style.new","haxe/ui/styles/Style.hx",16,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_46_set_padding,"haxe.ui.styles.Style","set_padding",0x56cfb9dd,"haxe.ui.styles.Style.set_padding","haxe/ui/styles/Style.hx",46,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_156_get_borderType,"haxe.ui.styles.Style","get_borderType",0x1cdb98c6,"haxe.ui.styles.Style.get_borderType","haxe/ui/styles/Style.hx",156,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_168_get_hasBorder,"haxe.ui.styles.Style","get_hasBorder",0xe7b098e6,"haxe.ui.styles.Style.get_hasBorder","haxe/ui/styles/Style.hx",168,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_172_get_fullBorderSize,"haxe.ui.styles.Style","get_fullBorderSize",0x0ea6dd3c,"haxe.ui.styles.Style.get_fullBorderSize","haxe/ui/styles/Style.hx",172,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_180_mergeDirectives,"haxe.ui.styles.Style","mergeDirectives",0x72f23b85,"haxe.ui.styles.Style.mergeDirectives","haxe/ui/styles/Style.hx",180,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_507_apply,"haxe.ui.styles.Style","apply",0xc1c77997,"haxe.ui.styles.Style.apply","haxe/ui/styles/Style.hx",507,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_658_equalTo,"haxe.ui.styles.Style","equalTo",0x442d7eb8,"haxe.ui.styles.Style.equalTo","haxe/ui/styles/Style.hx",658,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_790_createAnimationOptions,"haxe.ui.styles.Style","createAnimationOptions",0x876bdd8d,"haxe.ui.styles.Style.createAnimationOptions","haxe/ui/styles/Style.hx",790,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_793_clone,"haxe.ui.styles.Style","clone",0xe5ef0786,"haxe.ui.styles.Style.clone","haxe/ui/styles/Style.hx",793,0x438ac9a8)
namespace haxe{
namespace ui{
namespace styles{

void Style_obj::__construct( ::Dynamic left, ::Dynamic top, ::Dynamic autoWidth, ::Dynamic width, ::Dynamic percentWidth, ::Dynamic minWidth, ::Dynamic minPercentWidth, ::Dynamic maxWidth, ::Dynamic maxPercentWidth, ::Dynamic initialWidth, ::Dynamic initialPercentWidth, ::Dynamic autoHeight, ::Dynamic height, ::Dynamic percentHeight, ::Dynamic minHeight, ::Dynamic minPercentHeight, ::Dynamic maxHeight, ::Dynamic maxPercentHeight, ::Dynamic initialHeight, ::Dynamic initialPercentHeight, ::Dynamic padding, ::Dynamic paddingTop, ::Dynamic paddingLeft, ::Dynamic paddingRight, ::Dynamic paddingBottom, ::Dynamic marginTop, ::Dynamic marginLeft, ::Dynamic marginRight, ::Dynamic marginBottom, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing, ::Dynamic color, ::Dynamic backgroundColor, ::Dynamic backgroundOpacity, ::Dynamic backgroundColorEnd,::String backgroundGradientStyle, ::haxe::ui::util::VariantType backgroundImage,::String backgroundImageRepeat, ::Dynamic backgroundPositionX, ::Dynamic backgroundPositionY, ::Dynamic backgroundImageClipTop, ::Dynamic backgroundImageClipLeft, ::Dynamic backgroundImageClipBottom, ::Dynamic backgroundImageClipRight, ::Dynamic backgroundImageSliceTop, ::Dynamic backgroundImageSliceLeft, ::Dynamic backgroundImageSliceBottom, ::Dynamic backgroundImageSliceRight, ::Dynamic borderColor, ::Dynamic borderTopColor, ::Dynamic borderLeftColor, ::Dynamic borderBottomColor, ::Dynamic borderRightColor, ::Dynamic borderSize, ::Dynamic borderTopSize, ::Dynamic borderLeftSize, ::Dynamic borderBottomSize, ::Dynamic borderRightSize, ::Dynamic borderRadius, ::Dynamic borderRadiusTopLeft, ::Dynamic borderRadiusTopRight, ::Dynamic borderRadiusBottomLeft, ::Dynamic borderRadiusBottomRight, ::Dynamic borderOpacity,::String borderStyle, ::haxe::ui::util::VariantType icon,::String iconPosition,::String horizontalAlign,::String verticalAlign,::String textAlign, ::Dynamic opacity, ::Dynamic clip, ::Dynamic native,::String fontName, ::Dynamic fontSize, ::Dynamic fontBold, ::Dynamic fontUnderline, ::Dynamic fontItalic, ::Dynamic fontStrikeThrough,::String cursor, ::Dynamic hidden,::Array< ::Dynamic> filter,::Array< ::Dynamic> backdropFilter, ::haxe::ui::util::VariantType resource,::String animationName, ::haxe::ui::styles::animation::AnimationOptions animationOptions,::String mode,::String pointerEvents,::String contentType,::String direction, ::Dynamic contentWidth, ::Dynamic contentWidthPercent, ::Dynamic contentHeight, ::Dynamic contentHeightPercent, ::Dynamic wordWrap,::String imageRendering, ::Dynamic backgroundWidth, ::Dynamic backgroundWidthPercent, ::Dynamic backgroundHeight, ::Dynamic backgroundHeightPercent,::String layout, ::Dynamic includeInLayout,::String justifyContent, ::haxe::ui::styles::StyleBorderType borderType, ::Dynamic hasBorder, ::Dynamic fullBorderSize){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_16_new)
HXDLIN(  16)		this->left = left;
HXDLIN(  16)		this->top = top;
HXDLIN(  16)		this->autoWidth = autoWidth;
HXDLIN(  16)		this->width = width;
HXDLIN(  16)		this->percentWidth = percentWidth;
HXDLIN(  16)		this->minWidth = minWidth;
HXDLIN(  16)		this->minPercentWidth = minPercentWidth;
HXDLIN(  16)		this->maxWidth = maxWidth;
HXDLIN(  16)		this->maxPercentWidth = maxPercentWidth;
HXDLIN(  16)		this->initialWidth = initialWidth;
HXDLIN(  16)		this->initialPercentWidth = initialPercentWidth;
HXDLIN(  16)		this->autoHeight = autoHeight;
HXDLIN(  16)		this->height = height;
HXDLIN(  16)		this->percentHeight = percentHeight;
HXDLIN(  16)		this->minHeight = minHeight;
HXDLIN(  16)		this->minPercentHeight = minPercentHeight;
HXDLIN(  16)		this->maxHeight = maxHeight;
HXDLIN(  16)		this->maxPercentHeight = maxPercentHeight;
HXDLIN(  16)		this->initialHeight = initialHeight;
HXDLIN(  16)		this->initialPercentHeight = initialPercentHeight;
HXDLIN(  16)		this->padding = padding;
HXDLIN(  16)		this->paddingTop = paddingTop;
HXDLIN(  16)		this->paddingLeft = paddingLeft;
HXDLIN(  16)		this->paddingRight = paddingRight;
HXDLIN(  16)		this->paddingBottom = paddingBottom;
HXDLIN(  16)		this->marginTop = marginTop;
HXDLIN(  16)		this->marginLeft = marginLeft;
HXDLIN(  16)		this->marginRight = marginRight;
HXDLIN(  16)		this->marginBottom = marginBottom;
HXDLIN(  16)		this->horizontalSpacing = horizontalSpacing;
HXDLIN(  16)		this->verticalSpacing = verticalSpacing;
HXDLIN(  16)		this->color = color;
HXDLIN(  16)		this->backgroundColor = backgroundColor;
HXDLIN(  16)		this->backgroundOpacity = backgroundOpacity;
HXDLIN(  16)		this->backgroundColorEnd = backgroundColorEnd;
HXDLIN(  16)		this->backgroundGradientStyle = backgroundGradientStyle;
HXDLIN(  16)		this->backgroundImage = backgroundImage;
HXDLIN(  16)		this->backgroundImageRepeat = backgroundImageRepeat;
HXDLIN(  16)		this->backgroundPositionX = backgroundPositionX;
HXDLIN(  16)		this->backgroundPositionY = backgroundPositionY;
HXDLIN(  16)		this->backgroundImageClipTop = backgroundImageClipTop;
HXDLIN(  16)		this->backgroundImageClipLeft = backgroundImageClipLeft;
HXDLIN(  16)		this->backgroundImageClipBottom = backgroundImageClipBottom;
HXDLIN(  16)		this->backgroundImageClipRight = backgroundImageClipRight;
HXDLIN(  16)		this->backgroundImageSliceTop = backgroundImageSliceTop;
HXDLIN(  16)		this->backgroundImageSliceLeft = backgroundImageSliceLeft;
HXDLIN(  16)		this->backgroundImageSliceBottom = backgroundImageSliceBottom;
HXDLIN(  16)		this->backgroundImageSliceRight = backgroundImageSliceRight;
HXDLIN(  16)		this->borderColor = borderColor;
HXDLIN(  16)		this->borderTopColor = borderTopColor;
HXDLIN(  16)		this->borderLeftColor = borderLeftColor;
HXDLIN(  16)		this->borderBottomColor = borderBottomColor;
HXDLIN(  16)		this->borderRightColor = borderRightColor;
HXDLIN(  16)		this->borderSize = borderSize;
HXDLIN(  16)		this->borderTopSize = borderTopSize;
HXDLIN(  16)		this->borderLeftSize = borderLeftSize;
HXDLIN(  16)		this->borderBottomSize = borderBottomSize;
HXDLIN(  16)		this->borderRightSize = borderRightSize;
HXDLIN(  16)		this->borderRadius = borderRadius;
HXDLIN(  16)		this->borderRadiusTopLeft = borderRadiusTopLeft;
HXDLIN(  16)		this->borderRadiusTopRight = borderRadiusTopRight;
HXDLIN(  16)		this->borderRadiusBottomLeft = borderRadiusBottomLeft;
HXDLIN(  16)		this->borderRadiusBottomRight = borderRadiusBottomRight;
HXDLIN(  16)		this->borderOpacity = borderOpacity;
HXDLIN(  16)		this->borderStyle = borderStyle;
HXDLIN(  16)		this->icon = icon;
HXDLIN(  16)		this->iconPosition = iconPosition;
HXDLIN(  16)		this->horizontalAlign = horizontalAlign;
HXDLIN(  16)		this->verticalAlign = verticalAlign;
HXDLIN(  16)		this->textAlign = textAlign;
HXDLIN(  16)		this->opacity = opacity;
HXDLIN(  16)		this->clip = clip;
HXDLIN(  16)		this->native = native;
HXDLIN(  16)		this->fontName = fontName;
HXDLIN(  16)		this->fontSize = fontSize;
HXDLIN(  16)		this->fontBold = fontBold;
HXDLIN(  16)		this->fontUnderline = fontUnderline;
HXDLIN(  16)		this->fontItalic = fontItalic;
HXDLIN(  16)		this->fontStrikeThrough = fontStrikeThrough;
HXDLIN(  16)		this->cursor = cursor;
HXDLIN(  16)		this->hidden = hidden;
HXDLIN(  16)		this->filter = filter;
HXDLIN(  16)		this->backdropFilter = backdropFilter;
HXDLIN(  16)		this->resource = resource;
HXDLIN(  16)		this->animationName = animationName;
HXDLIN(  16)		this->animationOptions = animationOptions;
HXDLIN(  16)		this->mode = mode;
HXDLIN(  16)		this->pointerEvents = pointerEvents;
HXDLIN(  16)		this->contentType = contentType;
HXDLIN(  16)		this->direction = direction;
HXDLIN(  16)		this->contentWidth = contentWidth;
HXDLIN(  16)		this->contentWidthPercent = contentWidthPercent;
HXDLIN(  16)		this->contentHeight = contentHeight;
HXDLIN(  16)		this->contentHeightPercent = contentHeightPercent;
HXDLIN(  16)		this->wordWrap = wordWrap;
HXDLIN(  16)		this->imageRendering = imageRendering;
HXDLIN(  16)		this->backgroundWidth = backgroundWidth;
HXDLIN(  16)		this->backgroundWidthPercent = backgroundWidthPercent;
HXDLIN(  16)		this->backgroundHeight = backgroundHeight;
HXDLIN(  16)		this->backgroundHeightPercent = backgroundHeightPercent;
HXDLIN(  16)		this->layout = layout;
HXDLIN(  16)		this->includeInLayout = includeInLayout;
HXDLIN(  16)		this->justifyContent = justifyContent;
HXDLIN(  16)		this->borderType = borderType;
HXDLIN(  16)		this->hasBorder = ( (bool)(hasBorder) );
HXDLIN(  16)		this->fullBorderSize = fullBorderSize;
            	}

Dynamic Style_obj::__CreateEmpty() { return new Style_obj; }

void *Style_obj::_hx_vtable = 0;

Dynamic Style_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Style_obj > _hx_result = new Style_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15],inArgs[16],inArgs[17],inArgs[18],inArgs[19],inArgs[20],inArgs[21],inArgs[22],inArgs[23],inArgs[24],inArgs[25],inArgs[26],inArgs[27],inArgs[28],inArgs[29],inArgs[30],inArgs[31],inArgs[32],inArgs[33],inArgs[34],inArgs[35],inArgs[36],inArgs[37],inArgs[38],inArgs[39],inArgs[40],inArgs[41],inArgs[42],inArgs[43],inArgs[44],inArgs[45],inArgs[46],inArgs[47],inArgs[48],inArgs[49],inArgs[50],inArgs[51],inArgs[52],inArgs[53],inArgs[54],inArgs[55],inArgs[56],inArgs[57],inArgs[58],inArgs[59],inArgs[60],inArgs[61],inArgs[62],inArgs[63],inArgs[64],inArgs[65],inArgs[66],inArgs[67],inArgs[68],inArgs[69],inArgs[70],inArgs[71],inArgs[72],inArgs[73],inArgs[74],inArgs[75],inArgs[76],inArgs[77],inArgs[78],inArgs[79],inArgs[80],inArgs[81],inArgs[82],inArgs[83],inArgs[84],inArgs[85],inArgs[86],inArgs[87],inArgs[88],inArgs[89],inArgs[90],inArgs[91],inArgs[92],inArgs[93],inArgs[94],inArgs[95],inArgs[96],inArgs[97],inArgs[98],inArgs[99],inArgs[100],inArgs[101],inArgs[102],inArgs[103],inArgs[104],inArgs[105]);
	return _hx_result;
}

bool Style_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x355c6ff5;
}

 ::Dynamic Style_obj::set_padding( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_46_set_padding)
HXLINE(  47)		this->paddingTop = value;
HXLINE(  48)		this->paddingLeft = value;
HXLINE(  49)		this->paddingRight = value;
HXLINE(  50)		this->paddingBottom = value;
HXLINE(  51)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_padding,return )

 ::haxe::ui::styles::StyleBorderType Style_obj::get_borderType(){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_156_get_borderType)
HXLINE( 157)		 ::haxe::ui::styles::StyleBorderType t = ::haxe::ui::styles::StyleBorderType_obj::Compound_dyn();
HXLINE( 158)		bool _hx_tmp;
HXDLIN( 158)		bool _hx_tmp1;
HXDLIN( 158)		bool _hx_tmp2;
HXDLIN( 158)		bool _hx_tmp3;
HXDLIN( 158)		if (::hx::IsNotNull( this->borderLeftSize )) {
HXLINE( 158)			_hx_tmp3 = ::hx::IsGreater( this->borderLeftSize,0 );
            		}
            		else {
HXLINE( 158)			_hx_tmp3 = false;
            		}
HXDLIN( 158)		if (_hx_tmp3) {
HXLINE( 158)			_hx_tmp2 = ::hx::IsEq( this->borderLeftSize,this->borderRightSize );
            		}
            		else {
HXLINE( 158)			_hx_tmp2 = false;
            		}
HXDLIN( 158)		if (_hx_tmp2) {
HXLINE( 158)			_hx_tmp1 = ::hx::IsEq( this->borderLeftSize,this->borderBottomSize );
            		}
            		else {
HXLINE( 158)			_hx_tmp1 = false;
            		}
HXDLIN( 158)		if (_hx_tmp1) {
HXLINE( 158)			_hx_tmp = ::hx::IsEq( this->borderLeftSize,this->borderTopSize );
            		}
            		else {
HXLINE( 158)			_hx_tmp = false;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXLINE( 159)			t = ::haxe::ui::styles::StyleBorderType_obj::Full_dyn();
            		}
            		else {
HXLINE( 160)			bool _hx_tmp;
HXDLIN( 160)			bool _hx_tmp1;
HXDLIN( 160)			bool _hx_tmp2;
HXDLIN( 160)			bool _hx_tmp3;
HXDLIN( 160)			if (::hx::IsNotNull( this->borderLeftSize )) {
HXLINE( 160)				_hx_tmp3 = ::hx::IsLessEq( this->borderLeftSize,0 );
            			}
            			else {
HXLINE( 160)				_hx_tmp3 = true;
            			}
HXDLIN( 160)			if (_hx_tmp3) {
HXLINE( 160)				if (::hx::IsNotNull( this->borderRightSize )) {
HXLINE( 160)					_hx_tmp2 = ::hx::IsLessEq( this->borderRightSize,0 );
            				}
            				else {
HXLINE( 160)					_hx_tmp2 = true;
            				}
            			}
            			else {
HXLINE( 160)				_hx_tmp2 = false;
            			}
HXDLIN( 160)			if (_hx_tmp2) {
HXLINE( 160)				if (::hx::IsNotNull( this->borderBottomSize )) {
HXLINE( 160)					_hx_tmp1 = ::hx::IsLessEq( this->borderRightSize,0 );
            				}
            				else {
HXLINE( 160)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 160)				_hx_tmp1 = false;
            			}
HXDLIN( 160)			if (_hx_tmp1) {
HXLINE( 160)				if (::hx::IsNotNull( this->borderTopSize )) {
HXLINE( 160)					_hx_tmp = ::hx::IsLessEq( this->borderTopSize,0 );
            				}
            				else {
HXLINE( 160)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 160)				_hx_tmp = false;
            			}
HXDLIN( 160)			if (_hx_tmp) {
HXLINE( 161)				t = ::haxe::ui::styles::StyleBorderType_obj::None_dyn();
            			}
            		}
HXLINE( 163)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_borderType,return )

bool Style_obj::get_hasBorder(){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_168_get_hasBorder)
HXDLIN( 168)		return ::hx::IsPointerNotEq( this->get_borderType(),::haxe::ui::styles::StyleBorderType_obj::None_dyn() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_hasBorder,return )

 ::Dynamic Style_obj::get_fullBorderSize(){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_172_get_fullBorderSize)
HXLINE( 173)		if (::hx::IsPointerEq( this->get_borderType(),::haxe::ui::styles::StyleBorderType_obj::Full_dyn() )) {
HXLINE( 174)			return this->borderLeftSize;
            		}
HXLINE( 176)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fullBorderSize,return )

void Style_obj::mergeDirectives( ::haxe::ds::StringMap map){
            	HX_GC_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_180_mergeDirectives)
HXDLIN( 180)		 ::Dynamic key = map->keys();
HXDLIN( 180)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 180)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 181)			 ::haxe::ui::styles::elements::Directive v = ( ( ::haxe::ui::styles::elements::Directive)(map->get(key1)) );
HXLINE( 183)			::String _hx_switch_0 = key1;
            			if (  (_hx_switch_0==HX_("animation-delay",3a,1e,9e,af)) ){
HXLINE( 447)				if (::hx::IsNull( this->animationOptions )) {
HXLINE( 447)					this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            				}
HXLINE( 448)				this->animationOptions->delay = ::haxe::ui::styles::ValueTools_obj::time(v->value);
HXLINE( 446)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("animation-direction",76,d0,26,5b)) ){
HXLINE( 458)				if (::hx::IsNull( this->animationOptions )) {
HXLINE( 458)					this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            				}
HXLINE( 459)				this->animationOptions->direction = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXLINE( 457)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("animation-duration",fd,94,5c,5e)) ){
HXLINE( 441)				if (::hx::IsNull( this->animationOptions )) {
HXLINE( 441)					this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            				}
HXLINE( 442)				this->animationOptions->duration = ::haxe::ui::styles::ValueTools_obj::time(v->value);
HXLINE( 440)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("animation-fill-mode",e4,12,c9,b7)) ){
HXLINE( 461)				if (::hx::IsNull( this->animationOptions )) {
HXLINE( 461)					this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            				}
HXLINE( 462)				this->animationOptions->fillMode = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXLINE( 460)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("animation-iteration-count",56,1d,0c,30)) ){
HXLINE( 450)				if (::hx::IsNull( this->animationOptions )) {
HXLINE( 450)					this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            				}
HXLINE( 451)				 ::haxe::ui::styles::Value _g = v->value;
HXDLIN( 451)				 ::Dynamic _hx_tmp;
HXDLIN( 451)				if ((_g->_hx_getIndex() == 6)) {
HXLINE( 452)					::String val = _g->_hx_getString(0);
HXLINE( 453)					if ((val == HX_("infinite",d4,16,69,da))) {
HXLINE( 451)						_hx_tmp = -1;
            					}
            					else {
HXLINE( 451)						_hx_tmp = 0;
            					}
            				}
            				else {
HXLINE( 451)					_hx_tmp = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
            				}
HXDLIN( 451)				this->animationOptions->iterationCount = _hx_tmp;
HXLINE( 449)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("animation-name",74,af,fd,ae)) ){
HXLINE( 439)				this->animationName = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 439)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("animation-timing-function",f2,dd,68,8f)) ){
HXLINE( 444)				if (::hx::IsNull( this->animationOptions )) {
HXLINE( 444)					this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            				}
HXLINE( 445)				this->animationOptions->easingFunction = ::haxe::ui::styles::ValueTools_obj::calcEasing(v->value);
HXLINE( 443)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("backdrop-filter",8f,d4,b7,89)) ){
HXLINE( 422)				 ::haxe::ui::styles::Value _g = v->value;
HXDLIN( 422)				switch((int)(_g->_hx_getIndex())){
            					case (int)5: {
HXLINE( 423)						::String f = _g->_hx_getString(0);
HXDLIN( 423)						::Array< ::Dynamic> vl = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 423)						{
HXLINE( 424)							::cpp::VirtualArray arr = ::haxe::ui::styles::ValueTools_obj::array(vl);
HXLINE( 425)							arr->insert(0,f);
HXLINE( 426)							this->backdropFilter = ::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::ui::filters::FilterParser_obj::parseFilter(arr));
            						}
            					}
            					break;
            					case (int)6: {
HXLINE( 427)						::String f = _g->_hx_getString(0);
HXLINE( 428)						this->backdropFilter = ::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::ui::filters::FilterParser_obj::parseFilter(::cpp::VirtualArray_obj::__new(1)->init(0,f)));
            					}
            					break;
            					case (int)9: {
HXLINE( 430)						this->backdropFilter = null();
            					}
            					break;
            					default:{
            					}
            				}
HXLINE( 422)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-color",84,e8,6d,de)) ){
HXLINE( 244)				 ::haxe::ui::styles::Value _g = v->value;
HXLINE( 245)				{
HXLINE( 246)					this->backgroundColor = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXLINE( 247)					if (map->exists(HX_("background-color-end",52,18,72,2e))) {
HXLINE( 248)						this->backgroundColorEnd = ::haxe::ui::styles::ValueTools_obj::_hx_int(( ( ::haxe::ui::styles::elements::Directive)(map->get(HX_("background-color-end",52,18,72,2e))) )->value);
            					}
            					else {
HXLINE( 250)						this->backgroundColorEnd = null();
            					}
            				}
HXLINE( 244)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-color-end",52,18,72,2e)) ){
HXLINE( 254)				this->backgroundColorEnd = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 254)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-gradient-style",93,4c,5d,f2)) ){
HXLINE( 256)				this->backgroundGradientStyle = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 256)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-height",a6,cd,82,fd)) ){
HXLINE( 268)				this->backgroundHeight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 269)				this->backgroundHeightPercent = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 267)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image",7c,96,7a,51)) ){
HXLINE( 261)				this->backgroundImage = ::haxe::ui::styles::ValueTools_obj::variant(v->value);
HXDLIN( 261)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-clip-bottom",77,77,29,f7)) ){
HXLINE( 283)				this->backgroundImageClipBottom = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 283)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-clip-left",93,1d,47,f5)) ){
HXLINE( 279)				this->backgroundImageClipLeft = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 279)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-clip-right",d0,d0,ff,1f)) ){
HXLINE( 281)				this->backgroundImageClipRight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 281)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-clip-top",89,46,05,ca)) ){
HXLINE( 277)				this->backgroundImageClipTop = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 277)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-repeat",4c,e8,d5,ca)) ){
HXLINE( 263)				this->backgroundImageRepeat = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 263)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-slice-bottom",77,2c,4a,86)) ){
HXLINE( 292)				this->backgroundImageSliceBottom = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 292)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-slice-left",93,92,60,b3)) ){
HXLINE( 288)				this->backgroundImageSliceLeft = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 288)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-slice-right",d0,bb,2c,b8)) ){
HXLINE( 290)				this->backgroundImageSliceRight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 290)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-image-slice-top",89,71,91,06)) ){
HXLINE( 286)				this->backgroundImageSliceTop = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 286)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-opacity",2c,9f,1b,c0)) ){
HXLINE( 258)				this->backgroundOpacity = ::haxe::ui::styles::ValueTools_obj::_hx_float(v->value);
HXDLIN( 258)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-position-x",d3,15,69,2f)) ){
HXLINE( 272)				this->backgroundPositionX = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 272)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-position-y",d4,15,69,2f)) ){
HXLINE( 274)				this->backgroundPositionY = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 274)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("background-width",27,2d,74,5e)) ){
HXLINE( 265)				this->backgroundWidth = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 266)				this->backgroundWidthPercent = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 264)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-bottom-color",82,36,ce,4f)) ){
HXLINE( 303)				this->borderBottomColor = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 303)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-bottom-left-radius",77,ad,2b,70)) ){
HXLINE( 337)				this->borderRadiusBottomLeft = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 337)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-bottom-right-radius",a4,c4,36,d7)) ){
HXLINE( 339)				this->borderRadiusBottomRight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 339)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-bottom-size",82,24,35,2c)) ||  (_hx_switch_0==HX_("border-bottom-width",25,7b,d4,cf)) ){
HXLINE( 324)				if (::hx::IsPointerEq( v->value,::haxe::ui::styles::Value_obj::VNone_dyn() )) {
HXLINE( 325)					this->borderBottomSize = 0;
            				}
            				else {
HXLINE( 327)					this->borderBottomSize = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
            				}
HXLINE( 324)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-color",02,74,10,71)) ){
HXLINE( 295)				this->borderColor = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 295)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-left-color",5e,12,2b,99)) ){
HXLINE( 299)				this->borderLeftColor = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 299)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-left-size",26,78,a1,a1)) ||  (_hx_switch_0==HX_("border-left-width",01,57,31,19)) ){
HXLINE( 312)				if (::hx::IsPointerEq( v->value,::haxe::ui::styles::Value_obj::VNone_dyn() )) {
HXLINE( 313)					this->borderLeftSize = 0;
            				}
            				else {
HXLINE( 315)					this->borderLeftSize = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
            				}
HXLINE( 312)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-opacity",2a,86,16,29)) ){
HXLINE( 342)				this->borderOpacity = ::haxe::ui::styles::ValueTools_obj::_hx_float(v->value);
HXDLIN( 342)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-radius",d3,18,c5,67)) ){
HXLINE( 331)				this->borderRadius = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 331)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-right-color",d1,4a,d2,a1)) ){
HXLINE( 301)				this->borderRightColor = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 301)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-right-size",13,4f,36,fb)) ||  (_hx_switch_0==HX_("border-right-width",74,8f,d8,21)) ){
HXLINE( 318)				if (::hx::IsPointerEq( v->value,::haxe::ui::styles::Value_obj::VNone_dyn() )) {
HXLINE( 319)					this->borderRightSize = 0;
            				}
            				else {
HXLINE( 321)					this->borderRightSize = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
            				}
HXLINE( 318)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-style",d0,a7,d1,aa)) ){
HXLINE( 344)				this->borderStyle = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 344)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-top-color",8a,f0,a5,c6)) ){
HXLINE( 297)				this->borderTopColor = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 297)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-top-left-radius",7f,9d,36,07)) ){
HXLINE( 333)				this->borderRadiusTopLeft = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 333)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-top-right-radius",9c,db,bd,69)) ){
HXLINE( 335)				this->borderRadiusTopRight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 335)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("border-top-size",7a,83,50,ad)) ||  (_hx_switch_0==HX_("border-top-width",2d,35,ac,46)) ){
HXLINE( 306)				if (::hx::IsPointerEq( v->value,::haxe::ui::styles::Value_obj::VNone_dyn() )) {
HXLINE( 307)					this->borderTopSize = 0;
            				}
            				else {
HXLINE( 309)					this->borderTopSize = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
            				}
HXLINE( 306)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("clip",d0,6e,c2,41)) ){
HXLINE( 398)				this->clip = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 398)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("color",63,71,5c,4a)) ){
HXLINE( 241)				this->color = ::haxe::ui::styles::ValueTools_obj::_hx_int(v->value);
HXDLIN( 241)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("content-height",bb,63,11,ea)) ){
HXLINE( 481)				this->contentHeight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 482)				this->contentHeightPercent = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 480)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("content-type",8e,f1,71,89)) ){
HXLINE( 473)				this->contentType = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 473)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("content-width",b2,b0,d8,69)) ){
HXLINE( 478)				this->contentWidth = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 479)				this->contentWidthPercent = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 477)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("cursor",d6,8e,e8,3e)) ){
HXLINE( 391)				this->cursor = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 391)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("direction",3f,62,40,10)) ){
HXLINE( 475)				this->direction = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 475)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("display",42,2a,4a,bb)) ){
HXLINE( 395)				this->hidden = ::haxe::ui::styles::ValueTools_obj::none(v->value);
HXDLIN( 395)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("filter",b8,1f,35,85)) ){
HXLINE( 405)				 ::haxe::ui::styles::Value _g = v->value;
HXDLIN( 405)				switch((int)(_g->_hx_getIndex())){
            					case (int)5: {
HXLINE( 406)						::String f = _g->_hx_getString(0);
HXDLIN( 406)						::Array< ::Dynamic> vl = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 406)						{
HXLINE( 407)							::cpp::VirtualArray arr = ::haxe::ui::styles::ValueTools_obj::array(vl);
HXLINE( 408)							arr->insert(0,f);
HXLINE( 409)							this->filter = ::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::ui::filters::FilterParser_obj::parseFilter(arr));
            						}
            					}
            					break;
            					case (int)6: {
HXLINE( 410)						::String f = _g->_hx_getString(0);
HXLINE( 411)						this->filter = ::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::ui::filters::FilterParser_obj::parseFilter(::cpp::VirtualArray_obj::__new(1)->init(0,f)));
            					}
            					break;
            					case (int)9: {
HXLINE( 413)						this->filter = null();
            					}
            					break;
            					default:{
            					}
            				}
HXLINE( 405)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-bold",03,d0,d1,42)) ){
HXLINE( 375)				this->fontBold = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 375)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-family",a2,c9,66,81)) ||  (_hx_switch_0==HX_("font-name",c9,c0,b5,4a)) ){
HXLINE( 367)				this->fontName = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 367)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-italic",ee,98,29,9d)) ){
HXLINE( 379)				this->fontItalic = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 379)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-size",3f,ef,09,4e)) ){
HXLINE( 369)				this->fontSize = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 369)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-style",f3,04,ec,01)) ){
HXLINE( 381)				if (::hx::IsNotNull( ::haxe::ui::styles::ValueTools_obj::string(v->value) )) {
HXLINE( 382)					this->fontItalic = (::haxe::ui::styles::ValueTools_obj::string(v->value).toLowerCase() == HX_("italic",f0,2e,64,06));
            				}
HXLINE( 381)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-underline",ce,7d,77,c9)) ){
HXLINE( 377)				this->fontUnderline = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 377)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("font-weight",76,db,6b,98)) ){
HXLINE( 371)				if (::hx::IsNotNull( ::haxe::ui::styles::ValueTools_obj::string(v->value) )) {
HXLINE( 372)					this->fontBold = (::haxe::ui::styles::ValueTools_obj::string(v->value).toLowerCase() == HX_("bold",85,81,1b,41));
            				}
HXLINE( 371)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE( 204)				this->autoHeight = ::haxe::ui::styles::ValueTools_obj::constant(v->value,HX_("auto",6f,df,76,40));
HXLINE( 205)				this->height = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 206)				this->percentHeight = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 203)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("hidden",6a,ff,95,4c)) ){
HXLINE( 393)				this->hidden = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 393)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("horizontal-align",5c,53,a7,93)) ){
HXLINE( 357)				this->horizontalAlign = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 357)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("horizontal-spacing",da,c3,ba,32)) ){
HXLINE( 236)				this->horizontalSpacing = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 236)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("icon",79,e7,b2,45)) ){
HXLINE( 347)				if ((v->value->_hx_getIndex() == 9)) {
HXLINE( 349)					this->icon = null();
            				}
            				else {
HXLINE( 351)					this->icon = ::haxe::ui::styles::ValueTools_obj::variant(v->value);
            				}
HXLINE( 347)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("icon-position",3d,f7,d4,68)) ){
HXLINE( 354)				this->iconPosition = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 354)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("image-rendering",9a,ec,40,53)) ){
HXLINE( 486)				if ((v->value->_hx_getIndex() == 9)) {
HXLINE( 488)					this->imageRendering = null();
            				}
            				else {
HXLINE( 490)					this->imageRendering = ::haxe::ui::styles::ValueTools_obj::string(v->value);
            				}
HXLINE( 486)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("include-in-layout",ad,fb,67,00)) ){
HXLINE( 500)				this->includeInLayout = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 500)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("initial-height",d0,af,f7,6c)) ){
HXLINE( 208)				this->initialHeight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 209)				this->initialPercentHeight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 207)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("initial-width",3d,3e,ce,5d)) ){
HXLINE( 194)				this->initialWidth = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 195)				this->initialPercentWidth = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 193)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("justify-content",fc,4b,f3,1d)) ){
HXLINE( 502)				this->justifyContent = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 502)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("layout",aa,ae,b8,58)) ){
HXLINE( 493)				if ((v->value->_hx_getIndex() == 9)) {
HXLINE( 495)					this->layout = null();
            				}
            				else {
HXLINE( 497)					this->layout = ::haxe::ui::styles::ValueTools_obj::string(v->value);
            				}
HXLINE( 493)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 185)				this->left = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 185)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("margin-bottom",6a,d8,ef,2a)) ){
HXLINE( 233)				this->marginBottom = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 233)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("margin-left",c6,4b,ff,e7)) ){
HXLINE( 229)				this->marginLeft = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 229)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("margin-right",3d,0f,70,8e)) ){
HXLINE( 231)				this->marginRight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 231)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("margin-top",b6,1f,6b,70)) ){
HXLINE( 227)				this->marginTop = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 227)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("max-height",b0,39,65,ee)) ){
HXLINE( 214)				this->maxHeight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 215)				this->maxPercentHeight = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 213)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("max-width",5d,90,68,c3)) ){
HXLINE( 200)				this->maxWidth = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 201)				this->maxPercentWidth = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 199)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("min-height",82,0c,f8,49)) ){
HXLINE( 211)				this->minHeight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 212)				this->minPercentHeight = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 210)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("min-width",cb,7d,25,ed)) ){
HXLINE( 197)				this->minWidth = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 198)				this->minPercentWidth = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 196)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("mode",63,d3,60,48)) ){
HXLINE( 464)				this->mode = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 464)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("native",97,c9,1c,22)) ){
HXLINE( 400)				this->native = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 400)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("opacity",cb,5d,65,eb)) ){
HXLINE( 364)				this->opacity = ::haxe::ui::styles::ValueTools_obj::_hx_float(v->value);
HXDLIN( 364)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("padding-bottom",27,b9,bd,d9)) ){
HXLINE( 224)				this->paddingBottom = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 224)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("padding-left",43,93,ce,ce)) ){
HXLINE( 220)				this->paddingLeft = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 220)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("padding-right",20,55,ff,9c)) ){
HXLINE( 222)				this->paddingRight = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 222)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("padding-top",d9,16,74,71)) ){
HXLINE( 218)				this->paddingTop = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 218)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("pointer-events",e9,af,84,7a)) ){
HXLINE( 466)				if ((v->value->_hx_getIndex() == 9)) {
HXLINE( 468)					this->pointerEvents = HX_("none",b8,12,0a,49);
            				}
            				else {
HXLINE( 470)					this->pointerEvents = ::haxe::ui::styles::ValueTools_obj::string(v->value);
            				}
HXLINE( 466)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("resource",ce,5c,a0,12)) ){
HXLINE( 437)				this->resource = ::haxe::ui::styles::ValueTools_obj::variant(v->value);
HXDLIN( 437)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("text-align",e5,9f,fc,21)) ){
HXLINE( 361)				this->textAlign = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 361)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("text-decoration",10,b8,a7,ac)) ){
HXLINE( 385)				if (::hx::IsNotNull( ::haxe::ui::styles::ValueTools_obj::string(v->value) )) {
HXLINE( 386)					this->fontUnderline = (::haxe::ui::styles::ValueTools_obj::string(v->value).toLowerCase() == HX_("underline",0c,15,d1,87));
HXLINE( 387)					this->fontStrikeThrough = (::haxe::ui::styles::ValueTools_obj::string(v->value).toLowerCase() == HX_("line-through",ac,83,55,d9));
            				}
HXLINE( 385)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 187)				this->top = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 187)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("vertical-align",6e,0c,90,b5)) ){
HXLINE( 359)				this->verticalAlign = ::haxe::ui::styles::ValueTools_obj::string(v->value);
HXDLIN( 359)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("vertical-spacing",6c,65,11,2b)) ){
HXLINE( 238)				this->verticalSpacing = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXDLIN( 238)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE( 190)				this->autoWidth = ::haxe::ui::styles::ValueTools_obj::constant(v->value,HX_("auto",6f,df,76,40));
HXLINE( 191)				this->width = ::haxe::ui::styles::ValueTools_obj::calcDimension(v->value);
HXLINE( 192)				this->percentWidth = ::haxe::ui::styles::ValueTools_obj::percent(v->value);
HXLINE( 189)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("word-wrap",6d,96,5d,93)) ){
HXLINE( 484)				this->wordWrap = ::haxe::ui::styles::ValueTools_obj::_hx_bool(v->value);
HXDLIN( 484)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,mergeDirectives,(void))

void Style_obj::apply( ::haxe::ui::styles::Style s){
            	HX_GC_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_507_apply)
HXLINE( 508)		if (::hx::IsNotNull( s->cursor )) {
HXLINE( 508)			this->cursor = s->cursor;
            		}
HXLINE( 509)		if (::hx::IsNotNull( s->hidden )) {
HXLINE( 509)			this->hidden = s->hidden;
            		}
HXLINE( 511)		if (::hx::IsNotNull( s->left )) {
HXLINE( 511)			this->left = s->left;
            		}
HXLINE( 512)		if (::hx::IsNotNull( s->top )) {
HXLINE( 512)			this->top = s->top;
            		}
HXLINE( 514)		if (::hx::IsNotNull( s->autoWidth )) {
HXLINE( 514)			this->autoWidth = s->autoWidth;
            		}
HXLINE( 515)		if (::hx::IsNotNull( s->autoHeight )) {
HXLINE( 515)			this->autoHeight = s->autoHeight;
            		}
HXLINE( 516)		if (::hx::IsNotNull( s->verticalSpacing )) {
HXLINE( 516)			this->verticalSpacing = s->verticalSpacing;
            		}
HXLINE( 517)		if (::hx::IsNotNull( s->horizontalSpacing )) {
HXLINE( 517)			this->horizontalSpacing = s->horizontalSpacing;
            		}
HXLINE( 519)		if (::hx::IsNotNull( s->width )) {
HXLINE( 520)			this->width = s->width;
HXLINE( 521)			this->autoWidth = false;
            		}
HXLINE( 523)		if (::hx::IsNotNull( s->initialWidth )) {
HXLINE( 523)			this->initialWidth = s->initialWidth;
            		}
HXLINE( 524)		if (::hx::IsNotNull( s->initialPercentWidth )) {
HXLINE( 524)			this->initialPercentWidth = s->initialPercentWidth;
            		}
HXLINE( 525)		if (::hx::IsNotNull( s->minWidth )) {
HXLINE( 525)			this->minWidth = s->minWidth;
            		}
HXLINE( 526)		if (::hx::IsNotNull( s->minPercentWidth )) {
HXLINE( 526)			this->minPercentWidth = s->minPercentWidth;
            		}
HXLINE( 527)		if (::hx::IsNotNull( s->maxWidth )) {
HXLINE( 527)			this->maxWidth = s->maxWidth;
            		}
HXLINE( 528)		if (::hx::IsNotNull( s->maxPercentWidth )) {
HXLINE( 528)			this->maxPercentWidth = s->maxPercentWidth;
            		}
HXLINE( 530)		if (::hx::IsNotNull( s->height )) {
HXLINE( 531)			this->height = s->height;
HXLINE( 532)			this->autoHeight = false;
            		}
HXLINE( 534)		if (::hx::IsNotNull( s->initialHeight )) {
HXLINE( 534)			this->initialHeight = s->initialHeight;
            		}
HXLINE( 535)		if (::hx::IsNotNull( s->initialPercentHeight )) {
HXLINE( 535)			this->initialPercentHeight = s->initialPercentHeight;
            		}
HXLINE( 536)		if (::hx::IsNotNull( s->minHeight )) {
HXLINE( 536)			this->minHeight = s->minHeight;
            		}
HXLINE( 537)		if (::hx::IsNotNull( s->minPercentHeight )) {
HXLINE( 537)			this->minPercentHeight = s->minPercentHeight;
            		}
HXLINE( 538)		if (::hx::IsNotNull( s->maxHeight )) {
HXLINE( 538)			this->maxHeight = s->maxHeight;
            		}
HXLINE( 539)		if (::hx::IsNotNull( s->maxPercentHeight )) {
HXLINE( 539)			this->maxPercentHeight = s->maxPercentHeight;
            		}
HXLINE( 541)		if (::hx::IsNotNull( s->percentWidth )) {
HXLINE( 542)			this->percentWidth = s->percentWidth;
HXLINE( 543)			this->autoWidth = false;
            		}
HXLINE( 545)		if (::hx::IsNotNull( s->percentHeight )) {
HXLINE( 546)			this->percentHeight = s->percentHeight;
HXLINE( 547)			this->autoHeight = false;
            		}
HXLINE( 550)		if (::hx::IsNotNull( s->paddingTop )) {
HXLINE( 550)			this->paddingTop = s->paddingTop;
            		}
HXLINE( 551)		if (::hx::IsNotNull( s->paddingLeft )) {
HXLINE( 551)			this->paddingLeft = s->paddingLeft;
            		}
HXLINE( 552)		if (::hx::IsNotNull( s->paddingRight )) {
HXLINE( 552)			this->paddingRight = s->paddingRight;
            		}
HXLINE( 553)		if (::hx::IsNotNull( s->paddingBottom )) {
HXLINE( 553)			this->paddingBottom = s->paddingBottom;
            		}
HXLINE( 555)		if (::hx::IsNotNull( s->marginTop )) {
HXLINE( 555)			this->marginTop = s->marginTop;
            		}
HXLINE( 556)		if (::hx::IsNotNull( s->marginLeft )) {
HXLINE( 556)			this->marginLeft = s->marginLeft;
            		}
HXLINE( 557)		if (::hx::IsNotNull( s->marginRight )) {
HXLINE( 557)			this->marginRight = s->marginRight;
            		}
HXLINE( 558)		if (::hx::IsNotNull( s->marginBottom )) {
HXLINE( 558)			this->marginBottom = s->marginBottom;
            		}
HXLINE( 560)		if (::hx::IsNotNull( s->color )) {
HXLINE( 560)			this->color = s->color;
            		}
HXLINE( 562)		if (::hx::IsNotNull( s->backgroundColor )) {
HXLINE( 563)			this->backgroundColor = s->backgroundColor;
HXLINE( 564)			this->backgroundColorEnd = null();
            		}
HXLINE( 566)		if (::hx::IsNotNull( s->backgroundColorEnd )) {
HXLINE( 566)			this->backgroundColorEnd = s->backgroundColorEnd;
            		}
HXLINE( 567)		if (::hx::IsNotNull( s->backgroundGradientStyle )) {
HXLINE( 567)			this->backgroundGradientStyle = s->backgroundGradientStyle;
            		}
HXLINE( 568)		if (::hx::IsNotNull( s->backgroundOpacity )) {
HXLINE( 568)			this->backgroundOpacity = s->backgroundOpacity;
            		}
HXLINE( 570)		if (::hx::IsNotNull( s->backgroundImage )) {
HXLINE( 570)			this->backgroundImage = s->backgroundImage;
            		}
HXLINE( 571)		if (::hx::IsNotNull( s->backgroundImageRepeat )) {
HXLINE( 571)			this->backgroundImageRepeat = s->backgroundImageRepeat;
            		}
HXLINE( 573)		if (::hx::IsNotNull( s->backgroundImageClipTop )) {
HXLINE( 573)			this->backgroundImageClipTop = s->backgroundImageClipTop;
            		}
HXLINE( 574)		if (::hx::IsNotNull( s->backgroundImageClipLeft )) {
HXLINE( 574)			this->backgroundImageClipLeft = s->backgroundImageClipLeft;
            		}
HXLINE( 575)		if (::hx::IsNotNull( s->backgroundImageClipBottom )) {
HXLINE( 575)			this->backgroundImageClipBottom = s->backgroundImageClipBottom;
            		}
HXLINE( 576)		if (::hx::IsNotNull( s->backgroundImageClipRight )) {
HXLINE( 576)			this->backgroundImageClipRight = s->backgroundImageClipRight;
            		}
HXLINE( 578)		if (::hx::IsNotNull( s->backgroundImageSliceTop )) {
HXLINE( 578)			this->backgroundImageSliceTop = s->backgroundImageSliceTop;
            		}
HXLINE( 579)		if (::hx::IsNotNull( s->backgroundImageSliceLeft )) {
HXLINE( 579)			this->backgroundImageSliceLeft = s->backgroundImageSliceLeft;
            		}
HXLINE( 580)		if (::hx::IsNotNull( s->backgroundImageSliceBottom )) {
HXLINE( 580)			this->backgroundImageSliceBottom = s->backgroundImageSliceBottom;
            		}
HXLINE( 581)		if (::hx::IsNotNull( s->backgroundImageSliceRight )) {
HXLINE( 581)			this->backgroundImageSliceRight = s->backgroundImageSliceRight;
            		}
HXLINE( 583)		if (::hx::IsNotNull( s->borderColor )) {
HXLINE( 583)			this->borderColor = s->borderColor;
            		}
HXLINE( 584)		if (::hx::IsNotNull( s->borderTopColor )) {
HXLINE( 584)			this->borderTopColor = s->borderTopColor;
            		}
HXLINE( 585)		if (::hx::IsNotNull( s->borderLeftColor )) {
HXLINE( 585)			this->borderLeftColor = s->borderLeftColor;
            		}
HXLINE( 586)		if (::hx::IsNotNull( s->borderBottomColor )) {
HXLINE( 586)			this->borderBottomColor = s->borderBottomColor;
            		}
HXLINE( 587)		if (::hx::IsNotNull( s->borderRightColor )) {
HXLINE( 587)			this->borderRightColor = s->borderRightColor;
            		}
HXLINE( 589)		if (::hx::IsNotNull( s->borderSize )) {
HXLINE( 589)			this->borderSize = s->borderSize;
            		}
HXLINE( 590)		if (::hx::IsNotNull( s->borderTopSize )) {
HXLINE( 590)			this->borderTopSize = s->borderTopSize;
            		}
HXLINE( 591)		if (::hx::IsNotNull( s->borderLeftSize )) {
HXLINE( 591)			this->borderLeftSize = s->borderLeftSize;
            		}
HXLINE( 592)		if (::hx::IsNotNull( s->borderBottomSize )) {
HXLINE( 592)			this->borderBottomSize = s->borderBottomSize;
            		}
HXLINE( 593)		if (::hx::IsNotNull( s->borderRightSize )) {
HXLINE( 593)			this->borderRightSize = s->borderRightSize;
            		}
HXLINE( 595)		if (::hx::IsNotNull( s->borderRadius )) {
HXLINE( 595)			this->borderRadius = s->borderRadius;
            		}
HXLINE( 596)		if (::hx::IsNotNull( s->borderRadiusTopLeft )) {
HXLINE( 596)			this->borderRadiusTopLeft = s->borderRadiusTopLeft;
            		}
HXLINE( 597)		if (::hx::IsNotNull( s->borderRadiusTopRight )) {
HXLINE( 597)			this->borderRadiusTopRight = s->borderRadiusTopRight;
            		}
HXLINE( 598)		if (::hx::IsNotNull( s->borderRadiusBottomLeft )) {
HXLINE( 598)			this->borderRadiusBottomLeft = s->borderRadiusBottomLeft;
            		}
HXLINE( 599)		if (::hx::IsNotNull( s->borderRadiusBottomRight )) {
HXLINE( 599)			this->borderRadiusBottomRight = s->borderRadiusBottomRight;
            		}
HXLINE( 600)		if (::hx::IsNotNull( s->borderOpacity )) {
HXLINE( 600)			this->borderOpacity = s->borderOpacity;
            		}
HXLINE( 601)		if (::hx::IsNotNull( s->borderStyle )) {
HXLINE( 601)			this->borderStyle = s->borderStyle;
            		}
HXLINE( 603)		if (::hx::IsNotNull( s->filter )) {
HXLINE( 603)			this->filter = s->filter->copy();
            		}
HXLINE( 604)		if (::hx::IsNotNull( s->backdropFilter )) {
HXLINE( 604)			this->backdropFilter = s->backdropFilter->copy();
            		}
HXLINE( 605)		if (::hx::IsNotNull( s->resource )) {
HXLINE( 605)			this->resource = s->resource;
            		}
HXLINE( 607)		if (::hx::IsNotNull( s->icon )) {
HXLINE( 607)			this->icon = s->icon;
            		}
HXLINE( 608)		if (::hx::IsNotNull( s->iconPosition )) {
HXLINE( 608)			this->iconPosition = s->iconPosition;
            		}
HXLINE( 610)		if (::hx::IsNotNull( s->horizontalAlign )) {
HXLINE( 610)			this->horizontalAlign = s->horizontalAlign;
            		}
HXLINE( 611)		if (::hx::IsNotNull( s->verticalAlign )) {
HXLINE( 611)			this->verticalAlign = s->verticalAlign;
            		}
HXLINE( 612)		if (::hx::IsNotNull( s->textAlign )) {
HXLINE( 612)			this->textAlign = s->textAlign;
            		}
HXLINE( 614)		if (::hx::IsNotNull( s->opacity )) {
HXLINE( 614)			this->opacity = s->opacity;
            		}
HXLINE( 616)		if (::hx::IsNotNull( s->clip )) {
HXLINE( 616)			this->clip = s->clip;
            		}
HXLINE( 617)		if (::hx::IsNotNull( s->native )) {
HXLINE( 617)			this->native = s->native;
            		}
HXLINE( 619)		if (::hx::IsNotNull( s->fontName )) {
HXLINE( 619)			this->fontName = s->fontName;
            		}
HXLINE( 620)		if (::hx::IsNotNull( s->fontSize )) {
HXLINE( 620)			this->fontSize = s->fontSize;
            		}
HXLINE( 621)		if (::hx::IsNotNull( s->fontBold )) {
HXLINE( 621)			this->fontBold = s->fontBold;
            		}
HXLINE( 622)		if (::hx::IsNotNull( s->fontUnderline )) {
HXLINE( 622)			this->fontUnderline = s->fontUnderline;
            		}
HXLINE( 623)		if (::hx::IsNotNull( s->fontStrikeThrough )) {
HXLINE( 623)			this->fontStrikeThrough = s->fontStrikeThrough;
            		}
HXLINE( 624)		if (::hx::IsNotNull( s->fontItalic )) {
HXLINE( 624)			this->fontItalic = s->fontItalic;
            		}
HXLINE( 626)		if (::hx::IsNotNull( s->animationName )) {
HXLINE( 626)			this->animationName = s->animationName;
            		}
HXLINE( 627)		if (::hx::IsNotNull( s->animationOptions )) {
HXLINE( 628)			if (::hx::IsNull( this->animationOptions )) {
HXLINE( 628)				this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            			}
HXLINE( 629)			if (::hx::IsNotNull( s->animationOptions->duration )) {
HXLINE( 629)				this->animationOptions->duration = s->animationOptions->duration;
            			}
HXLINE( 630)			if (::hx::IsNotNull( s->animationOptions->delay )) {
HXLINE( 630)				this->animationOptions->delay = s->animationOptions->delay;
            			}
HXLINE( 631)			if (::hx::IsNotNull( s->animationOptions->iterationCount )) {
HXLINE( 631)				this->animationOptions->iterationCount = s->animationOptions->iterationCount;
            			}
HXLINE( 632)			if (::hx::IsNotNull( s->animationOptions->easingFunction )) {
HXLINE( 632)				this->animationOptions->easingFunction = s->animationOptions->easingFunction;
            			}
HXLINE( 633)			if (::hx::IsNotNull( s->animationOptions->direction )) {
HXLINE( 633)				this->animationOptions->direction = s->animationOptions->direction;
            			}
HXLINE( 634)			if (::hx::IsNotNull( s->animationOptions->fillMode )) {
HXLINE( 634)				this->animationOptions->fillMode = s->animationOptions->fillMode;
            			}
            		}
HXLINE( 637)		if (::hx::IsNotNull( s->mode )) {
HXLINE( 637)			this->mode = s->mode;
            		}
HXLINE( 638)		if (::hx::IsNotNull( s->pointerEvents )) {
HXLINE( 638)			this->pointerEvents = s->pointerEvents;
            		}
HXLINE( 639)		if (::hx::IsNotNull( s->contentType )) {
HXLINE( 639)			this->contentType = s->contentType;
            		}
HXLINE( 640)		if (::hx::IsNotNull( s->direction )) {
HXLINE( 640)			this->direction = s->direction;
            		}
HXLINE( 642)		if (::hx::IsNotNull( s->contentWidth )) {
HXLINE( 642)			this->contentWidth = s->contentWidth;
            		}
HXLINE( 643)		if (::hx::IsNotNull( s->contentWidthPercent )) {
HXLINE( 643)			this->contentWidthPercent = s->contentWidthPercent;
            		}
HXLINE( 644)		if (::hx::IsNotNull( s->contentHeight )) {
HXLINE( 644)			this->contentHeight = s->contentHeight;
            		}
HXLINE( 645)		if (::hx::IsNotNull( s->contentHeightPercent )) {
HXLINE( 645)			this->contentHeightPercent = s->contentHeightPercent;
            		}
HXLINE( 647)		if (::hx::IsNotNull( s->wordWrap )) {
HXLINE( 647)			this->wordWrap = s->wordWrap;
            		}
HXLINE( 648)		if (::hx::IsNotNull( s->imageRendering )) {
HXLINE( 648)			this->imageRendering = s->imageRendering;
            		}
HXLINE( 649)		if (::hx::IsNotNull( s->backgroundWidth )) {
HXLINE( 649)			this->backgroundWidth = s->backgroundWidth;
            		}
HXLINE( 650)		if (::hx::IsNotNull( s->backgroundWidthPercent )) {
HXLINE( 650)			this->backgroundWidthPercent = s->backgroundWidthPercent;
            		}
HXLINE( 651)		if (::hx::IsNotNull( s->backgroundHeight )) {
HXLINE( 651)			this->backgroundHeight = s->backgroundHeight;
            		}
HXLINE( 652)		if (::hx::IsNotNull( s->backgroundHeightPercent )) {
HXLINE( 652)			this->backgroundHeightPercent = s->backgroundHeightPercent;
            		}
HXLINE( 653)		if (::hx::IsNotNull( s->layout )) {
HXLINE( 653)			this->layout = s->layout;
            		}
HXLINE( 654)		if (::hx::IsNotNull( s->includeInLayout )) {
HXLINE( 654)			this->includeInLayout = s->includeInLayout;
            		}
HXLINE( 655)		if (::hx::IsNotNull( s->justifyContent )) {
HXLINE( 655)			this->justifyContent = s->justifyContent;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,apply,(void))

bool Style_obj::equalTo( ::haxe::ui::styles::Style s){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_658_equalTo)
HXLINE( 659)		if (::hx::IsNotEq( s->backgroundColor,this->backgroundColor )) {
HXLINE( 659)			return false;
            		}
HXLINE( 660)		if (::hx::IsNotEq( s->backgroundColorEnd,this->backgroundColorEnd )) {
HXLINE( 660)			return false;
            		}
HXLINE( 661)		if ((s->backgroundGradientStyle != this->backgroundGradientStyle)) {
HXLINE( 661)			return false;
            		}
HXLINE( 662)		if (::hx::IsNotEq( s->backgroundOpacity,this->backgroundOpacity )) {
HXLINE( 662)			return false;
            		}
HXLINE( 664)		if (::hx::IsNotEq( s->borderColor,this->borderColor )) {
HXLINE( 664)			return false;
            		}
HXLINE( 665)		if (::hx::IsNotEq( s->borderTopColor,this->borderTopColor )) {
HXLINE( 665)			return false;
            		}
HXLINE( 666)		if (::hx::IsNotEq( s->borderLeftColor,this->borderLeftColor )) {
HXLINE( 666)			return false;
            		}
HXLINE( 667)		if (::hx::IsNotEq( s->borderBottomColor,this->borderBottomColor )) {
HXLINE( 667)			return false;
            		}
HXLINE( 668)		if (::hx::IsNotEq( s->borderRightColor,this->borderRightColor )) {
HXLINE( 668)			return false;
            		}
HXLINE( 670)		if (::hx::IsNotEq( s->borderSize,this->borderSize )) {
HXLINE( 670)			return false;
            		}
HXLINE( 671)		if (::hx::IsNotEq( s->borderTopSize,this->borderTopSize )) {
HXLINE( 671)			return false;
            		}
HXLINE( 672)		if (::hx::IsNotEq( s->borderLeftSize,this->borderLeftSize )) {
HXLINE( 672)			return false;
            		}
HXLINE( 673)		if (::hx::IsNotEq( s->borderBottomSize,this->borderBottomSize )) {
HXLINE( 673)			return false;
            		}
HXLINE( 674)		if (::hx::IsNotEq( s->borderRightSize,this->borderRightSize )) {
HXLINE( 674)			return false;
            		}
HXLINE( 676)		if (::hx::IsNotEq( s->borderRadius,this->borderRadius )) {
HXLINE( 676)			return false;
            		}
HXLINE( 677)		if (::hx::IsNotEq( s->borderRadiusTopLeft,this->borderRadiusTopLeft )) {
HXLINE( 677)			return false;
            		}
HXLINE( 678)		if (::hx::IsNotEq( s->borderRadiusTopRight,this->borderRadiusTopRight )) {
HXLINE( 678)			return false;
            		}
HXLINE( 679)		if (::hx::IsNotEq( s->borderRadiusBottomLeft,this->borderRadiusBottomLeft )) {
HXLINE( 679)			return false;
            		}
HXLINE( 680)		if (::hx::IsNotEq( s->borderRadiusBottomRight,this->borderRadiusBottomRight )) {
HXLINE( 680)			return false;
            		}
HXLINE( 681)		if (::hx::IsNotEq( s->borderOpacity,this->borderOpacity )) {
HXLINE( 681)			return false;
            		}
HXLINE( 682)		if ((s->borderStyle != this->borderStyle)) {
HXLINE( 682)			return false;
            		}
HXLINE( 684)		if (::hx::IsNotEq( s->color,this->color )) {
HXLINE( 684)			return false;
            		}
HXLINE( 686)		if ((s->cursor != this->cursor)) {
HXLINE( 686)			return false;
            		}
HXLINE( 687)		if (::hx::IsNotEq( s->hidden,this->hidden )) {
HXLINE( 687)			return false;
            		}
HXLINE( 689)		if (::hx::IsNotEq( s->left,this->left )) {
HXLINE( 689)			return false;
            		}
HXLINE( 690)		if (::hx::IsNotEq( s->top,this->top )) {
HXLINE( 690)			return false;
            		}
HXLINE( 692)		if (::hx::IsNotEq( s->autoWidth,this->autoWidth )) {
HXLINE( 692)			return false;
            		}
HXLINE( 693)		if (::hx::IsNotEq( s->autoHeight,this->autoHeight )) {
HXLINE( 693)			return false;
            		}
HXLINE( 694)		if (::hx::IsNotEq( s->verticalSpacing,this->verticalSpacing )) {
HXLINE( 694)			return false;
            		}
HXLINE( 695)		if (::hx::IsNotEq( s->horizontalSpacing,this->horizontalSpacing )) {
HXLINE( 695)			return false;
            		}
HXLINE( 697)		if (::hx::IsNotEq( s->width,this->width )) {
HXLINE( 697)			return false;
            		}
HXLINE( 698)		if (::hx::IsNotEq( s->initialWidth,this->initialWidth )) {
HXLINE( 698)			return false;
            		}
HXLINE( 699)		if (::hx::IsNotEq( s->initialPercentWidth,this->initialPercentWidth )) {
HXLINE( 699)			return false;
            		}
HXLINE( 700)		if (::hx::IsNotEq( s->minWidth,this->minWidth )) {
HXLINE( 700)			return false;
            		}
HXLINE( 701)		if (::hx::IsNotEq( s->minPercentWidth,this->minPercentWidth )) {
HXLINE( 701)			return false;
            		}
HXLINE( 702)		if (::hx::IsNotEq( s->maxWidth,this->maxWidth )) {
HXLINE( 702)			return false;
            		}
HXLINE( 703)		if (::hx::IsNotEq( s->maxPercentWidth,this->maxPercentWidth )) {
HXLINE( 703)			return false;
            		}
HXLINE( 705)		if (::hx::IsNotEq( s->height,this->height )) {
HXLINE( 705)			return false;
            		}
HXLINE( 706)		if (::hx::IsNotEq( s->initialHeight,this->initialHeight )) {
HXLINE( 706)			return false;
            		}
HXLINE( 707)		if (::hx::IsNotEq( s->initialPercentHeight,this->initialPercentHeight )) {
HXLINE( 707)			return false;
            		}
HXLINE( 708)		if (::hx::IsNotEq( s->minHeight,this->minHeight )) {
HXLINE( 708)			return false;
            		}
HXLINE( 709)		if (::hx::IsNotEq( s->minPercentHeight,this->minPercentHeight )) {
HXLINE( 709)			return false;
            		}
HXLINE( 710)		if (::hx::IsNotEq( s->maxHeight,this->maxHeight )) {
HXLINE( 710)			return false;
            		}
HXLINE( 711)		if (::hx::IsNotEq( s->maxPercentHeight,this->maxPercentHeight )) {
HXLINE( 711)			return false;
            		}
HXLINE( 713)		if (::hx::IsNotEq( s->percentWidth,this->percentWidth )) {
HXLINE( 713)			return false;
            		}
HXLINE( 714)		if (::hx::IsNotEq( s->percentHeight,this->percentHeight )) {
HXLINE( 714)			return false;
            		}
HXLINE( 716)		if (::hx::IsNotEq( s->paddingTop,this->paddingTop )) {
HXLINE( 716)			return false;
            		}
HXLINE( 717)		if (::hx::IsNotEq( s->paddingLeft,this->paddingLeft )) {
HXLINE( 717)			return false;
            		}
HXLINE( 718)		if (::hx::IsNotEq( s->paddingRight,this->paddingRight )) {
HXLINE( 718)			return false;
            		}
HXLINE( 719)		if (::hx::IsNotEq( s->paddingBottom,this->paddingBottom )) {
HXLINE( 719)			return false;
            		}
HXLINE( 721)		if (::hx::IsNotEq( s->marginTop,this->marginTop )) {
HXLINE( 721)			return false;
            		}
HXLINE( 722)		if (::hx::IsNotEq( s->marginLeft,this->marginLeft )) {
HXLINE( 722)			return false;
            		}
HXLINE( 723)		if (::hx::IsNotEq( s->marginRight,this->marginRight )) {
HXLINE( 723)			return false;
            		}
HXLINE( 724)		if (::hx::IsNotEq( s->marginBottom,this->marginBottom )) {
HXLINE( 724)			return false;
            		}
HXLINE( 726)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(s->backgroundImage,this->backgroundImage)) {
HXLINE( 726)			return false;
            		}
HXLINE( 727)		if ((s->backgroundImageRepeat != this->backgroundImageRepeat)) {
HXLINE( 727)			return false;
            		}
HXLINE( 729)		if (::hx::IsNotEq( s->backgroundImageClipTop,this->backgroundImageClipTop )) {
HXLINE( 729)			return false;
            		}
HXLINE( 730)		if (::hx::IsNotEq( s->backgroundImageClipLeft,this->backgroundImageClipLeft )) {
HXLINE( 730)			return false;
            		}
HXLINE( 731)		if (::hx::IsNotEq( s->backgroundImageClipBottom,this->backgroundImageClipBottom )) {
HXLINE( 731)			return false;
            		}
HXLINE( 732)		if (::hx::IsNotEq( s->backgroundImageClipRight,this->backgroundImageClipRight )) {
HXLINE( 732)			return false;
            		}
HXLINE( 734)		if (::hx::IsNotEq( s->backgroundImageSliceTop,this->backgroundImageSliceTop )) {
HXLINE( 734)			return false;
            		}
HXLINE( 735)		if (::hx::IsNotEq( s->backgroundImageSliceLeft,this->backgroundImageSliceLeft )) {
HXLINE( 735)			return false;
            		}
HXLINE( 736)		if (::hx::IsNotEq( s->backgroundImageSliceBottom,this->backgroundImageSliceBottom )) {
HXLINE( 736)			return false;
            		}
HXLINE( 737)		if (::hx::IsNotEq( s->backgroundImageSliceRight,this->backgroundImageSliceRight )) {
HXLINE( 737)			return false;
            		}
HXLINE( 739)		if (::hx::IsPointerNotEq( s->filter,this->filter )) {
HXLINE( 739)			return false;
            		}
HXLINE( 740)		if (::hx::IsPointerNotEq( s->backdropFilter,this->backdropFilter )) {
HXLINE( 740)			return false;
            		}
HXLINE( 741)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(s->resource,this->resource)) {
HXLINE( 741)			return false;
            		}
HXLINE( 743)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(s->icon,this->icon)) {
HXLINE( 743)			return false;
            		}
HXLINE( 744)		if ((s->iconPosition != this->iconPosition)) {
HXLINE( 744)			return false;
            		}
HXLINE( 746)		if ((s->horizontalAlign != this->horizontalAlign)) {
HXLINE( 746)			return false;
            		}
HXLINE( 747)		if ((s->verticalAlign != this->verticalAlign)) {
HXLINE( 747)			return false;
            		}
HXLINE( 748)		if ((s->textAlign != this->textAlign)) {
HXLINE( 748)			return false;
            		}
HXLINE( 750)		if (::hx::IsNotEq( s->opacity,this->opacity )) {
HXLINE( 750)			return false;
            		}
HXLINE( 752)		if (::hx::IsNotEq( s->clip,this->clip )) {
HXLINE( 752)			return false;
            		}
HXLINE( 753)		if (::hx::IsNotEq( s->native,this->native )) {
HXLINE( 753)			return false;
            		}
HXLINE( 755)		if ((s->fontName != this->fontName)) {
HXLINE( 755)			return false;
            		}
HXLINE( 756)		if (::hx::IsNotEq( s->fontSize,this->fontSize )) {
HXLINE( 756)			return false;
            		}
HXLINE( 757)		if (::hx::IsNotEq( s->fontBold,this->fontBold )) {
HXLINE( 757)			return false;
            		}
HXLINE( 758)		if (::hx::IsNotEq( s->fontUnderline,this->fontUnderline )) {
HXLINE( 758)			return false;
            		}
HXLINE( 759)		if (::hx::IsNotEq( s->fontStrikeThrough,this->fontStrikeThrough )) {
HXLINE( 759)			return false;
            		}
HXLINE( 760)		if (::hx::IsNotEq( s->fontItalic,this->fontItalic )) {
HXLINE( 760)			return false;
            		}
HXLINE( 762)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(s->resource,this->resource)) {
HXLINE( 762)			return false;
            		}
HXLINE( 763)		if ((s->animationName != this->animationName)) {
HXLINE( 763)			return false;
            		}
HXLINE( 764)		bool _hx_tmp;
HXDLIN( 764)		if (::hx::IsNotNull( this->animationOptions )) {
HXLINE( 764)			_hx_tmp = (this->animationOptions->compareTo(s->animationOptions) == false);
            		}
            		else {
HXLINE( 764)			_hx_tmp = false;
            		}
HXDLIN( 764)		if (_hx_tmp) {
HXLINE( 764)			return false;
            		}
HXLINE( 766)		if ((s->mode != this->mode)) {
HXLINE( 766)			return false;
            		}
HXLINE( 767)		if ((s->pointerEvents != this->pointerEvents)) {
HXLINE( 767)			return false;
            		}
HXLINE( 768)		if ((s->contentType != this->contentType)) {
HXLINE( 768)			return false;
            		}
HXLINE( 769)		if ((s->direction != this->direction)) {
HXLINE( 769)			return false;
            		}
HXLINE( 771)		if (::hx::IsNotEq( s->contentWidth,this->contentWidth )) {
HXLINE( 771)			return false;
            		}
HXLINE( 772)		if (::hx::IsNotEq( s->contentWidthPercent,this->contentWidthPercent )) {
HXLINE( 772)			return false;
            		}
HXLINE( 773)		if (::hx::IsNotEq( s->contentHeight,this->contentHeight )) {
HXLINE( 773)			return false;
            		}
HXLINE( 774)		if (::hx::IsNotEq( s->contentHeightPercent,this->contentHeightPercent )) {
HXLINE( 774)			return false;
            		}
HXLINE( 776)		if (::hx::IsNotEq( s->wordWrap,this->wordWrap )) {
HXLINE( 776)			return false;
            		}
HXLINE( 777)		if ((s->imageRendering != this->imageRendering)) {
HXLINE( 777)			return false;
            		}
HXLINE( 778)		if (::hx::IsNotEq( s->backgroundWidth,this->backgroundWidth )) {
HXLINE( 778)			return false;
            		}
HXLINE( 779)		if (::hx::IsNotEq( s->backgroundWidthPercent,this->backgroundWidthPercent )) {
HXLINE( 779)			return false;
            		}
HXLINE( 780)		if (::hx::IsNotEq( s->backgroundHeight,this->backgroundHeight )) {
HXLINE( 780)			return false;
            		}
HXLINE( 781)		if (::hx::IsNotEq( s->backgroundHeightPercent,this->backgroundHeightPercent )) {
HXLINE( 781)			return false;
            		}
HXLINE( 782)		if ((s->layout != this->layout)) {
HXLINE( 782)			return false;
            		}
HXLINE( 783)		if (::hx::IsNotEq( s->includeInLayout,this->includeInLayout )) {
HXLINE( 783)			return false;
            		}
HXLINE( 784)		if ((s->justifyContent != this->justifyContent)) {
HXLINE( 784)			return false;
            		}
HXLINE( 786)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,equalTo,return )

void Style_obj::createAnimationOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_790_createAnimationOptions)
HXDLIN( 790)		if (::hx::IsNull( this->animationOptions )) {
HXDLIN( 790)			this->animationOptions =  ::haxe::ui::styles::animation::AnimationOptions_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,createAnimationOptions,(void))

 ::haxe::ui::styles::Style Style_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_793_clone)
HXLINE( 794)		 ::haxe::ui::styles::Style c =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 795)		c->apply(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 796)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,clone,return )


::hx::ObjectPtr< Style_obj > Style_obj::__new( ::Dynamic left, ::Dynamic top, ::Dynamic autoWidth, ::Dynamic width, ::Dynamic percentWidth, ::Dynamic minWidth, ::Dynamic minPercentWidth, ::Dynamic maxWidth, ::Dynamic maxPercentWidth, ::Dynamic initialWidth, ::Dynamic initialPercentWidth, ::Dynamic autoHeight, ::Dynamic height, ::Dynamic percentHeight, ::Dynamic minHeight, ::Dynamic minPercentHeight, ::Dynamic maxHeight, ::Dynamic maxPercentHeight, ::Dynamic initialHeight, ::Dynamic initialPercentHeight, ::Dynamic padding, ::Dynamic paddingTop, ::Dynamic paddingLeft, ::Dynamic paddingRight, ::Dynamic paddingBottom, ::Dynamic marginTop, ::Dynamic marginLeft, ::Dynamic marginRight, ::Dynamic marginBottom, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing, ::Dynamic color, ::Dynamic backgroundColor, ::Dynamic backgroundOpacity, ::Dynamic backgroundColorEnd,::String backgroundGradientStyle, ::haxe::ui::util::VariantType backgroundImage,::String backgroundImageRepeat, ::Dynamic backgroundPositionX, ::Dynamic backgroundPositionY, ::Dynamic backgroundImageClipTop, ::Dynamic backgroundImageClipLeft, ::Dynamic backgroundImageClipBottom, ::Dynamic backgroundImageClipRight, ::Dynamic backgroundImageSliceTop, ::Dynamic backgroundImageSliceLeft, ::Dynamic backgroundImageSliceBottom, ::Dynamic backgroundImageSliceRight, ::Dynamic borderColor, ::Dynamic borderTopColor, ::Dynamic borderLeftColor, ::Dynamic borderBottomColor, ::Dynamic borderRightColor, ::Dynamic borderSize, ::Dynamic borderTopSize, ::Dynamic borderLeftSize, ::Dynamic borderBottomSize, ::Dynamic borderRightSize, ::Dynamic borderRadius, ::Dynamic borderRadiusTopLeft, ::Dynamic borderRadiusTopRight, ::Dynamic borderRadiusBottomLeft, ::Dynamic borderRadiusBottomRight, ::Dynamic borderOpacity,::String borderStyle, ::haxe::ui::util::VariantType icon,::String iconPosition,::String horizontalAlign,::String verticalAlign,::String textAlign, ::Dynamic opacity, ::Dynamic clip, ::Dynamic native,::String fontName, ::Dynamic fontSize, ::Dynamic fontBold, ::Dynamic fontUnderline, ::Dynamic fontItalic, ::Dynamic fontStrikeThrough,::String cursor, ::Dynamic hidden,::Array< ::Dynamic> filter,::Array< ::Dynamic> backdropFilter, ::haxe::ui::util::VariantType resource,::String animationName, ::haxe::ui::styles::animation::AnimationOptions animationOptions,::String mode,::String pointerEvents,::String contentType,::String direction, ::Dynamic contentWidth, ::Dynamic contentWidthPercent, ::Dynamic contentHeight, ::Dynamic contentHeightPercent, ::Dynamic wordWrap,::String imageRendering, ::Dynamic backgroundWidth, ::Dynamic backgroundWidthPercent, ::Dynamic backgroundHeight, ::Dynamic backgroundHeightPercent,::String layout, ::Dynamic includeInLayout,::String justifyContent, ::haxe::ui::styles::StyleBorderType borderType, ::Dynamic hasBorder, ::Dynamic fullBorderSize) {
	::hx::ObjectPtr< Style_obj > __this = new Style_obj();
	__this->__construct(left,top,autoWidth,width,percentWidth,minWidth,minPercentWidth,maxWidth,maxPercentWidth,initialWidth,initialPercentWidth,autoHeight,height,percentHeight,minHeight,minPercentHeight,maxHeight,maxPercentHeight,initialHeight,initialPercentHeight,padding,paddingTop,paddingLeft,paddingRight,paddingBottom,marginTop,marginLeft,marginRight,marginBottom,horizontalSpacing,verticalSpacing,color,backgroundColor,backgroundOpacity,backgroundColorEnd,backgroundGradientStyle,backgroundImage,backgroundImageRepeat,backgroundPositionX,backgroundPositionY,backgroundImageClipTop,backgroundImageClipLeft,backgroundImageClipBottom,backgroundImageClipRight,backgroundImageSliceTop,backgroundImageSliceLeft,backgroundImageSliceBottom,backgroundImageSliceRight,borderColor,borderTopColor,borderLeftColor,borderBottomColor,borderRightColor,borderSize,borderTopSize,borderLeftSize,borderBottomSize,borderRightSize,borderRadius,borderRadiusTopLeft,borderRadiusTopRight,borderRadiusBottomLeft,borderRadiusBottomRight,borderOpacity,borderStyle,icon,iconPosition,horizontalAlign,verticalAlign,textAlign,opacity,clip,native,fontName,fontSize,fontBold,fontUnderline,fontItalic,fontStrikeThrough,cursor,hidden,filter,backdropFilter,resource,animationName,animationOptions,mode,pointerEvents,contentType,direction,contentWidth,contentWidthPercent,contentHeight,contentHeightPercent,wordWrap,imageRendering,backgroundWidth,backgroundWidthPercent,backgroundHeight,backgroundHeightPercent,layout,includeInLayout,justifyContent,borderType,hasBorder,fullBorderSize);
	return __this;
}

::hx::ObjectPtr< Style_obj > Style_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic left, ::Dynamic top, ::Dynamic autoWidth, ::Dynamic width, ::Dynamic percentWidth, ::Dynamic minWidth, ::Dynamic minPercentWidth, ::Dynamic maxWidth, ::Dynamic maxPercentWidth, ::Dynamic initialWidth, ::Dynamic initialPercentWidth, ::Dynamic autoHeight, ::Dynamic height, ::Dynamic percentHeight, ::Dynamic minHeight, ::Dynamic minPercentHeight, ::Dynamic maxHeight, ::Dynamic maxPercentHeight, ::Dynamic initialHeight, ::Dynamic initialPercentHeight, ::Dynamic padding, ::Dynamic paddingTop, ::Dynamic paddingLeft, ::Dynamic paddingRight, ::Dynamic paddingBottom, ::Dynamic marginTop, ::Dynamic marginLeft, ::Dynamic marginRight, ::Dynamic marginBottom, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing, ::Dynamic color, ::Dynamic backgroundColor, ::Dynamic backgroundOpacity, ::Dynamic backgroundColorEnd,::String backgroundGradientStyle, ::haxe::ui::util::VariantType backgroundImage,::String backgroundImageRepeat, ::Dynamic backgroundPositionX, ::Dynamic backgroundPositionY, ::Dynamic backgroundImageClipTop, ::Dynamic backgroundImageClipLeft, ::Dynamic backgroundImageClipBottom, ::Dynamic backgroundImageClipRight, ::Dynamic backgroundImageSliceTop, ::Dynamic backgroundImageSliceLeft, ::Dynamic backgroundImageSliceBottom, ::Dynamic backgroundImageSliceRight, ::Dynamic borderColor, ::Dynamic borderTopColor, ::Dynamic borderLeftColor, ::Dynamic borderBottomColor, ::Dynamic borderRightColor, ::Dynamic borderSize, ::Dynamic borderTopSize, ::Dynamic borderLeftSize, ::Dynamic borderBottomSize, ::Dynamic borderRightSize, ::Dynamic borderRadius, ::Dynamic borderRadiusTopLeft, ::Dynamic borderRadiusTopRight, ::Dynamic borderRadiusBottomLeft, ::Dynamic borderRadiusBottomRight, ::Dynamic borderOpacity,::String borderStyle, ::haxe::ui::util::VariantType icon,::String iconPosition,::String horizontalAlign,::String verticalAlign,::String textAlign, ::Dynamic opacity, ::Dynamic clip, ::Dynamic native,::String fontName, ::Dynamic fontSize, ::Dynamic fontBold, ::Dynamic fontUnderline, ::Dynamic fontItalic, ::Dynamic fontStrikeThrough,::String cursor, ::Dynamic hidden,::Array< ::Dynamic> filter,::Array< ::Dynamic> backdropFilter, ::haxe::ui::util::VariantType resource,::String animationName, ::haxe::ui::styles::animation::AnimationOptions animationOptions,::String mode,::String pointerEvents,::String contentType,::String direction, ::Dynamic contentWidth, ::Dynamic contentWidthPercent, ::Dynamic contentHeight, ::Dynamic contentHeightPercent, ::Dynamic wordWrap,::String imageRendering, ::Dynamic backgroundWidth, ::Dynamic backgroundWidthPercent, ::Dynamic backgroundHeight, ::Dynamic backgroundHeightPercent,::String layout, ::Dynamic includeInLayout,::String justifyContent, ::haxe::ui::styles::StyleBorderType borderType, ::Dynamic hasBorder, ::Dynamic fullBorderSize) {
	Style_obj *__this = (Style_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Style_obj), true, "haxe.ui.styles.Style"));
	*(void **)__this = Style_obj::_hx_vtable;
	__this->__construct(left,top,autoWidth,width,percentWidth,minWidth,minPercentWidth,maxWidth,maxPercentWidth,initialWidth,initialPercentWidth,autoHeight,height,percentHeight,minHeight,minPercentHeight,maxHeight,maxPercentHeight,initialHeight,initialPercentHeight,padding,paddingTop,paddingLeft,paddingRight,paddingBottom,marginTop,marginLeft,marginRight,marginBottom,horizontalSpacing,verticalSpacing,color,backgroundColor,backgroundOpacity,backgroundColorEnd,backgroundGradientStyle,backgroundImage,backgroundImageRepeat,backgroundPositionX,backgroundPositionY,backgroundImageClipTop,backgroundImageClipLeft,backgroundImageClipBottom,backgroundImageClipRight,backgroundImageSliceTop,backgroundImageSliceLeft,backgroundImageSliceBottom,backgroundImageSliceRight,borderColor,borderTopColor,borderLeftColor,borderBottomColor,borderRightColor,borderSize,borderTopSize,borderLeftSize,borderBottomSize,borderRightSize,borderRadius,borderRadiusTopLeft,borderRadiusTopRight,borderRadiusBottomLeft,borderRadiusBottomRight,borderOpacity,borderStyle,icon,iconPosition,horizontalAlign,verticalAlign,textAlign,opacity,clip,native,fontName,fontSize,fontBold,fontUnderline,fontItalic,fontStrikeThrough,cursor,hidden,filter,backdropFilter,resource,animationName,animationOptions,mode,pointerEvents,contentType,direction,contentWidth,contentWidthPercent,contentHeight,contentHeightPercent,wordWrap,imageRendering,backgroundWidth,backgroundWidthPercent,backgroundHeight,backgroundHeightPercent,layout,includeInLayout,justifyContent,borderType,hasBorder,fullBorderSize);
	return __this;
}

Style_obj::Style_obj()
{
}

void Style_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Style);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(percentWidth,"percentWidth");
	HX_MARK_MEMBER_NAME(minWidth,"minWidth");
	HX_MARK_MEMBER_NAME(minPercentWidth,"minPercentWidth");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxPercentWidth,"maxPercentWidth");
	HX_MARK_MEMBER_NAME(initialWidth,"initialWidth");
	HX_MARK_MEMBER_NAME(initialPercentWidth,"initialPercentWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(percentHeight,"percentHeight");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(minPercentHeight,"minPercentHeight");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(maxPercentHeight,"maxPercentHeight");
	HX_MARK_MEMBER_NAME(initialHeight,"initialHeight");
	HX_MARK_MEMBER_NAME(initialPercentHeight,"initialPercentHeight");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(marginTop,"marginTop");
	HX_MARK_MEMBER_NAME(marginLeft,"marginLeft");
	HX_MARK_MEMBER_NAME(marginRight,"marginRight");
	HX_MARK_MEMBER_NAME(marginBottom,"marginBottom");
	HX_MARK_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_MARK_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundOpacity,"backgroundOpacity");
	HX_MARK_MEMBER_NAME(backgroundColorEnd,"backgroundColorEnd");
	HX_MARK_MEMBER_NAME(backgroundGradientStyle,"backgroundGradientStyle");
	HX_MARK_MEMBER_NAME(backgroundImage,"backgroundImage");
	HX_MARK_MEMBER_NAME(backgroundImageRepeat,"backgroundImageRepeat");
	HX_MARK_MEMBER_NAME(backgroundPositionX,"backgroundPositionX");
	HX_MARK_MEMBER_NAME(backgroundPositionY,"backgroundPositionY");
	HX_MARK_MEMBER_NAME(backgroundImageClipTop,"backgroundImageClipTop");
	HX_MARK_MEMBER_NAME(backgroundImageClipLeft,"backgroundImageClipLeft");
	HX_MARK_MEMBER_NAME(backgroundImageClipBottom,"backgroundImageClipBottom");
	HX_MARK_MEMBER_NAME(backgroundImageClipRight,"backgroundImageClipRight");
	HX_MARK_MEMBER_NAME(backgroundImageSliceTop,"backgroundImageSliceTop");
	HX_MARK_MEMBER_NAME(backgroundImageSliceLeft,"backgroundImageSliceLeft");
	HX_MARK_MEMBER_NAME(backgroundImageSliceBottom,"backgroundImageSliceBottom");
	HX_MARK_MEMBER_NAME(backgroundImageSliceRight,"backgroundImageSliceRight");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderTopColor,"borderTopColor");
	HX_MARK_MEMBER_NAME(borderLeftColor,"borderLeftColor");
	HX_MARK_MEMBER_NAME(borderBottomColor,"borderBottomColor");
	HX_MARK_MEMBER_NAME(borderRightColor,"borderRightColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderTopSize,"borderTopSize");
	HX_MARK_MEMBER_NAME(borderLeftSize,"borderLeftSize");
	HX_MARK_MEMBER_NAME(borderBottomSize,"borderBottomSize");
	HX_MARK_MEMBER_NAME(borderRightSize,"borderRightSize");
	HX_MARK_MEMBER_NAME(borderRadius,"borderRadius");
	HX_MARK_MEMBER_NAME(borderRadiusTopLeft,"borderRadiusTopLeft");
	HX_MARK_MEMBER_NAME(borderRadiusTopRight,"borderRadiusTopRight");
	HX_MARK_MEMBER_NAME(borderRadiusBottomLeft,"borderRadiusBottomLeft");
	HX_MARK_MEMBER_NAME(borderRadiusBottomRight,"borderRadiusBottomRight");
	HX_MARK_MEMBER_NAME(borderOpacity,"borderOpacity");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	HX_MARK_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_MARK_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_MARK_MEMBER_NAME(textAlign,"textAlign");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(native,"native");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontSize,"fontSize");
	HX_MARK_MEMBER_NAME(fontBold,"fontBold");
	HX_MARK_MEMBER_NAME(fontUnderline,"fontUnderline");
	HX_MARK_MEMBER_NAME(fontItalic,"fontItalic");
	HX_MARK_MEMBER_NAME(fontStrikeThrough,"fontStrikeThrough");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(backdropFilter,"backdropFilter");
	HX_MARK_MEMBER_NAME(resource,"resource");
	HX_MARK_MEMBER_NAME(animationName,"animationName");
	HX_MARK_MEMBER_NAME(animationOptions,"animationOptions");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(pointerEvents,"pointerEvents");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(contentWidth,"contentWidth");
	HX_MARK_MEMBER_NAME(contentWidthPercent,"contentWidthPercent");
	HX_MARK_MEMBER_NAME(contentHeight,"contentHeight");
	HX_MARK_MEMBER_NAME(contentHeightPercent,"contentHeightPercent");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(imageRendering,"imageRendering");
	HX_MARK_MEMBER_NAME(backgroundWidth,"backgroundWidth");
	HX_MARK_MEMBER_NAME(backgroundWidthPercent,"backgroundWidthPercent");
	HX_MARK_MEMBER_NAME(backgroundHeight,"backgroundHeight");
	HX_MARK_MEMBER_NAME(backgroundHeightPercent,"backgroundHeightPercent");
	HX_MARK_MEMBER_NAME(layout,"layout");
	HX_MARK_MEMBER_NAME(includeInLayout,"includeInLayout");
	HX_MARK_MEMBER_NAME(justifyContent,"justifyContent");
	HX_MARK_MEMBER_NAME(borderType,"borderType");
	HX_MARK_MEMBER_NAME(hasBorder,"hasBorder");
	HX_MARK_MEMBER_NAME(fullBorderSize,"fullBorderSize");
	HX_MARK_END_CLASS();
}

void Style_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(percentWidth,"percentWidth");
	HX_VISIT_MEMBER_NAME(minWidth,"minWidth");
	HX_VISIT_MEMBER_NAME(minPercentWidth,"minPercentWidth");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxPercentWidth,"maxPercentWidth");
	HX_VISIT_MEMBER_NAME(initialWidth,"initialWidth");
	HX_VISIT_MEMBER_NAME(initialPercentWidth,"initialPercentWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(percentHeight,"percentHeight");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(minPercentHeight,"minPercentHeight");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(maxPercentHeight,"maxPercentHeight");
	HX_VISIT_MEMBER_NAME(initialHeight,"initialHeight");
	HX_VISIT_MEMBER_NAME(initialPercentHeight,"initialPercentHeight");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(marginTop,"marginTop");
	HX_VISIT_MEMBER_NAME(marginLeft,"marginLeft");
	HX_VISIT_MEMBER_NAME(marginRight,"marginRight");
	HX_VISIT_MEMBER_NAME(marginBottom,"marginBottom");
	HX_VISIT_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_VISIT_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundOpacity,"backgroundOpacity");
	HX_VISIT_MEMBER_NAME(backgroundColorEnd,"backgroundColorEnd");
	HX_VISIT_MEMBER_NAME(backgroundGradientStyle,"backgroundGradientStyle");
	HX_VISIT_MEMBER_NAME(backgroundImage,"backgroundImage");
	HX_VISIT_MEMBER_NAME(backgroundImageRepeat,"backgroundImageRepeat");
	HX_VISIT_MEMBER_NAME(backgroundPositionX,"backgroundPositionX");
	HX_VISIT_MEMBER_NAME(backgroundPositionY,"backgroundPositionY");
	HX_VISIT_MEMBER_NAME(backgroundImageClipTop,"backgroundImageClipTop");
	HX_VISIT_MEMBER_NAME(backgroundImageClipLeft,"backgroundImageClipLeft");
	HX_VISIT_MEMBER_NAME(backgroundImageClipBottom,"backgroundImageClipBottom");
	HX_VISIT_MEMBER_NAME(backgroundImageClipRight,"backgroundImageClipRight");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceTop,"backgroundImageSliceTop");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceLeft,"backgroundImageSliceLeft");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceBottom,"backgroundImageSliceBottom");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceRight,"backgroundImageSliceRight");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderTopColor,"borderTopColor");
	HX_VISIT_MEMBER_NAME(borderLeftColor,"borderLeftColor");
	HX_VISIT_MEMBER_NAME(borderBottomColor,"borderBottomColor");
	HX_VISIT_MEMBER_NAME(borderRightColor,"borderRightColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderTopSize,"borderTopSize");
	HX_VISIT_MEMBER_NAME(borderLeftSize,"borderLeftSize");
	HX_VISIT_MEMBER_NAME(borderBottomSize,"borderBottomSize");
	HX_VISIT_MEMBER_NAME(borderRightSize,"borderRightSize");
	HX_VISIT_MEMBER_NAME(borderRadius,"borderRadius");
	HX_VISIT_MEMBER_NAME(borderRadiusTopLeft,"borderRadiusTopLeft");
	HX_VISIT_MEMBER_NAME(borderRadiusTopRight,"borderRadiusTopRight");
	HX_VISIT_MEMBER_NAME(borderRadiusBottomLeft,"borderRadiusBottomLeft");
	HX_VISIT_MEMBER_NAME(borderRadiusBottomRight,"borderRadiusBottomRight");
	HX_VISIT_MEMBER_NAME(borderOpacity,"borderOpacity");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	HX_VISIT_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_VISIT_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_VISIT_MEMBER_NAME(textAlign,"textAlign");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(native,"native");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontSize,"fontSize");
	HX_VISIT_MEMBER_NAME(fontBold,"fontBold");
	HX_VISIT_MEMBER_NAME(fontUnderline,"fontUnderline");
	HX_VISIT_MEMBER_NAME(fontItalic,"fontItalic");
	HX_VISIT_MEMBER_NAME(fontStrikeThrough,"fontStrikeThrough");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(backdropFilter,"backdropFilter");
	HX_VISIT_MEMBER_NAME(resource,"resource");
	HX_VISIT_MEMBER_NAME(animationName,"animationName");
	HX_VISIT_MEMBER_NAME(animationOptions,"animationOptions");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(pointerEvents,"pointerEvents");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(contentWidth,"contentWidth");
	HX_VISIT_MEMBER_NAME(contentWidthPercent,"contentWidthPercent");
	HX_VISIT_MEMBER_NAME(contentHeight,"contentHeight");
	HX_VISIT_MEMBER_NAME(contentHeightPercent,"contentHeightPercent");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(imageRendering,"imageRendering");
	HX_VISIT_MEMBER_NAME(backgroundWidth,"backgroundWidth");
	HX_VISIT_MEMBER_NAME(backgroundWidthPercent,"backgroundWidthPercent");
	HX_VISIT_MEMBER_NAME(backgroundHeight,"backgroundHeight");
	HX_VISIT_MEMBER_NAME(backgroundHeightPercent,"backgroundHeightPercent");
	HX_VISIT_MEMBER_NAME(layout,"layout");
	HX_VISIT_MEMBER_NAME(includeInLayout,"includeInLayout");
	HX_VISIT_MEMBER_NAME(justifyContent,"justifyContent");
	HX_VISIT_MEMBER_NAME(borderType,"borderType");
	HX_VISIT_MEMBER_NAME(hasBorder,"hasBorder");
	HX_VISIT_MEMBER_NAME(fullBorderSize,"fullBorderSize");
}

::hx::Val Style_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return ::hx::Val( top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon ); }
		if (HX_FIELD_EQ(inName,"clip") ) { return ::hx::Val( clip ); }
		if (HX_FIELD_EQ(inName,"mode") ) { return ::hx::Val( mode ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"native") ) { return ::hx::Val( native ); }
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { return ::hx::Val( hidden ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"layout") ) { return ::hx::Val( layout ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return ::hx::Val( padding ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { return ::hx::Val( opacity ); }
		if (HX_FIELD_EQ(inName,"equalTo") ) { return ::hx::Val( equalTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { return ::hx::Val( minWidth ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return ::hx::Val( fontName ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return ::hx::Val( fontSize ); }
		if (HX_FIELD_EQ(inName,"fontBold") ) { return ::hx::Val( fontBold ); }
		if (HX_FIELD_EQ(inName,"resource") ) { return ::hx::Val( resource ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return ::hx::Val( autoWidth ); }
		if (HX_FIELD_EQ(inName,"minHeight") ) { return ::hx::Val( minHeight ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( maxHeight ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { return ::hx::Val( marginTop ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return ::hx::Val( textAlign ); }
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		if (HX_FIELD_EQ(inName,"hasBorder") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasBorder() : hasBorder ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return ::hx::Val( autoHeight ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return ::hx::Val( paddingTop ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { return ::hx::Val( marginLeft ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( borderSize ); }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { return ::hx::Val( fontItalic ); }
		if (HX_FIELD_EQ(inName,"borderType") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_borderType() : borderType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return ::hx::Val( paddingLeft ); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return ::hx::Val( set_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { return ::hx::Val( marginRight ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return ::hx::Val( borderStyle ); }
		if (HX_FIELD_EQ(inName,"contentType") ) { return ::hx::Val( contentType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return ::hx::Val( percentWidth ); }
		if (HX_FIELD_EQ(inName,"initialWidth") ) { return ::hx::Val( initialWidth ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return ::hx::Val( paddingRight ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { return ::hx::Val( marginBottom ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { return ::hx::Val( borderRadius ); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return ::hx::Val( iconPosition ); }
		if (HX_FIELD_EQ(inName,"contentWidth") ) { return ::hx::Val( contentWidth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return ::hx::Val( percentHeight ); }
		if (HX_FIELD_EQ(inName,"initialHeight") ) { return ::hx::Val( initialHeight ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return ::hx::Val( paddingBottom ); }
		if (HX_FIELD_EQ(inName,"borderTopSize") ) { return ::hx::Val( borderTopSize ); }
		if (HX_FIELD_EQ(inName,"borderOpacity") ) { return ::hx::Val( borderOpacity ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return ::hx::Val( verticalAlign ); }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { return ::hx::Val( fontUnderline ); }
		if (HX_FIELD_EQ(inName,"animationName") ) { return ::hx::Val( animationName ); }
		if (HX_FIELD_EQ(inName,"pointerEvents") ) { return ::hx::Val( pointerEvents ); }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { return ::hx::Val( contentHeight ); }
		if (HX_FIELD_EQ(inName,"get_hasBorder") ) { return ::hx::Val( get_hasBorder_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"borderTopColor") ) { return ::hx::Val( borderTopColor ); }
		if (HX_FIELD_EQ(inName,"borderLeftSize") ) { return ::hx::Val( borderLeftSize ); }
		if (HX_FIELD_EQ(inName,"backdropFilter") ) { return ::hx::Val( backdropFilter ); }
		if (HX_FIELD_EQ(inName,"imageRendering") ) { return ::hx::Val( imageRendering ); }
		if (HX_FIELD_EQ(inName,"justifyContent") ) { return ::hx::Val( justifyContent ); }
		if (HX_FIELD_EQ(inName,"get_borderType") ) { return ::hx::Val( get_borderType_dyn() ); }
		if (HX_FIELD_EQ(inName,"fullBorderSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_fullBorderSize() : fullBorderSize ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minPercentWidth") ) { return ::hx::Val( minPercentWidth ); }
		if (HX_FIELD_EQ(inName,"maxPercentWidth") ) { return ::hx::Val( maxPercentWidth ); }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { return ::hx::Val( verticalSpacing ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { return ::hx::Val( backgroundImage ); }
		if (HX_FIELD_EQ(inName,"borderLeftColor") ) { return ::hx::Val( borderLeftColor ); }
		if (HX_FIELD_EQ(inName,"borderRightSize") ) { return ::hx::Val( borderRightSize ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return ::hx::Val( horizontalAlign ); }
		if (HX_FIELD_EQ(inName,"backgroundWidth") ) { return ::hx::Val( backgroundWidth ); }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { return ::hx::Val( includeInLayout ); }
		if (HX_FIELD_EQ(inName,"mergeDirectives") ) { return ::hx::Val( mergeDirectives_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"minPercentHeight") ) { return ::hx::Val( minPercentHeight ); }
		if (HX_FIELD_EQ(inName,"maxPercentHeight") ) { return ::hx::Val( maxPercentHeight ); }
		if (HX_FIELD_EQ(inName,"borderRightColor") ) { return ::hx::Val( borderRightColor ); }
		if (HX_FIELD_EQ(inName,"borderBottomSize") ) { return ::hx::Val( borderBottomSize ); }
		if (HX_FIELD_EQ(inName,"animationOptions") ) { return ::hx::Val( animationOptions ); }
		if (HX_FIELD_EQ(inName,"backgroundHeight") ) { return ::hx::Val( backgroundHeight ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { return ::hx::Val( horizontalSpacing ); }
		if (HX_FIELD_EQ(inName,"backgroundOpacity") ) { return ::hx::Val( backgroundOpacity ); }
		if (HX_FIELD_EQ(inName,"borderBottomColor") ) { return ::hx::Val( borderBottomColor ); }
		if (HX_FIELD_EQ(inName,"fontStrikeThrough") ) { return ::hx::Val( fontStrikeThrough ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { return ::hx::Val( backgroundColorEnd ); }
		if (HX_FIELD_EQ(inName,"get_fullBorderSize") ) { return ::hx::Val( get_fullBorderSize_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initialPercentWidth") ) { return ::hx::Val( initialPercentWidth ); }
		if (HX_FIELD_EQ(inName,"backgroundPositionX") ) { return ::hx::Val( backgroundPositionX ); }
		if (HX_FIELD_EQ(inName,"backgroundPositionY") ) { return ::hx::Val( backgroundPositionY ); }
		if (HX_FIELD_EQ(inName,"borderRadiusTopLeft") ) { return ::hx::Val( borderRadiusTopLeft ); }
		if (HX_FIELD_EQ(inName,"contentWidthPercent") ) { return ::hx::Val( contentWidthPercent ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initialPercentHeight") ) { return ::hx::Val( initialPercentHeight ); }
		if (HX_FIELD_EQ(inName,"borderRadiusTopRight") ) { return ::hx::Val( borderRadiusTopRight ); }
		if (HX_FIELD_EQ(inName,"contentHeightPercent") ) { return ::hx::Val( contentHeightPercent ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"backgroundImageRepeat") ) { return ::hx::Val( backgroundImageRepeat ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backgroundImageClipTop") ) { return ::hx::Val( backgroundImageClipTop ); }
		if (HX_FIELD_EQ(inName,"borderRadiusBottomLeft") ) { return ::hx::Val( borderRadiusBottomLeft ); }
		if (HX_FIELD_EQ(inName,"backgroundWidthPercent") ) { return ::hx::Val( backgroundWidthPercent ); }
		if (HX_FIELD_EQ(inName,"createAnimationOptions") ) { return ::hx::Val( createAnimationOptions_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"backgroundGradientStyle") ) { return ::hx::Val( backgroundGradientStyle ); }
		if (HX_FIELD_EQ(inName,"backgroundImageClipLeft") ) { return ::hx::Val( backgroundImageClipLeft ); }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceTop") ) { return ::hx::Val( backgroundImageSliceTop ); }
		if (HX_FIELD_EQ(inName,"borderRadiusBottomRight") ) { return ::hx::Val( borderRadiusBottomRight ); }
		if (HX_FIELD_EQ(inName,"backgroundHeightPercent") ) { return ::hx::Val( backgroundHeightPercent ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"backgroundImageClipRight") ) { return ::hx::Val( backgroundImageClipRight ); }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceLeft") ) { return ::hx::Val( backgroundImageSliceLeft ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"backgroundImageClipBottom") ) { return ::hx::Val( backgroundImageClipBottom ); }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceRight") ) { return ::hx::Val( backgroundImageSliceRight ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundImageSliceBottom") ) { return ::hx::Val( backgroundImageSliceBottom ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Style_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { clip=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native") ) { native=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_padding(inValue.Cast<  ::Dynamic >()) );padding=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { minWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontSize") ) { fontSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontBold") ) { fontBold=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resource") ) { resource=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minHeight") ) { minHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginTop") ) { marginTop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { textAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasBorder") ) { hasBorder=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { marginLeft=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { borderSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { fontItalic=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderType") ) { borderType=inValue.Cast<  ::haxe::ui::styles::StyleBorderType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginRight") ) { marginRight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { borderStyle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialWidth") ) { initialWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { marginBottom=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { borderRadius=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentWidth") ) { contentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"percentHeight") ) { percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialHeight") ) { initialHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderTopSize") ) { borderTopSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderOpacity") ) { borderOpacity=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { verticalAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { fontUnderline=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationName") ) { animationName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointerEvents") ) { pointerEvents=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { contentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"borderTopColor") ) { borderTopColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderLeftSize") ) { borderLeftSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backdropFilter") ) { backdropFilter=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageRendering") ) { imageRendering=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"justifyContent") ) { justifyContent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullBorderSize") ) { fullBorderSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minPercentWidth") ) { minPercentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxPercentWidth") ) { maxPercentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { verticalSpacing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { backgroundImage=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderLeftColor") ) { borderLeftColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRightSize") ) { borderRightSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { horizontalAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundWidth") ) { backgroundWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { includeInLayout=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"minPercentHeight") ) { minPercentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxPercentHeight") ) { maxPercentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRightColor") ) { borderRightColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderBottomSize") ) { borderBottomSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationOptions") ) { animationOptions=inValue.Cast<  ::haxe::ui::styles::animation::AnimationOptions >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundHeight") ) { backgroundHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { horizontalSpacing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundOpacity") ) { backgroundOpacity=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderBottomColor") ) { borderBottomColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontStrikeThrough") ) { fontStrikeThrough=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { backgroundColorEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initialPercentWidth") ) { initialPercentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundPositionX") ) { backgroundPositionX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundPositionY") ) { backgroundPositionY=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRadiusTopLeft") ) { borderRadiusTopLeft=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentWidthPercent") ) { contentWidthPercent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initialPercentHeight") ) { initialPercentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRadiusTopRight") ) { borderRadiusTopRight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentHeightPercent") ) { contentHeightPercent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"backgroundImageRepeat") ) { backgroundImageRepeat=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backgroundImageClipTop") ) { backgroundImageClipTop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRadiusBottomLeft") ) { borderRadiusBottomLeft=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundWidthPercent") ) { backgroundWidthPercent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"backgroundGradientStyle") ) { backgroundGradientStyle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageClipLeft") ) { backgroundImageClipLeft=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceTop") ) { backgroundImageSliceTop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRadiusBottomRight") ) { borderRadiusBottomRight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundHeightPercent") ) { backgroundHeightPercent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"backgroundImageClipRight") ) { backgroundImageClipRight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceLeft") ) { backgroundImageSliceLeft=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"backgroundImageClipBottom") ) { backgroundImageClipBottom=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceRight") ) { backgroundImageSliceRight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundImageSliceBottom") ) { backgroundImageSliceBottom=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Style_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("autoWidth",17,f4,6d,a8));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("percentWidth",01,51,1b,fe));
	outFields->push(HX_("minWidth",14,23,9a,c1));
	outFields->push(HX_("minPercentWidth",b3,c1,1d,07));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxPercentWidth",c5,0d,38,ab));
	outFields->push(HX_("initialWidth",e2,b6,72,8e));
	outFields->push(HX_("initialPercentWidth",a5,63,65,03));
	outFields->push(HX_("autoHeight",b6,18,17,6e));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("percentHeight",8c,08,1b,10));
	outFields->push(HX_("minHeight",19,07,94,5b));
	outFields->push(HX_("minPercentHeight",9a,33,3b,e9));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("maxPercentHeight",48,77,23,dc));
	outFields->push(HX_("initialHeight",8b,c7,3c,cc));
	outFields->push(HX_("initialPercentHeight",68,45,a1,ab));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("marginTop",07,7f,40,ee));
	outFields->push(HX_("marginLeft",55,53,dd,84));
	outFields->push(HX_("marginRight",ce,a4,d8,33));
	outFields->push(HX_("marginBottom",b9,21,0a,41));
	outFields->push(HX_("horizontalSpacing",ff,82,ed,70));
	outFields->push(HX_("verticalSpacing",ad,b9,a6,fa));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundOpacity",7d,6b,a7,64));
	outFields->push(HX_("backgroundColorEnd",46,f8,6e,2a));
	outFields->push(HX_("backgroundGradientStyle",53,34,9a,0d));
	outFields->push(HX_("backgroundImage",8d,fc,53,80));
	outFields->push(HX_("backgroundImageRepeat",c8,6f,dc,43));
	outFields->push(HX_("backgroundPositionX",c1,51,78,a8));
	outFields->push(HX_("backgroundPositionY",c2,51,78,a8));
	outFields->push(HX_("backgroundImageClipTop",98,58,30,79));
	outFields->push(HX_("backgroundImageClipLeft",a4,d8,cb,8b));
	outFields->push(HX_("backgroundImageClipBottom",c8,d8,9f,c4));
	outFields->push(HX_("backgroundImageClipRight",9f,c4,9e,3d));
	outFields->push(HX_("backgroundImageSliceTop",10,e7,36,b3));
	outFields->push(HX_("backgroundImageSliceLeft",2c,f3,81,17));
	outFields->push(HX_("backgroundImageSliceBottom",50,a5,f7,3d));
	outFields->push(HX_("backgroundImageSliceRight",17,e1,3f,f1));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderTopColor",9a,53,b1,a1));
	outFields->push(HX_("borderLeftColor",50,f5,f1,a9));
	outFields->push(HX_("borderBottomColor",ec,e0,49,43));
	outFields->push(HX_("borderRightColor",f3,87,4e,61));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderTopSize",6a,32,3e,22));
	outFields->push(HX_("borderLeftSize",74,b9,d3,5c));
	outFields->push(HX_("borderBottomSize",58,35,68,45));
	outFields->push(HX_("borderRightSize",31,8c,cf,01));
	outFields->push(HX_("borderRadius",5e,0a,30,0e));
	outFields->push(HX_("borderRadiusTopLeft",7e,4e,dd,c6));
	outFields->push(HX_("borderRadiusTopRight",85,6d,d4,b1));
	outFields->push(HX_("borderRadiusBottomLeft",90,5c,54,cf));
	outFields->push(HX_("borderRadiusBottomRight",33,af,89,11));
	outFields->push(HX_("borderOpacity",3f,ee,3e,20));
	outFields->push(HX_("borderStyle",a5,70,96,10));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("iconPosition",42,e5,38,76));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	outFields->push(HX_("textAlign",d8,e6,7e,ba));
	outFields->push(HX_("opacity",cb,5d,65,eb));
	outFields->push(HX_("clip",d0,6e,c2,41));
	outFields->push(HX_("native",97,c9,1c,22));
	outFields->push(HX_("fontName",ba,8f,7d,cb));
	outFields->push(HX_("fontSize",30,be,d1,ce));
	outFields->push(HX_("fontBold",f4,9e,99,c3));
	outFields->push(HX_("fontUnderline",3d,e5,a6,f7));
	outFields->push(HX_("fontItalic",1f,c6,b7,ba));
	outFields->push(HX_("fontStrikeThrough",e4,90,c9,52));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("hidden",6a,ff,95,4c));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("backdropFilter",2e,4a,ec,02));
	outFields->push(HX_("resource",ce,5c,a0,12));
	outFields->push(HX_("animationName",6f,5f,4b,3b));
	outFields->push(HX_("animationOptions",ba,14,f0,ed));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("pointerEvents",b6,2f,49,f7));
	outFields->push(HX_("contentType",93,3c,7b,2a));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("contentWidth",0d,0a,f1,b0));
	outFields->push(HX_("contentWidthPercent",38,d4,5f,e5));
	outFields->push(HX_("contentHeight",00,3a,47,d8));
	outFields->push(HX_("contentHeightPercent",a5,d8,9f,82));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("imageRendering",71,58,ba,9b));
	outFields->push(HX_("backgroundWidth",38,93,4d,8d));
	outFields->push(HX_("backgroundWidthPercent",6d,96,0f,27));
	outFields->push(HX_("backgroundHeight",75,b6,e2,cc));
	outFields->push(HX_("backgroundHeightPercent",d0,04,ba,ba));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("includeInLayout",b7,1a,c6,6e));
	outFields->push(HX_("justifyContent",c9,5f,e0,44));
	outFields->push(HX_("borderType",c6,51,a3,07));
	outFields->push(HX_("hasBorder",e6,ff,02,a5));
	outFields->push(HX_("fullBorderSize",3c,16,3f,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Style_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,top),HX_("top",95,66,58,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,autoWidth),HX_("autoWidth",17,f4,6d,a8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,percentWidth),HX_("percentWidth",01,51,1b,fe)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,minWidth),HX_("minWidth",14,23,9a,c1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,minPercentWidth),HX_("minPercentWidth",b3,c1,1d,07)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,maxPercentWidth),HX_("maxPercentWidth",c5,0d,38,ab)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,initialWidth),HX_("initialWidth",e2,b6,72,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,initialPercentWidth),HX_("initialPercentWidth",a5,63,65,03)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,autoHeight),HX_("autoHeight",b6,18,17,6e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,percentHeight),HX_("percentHeight",8c,08,1b,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,minHeight),HX_("minHeight",19,07,94,5b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,minPercentHeight),HX_("minPercentHeight",9a,33,3b,e9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,maxPercentHeight),HX_("maxPercentHeight",48,77,23,dc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,initialHeight),HX_("initialHeight",8b,c7,3c,cc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,initialPercentHeight),HX_("initialPercentHeight",68,45,a1,ab)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,padding),HX_("padding",d1,59,7d,d0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,paddingTop),HX_("paddingTop",44,fd,05,3a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,paddingLeft),HX_("paddingLeft",78,4a,e6,85)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,paddingRight),HX_("paddingRight",4b,ec,a7,1a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,paddingBottom),HX_("paddingBottom",9c,67,99,4f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,marginTop),HX_("marginTop",07,7f,40,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,marginLeft),HX_("marginLeft",55,53,dd,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,marginRight),HX_("marginRight",ce,a4,d8,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,marginBottom),HX_("marginBottom",b9,21,0a,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,horizontalSpacing),HX_("horizontalSpacing",ff,82,ed,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,verticalSpacing),HX_("verticalSpacing",ad,b9,a6,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundOpacity),HX_("backgroundOpacity",7d,6b,a7,64)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundColorEnd),HX_("backgroundColorEnd",46,f8,6e,2a)},
	{::hx::fsString,(int)offsetof(Style_obj,backgroundGradientStyle),HX_("backgroundGradientStyle",53,34,9a,0d)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(Style_obj,backgroundImage),HX_("backgroundImage",8d,fc,53,80)},
	{::hx::fsString,(int)offsetof(Style_obj,backgroundImageRepeat),HX_("backgroundImageRepeat",c8,6f,dc,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundPositionX),HX_("backgroundPositionX",c1,51,78,a8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundPositionY),HX_("backgroundPositionY",c2,51,78,a8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageClipTop),HX_("backgroundImageClipTop",98,58,30,79)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageClipLeft),HX_("backgroundImageClipLeft",a4,d8,cb,8b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageClipBottom),HX_("backgroundImageClipBottom",c8,d8,9f,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageClipRight),HX_("backgroundImageClipRight",9f,c4,9e,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageSliceTop),HX_("backgroundImageSliceTop",10,e7,36,b3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageSliceLeft),HX_("backgroundImageSliceLeft",2c,f3,81,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageSliceBottom),HX_("backgroundImageSliceBottom",50,a5,f7,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundImageSliceRight),HX_("backgroundImageSliceRight",17,e1,3f,f1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderTopColor),HX_("borderTopColor",9a,53,b1,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderLeftColor),HX_("borderLeftColor",50,f5,f1,a9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderBottomColor),HX_("borderBottomColor",ec,e0,49,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRightColor),HX_("borderRightColor",f3,87,4e,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderTopSize),HX_("borderTopSize",6a,32,3e,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderLeftSize),HX_("borderLeftSize",74,b9,d3,5c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderBottomSize),HX_("borderBottomSize",58,35,68,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRightSize),HX_("borderRightSize",31,8c,cf,01)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRadius),HX_("borderRadius",5e,0a,30,0e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRadiusTopLeft),HX_("borderRadiusTopLeft",7e,4e,dd,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRadiusTopRight),HX_("borderRadiusTopRight",85,6d,d4,b1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRadiusBottomLeft),HX_("borderRadiusBottomLeft",90,5c,54,cf)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderRadiusBottomRight),HX_("borderRadiusBottomRight",33,af,89,11)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,borderOpacity),HX_("borderOpacity",3f,ee,3e,20)},
	{::hx::fsString,(int)offsetof(Style_obj,borderStyle),HX_("borderStyle",a5,70,96,10)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(Style_obj,icon),HX_("icon",79,e7,b2,45)},
	{::hx::fsString,(int)offsetof(Style_obj,iconPosition),HX_("iconPosition",42,e5,38,76)},
	{::hx::fsString,(int)offsetof(Style_obj,horizontalAlign),HX_("horizontalAlign",41,8f,67,f4)},
	{::hx::fsString,(int)offsetof(Style_obj,verticalAlign),HX_("verticalAlign",6f,1e,7c,e4)},
	{::hx::fsString,(int)offsetof(Style_obj,textAlign),HX_("textAlign",d8,e6,7e,ba)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,opacity),HX_("opacity",cb,5d,65,eb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,clip),HX_("clip",d0,6e,c2,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,native),HX_("native",97,c9,1c,22)},
	{::hx::fsString,(int)offsetof(Style_obj,fontName),HX_("fontName",ba,8f,7d,cb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,fontSize),HX_("fontSize",30,be,d1,ce)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,fontBold),HX_("fontBold",f4,9e,99,c3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,fontUnderline),HX_("fontUnderline",3d,e5,a6,f7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,fontItalic),HX_("fontItalic",1f,c6,b7,ba)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,fontStrikeThrough),HX_("fontStrikeThrough",e4,90,c9,52)},
	{::hx::fsString,(int)offsetof(Style_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,hidden),HX_("hidden",6a,ff,95,4c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Style_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Style_obj,backdropFilter),HX_("backdropFilter",2e,4a,ec,02)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(Style_obj,resource),HX_("resource",ce,5c,a0,12)},
	{::hx::fsString,(int)offsetof(Style_obj,animationName),HX_("animationName",6f,5f,4b,3b)},
	{::hx::fsObject /*  ::haxe::ui::styles::animation::AnimationOptions */ ,(int)offsetof(Style_obj,animationOptions),HX_("animationOptions",ba,14,f0,ed)},
	{::hx::fsString,(int)offsetof(Style_obj,mode),HX_("mode",63,d3,60,48)},
	{::hx::fsString,(int)offsetof(Style_obj,pointerEvents),HX_("pointerEvents",b6,2f,49,f7)},
	{::hx::fsString,(int)offsetof(Style_obj,contentType),HX_("contentType",93,3c,7b,2a)},
	{::hx::fsString,(int)offsetof(Style_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,contentWidth),HX_("contentWidth",0d,0a,f1,b0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,contentWidthPercent),HX_("contentWidthPercent",38,d4,5f,e5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,contentHeight),HX_("contentHeight",00,3a,47,d8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,contentHeightPercent),HX_("contentHeightPercent",a5,d8,9f,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsString,(int)offsetof(Style_obj,imageRendering),HX_("imageRendering",71,58,ba,9b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundWidth),HX_("backgroundWidth",38,93,4d,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundWidthPercent),HX_("backgroundWidthPercent",6d,96,0f,27)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundHeight),HX_("backgroundHeight",75,b6,e2,cc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,backgroundHeightPercent),HX_("backgroundHeightPercent",d0,04,ba,ba)},
	{::hx::fsString,(int)offsetof(Style_obj,layout),HX_("layout",aa,ae,b8,58)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,includeInLayout),HX_("includeInLayout",b7,1a,c6,6e)},
	{::hx::fsString,(int)offsetof(Style_obj,justifyContent),HX_("justifyContent",c9,5f,e0,44)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleBorderType */ ,(int)offsetof(Style_obj,borderType),HX_("borderType",c6,51,a3,07)},
	{::hx::fsBool,(int)offsetof(Style_obj,hasBorder),HX_("hasBorder",e6,ff,02,a5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Style_obj,fullBorderSize),HX_("fullBorderSize",3c,16,3f,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Style_obj_sStaticStorageInfo = 0;
#endif

static ::String Style_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("top",95,66,58,00),
	HX_("autoWidth",17,f4,6d,a8),
	HX_("width",06,b6,62,ca),
	HX_("percentWidth",01,51,1b,fe),
	HX_("minWidth",14,23,9a,c1),
	HX_("minPercentWidth",b3,c1,1d,07),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxPercentWidth",c5,0d,38,ab),
	HX_("initialWidth",e2,b6,72,8e),
	HX_("initialPercentWidth",a5,63,65,03),
	HX_("autoHeight",b6,18,17,6e),
	HX_("height",e7,07,4c,02),
	HX_("percentHeight",8c,08,1b,10),
	HX_("minHeight",19,07,94,5b),
	HX_("minPercentHeight",9a,33,3b,e9),
	HX_("maxHeight",ab,19,d7,31),
	HX_("maxPercentHeight",48,77,23,dc),
	HX_("initialHeight",8b,c7,3c,cc),
	HX_("initialPercentHeight",68,45,a1,ab),
	HX_("padding",d1,59,7d,d0),
	HX_("paddingTop",44,fd,05,3a),
	HX_("paddingLeft",78,4a,e6,85),
	HX_("paddingRight",4b,ec,a7,1a),
	HX_("paddingBottom",9c,67,99,4f),
	HX_("set_padding",f4,c0,e4,60),
	HX_("marginTop",07,7f,40,ee),
	HX_("marginLeft",55,53,dd,84),
	HX_("marginRight",ce,a4,d8,33),
	HX_("marginBottom",b9,21,0a,41),
	HX_("horizontalSpacing",ff,82,ed,70),
	HX_("verticalSpacing",ad,b9,a6,fa),
	HX_("color",63,71,5c,4a),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("backgroundOpacity",7d,6b,a7,64),
	HX_("backgroundColorEnd",46,f8,6e,2a),
	HX_("backgroundGradientStyle",53,34,9a,0d),
	HX_("backgroundImage",8d,fc,53,80),
	HX_("backgroundImageRepeat",c8,6f,dc,43),
	HX_("backgroundPositionX",c1,51,78,a8),
	HX_("backgroundPositionY",c2,51,78,a8),
	HX_("backgroundImageClipTop",98,58,30,79),
	HX_("backgroundImageClipLeft",a4,d8,cb,8b),
	HX_("backgroundImageClipBottom",c8,d8,9f,c4),
	HX_("backgroundImageClipRight",9f,c4,9e,3d),
	HX_("backgroundImageSliceTop",10,e7,36,b3),
	HX_("backgroundImageSliceLeft",2c,f3,81,17),
	HX_("backgroundImageSliceBottom",50,a5,f7,3d),
	HX_("backgroundImageSliceRight",17,e1,3f,f1),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("borderTopColor",9a,53,b1,a1),
	HX_("borderLeftColor",50,f5,f1,a9),
	HX_("borderBottomColor",ec,e0,49,43),
	HX_("borderRightColor",f3,87,4e,61),
	HX_("borderSize",cd,ff,ed,06),
	HX_("borderTopSize",6a,32,3e,22),
	HX_("borderLeftSize",74,b9,d3,5c),
	HX_("borderBottomSize",58,35,68,45),
	HX_("borderRightSize",31,8c,cf,01),
	HX_("borderRadius",5e,0a,30,0e),
	HX_("borderRadiusTopLeft",7e,4e,dd,c6),
	HX_("borderRadiusTopRight",85,6d,d4,b1),
	HX_("borderRadiusBottomLeft",90,5c,54,cf),
	HX_("borderRadiusBottomRight",33,af,89,11),
	HX_("borderOpacity",3f,ee,3e,20),
	HX_("borderStyle",a5,70,96,10),
	HX_("icon",79,e7,b2,45),
	HX_("iconPosition",42,e5,38,76),
	HX_("horizontalAlign",41,8f,67,f4),
	HX_("verticalAlign",6f,1e,7c,e4),
	HX_("textAlign",d8,e6,7e,ba),
	HX_("opacity",cb,5d,65,eb),
	HX_("clip",d0,6e,c2,41),
	HX_("native",97,c9,1c,22),
	HX_("fontName",ba,8f,7d,cb),
	HX_("fontSize",30,be,d1,ce),
	HX_("fontBold",f4,9e,99,c3),
	HX_("fontUnderline",3d,e5,a6,f7),
	HX_("fontItalic",1f,c6,b7,ba),
	HX_("fontStrikeThrough",e4,90,c9,52),
	HX_("cursor",d6,8e,e8,3e),
	HX_("hidden",6a,ff,95,4c),
	HX_("filter",b8,1f,35,85),
	HX_("backdropFilter",2e,4a,ec,02),
	HX_("resource",ce,5c,a0,12),
	HX_("animationName",6f,5f,4b,3b),
	HX_("animationOptions",ba,14,f0,ed),
	HX_("mode",63,d3,60,48),
	HX_("pointerEvents",b6,2f,49,f7),
	HX_("contentType",93,3c,7b,2a),
	HX_("direction",3f,62,40,10),
	HX_("contentWidth",0d,0a,f1,b0),
	HX_("contentWidthPercent",38,d4,5f,e5),
	HX_("contentHeight",00,3a,47,d8),
	HX_("contentHeightPercent",a5,d8,9f,82),
	HX_("wordWrap",b4,14,db,00),
	HX_("imageRendering",71,58,ba,9b),
	HX_("backgroundWidth",38,93,4d,8d),
	HX_("backgroundWidthPercent",6d,96,0f,27),
	HX_("backgroundHeight",75,b6,e2,cc),
	HX_("backgroundHeightPercent",d0,04,ba,ba),
	HX_("layout",aa,ae,b8,58),
	HX_("includeInLayout",b7,1a,c6,6e),
	HX_("justifyContent",c9,5f,e0,44),
	HX_("borderType",c6,51,a3,07),
	HX_("get_borderType",0f,da,98,7d),
	HX_("hasBorder",e6,ff,02,a5),
	HX_("get_hasBorder",bd,d3,66,66),
	HX_("fullBorderSize",3c,16,3f,8a),
	HX_("get_fullBorderSize",05,f7,d8,25),
	HX_("mergeDirectives",1c,1a,ce,b7),
	HX_("apply",6e,85,3b,24),
	HX_("equalTo",4f,6e,9d,34),
	HX_("createAnimationOptions",d6,0f,a9,df),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class Style_obj::__mClass;

void Style_obj::__register()
{
	Style_obj _hx_dummy;
	Style_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.Style",d7,5f,c9,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Style_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Style_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Style_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Style_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
