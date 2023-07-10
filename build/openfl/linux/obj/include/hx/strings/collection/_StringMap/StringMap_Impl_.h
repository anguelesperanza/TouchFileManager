#ifndef INCLUDED_hx_strings_collection__StringMap_StringMap_Impl_
#define INCLUDED_hx_strings_collection__StringMap_StringMap_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(hx,strings,collection,_StringMap,StringMap_Impl_)

namespace hx{
namespace strings{
namespace collection{
namespace _StringMap{


class HXCPP_CLASS_ATTRIBUTES StringMap_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringMap_Impl__obj OBJ_;
		StringMap_Impl__obj();

	public:
		enum { _hx_ClassId = 0x15f43a0f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.collection._StringMap.StringMap_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.collection._StringMap.StringMap_Impl_"); }

		inline static ::hx::ObjectPtr< StringMap_Impl__obj > __new() {
			::hx::ObjectPtr< StringMap_Impl__obj > __this = new StringMap_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StringMap_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			StringMap_Impl__obj *__this = (StringMap_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringMap_Impl__obj), false, "hx.strings.collection._StringMap.StringMap_Impl_"));
			*(void **)__this = StringMap_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringMap_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringMap_Impl_",0b,c1,89,e5); }

		static ::Dynamic _new();
		static ::Dynamic _new_dyn();

		static  ::haxe::ds::StringMap _hx___toMap(::Dynamic this1);
		static ::Dynamic _hx___toMap_dyn();

		static  ::Dynamic _hx___arrayGet(::Dynamic this1,::String key);
		static ::Dynamic _hx___arrayGet_dyn();

		static  ::Dynamic _hx___arrayWrite(::Dynamic this1,::String k, ::Dynamic v);
		static ::Dynamic _hx___arrayWrite_dyn();

		static int get_size(::Dynamic this1);
		static ::Dynamic get_size_dyn();

		static ::Dynamic copy(::Dynamic this1);
		static ::Dynamic copy_dyn();

		static bool isEmpty(::Dynamic this1);
		static ::Dynamic isEmpty_dyn();

		static int setAll(::Dynamic this1,::Dynamic items,::hx::Null< bool >  replace);
		static ::Dynamic setAll_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _StringMap

#endif /* INCLUDED_hx_strings_collection__StringMap_StringMap_Impl_ */ 
