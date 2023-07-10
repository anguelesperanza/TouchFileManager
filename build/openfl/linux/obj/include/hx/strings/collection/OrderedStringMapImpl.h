#ifndef INCLUDED_hx_strings_collection_OrderedStringMapImpl
#define INCLUDED_hx_strings_collection_OrderedStringMapImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(hx,strings,collection,OrderedStringMapImpl)

namespace hx{
namespace strings{
namespace collection{


class HXCPP_CLASS_ATTRIBUTES OrderedStringMapImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OrderedStringMapImpl_obj OBJ_;
		OrderedStringMapImpl_obj();

	public:
		enum { _hx_ClassId = 0x040d8162 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.collection.OrderedStringMapImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.collection.OrderedStringMapImpl"); }
		static ::hx::ObjectPtr< OrderedStringMapImpl_obj > __new();
		static ::hx::ObjectPtr< OrderedStringMapImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OrderedStringMapImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		bool remove_64bfc92f( ::Dynamic k);

		bool exists_64bfc92f( ::Dynamic k);

		void set_dca24b06( ::Dynamic k, ::Dynamic v);

		 ::Dynamic get_a7a2487a( ::Dynamic k);
		::String __ToString() const { return HX_("OrderedStringMapImpl",3e,92,55,81); }

		::Array< ::String > _hx___keys;
		::Dynamic __map;
		int get_size();
		::Dynamic get_size_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::hx::strings::collection::OrderedStringMapImpl copy();
		::Dynamic copy_dyn();

		bool exists(::String key);
		::Dynamic exists_dyn();

		 ::Dynamic get(::String key);
		::Dynamic get_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		 ::Dynamic keys();
		::Dynamic keys_dyn();

		 ::Dynamic keyValueIterator();
		::Dynamic keyValueIterator_dyn();

		bool remove(::String key);
		::Dynamic remove_dyn();

		void set(::String key, ::Dynamic value);
		::Dynamic set_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection

#endif /* INCLUDED_hx_strings_collection_OrderedStringMapImpl */ 
