#ifndef INCLUDED_hx_strings_collection_SortedStringMapImpl
#define INCLUDED_hx_strings_collection_SortedStringMapImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS3(hx,strings,collection,SortedStringMapImpl)

namespace hx{
namespace strings{
namespace collection{


class HXCPP_CLASS_ATTRIBUTES SortedStringMapImpl_obj : public  ::haxe::ds::BalancedTree_obj
{
	public:
		typedef  ::haxe::ds::BalancedTree_obj super;
		typedef SortedStringMapImpl_obj OBJ_;
		SortedStringMapImpl_obj();

	public:
		enum { _hx_ClassId = 0x06286c5e };

		void __construct( ::Dynamic comparator);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.collection.SortedStringMapImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.collection.SortedStringMapImpl"); }
		static ::hx::ObjectPtr< SortedStringMapImpl_obj > __new( ::Dynamic comparator);
		static ::hx::ObjectPtr< SortedStringMapImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic comparator);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SortedStringMapImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		void set_dca24b06( ::Dynamic k, ::Dynamic v);
		::String __ToString() const { return HX_("SortedStringMapImpl",2e,91,be,4a); }

		 ::Dynamic cmp;
		Dynamic cmp_dyn() { return cmp;}
		int get_size();
		::Dynamic get_size_dyn();

		 ::Dynamic _hx___arrayWrite(::String k, ::Dynamic v);
		::Dynamic _hx___arrayWrite_dyn();

		 ::hx::strings::collection::SortedStringMapImpl copy();
		::Dynamic copy_dyn();

		int compare( ::Dynamic _tmp_s1, ::Dynamic _tmp_s2);

		 ::Dynamic get( ::Dynamic _tmp_key);

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		int setAll(::Dynamic source,::hx::Null< bool >  replace);
		::Dynamic setAll_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace collection

#endif /* INCLUDED_hx_strings_collection_SortedStringMapImpl */ 
