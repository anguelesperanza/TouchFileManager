#ifndef INCLUDED_haxe_ui_core_TypeMap
#define INCLUDED_haxe_ui_core_TypeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,core,TypeMap)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TypeMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TypeMap_obj OBJ_;
		TypeMap_obj();

	public:
		enum { _hx_ClassId = 0x21c5fa85 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.core.TypeMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.core.TypeMap"); }

		inline static ::hx::ObjectPtr< TypeMap_obj > __new() {
			::hx::ObjectPtr< TypeMap_obj > __this = new TypeMap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TypeMap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TypeMap_obj *__this = (TypeMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypeMap_obj), false, "haxe.ui.core.TypeMap"));
			*(void **)__this = TypeMap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypeMap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypeMap",e2,e7,17,c6); }

		static ::String getTypeInfo(::String className,::String property);
		static ::Dynamic getTypeInfo_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_TypeMap */ 
