#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl
#include <hx/strings/internal/_RingBuffer/RingBufferImpl.h>
#endif
#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferIterator
#include <hx/strings/internal/_RingBuffer/RingBufferIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_288cb02e11953f11_103_new,"hx.strings.internal._RingBuffer.RingBufferIterator","new",0x0e9dc9b6,"hx.strings.internal._RingBuffer.RingBufferIterator.new","hx/strings/internal/RingBuffer.hx",103,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_288cb02e11953f11_116_hasNext,"hx.strings.internal._RingBuffer.RingBufferIterator","hasNext",0xc9f701c3,"hx.strings.internal._RingBuffer.RingBufferIterator.hasNext","hx/strings/internal/RingBuffer.hx",116,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_288cb02e11953f11_120_next,"hx.strings.internal._RingBuffer.RingBufferIterator","next",0xbb72b6dd,"hx.strings.internal._RingBuffer.RingBufferIterator.next","hx/strings/internal/RingBuffer.hx",120,0xc9fcbcc8)
namespace hx{
namespace strings{
namespace internal{
namespace _RingBuffer{

void RingBufferIterator_obj::__construct( ::hx::strings::internal::_RingBuffer::RingBufferImpl buff){
            	HX_STACKFRAME(&_hx_pos_288cb02e11953f11_103_new)
HXLINE( 106)		this->idx = -1;
HXLINE( 111)		this->buff = buff;
            	}

Dynamic RingBufferIterator_obj::__CreateEmpty() { return new RingBufferIterator_obj; }

void *RingBufferIterator_obj::_hx_vtable = 0;

Dynamic RingBufferIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RingBufferIterator_obj > _hx_result = new RingBufferIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RingBufferIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54b58b3e;
}

bool RingBufferIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_288cb02e11953f11_116_hasNext)
HXDLIN( 116)		return ((this->idx + 1) < this->buff->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RingBufferIterator_obj,hasNext,return )

 ::Dynamic RingBufferIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_288cb02e11953f11_120_next)
HXLINE( 121)		this->idx++;
HXLINE( 122)		return this->buff->get(this->idx);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RingBufferIterator_obj,next,return )


::hx::ObjectPtr< RingBufferIterator_obj > RingBufferIterator_obj::__new( ::hx::strings::internal::_RingBuffer::RingBufferImpl buff) {
	::hx::ObjectPtr< RingBufferIterator_obj > __this = new RingBufferIterator_obj();
	__this->__construct(buff);
	return __this;
}

::hx::ObjectPtr< RingBufferIterator_obj > RingBufferIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::strings::internal::_RingBuffer::RingBufferImpl buff) {
	RingBufferIterator_obj *__this = (RingBufferIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RingBufferIterator_obj), true, "hx.strings.internal._RingBuffer.RingBufferIterator"));
	*(void **)__this = RingBufferIterator_obj::_hx_vtable;
	__this->__construct(buff);
	return __this;
}

RingBufferIterator_obj::RingBufferIterator_obj()
{
}

void RingBufferIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RingBufferIterator);
	HX_MARK_MEMBER_NAME(buff,"buff");
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_END_CLASS();
}

void RingBufferIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buff,"buff");
	HX_VISIT_MEMBER_NAME(idx,"idx");
}

::hx::Val RingBufferIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { return ::hx::Val( idx ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"buff") ) { return ::hx::Val( buff ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RingBufferIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"buff") ) { buff=inValue.Cast<  ::hx::strings::internal::_RingBuffer::RingBufferImpl >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RingBufferIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buff",d3,09,20,41));
	outFields->push(HX_("idx",3d,04,50,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RingBufferIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::strings::internal::_RingBuffer::RingBufferImpl */ ,(int)offsetof(RingBufferIterator_obj,buff),HX_("buff",d3,09,20,41)},
	{::hx::fsInt,(int)offsetof(RingBufferIterator_obj,idx),HX_("idx",3d,04,50,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RingBufferIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String RingBufferIterator_obj_sMemberFields[] = {
	HX_("buff",d3,09,20,41),
	HX_("idx",3d,04,50,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class RingBufferIterator_obj::__mClass;

void RingBufferIterator_obj::__register()
{
	RingBufferIterator_obj _hx_dummy;
	RingBufferIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal._RingBuffer.RingBufferIterator",c4,76,65,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RingBufferIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RingBufferIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RingBufferIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RingBufferIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _RingBuffer
