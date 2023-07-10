#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl
#include <hx/strings/internal/_RingBuffer/RingBufferImpl.h>
#endif
#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBuffer_Impl_
#include <hx/strings/internal/_RingBuffer/RingBuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3cebf4ff2b9d9354_18__new,"hx.strings.internal._RingBuffer.RingBuffer_Impl_","_new",0x6dde28f9,"hx.strings.internal._RingBuffer.RingBuffer_Impl_._new","hx/strings/internal/RingBuffer.hx",18,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebf4ff2b9d9354_26_get,"hx.strings.internal._RingBuffer.RingBuffer_Impl_","get",0x6589e7fe,"hx.strings.internal._RingBuffer.RingBuffer_Impl_.get","hx/strings/internal/RingBuffer.hx",26,0xc9fcbcc8)
namespace hx{
namespace strings{
namespace internal{
namespace _RingBuffer{

void RingBuffer_Impl__obj::__construct() { }

Dynamic RingBuffer_Impl__obj::__CreateEmpty() { return new RingBuffer_Impl__obj; }

void *RingBuffer_Impl__obj::_hx_vtable = 0;

Dynamic RingBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RingBuffer_Impl__obj > _hx_result = new RingBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RingBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x702615d0;
}

 ::hx::strings::internal::_RingBuffer::RingBufferImpl RingBuffer_Impl__obj::_new(int size){
            	HX_GC_STACKFRAME(&_hx_pos_3cebf4ff2b9d9354_18__new)
HXDLIN(  18)		 ::hx::strings::internal::_RingBuffer::RingBufferImpl this1 =  ::hx::strings::internal::_RingBuffer::RingBufferImpl_obj::__alloc( HX_CTX ,size);
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RingBuffer_Impl__obj,_new,return )

 ::Dynamic RingBuffer_Impl__obj::get( ::hx::strings::internal::_RingBuffer::RingBufferImpl this1,int index){
            	HX_STACKFRAME(&_hx_pos_3cebf4ff2b9d9354_26_get)
HXDLIN(  26)		return this1->get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RingBuffer_Impl__obj,get,return )


RingBuffer_Impl__obj::RingBuffer_Impl__obj()
{
}

bool RingBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RingBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RingBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class RingBuffer_Impl__obj::__mClass;

static ::String RingBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get",96,80,4e,00),
	::String(null())
};

void RingBuffer_Impl__obj::__register()
{
	RingBuffer_Impl__obj _hx_dummy;
	RingBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal._RingBuffer.RingBuffer_Impl_",d6,f3,9d,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RingBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RingBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RingBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RingBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RingBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _RingBuffer
