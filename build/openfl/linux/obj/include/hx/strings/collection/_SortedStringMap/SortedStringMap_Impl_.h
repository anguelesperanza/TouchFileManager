#ifndef INCLUDED_hx_strings_collection__SortedStringMap_SortedStringMap_Impl_
#define INCLUDED_hx_strings_collection__SortedStringMap_SortedStringMap_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS3(hx,strings,collection,SortedStringMapImpl)
HX_DECLARE_CLASS4(hx,strings,collection,_SortedStringMap,SortedStringMap_Impl_)

namespace hx{
namespace strings{
namespace collection{
namespace _SortedStringMap{


class HXCPP_CLASS_ATTRIBUTES SortedStringMap_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SortedStringMap_Impl__obj OBJ_;
		SortedStringMap_Impl__obj();

	public:
		enum { _hx_ClassId = 0x375fceef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.collection._SortedStringMap.SortedStringMap_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.collection._SortedStringMap.SortedStringMap_Impl_"); }

		inline static ::hx::ObjectPtr< SortedStringMap_Impl__obj > __new() {
			::hx::ObjectPtr< SortedStringMap_Impl__obj > __this = new SortedStringMap_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SortedStringMap_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			SortedStringMap_Impl__obj *__this = (SortedStringMap_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SortedStringMap_Impl__obj), false, "hx.strings.collection._SortedStringMap.SortedStringMap_Impl_"));
			*(void **)__this = SortedStringMap_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SortedStringMap_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SortedStringMap_Impl_",4e,8a,dc,73); }

		static  ::hx::strings::collection::SortedStringMapImpl _new( ::Dynamic comparator);
		static ::Dynamic _new_dyn();

		static ::Dynamic _hx___toStringMap( ::hx::strings::collection::SortedStringMapImpl this1);
		static ::Dynamic _hx___toStringMap_dyn();

		static  ::Dynamic _hx___arrayGet( ::hx::strings::collection::SortedStringMapImpl this1,::String key);
		static ::Dynamic _hx___arrayGet_dyn();

		static  ::Dynamic _hx___arrayWrite( ::hx::strings::collection::SortedStringMapImpl this1,::String key, ::Dynamic value);
		static ::Dynamic _hx___arrayWrite_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _SortedStringMap

#endif /* INCLUDED_hx_strings_collection__SortedStringMap_SortedStringMap_Impl_ */ 
