#ifndef INCLUDED_hx_strings_collection__OrderedStringMap_OrderedStringMap_Impl_
#define INCLUDED_hx_strings_collection__OrderedStringMap_OrderedStringMap_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(hx,strings,collection,OrderedStringMapImpl)
HX_DECLARE_CLASS4(hx,strings,collection,_OrderedStringMap,OrderedStringMap_Impl_)

namespace hx{
namespace strings{
namespace collection{
namespace _OrderedStringMap{


class HXCPP_CLASS_ATTRIBUTES OrderedStringMap_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OrderedStringMap_Impl__obj OBJ_;
		OrderedStringMap_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1dfa214f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_"); }

		inline static ::hx::ObjectPtr< OrderedStringMap_Impl__obj > __new() {
			::hx::ObjectPtr< OrderedStringMap_Impl__obj > __this = new OrderedStringMap_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OrderedStringMap_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			OrderedStringMap_Impl__obj *__this = (OrderedStringMap_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OrderedStringMap_Impl__obj), false, "hx.strings.collection._OrderedStringMap.OrderedStringMap_Impl_"));
			*(void **)__this = OrderedStringMap_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OrderedStringMap_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OrderedStringMap_Impl_",5e,ef,01,bf); }

		static  ::hx::strings::collection::OrderedStringMapImpl _new();
		static ::Dynamic _new_dyn();

		static ::Dynamic _hx___toStringMap( ::hx::strings::collection::OrderedStringMapImpl this1);
		static ::Dynamic _hx___toStringMap_dyn();

		static  ::Dynamic _hx___arrayGet( ::hx::strings::collection::OrderedStringMapImpl this1,::String key);
		static ::Dynamic _hx___arrayGet_dyn();

		static  ::Dynamic _hx___arrayWrite( ::hx::strings::collection::OrderedStringMapImpl this1,::String key, ::Dynamic value);
		static ::Dynamic _hx___arrayWrite_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _OrderedStringMap

#endif /* INCLUDED_hx_strings_collection__OrderedStringMap_OrderedStringMap_Impl_ */ 
