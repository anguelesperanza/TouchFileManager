#ifndef INCLUDED_hx_strings_collection_StringSet
#define INCLUDED_hx_strings_collection_StringSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(hx,strings,collection,StringSet)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)

namespace hx{
namespace strings{
namespace collection{


class HXCPP_CLASS_ATTRIBUTES StringSet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringSet_obj OBJ_;
		StringSet_obj();

	public:
		enum { _hx_ClassId = 0x0f3dc729 };

		void __construct( ::hx::strings::internal::_Either2::_Either2 initialItems);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.collection.StringSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.collection.StringSet"); }
		static ::hx::ObjectPtr< StringSet_obj > __new( ::hx::strings::internal::_Either2::_Either2 initialItems);
		static ::hx::ObjectPtr< StringSet_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::strings::internal::_Either2::_Either2 initialItems);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringSet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringSet",31,a3,90,69); }

		static void __boot();
		static ::Dynamic EMPTY_MAP;
		::Dynamic map;
		int size;
		void _initMap();
		::Dynamic _initMap_dyn();

		bool add(::String item);
		::Dynamic add_dyn();

		int addAll( ::hx::strings::internal::_Either2::_Either2 items);
		::Dynamic addAll_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool contains(::String item);
		::Dynamic contains_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		bool remove(::String item);
		::Dynamic remove_dyn();

		::Array< ::String > toArray();
		::Dynamic toArray_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection

#endif /* INCLUDED_hx_strings_collection_StringSet */ 
