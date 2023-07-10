#ifndef INCLUDED_haxe_ui_util_Defines
#define INCLUDED_haxe_ui_util_Defines

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,Defines)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Defines_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Defines_obj OBJ_;
		Defines_obj();

	public:
		enum { _hx_ClassId = 0x42ad203c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.Defines")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.Defines"); }

		inline static ::hx::ObjectPtr< Defines_obj > __new() {
			::hx::ObjectPtr< Defines_obj > __this = new Defines_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Defines_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Defines_obj *__this = (Defines_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Defines_obj), false, "haxe.ui.util.Defines"));
			*(void **)__this = Defines_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Defines_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Defines",b8,5f,59,6e); }

		static void __boot();
		static  ::haxe::ds::StringMap _map;
		static  ::haxe::ds::StringMap getAll();
		static ::Dynamic getAll_dyn();

		static void set(::String name,::String value,::hx::Null< bool >  overwrite);
		static ::Dynamic set_dyn();

		static void popuplate();
		static ::Dynamic popuplate_dyn();

		static  ::Dynamic toObject();
		static ::Dynamic toObject_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_Defines */ 
