#ifndef INCLUDED_hx_strings__AnyAsString_AnyAsString_Impl_
#define INCLUDED_hx_strings__AnyAsString_AnyAsString_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hx,strings,_AnyAsString,AnyAsString_Impl_)

namespace hx{
namespace strings{
namespace _AnyAsString{


class HXCPP_CLASS_ATTRIBUTES AnyAsString_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnyAsString_Impl__obj OBJ_;
		AnyAsString_Impl__obj();

	public:
		enum { _hx_ClassId = 0x739af02d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings._AnyAsString.AnyAsString_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings._AnyAsString.AnyAsString_Impl_"); }

		inline static ::hx::ObjectPtr< AnyAsString_Impl__obj > __new() {
			::hx::ObjectPtr< AnyAsString_Impl__obj > __this = new AnyAsString_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AnyAsString_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AnyAsString_Impl__obj *__this = (AnyAsString_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnyAsString_Impl__obj), false, "hx.strings._AnyAsString.AnyAsString_Impl_"));
			*(void **)__this = AnyAsString_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnyAsString_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnyAsString_Impl_",2f,b0,62,7c); }

		static ::String fromBool(bool value);
		static ::Dynamic fromBool_dyn();

		static ::String fromAny( ::Dynamic value);
		static ::Dynamic fromAny_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace _AnyAsString

#endif /* INCLUDED_hx_strings__AnyAsString_AnyAsString_Impl_ */ 
