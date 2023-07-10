#ifndef INCLUDED_haxe_ui_util_TypeConverter
#define INCLUDED_haxe_ui_util_TypeConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,TypeConverter)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES TypeConverter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TypeConverter_obj OBJ_;
		TypeConverter_obj();

	public:
		enum { _hx_ClassId = 0x7f488c2a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.TypeConverter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.TypeConverter"); }

		inline static ::hx::ObjectPtr< TypeConverter_obj > __new() {
			::hx::ObjectPtr< TypeConverter_obj > __this = new TypeConverter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TypeConverter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TypeConverter_obj *__this = (TypeConverter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypeConverter_obj), false, "haxe.ui.util.TypeConverter"));
			*(void **)__this = TypeConverter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypeConverter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypeConverter",e6,0e,e3,b6); }

		static  ::Dynamic convertFrom( ::Dynamic input);
		static ::Dynamic convertFrom_dyn();

		static  ::Dynamic convertTo( ::Dynamic input,::String type);
		static ::Dynamic convertTo_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_TypeConverter */ 
