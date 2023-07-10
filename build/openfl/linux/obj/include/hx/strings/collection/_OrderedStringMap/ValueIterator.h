#ifndef INCLUDED_hx_strings_collection__OrderedStringMap_ValueIterator
#define INCLUDED_hx_strings_collection__OrderedStringMap_ValueIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(hx,strings,collection,OrderedStringMapImpl)
HX_DECLARE_CLASS4(hx,strings,collection,_OrderedStringMap,ValueIterator)

namespace hx{
namespace strings{
namespace collection{
namespace _OrderedStringMap{


class HXCPP_CLASS_ATTRIBUTES ValueIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValueIterator_obj OBJ_;
		ValueIterator_obj();

	public:
		enum { _hx_ClassId = 0x27b14472 };

		void __construct( ::hx::strings::collection::OrderedStringMapImpl map);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.collection._OrderedStringMap.ValueIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.collection._OrderedStringMap.ValueIterator"); }
		static ::hx::ObjectPtr< ValueIterator_obj > __new( ::hx::strings::collection::OrderedStringMapImpl map);
		static ::hx::ObjectPtr< ValueIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::strings::collection::OrderedStringMapImpl map);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValueIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ValueIterator",5f,2e,9b,3e); }

		 ::hx::strings::collection::OrderedStringMapImpl map;
		int pos;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection
} // end namespace _OrderedStringMap

#endif /* INCLUDED_hx_strings_collection__OrderedStringMap_ValueIterator */ 
