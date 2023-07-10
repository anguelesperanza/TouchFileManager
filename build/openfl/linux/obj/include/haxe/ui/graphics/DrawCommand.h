#ifndef INCLUDED_haxe_ui_graphics_DrawCommand
#define INCLUDED_haxe_ui_graphics_DrawCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,ui,graphics,DrawCommand)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
namespace haxe{
namespace ui{
namespace graphics{


class DrawCommand_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DrawCommand_obj OBJ_;

	public:
		DrawCommand_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.graphics.DrawCommand",76,65,93,40); }
		::String __ToString() const { return HX_("DrawCommand.",c7,88,5b,5c) + _hx_tag; }

		static ::haxe::ui::graphics::DrawCommand Circle(Float x,Float y,Float radius);
		static ::Dynamic Circle_dyn();
		static ::haxe::ui::graphics::DrawCommand Clear;
		static inline ::haxe::ui::graphics::DrawCommand Clear_dyn() { return Clear; }
		static ::haxe::ui::graphics::DrawCommand CubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		static ::Dynamic CubicCurveTo_dyn();
		static ::haxe::ui::graphics::DrawCommand CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		static ::Dynamic CurveTo_dyn();
		static ::haxe::ui::graphics::DrawCommand FillStyle( ::Dynamic color, ::Dynamic alpha);
		static ::Dynamic FillStyle_dyn();
		static ::haxe::ui::graphics::DrawCommand Image( ::haxe::ui::util::VariantType resource,Float x,Float y,Float width,Float height);
		static ::Dynamic Image_dyn();
		static ::haxe::ui::graphics::DrawCommand LineTo(Float x,Float y);
		static ::Dynamic LineTo_dyn();
		static ::haxe::ui::graphics::DrawCommand MoveTo(Float x,Float y);
		static ::Dynamic MoveTo_dyn();
		static ::haxe::ui::graphics::DrawCommand Rectangle(Float x,Float y,Float width,Float height);
		static ::Dynamic Rectangle_dyn();
		static ::haxe::ui::graphics::DrawCommand SetPixel(Float x,Float y,int color);
		static ::Dynamic SetPixel_dyn();
		static ::haxe::ui::graphics::DrawCommand SetPixels( ::haxe::io::Bytes pixels);
		static ::Dynamic SetPixels_dyn();
		static ::haxe::ui::graphics::DrawCommand StrokeStyle( ::Dynamic color, ::Dynamic thickness, ::Dynamic alpha);
		static ::Dynamic StrokeStyle_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace graphics

#endif /* INCLUDED_haxe_ui_graphics_DrawCommand */ 
