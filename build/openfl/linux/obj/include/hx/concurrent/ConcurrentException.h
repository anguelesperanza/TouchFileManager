#ifndef INCLUDED_hx_concurrent_ConcurrentException
#define INCLUDED_hx_concurrent_ConcurrentException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(hx,concurrent,ConcurrentException)

namespace hx{
namespace concurrent{


class HXCPP_CLASS_ATTRIBUTES ConcurrentException_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ConcurrentException_obj OBJ_;
		ConcurrentException_obj();

	public:
		enum { _hx_ClassId = 0x1cef1b2d };

		void __construct( ::Dynamic cause);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.concurrent.ConcurrentException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.concurrent.ConcurrentException"); }
		static ::hx::ObjectPtr< ConcurrentException_obj > __new( ::Dynamic cause);
		static ::hx::ObjectPtr< ConcurrentException_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic cause);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConcurrentException_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConcurrentException",f8,a0,4f,cd); }

		static void __boot();
		static ::String INDENT;
		static  ::hx::concurrent::ConcurrentException capture( ::Dynamic ex);
		static ::Dynamic capture_dyn();

		 ::Dynamic cause;
		::Array< ::Dynamic> causeStackTrace;
		void rethrow();
		::Dynamic rethrow_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace concurrent

#endif /* INCLUDED_hx_concurrent_ConcurrentException */ 
