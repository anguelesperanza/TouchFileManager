#ifndef INCLUDED_haxe_ui_styles_Style
#define INCLUDED_haxe_ui_styles_Style

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,styles,StyleBorderType)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,AnimationOptions)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES Style_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Style_obj OBJ_;
		Style_obj();

	public:
		enum { _hx_ClassId = 0x355c6ff5 };

		void __construct( ::Dynamic left, ::Dynamic top, ::Dynamic autoWidth, ::Dynamic width, ::Dynamic percentWidth, ::Dynamic minWidth, ::Dynamic minPercentWidth, ::Dynamic maxWidth, ::Dynamic maxPercentWidth, ::Dynamic initialWidth, ::Dynamic initialPercentWidth, ::Dynamic autoHeight, ::Dynamic height, ::Dynamic percentHeight, ::Dynamic minHeight, ::Dynamic minPercentHeight, ::Dynamic maxHeight, ::Dynamic maxPercentHeight, ::Dynamic initialHeight, ::Dynamic initialPercentHeight, ::Dynamic padding, ::Dynamic paddingTop, ::Dynamic paddingLeft, ::Dynamic paddingRight, ::Dynamic paddingBottom, ::Dynamic marginTop, ::Dynamic marginLeft, ::Dynamic marginRight, ::Dynamic marginBottom, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing, ::Dynamic color, ::Dynamic backgroundColor, ::Dynamic backgroundOpacity, ::Dynamic backgroundColorEnd,::String backgroundGradientStyle, ::haxe::ui::util::VariantType backgroundImage,::String backgroundImageRepeat, ::Dynamic backgroundPositionX, ::Dynamic backgroundPositionY, ::Dynamic backgroundImageClipTop, ::Dynamic backgroundImageClipLeft, ::Dynamic backgroundImageClipBottom, ::Dynamic backgroundImageClipRight, ::Dynamic backgroundImageSliceTop, ::Dynamic backgroundImageSliceLeft, ::Dynamic backgroundImageSliceBottom, ::Dynamic backgroundImageSliceRight, ::Dynamic borderColor, ::Dynamic borderTopColor, ::Dynamic borderLeftColor, ::Dynamic borderBottomColor, ::Dynamic borderRightColor, ::Dynamic borderSize, ::Dynamic borderTopSize, ::Dynamic borderLeftSize, ::Dynamic borderBottomSize, ::Dynamic borderRightSize, ::Dynamic borderRadius, ::Dynamic borderRadiusTopLeft, ::Dynamic borderRadiusTopRight, ::Dynamic borderRadiusBottomLeft, ::Dynamic borderRadiusBottomRight, ::Dynamic borderOpacity,::String borderStyle, ::haxe::ui::util::VariantType icon,::String iconPosition,::String horizontalAlign,::String verticalAlign,::String textAlign, ::Dynamic opacity, ::Dynamic clip, ::Dynamic native,::String fontName, ::Dynamic fontSize, ::Dynamic fontBold, ::Dynamic fontUnderline, ::Dynamic fontItalic, ::Dynamic fontStrikeThrough,::String cursor, ::Dynamic hidden,::Array< ::Dynamic> filter,::Array< ::Dynamic> backdropFilter, ::haxe::ui::util::VariantType resource,::String animationName, ::haxe::ui::styles::animation::AnimationOptions animationOptions,::String mode,::String pointerEvents,::String contentType,::String direction, ::Dynamic contentWidth, ::Dynamic contentWidthPercent, ::Dynamic contentHeight, ::Dynamic contentHeightPercent, ::Dynamic wordWrap,::String imageRendering, ::Dynamic backgroundWidth, ::Dynamic backgroundWidthPercent, ::Dynamic backgroundHeight, ::Dynamic backgroundHeightPercent,::String layout, ::Dynamic includeInLayout,::String justifyContent, ::haxe::ui::styles::StyleBorderType borderType, ::Dynamic hasBorder, ::Dynamic fullBorderSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.Style")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.Style"); }
		static ::hx::ObjectPtr< Style_obj > __new( ::Dynamic left, ::Dynamic top, ::Dynamic autoWidth, ::Dynamic width, ::Dynamic percentWidth, ::Dynamic minWidth, ::Dynamic minPercentWidth, ::Dynamic maxWidth, ::Dynamic maxPercentWidth, ::Dynamic initialWidth, ::Dynamic initialPercentWidth, ::Dynamic autoHeight, ::Dynamic height, ::Dynamic percentHeight, ::Dynamic minHeight, ::Dynamic minPercentHeight, ::Dynamic maxHeight, ::Dynamic maxPercentHeight, ::Dynamic initialHeight, ::Dynamic initialPercentHeight, ::Dynamic padding, ::Dynamic paddingTop, ::Dynamic paddingLeft, ::Dynamic paddingRight, ::Dynamic paddingBottom, ::Dynamic marginTop, ::Dynamic marginLeft, ::Dynamic marginRight, ::Dynamic marginBottom, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing, ::Dynamic color, ::Dynamic backgroundColor, ::Dynamic backgroundOpacity, ::Dynamic backgroundColorEnd,::String backgroundGradientStyle, ::haxe::ui::util::VariantType backgroundImage,::String backgroundImageRepeat, ::Dynamic backgroundPositionX, ::Dynamic backgroundPositionY, ::Dynamic backgroundImageClipTop, ::Dynamic backgroundImageClipLeft, ::Dynamic backgroundImageClipBottom, ::Dynamic backgroundImageClipRight, ::Dynamic backgroundImageSliceTop, ::Dynamic backgroundImageSliceLeft, ::Dynamic backgroundImageSliceBottom, ::Dynamic backgroundImageSliceRight, ::Dynamic borderColor, ::Dynamic borderTopColor, ::Dynamic borderLeftColor, ::Dynamic borderBottomColor, ::Dynamic borderRightColor, ::Dynamic borderSize, ::Dynamic borderTopSize, ::Dynamic borderLeftSize, ::Dynamic borderBottomSize, ::Dynamic borderRightSize, ::Dynamic borderRadius, ::Dynamic borderRadiusTopLeft, ::Dynamic borderRadiusTopRight, ::Dynamic borderRadiusBottomLeft, ::Dynamic borderRadiusBottomRight, ::Dynamic borderOpacity,::String borderStyle, ::haxe::ui::util::VariantType icon,::String iconPosition,::String horizontalAlign,::String verticalAlign,::String textAlign, ::Dynamic opacity, ::Dynamic clip, ::Dynamic native,::String fontName, ::Dynamic fontSize, ::Dynamic fontBold, ::Dynamic fontUnderline, ::Dynamic fontItalic, ::Dynamic fontStrikeThrough,::String cursor, ::Dynamic hidden,::Array< ::Dynamic> filter,::Array< ::Dynamic> backdropFilter, ::haxe::ui::util::VariantType resource,::String animationName, ::haxe::ui::styles::animation::AnimationOptions animationOptions,::String mode,::String pointerEvents,::String contentType,::String direction, ::Dynamic contentWidth, ::Dynamic contentWidthPercent, ::Dynamic contentHeight, ::Dynamic contentHeightPercent, ::Dynamic wordWrap,::String imageRendering, ::Dynamic backgroundWidth, ::Dynamic backgroundWidthPercent, ::Dynamic backgroundHeight, ::Dynamic backgroundHeightPercent,::String layout, ::Dynamic includeInLayout,::String justifyContent, ::haxe::ui::styles::StyleBorderType borderType, ::Dynamic hasBorder, ::Dynamic fullBorderSize);
		static ::hx::ObjectPtr< Style_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic left, ::Dynamic top, ::Dynamic autoWidth, ::Dynamic width, ::Dynamic percentWidth, ::Dynamic minWidth, ::Dynamic minPercentWidth, ::Dynamic maxWidth, ::Dynamic maxPercentWidth, ::Dynamic initialWidth, ::Dynamic initialPercentWidth, ::Dynamic autoHeight, ::Dynamic height, ::Dynamic percentHeight, ::Dynamic minHeight, ::Dynamic minPercentHeight, ::Dynamic maxHeight, ::Dynamic maxPercentHeight, ::Dynamic initialHeight, ::Dynamic initialPercentHeight, ::Dynamic padding, ::Dynamic paddingTop, ::Dynamic paddingLeft, ::Dynamic paddingRight, ::Dynamic paddingBottom, ::Dynamic marginTop, ::Dynamic marginLeft, ::Dynamic marginRight, ::Dynamic marginBottom, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing, ::Dynamic color, ::Dynamic backgroundColor, ::Dynamic backgroundOpacity, ::Dynamic backgroundColorEnd,::String backgroundGradientStyle, ::haxe::ui::util::VariantType backgroundImage,::String backgroundImageRepeat, ::Dynamic backgroundPositionX, ::Dynamic backgroundPositionY, ::Dynamic backgroundImageClipTop, ::Dynamic backgroundImageClipLeft, ::Dynamic backgroundImageClipBottom, ::Dynamic backgroundImageClipRight, ::Dynamic backgroundImageSliceTop, ::Dynamic backgroundImageSliceLeft, ::Dynamic backgroundImageSliceBottom, ::Dynamic backgroundImageSliceRight, ::Dynamic borderColor, ::Dynamic borderTopColor, ::Dynamic borderLeftColor, ::Dynamic borderBottomColor, ::Dynamic borderRightColor, ::Dynamic borderSize, ::Dynamic borderTopSize, ::Dynamic borderLeftSize, ::Dynamic borderBottomSize, ::Dynamic borderRightSize, ::Dynamic borderRadius, ::Dynamic borderRadiusTopLeft, ::Dynamic borderRadiusTopRight, ::Dynamic borderRadiusBottomLeft, ::Dynamic borderRadiusBottomRight, ::Dynamic borderOpacity,::String borderStyle, ::haxe::ui::util::VariantType icon,::String iconPosition,::String horizontalAlign,::String verticalAlign,::String textAlign, ::Dynamic opacity, ::Dynamic clip, ::Dynamic native,::String fontName, ::Dynamic fontSize, ::Dynamic fontBold, ::Dynamic fontUnderline, ::Dynamic fontItalic, ::Dynamic fontStrikeThrough,::String cursor, ::Dynamic hidden,::Array< ::Dynamic> filter,::Array< ::Dynamic> backdropFilter, ::haxe::ui::util::VariantType resource,::String animationName, ::haxe::ui::styles::animation::AnimationOptions animationOptions,::String mode,::String pointerEvents,::String contentType,::String direction, ::Dynamic contentWidth, ::Dynamic contentWidthPercent, ::Dynamic contentHeight, ::Dynamic contentHeightPercent, ::Dynamic wordWrap,::String imageRendering, ::Dynamic backgroundWidth, ::Dynamic backgroundWidthPercent, ::Dynamic backgroundHeight, ::Dynamic backgroundHeightPercent,::String layout, ::Dynamic includeInLayout,::String justifyContent, ::haxe::ui::styles::StyleBorderType borderType, ::Dynamic hasBorder, ::Dynamic fullBorderSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Style_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Style",11,15,4b,17); }

		 ::Dynamic left;
		 ::Dynamic top;
		 ::Dynamic autoWidth;
		 ::Dynamic width;
		 ::Dynamic percentWidth;
		 ::Dynamic minWidth;
		 ::Dynamic minPercentWidth;
		 ::Dynamic maxWidth;
		 ::Dynamic maxPercentWidth;
		 ::Dynamic initialWidth;
		 ::Dynamic initialPercentWidth;
		 ::Dynamic autoHeight;
		 ::Dynamic height;
		 ::Dynamic percentHeight;
		 ::Dynamic minHeight;
		 ::Dynamic minPercentHeight;
		 ::Dynamic maxHeight;
		 ::Dynamic maxPercentHeight;
		 ::Dynamic initialHeight;
		 ::Dynamic initialPercentHeight;
		 ::Dynamic padding;
		 ::Dynamic paddingTop;
		 ::Dynamic paddingLeft;
		 ::Dynamic paddingRight;
		 ::Dynamic paddingBottom;
		 ::Dynamic set_padding( ::Dynamic value);
		::Dynamic set_padding_dyn();

		 ::Dynamic marginTop;
		 ::Dynamic marginLeft;
		 ::Dynamic marginRight;
		 ::Dynamic marginBottom;
		 ::Dynamic horizontalSpacing;
		 ::Dynamic verticalSpacing;
		 ::Dynamic color;
		 ::Dynamic backgroundColor;
		 ::Dynamic backgroundOpacity;
		 ::Dynamic backgroundColorEnd;
		::String backgroundGradientStyle;
		 ::haxe::ui::util::VariantType backgroundImage;
		::String backgroundImageRepeat;
		 ::Dynamic backgroundPositionX;
		 ::Dynamic backgroundPositionY;
		 ::Dynamic backgroundImageClipTop;
		 ::Dynamic backgroundImageClipLeft;
		 ::Dynamic backgroundImageClipBottom;
		 ::Dynamic backgroundImageClipRight;
		 ::Dynamic backgroundImageSliceTop;
		 ::Dynamic backgroundImageSliceLeft;
		 ::Dynamic backgroundImageSliceBottom;
		 ::Dynamic backgroundImageSliceRight;
		 ::Dynamic borderColor;
		 ::Dynamic borderTopColor;
		 ::Dynamic borderLeftColor;
		 ::Dynamic borderBottomColor;
		 ::Dynamic borderRightColor;
		 ::Dynamic borderSize;
		 ::Dynamic borderTopSize;
		 ::Dynamic borderLeftSize;
		 ::Dynamic borderBottomSize;
		 ::Dynamic borderRightSize;
		 ::Dynamic borderRadius;
		 ::Dynamic borderRadiusTopLeft;
		 ::Dynamic borderRadiusTopRight;
		 ::Dynamic borderRadiusBottomLeft;
		 ::Dynamic borderRadiusBottomRight;
		 ::Dynamic borderOpacity;
		::String borderStyle;
		 ::haxe::ui::util::VariantType icon;
		::String iconPosition;
		::String horizontalAlign;
		::String verticalAlign;
		::String textAlign;
		 ::Dynamic opacity;
		 ::Dynamic clip;
		 ::Dynamic native;
		::String fontName;
		 ::Dynamic fontSize;
		 ::Dynamic fontBold;
		 ::Dynamic fontUnderline;
		 ::Dynamic fontItalic;
		 ::Dynamic fontStrikeThrough;
		::String cursor;
		 ::Dynamic hidden;
		::Array< ::Dynamic> filter;
		::Array< ::Dynamic> backdropFilter;
		 ::haxe::ui::util::VariantType resource;
		::String animationName;
		 ::haxe::ui::styles::animation::AnimationOptions animationOptions;
		::String mode;
		::String pointerEvents;
		::String contentType;
		::String direction;
		 ::Dynamic contentWidth;
		 ::Dynamic contentWidthPercent;
		 ::Dynamic contentHeight;
		 ::Dynamic contentHeightPercent;
		 ::Dynamic wordWrap;
		::String imageRendering;
		 ::Dynamic backgroundWidth;
		 ::Dynamic backgroundWidthPercent;
		 ::Dynamic backgroundHeight;
		 ::Dynamic backgroundHeightPercent;
		::String layout;
		 ::Dynamic includeInLayout;
		::String justifyContent;
		 ::haxe::ui::styles::StyleBorderType borderType;
		 ::haxe::ui::styles::StyleBorderType get_borderType();
		::Dynamic get_borderType_dyn();

		bool hasBorder;
		bool get_hasBorder();
		::Dynamic get_hasBorder_dyn();

		 ::Dynamic fullBorderSize;
		 ::Dynamic get_fullBorderSize();
		::Dynamic get_fullBorderSize_dyn();

		void mergeDirectives( ::haxe::ds::StringMap map);
		::Dynamic mergeDirectives_dyn();

		void apply( ::haxe::ui::styles::Style s);
		::Dynamic apply_dyn();

		bool equalTo( ::haxe::ui::styles::Style s);
		::Dynamic equalTo_dyn();

		void createAnimationOptions();
		::Dynamic createAnimationOptions_dyn();

		 ::haxe::ui::styles::Style clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Style */ 
