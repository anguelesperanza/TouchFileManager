#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl
#define INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_RingBuffer,RingBufferImpl)

namespace hx{
namespace strings{
namespace internal{
namespace _RingBuffer{


class HXCPP_CLASS_ATTRIBUTES RingBufferImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RingBufferImpl_obj OBJ_;
		RingBufferImpl_obj();

	public:
		enum { _hx_ClassId = 0x2726d830 };

		void __construct(int size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.internal._RingBuffer.RingBufferImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.internal._RingBuffer.RingBufferImpl"); }
		static ::hx::ObjectPtr< RingBufferImpl_obj > __new(int size);
		static ::hx::ObjectPtr< RingBufferImpl_obj > __alloc(::hx::Ctx *_hx_ctx,int size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RingBufferImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RingBufferImpl",f0,5b,b2,9e); }

		::cpp::VirtualArray buffer;
		int bufferStartIdx;
		int bufferEndIdx;
		int bufferMaxIdx;
		int length;
		int size;
		void add( ::Dynamic item);
		::Dynamic add_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::cpp::VirtualArray toArray();
		::Dynamic toArray_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _RingBuffer

#endif /* INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl */ 
