// Generated by Haxe 4.3.1
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage
#define INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_379d20639afe89d4_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_unpack_subimage)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_unpack_subimage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_unpack_subimage_obj OBJ_;
		EXT_unpack_subimage_obj();

	public:
		enum { _hx_ClassId = 0x50b59a60 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_unpack_subimage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_unpack_subimage"); }

		inline static ::hx::ObjectPtr< EXT_unpack_subimage_obj > __new() {
			::hx::ObjectPtr< EXT_unpack_subimage_obj > __this = new EXT_unpack_subimage_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_unpack_subimage_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_unpack_subimage_obj *__this = (EXT_unpack_subimage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_unpack_subimage_obj), false, "lime.graphics.opengl.ext.EXT_unpack_subimage"));
			*(void **)__this = EXT_unpack_subimage_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_379d20639afe89d4_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_unpack_subimage)(__this) )->UNPACK_SKIP_PIXELS = 3316;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_unpack_subimage)(__this) )->UNPACK_SKIP_ROWS = 3315;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_unpack_subimage)(__this) )->UNPACK_ROW_LENGTH = 3314;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_unpack_subimage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_unpack_subimage",4a,96,0e,d9); }

		int UNPACK_ROW_LENGTH;
		int UNPACK_SKIP_ROWS;
		int UNPACK_SKIP_PIXELS;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage */ 
