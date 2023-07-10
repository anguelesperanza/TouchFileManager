#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBuffer_Impl_
#define INCLUDED_hx_strings_internal__RingBuffer_RingBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_RingBuffer,RingBufferImpl)
HX_DECLARE_CLASS4(hx,strings,internal,_RingBuffer,RingBuffer_Impl_)

namespace hx{
namespace strings{
namespace internal{
namespace _RingBuffer{


class HXCPP_CLASS_ATTRIBUTES RingBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RingBuffer_Impl__obj OBJ_;
		RingBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x702615d0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal._RingBuffer.RingBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.internal._RingBuffer.RingBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< RingBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< RingBuffer_Impl__obj > __this = new RingBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RingBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			RingBuffer_Impl__obj *__this = (RingBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RingBuffer_Impl__obj), false, "hx.strings.internal._RingBuffer.RingBuffer_Impl_"));
			*(void **)__this = RingBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RingBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RingBuffer_Impl_",90,09,6a,84); }

		static  ::hx::strings::internal::_RingBuffer::RingBufferImpl _new(int size);
		static ::Dynamic _new_dyn();

		static  ::Dynamic get( ::hx::strings::internal::_RingBuffer::RingBufferImpl this1,int index);
		static ::Dynamic get_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _RingBuffer

#endif /* INCLUDED_hx_strings_internal__RingBuffer_RingBuffer_Impl_ */ 
