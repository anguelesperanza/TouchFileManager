#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
#endif
#ifndef INCLUDED_hx_strings__StringBuilder_OutputWrapper
#include <hx/strings/_StringBuilder/OutputWrapper.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e766a8f71f6c398_463_new,"hx.strings._StringBuilder.OutputWrapper","new",0xbe7087eb,"hx.strings._StringBuilder.OutputWrapper.new","hx/strings/StringBuilder.hx",463,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_4e766a8f71f6c398_468_flush,"hx.strings._StringBuilder.OutputWrapper","flush",0x0afd530f,"hx.strings._StringBuilder.OutputWrapper.flush","hx/strings/StringBuilder.hx",468,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_4e766a8f71f6c398_476_writeByte,"hx.strings._StringBuilder.OutputWrapper","writeByte",0xf0fe8552,"hx.strings._StringBuilder.OutputWrapper.writeByte","hx/strings/StringBuilder.hx",476,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_4e766a8f71f6c398_484_writeString,"hx.strings._StringBuilder.OutputWrapper","writeString",0xfb69359b,"hx.strings._StringBuilder.OutputWrapper.writeString","hx/strings/StringBuilder.hx",484,0x236fa860)
namespace hx{
namespace strings{
namespace _StringBuilder{

void OutputWrapper_obj::__construct( ::hx::strings::StringBuilder sb){
            	HX_STACKFRAME(&_hx_pos_4e766a8f71f6c398_463_new)
HXDLIN( 463)		this->sb = sb;
            	}

Dynamic OutputWrapper_obj::__CreateEmpty() { return new OutputWrapper_obj; }

void *OutputWrapper_obj::_hx_vtable = 0;

Dynamic OutputWrapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutputWrapper_obj > _hx_result = new OutputWrapper_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OutputWrapper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a55a26d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a55a26d;
	} else {
		return inClassId==(int)0x1be2e4f5;
	}
}

void OutputWrapper_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_4e766a8f71f6c398_468_flush)
HXDLIN( 468)		bool _hx_tmp;
HXDLIN( 468)		if (::hx::IsNotNull( this->bo )) {
HXDLIN( 468)			_hx_tmp = (this->bo->b->b->length > 0);
            		}
            		else {
HXDLIN( 468)			_hx_tmp = false;
            		}
HXDLIN( 468)		if (_hx_tmp) {
HXLINE( 469)			 ::hx::strings::StringBuilder _hx_tmp = this->sb;
HXDLIN( 469)			_hx_tmp->add(this->bo->getBytes()->toString());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(OutputWrapper_obj,flush,(void))

void OutputWrapper_obj::writeByte(int c){
            	HX_GC_STACKFRAME(&_hx_pos_4e766a8f71f6c398_476_writeByte)
HXLINE( 477)		if (::hx::IsNull( this->bo )) {
HXLINE( 477)			this->bo =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
            		}
HXLINE( 478)		this->bo->writeByte(c);
            	}


void OutputWrapper_obj::writeString(::String str, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_4e766a8f71f6c398_484_writeString)
HXLINE( 485)		this->flush();
HXLINE( 486)		this->sb->add(str);
            	}



::hx::ObjectPtr< OutputWrapper_obj > OutputWrapper_obj::__new( ::hx::strings::StringBuilder sb) {
	::hx::ObjectPtr< OutputWrapper_obj > __this = new OutputWrapper_obj();
	__this->__construct(sb);
	return __this;
}

::hx::ObjectPtr< OutputWrapper_obj > OutputWrapper_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::strings::StringBuilder sb) {
	OutputWrapper_obj *__this = (OutputWrapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutputWrapper_obj), true, "hx.strings._StringBuilder.OutputWrapper"));
	*(void **)__this = OutputWrapper_obj::_hx_vtable;
	__this->__construct(sb);
	return __this;
}

OutputWrapper_obj::OutputWrapper_obj()
{
}

void OutputWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutputWrapper);
	HX_MARK_MEMBER_NAME(sb,"sb");
	HX_MARK_MEMBER_NAME(bo,"bo");
	HX_MARK_END_CLASS();
}

void OutputWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sb,"sb");
	HX_VISIT_MEMBER_NAME(bo,"bo");
}

::hx::Val OutputWrapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sb") ) { return ::hx::Val( sb ); }
		if (HX_FIELD_EQ(inName,"bo") ) { return ::hx::Val( bo ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OutputWrapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sb") ) { sb=inValue.Cast<  ::hx::strings::StringBuilder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bo") ) { bo=inValue.Cast<  ::haxe::io::BytesOutput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OutputWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sb",8f,64,00,00));
	outFields->push(HX_("bo",cd,55,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutputWrapper_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::strings::StringBuilder */ ,(int)offsetof(OutputWrapper_obj,sb),HX_("sb",8f,64,00,00)},
	{::hx::fsObject /*  ::haxe::io::BytesOutput */ ,(int)offsetof(OutputWrapper_obj,bo),HX_("bo",cd,55,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OutputWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String OutputWrapper_obj_sMemberFields[] = {
	HX_("sb",8f,64,00,00),
	HX_("bo",cd,55,00,00),
	HX_("flush",c4,62,9b,02),
	HX_("writeByte",87,13,d7,49),
	HX_("writeString",10,7b,29,a6),
	::String(null()) };

::hx::Class OutputWrapper_obj::__mClass;

void OutputWrapper_obj::__register()
{
	OutputWrapper_obj _hx_dummy;
	OutputWrapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._StringBuilder.OutputWrapper",79,b6,25,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutputWrapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutputWrapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutputWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutputWrapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _StringBuilder
