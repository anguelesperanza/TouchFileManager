#ifndef INCLUDED_haxe_ui_util_StyleUtil
#define INCLUDED_haxe_ui_util_StyleUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS3(haxe,ui,util,StyleUtil)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES StyleUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StyleUtil_obj OBJ_;
		StyleUtil_obj();

	public:
		enum { _hx_ClassId = 0x562ea953 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.StyleUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.StyleUtil"); }

		inline static ::hx::ObjectPtr< StyleUtil_obj > __new() {
			::hx::ObjectPtr< StyleUtil_obj > __this = new StyleUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StyleUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StyleUtil_obj *__this = (StyleUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleUtil_obj), false, "haxe.ui.util.StyleUtil"));
			*(void **)__this = StyleUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyleUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleUtil",b3,f5,50,85); }

		static void __boot();
		static  ::EReg style2ComponentEReg;
		static  ::EReg component2StyleEReg;
		static ::String styleProperty2ComponentProperty(::String property);
		static ::Dynamic styleProperty2ComponentProperty_dyn();

		static ::String componentProperty2StyleProperty(::String property);
		static ::Dynamic componentProperty2StyleProperty_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_StyleUtil */ 
