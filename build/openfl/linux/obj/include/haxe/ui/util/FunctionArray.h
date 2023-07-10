#ifndef INCLUDED_haxe_ui_util_FunctionArray
#define INCLUDED_haxe_ui_util_FunctionArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,FunctionArray)
HX_DECLARE_CLASS4(haxe,ui,util,_Listener,ListenerInternal)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FunctionArray_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FunctionArray_obj OBJ_;
		FunctionArray_obj();

	public:
		enum { _hx_ClassId = 0x7faf4ee1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.FunctionArray")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.util.FunctionArray"); }
		static ::hx::ObjectPtr< FunctionArray_obj > __new();
		static ::hx::ObjectPtr< FunctionArray_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FunctionArray_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FunctionArray",41,4b,5f,a2); }

		::Array< ::Dynamic> _array;
		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		int length;
		int get_length();
		::Dynamic get_length_dyn();

		int push( ::Dynamic x,::hx::Null< int >  priority);
		::Dynamic push_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		int indexOf( ::Dynamic x,::hx::Null< int >  fromIndex);
		::Dynamic indexOf_dyn();

		bool remove( ::Dynamic x);
		::Dynamic remove_dyn();

		bool contains( ::Dynamic x);
		::Dynamic contains_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		 ::haxe::ui::util::FunctionArray copy();
		::Dynamic copy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_FunctionArray */ 
