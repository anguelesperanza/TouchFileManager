#ifndef INCLUDED_lime_text_harfbuzz__HBFont_HBFont_Impl_
#define INCLUDED_lime_text_harfbuzz__HBFont_HBFont_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS4(lime,text,harfbuzz,_HBFont,HBFont_Impl_)

namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBFont{


class HXCPP_CLASS_ATTRIBUTES HBFont_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBFont_Impl__obj OBJ_;
		HBFont_Impl__obj();

	public:
		enum { _hx_ClassId = 0x36d8812b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz._HBFont.HBFont_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz._HBFont.HBFont_Impl_"); }

		inline static ::hx::ObjectPtr< HBFont_Impl__obj > __new() {
			::hx::ObjectPtr< HBFont_Impl__obj > __this = new HBFont_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBFont_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBFont_Impl__obj *__this = (HBFont_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBFont_Impl__obj), false, "lime.text.harfbuzz._HBFont.HBFont_Impl_"));
			*(void **)__this = HBFont_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBFont_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBFont_Impl_",49,df,27,7a); }

		static  ::Dynamic _new( ::Dynamic face);
		static ::Dynamic _new_dyn();

		static void addGlyphOriginForDirection( ::Dynamic this1,int glyph,int direction,int x,int y);
		static ::Dynamic addGlyphOriginForDirection_dyn();

		static  ::Dynamic createSubFont( ::Dynamic this1);
		static ::Dynamic createSubFont_dyn();

		static  ::lime::math::Vector2 getGlyphAdvanceForDirection( ::Dynamic this1,int glyph,int direction);
		static ::Dynamic getGlyphAdvanceForDirection_dyn();

		static  ::lime::math::Vector2 getGlyphKerningForDirection( ::Dynamic this1,int glyph,int firstGlyph,int secondGlyph,int direction);
		static ::Dynamic getGlyphKerningForDirection_dyn();

		static  ::lime::math::Vector2 getGlyphOriginForDirection( ::Dynamic this1,int glyph,int direction);
		static ::Dynamic getGlyphOriginForDirection_dyn();

		static int glyphFromString( ::Dynamic this1,::String s);
		static ::Dynamic glyphFromString_dyn();

		static ::String glyphToString( ::Dynamic this1,int codepoint);
		static ::Dynamic glyphToString_dyn();

		static void makeImmutable( ::Dynamic this1);
		static ::Dynamic makeImmutable_dyn();

		static void subtractGlyphOriginForDirection( ::Dynamic this1,int glyph,int direction,int x,int y);
		static ::Dynamic subtractGlyphOriginForDirection_dyn();

		static  ::Dynamic get_empty();
		static ::Dynamic get_empty_dyn();

		static  ::Dynamic get_face( ::Dynamic this1);
		static ::Dynamic get_face_dyn();

		static bool get_immutable( ::Dynamic this1);
		static ::Dynamic get_immutable_dyn();

		static  ::Dynamic get_parent( ::Dynamic this1);
		static ::Dynamic get_parent_dyn();

		static  ::lime::math::Vector2 get_ppem( ::Dynamic this1);
		static ::Dynamic get_ppem_dyn();

		static  ::lime::math::Vector2 set_ppem( ::Dynamic this1, ::lime::math::Vector2 value);
		static ::Dynamic set_ppem_dyn();

		static  ::lime::math::Vector2 get_scale( ::Dynamic this1);
		static ::Dynamic get_scale_dyn();

		static  ::lime::math::Vector2 set_scale( ::Dynamic this1, ::lime::math::Vector2 value);
		static ::Dynamic set_scale_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBFont

#endif /* INCLUDED_lime_text_harfbuzz__HBFont_HBFont_Impl_ */ 
