#ifndef INCLUDED_hx_strings_collection__StringArray_StringArray_Impl_
#define INCLUDED_hx_strings_collection__StringArray_StringArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,collection,_StringArray,StringArray_Impl_)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)

namespace hx{
namespace strings{
namespace collection{
namespace _StringArray{


class HXCPP_CLASS_ATTRIBUTES StringArray_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringArray_Impl__obj OBJ_;
		StringArray_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7fb49577 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.collection._StringArray.StringArray_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.collection._StringArray.StringArray_Impl_"); }

		inline static ::hx::ObjectPtr< StringArray_Impl__obj > __new() {
			::hx::ObjectPtr< StringArray_Impl__obj > __this = new StringArray_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StringArray_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			StringArray_Impl__obj *__this = (StringArray_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringArray_Impl__obj), false, "hx.strings.collection._StringArray.StringArray_Impl_"));
			*(void **)__this = StringArray_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringArray_Impl_",88,11,2e,3e); }

		static ::Array< ::String > _new( ::hx::strings::internal::_Either2::_Either2 initialItems);
		static ::Dynamic _new_dyn();

		static ::String get_first(::Array< ::String > this1);
		static ::Dynamic get_first_dyn();

		static ::String get_last(::Array< ::String > this1);
		static ::Dynamic get_last_dyn();

		static bool contains(::Array< ::String > this1,::String str);
		static ::Dynamic contains_dyn();

		static bool isEmpty(::Array< ::String > this1);
		static ::Dynamic isEmpty_dyn();

		static void clear(::Array< ::String > this1);
		static ::Dynamic clear_dyn();

		static void pushAll(::Array< ::String > this1, ::hx::strings::internal::_Either2::_Either2 items);
		static ::Dynamic pushAll_dyn();

		static void sortAscending(::Array< ::String > this1);
		static ::Dynamic sortAscending_dyn();

		static void sortDescending(::Array< ::String > this1);
		static ::Dynamic sortDescending_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _StringArray

#endif /* INCLUDED_hx_strings_collection__StringArray_StringArray_Impl_ */ 
