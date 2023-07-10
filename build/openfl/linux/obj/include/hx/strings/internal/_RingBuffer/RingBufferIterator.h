#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferIterator
#define INCLUDED_hx_strings_internal__RingBuffer_RingBufferIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_RingBuffer,RingBufferImpl)
HX_DECLARE_CLASS4(hx,strings,internal,_RingBuffer,RingBufferIterator)

namespace hx{
namespace strings{
namespace internal{
namespace _RingBuffer{


class HXCPP_CLASS_ATTRIBUTES RingBufferIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RingBufferIterator_obj OBJ_;
		RingBufferIterator_obj();

	public:
		enum { _hx_ClassId = 0x54b58b3e };

		void __construct( ::hx::strings::internal::_RingBuffer::RingBufferImpl buff);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.internal._RingBuffer.RingBufferIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.internal._RingBuffer.RingBufferIterator"); }
		static ::hx::ObjectPtr< RingBufferIterator_obj > __new( ::hx::strings::internal::_RingBuffer::RingBufferImpl buff);
		static ::hx::ObjectPtr< RingBufferIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::strings::internal::_RingBuffer::RingBufferImpl buff);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RingBufferIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RingBufferIterator",fe,ee,ad,f8); }

		 ::hx::strings::internal::_RingBuffer::RingBufferImpl buff;
		int idx;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _RingBuffer

#endif /* INCLUDED_hx_strings_internal__RingBuffer_RingBufferIterator */ 
