#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
#ifndef INCLUDED_hx_strings_CharPos
#include <hx/strings/CharPos.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_ArrayCharIterator
#include <hx/strings/_CharIterator/ArrayCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_CharWithPos
#include <hx/strings/_CharIterator/CharWithPos.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_InputCharIterator
#include <hx/strings/_CharIterator/InputCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_IteratorCharIterator
#include <hx/strings/_CharIterator/IteratorCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_NullCharIterator
#include <hx/strings/_CharIterator/NullCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_StringCharIterator
#include <hx/strings/_CharIterator/StringCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl
#include <hx/strings/internal/_RingBuffer/RingBufferImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_17_new,"hx.strings.CharIterator","new",0xc35be280,"hx.strings.CharIterator.new","hx/strings/CharIterator.hx",17,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_105_get_current,"hx.strings.CharIterator","get_current",0xb4752e70,"hx.strings.CharIterator.get_current","hx/strings/CharIterator.hx",105,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_110_get_pos,"hx.strings.CharIterator","get_pos",0xb115c84b,"hx.strings.CharIterator.get_pos","hx/strings/CharIterator.hx",110,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_119_hasPrev,"hx.strings.CharIterator","hasPrev",0xa3ee818d,"hx.strings.CharIterator.hasPrev","hx/strings/CharIterator.hx",119,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_127_prev,"hx.strings.CharIterator","prev",0x2e6688d3,"hx.strings.CharIterator.prev","hx/strings/CharIterator.hx",127,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_145_hasNext,"hx.strings.CharIterator","hasNext",0xa292478d,"hx.strings.CharIterator.hasNext","hx/strings/CharIterator.hx",145,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_153_next,"hx.strings.CharIterator","next",0x2d0a4ed3,"hx.strings.CharIterator.next","hx/strings/CharIterator.hx",153,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_190_getChar,"hx.strings.CharIterator","getChar",0x9e8db0ac,"hx.strings.CharIterator.getChar","hx/strings/CharIterator.hx",190,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_192_isEOF,"hx.strings.CharIterator","isEOF",0x6413ed12,"hx.strings.CharIterator.isEOF","hx/strings/CharIterator.hx",192,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_31_fromString,"hx.strings.CharIterator","fromString",0x34c09fbb,"hx.strings.CharIterator.fromString","hx/strings/CharIterator.hx",31,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_49_fromArray,"hx.strings.CharIterator","fromArray",0x4828c1ef,"hx.strings.CharIterator.fromArray","hx/strings/CharIterator.hx",49,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_69_fromInput,"hx.strings.CharIterator","fromInput",0xe0b71860,"hx.strings.CharIterator.fromInput","hx/strings/CharIterator.hx",69,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe0227c992c8ab4_87_fromIterator,"hx.strings.CharIterator","fromIterator",0x1565cf58,"hx.strings.CharIterator.fromIterator","hx/strings/CharIterator.hx",87,0x1504f62e)
namespace hx{
namespace strings{

void CharIterator_obj::__construct(int prevBufferSize){
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_17_new)
HXLINE( 100)		this->prevBufferNextIdx = -1;
HXLINE(  99)		this->prevBufferPrevIdx = -1;
HXLINE(  96)		this->currChar = -1;
HXLINE(  95)		this->col = 0;
HXLINE(  94)		this->line = 0;
HXLINE(  93)		this->index = -1;
HXLINE( 114)		 ::hx::strings::internal::_RingBuffer::RingBufferImpl _hx_tmp;
HXDLIN( 114)		if ((prevBufferSize > 0)) {
HXLINE( 114)			 ::hx::strings::internal::_RingBuffer::RingBufferImpl this1 =  ::hx::strings::internal::_RingBuffer::RingBufferImpl_obj::__alloc( HX_CTX ,(prevBufferSize + 1));
HXDLIN( 114)			_hx_tmp = this1;
            		}
            		else {
HXLINE( 114)			_hx_tmp = null();
            		}
HXDLIN( 114)		this->prevBuffer = _hx_tmp;
            	}

Dynamic CharIterator_obj::__CreateEmpty() { return new CharIterator_obj; }

void *CharIterator_obj::_hx_vtable = 0;

Dynamic CharIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharIterator_obj > _hx_result = new CharIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CharIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59db4936;
}

 ::Dynamic CharIterator_obj::get_current(){
            	HX_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_105_get_current)
HXDLIN( 105)		if ((this->index > -1)) {
HXDLIN( 105)			return this->currChar;
            		}
            		else {
HXDLIN( 105)			return null();
            		}
HXDLIN( 105)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,get_current,return )

 ::hx::strings::CharPos CharIterator_obj::get_pos(){
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_110_get_pos)
HXDLIN( 110)		return  ::hx::strings::CharPos_obj::__alloc( HX_CTX ,this->index,this->line,this->col);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,get_pos,return )

bool CharIterator_obj::hasPrev(){
            	HX_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_119_hasPrev)
HXDLIN( 119)		return (this->prevBufferPrevIdx > -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,hasPrev,return )

int CharIterator_obj::prev(){
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_127_prev)
HXLINE( 128)		if ((this->prevBufferPrevIdx <= -1)) {
HXLINE( 129)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::haxe::io::Eof_obj::__alloc( HX_CTX )));
            		}
HXLINE( 131)		 ::hx::strings::_CharIterator::CharWithPos prevChar = this->prevBuffer->get(this->prevBufferPrevIdx).StaticCast<  ::hx::strings::_CharIterator::CharWithPos >();
HXLINE( 132)		this->currChar = prevChar->_hx_char;
HXLINE( 133)		this->index = prevChar->index;
HXLINE( 134)		this->line = prevChar->line;
HXLINE( 135)		this->col = prevChar->col;
HXLINE( 137)		int _hx_tmp;
HXDLIN( 137)		if (((this->prevBufferPrevIdx + 1) < this->prevBuffer->length)) {
HXLINE( 137)			_hx_tmp = (this->prevBufferPrevIdx + 1);
            		}
            		else {
HXLINE( 137)			_hx_tmp = -1;
            		}
HXDLIN( 137)		this->prevBufferNextIdx = _hx_tmp;
HXLINE( 138)		this->prevBufferPrevIdx--;
HXLINE( 139)		return this->currChar;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,prev,return )

bool CharIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_145_hasNext)
HXDLIN( 145)		if ((this->prevBufferNextIdx > -1)) {
HXDLIN( 145)			return true;
            		}
            		else {
HXDLIN( 145)			return !(this->isEOF());
            		}
HXDLIN( 145)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,hasNext,return )

int CharIterator_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_153_next)
HXLINE( 154)		if ((this->prevBufferNextIdx > -1)) {
HXLINE( 155)			 ::hx::strings::_CharIterator::CharWithPos prevChar = this->prevBuffer->get(this->prevBufferNextIdx).StaticCast<  ::hx::strings::_CharIterator::CharWithPos >();
HXLINE( 156)			this->currChar = prevChar->_hx_char;
HXLINE( 157)			this->index = prevChar->index;
HXLINE( 158)			this->line = prevChar->line;
HXLINE( 159)			this->col = prevChar->col;
HXLINE( 160)			this->prevBufferPrevIdx = (this->prevBufferNextIdx - 1);
HXLINE( 161)			int _hx_tmp;
HXDLIN( 161)			if (((this->prevBufferNextIdx + 1) < this->prevBuffer->length)) {
HXLINE( 161)				_hx_tmp = (this->prevBufferNextIdx + 1);
            			}
            			else {
HXLINE( 161)				_hx_tmp = -1;
            			}
HXDLIN( 161)			this->prevBufferNextIdx = _hx_tmp;
HXLINE( 162)			return this->currChar;
            		}
HXLINE( 165)		if (this->isEOF()) {
HXLINE( 166)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::haxe::io::Eof_obj::__alloc( HX_CTX )));
            		}
HXLINE( 168)		bool _hx_tmp;
HXDLIN( 168)		if ((this->currChar != 10)) {
HXLINE( 168)			_hx_tmp = (this->currChar < 0);
            		}
            		else {
HXLINE( 168)			_hx_tmp = true;
            		}
HXDLIN( 168)		if (_hx_tmp) {
HXLINE( 169)			this->line++;
HXLINE( 170)			this->col = 0;
            		}
HXLINE( 173)		this->index++;
HXLINE( 174)		this->col++;
HXLINE( 175)		this->currChar = this->getChar();
HXLINE( 177)		if (::hx::IsNotNull( this->prevBuffer )) {
HXLINE( 178)			 ::hx::strings::internal::_RingBuffer::RingBufferImpl _hx_tmp = this->prevBuffer;
HXDLIN( 178)			_hx_tmp->add( ::hx::strings::_CharIterator::CharWithPos_obj::__alloc( HX_CTX ,this->currChar,this->index,this->col,this->line));
HXLINE( 179)			this->prevBufferPrevIdx = (this->prevBuffer->length - 2);
HXLINE( 180)			this->prevBufferNextIdx = -1;
            		}
HXLINE( 183)		return this->currChar;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,next,return )

int CharIterator_obj::getChar(){
            	HX_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_190_getChar)
HXDLIN( 190)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,getChar,return )

bool CharIterator_obj::isEOF(){
            	HX_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_192_isEOF)
HXDLIN( 192)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 192)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharIterator_obj,isEOF,return )

 ::hx::strings::CharIterator CharIterator_obj::fromString(::String chars,::hx::Null< int >  __o_prevBufferSize){
            		int prevBufferSize = __o_prevBufferSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_31_fromString)
HXLINE(  32)		if (::hx::IsNull( chars )) {
HXLINE(  32)			return ::hx::strings::_CharIterator::NullCharIterator_obj::INSTANCE;
            		}
HXLINE(  33)		return  ::hx::strings::_CharIterator::StringCharIterator_obj::__alloc( HX_CTX ,chars,prevBufferSize);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CharIterator_obj,fromString,return )

 ::hx::strings::CharIterator CharIterator_obj::fromArray(::Array< int > chars,::hx::Null< int >  __o_prevBufferSize){
            		int prevBufferSize = __o_prevBufferSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_49_fromArray)
HXLINE(  50)		if (::hx::IsNull( chars )) {
HXLINE(  50)			return ::hx::strings::_CharIterator::NullCharIterator_obj::INSTANCE;
            		}
HXLINE(  51)		return  ::hx::strings::_CharIterator::ArrayCharIterator_obj::__alloc( HX_CTX ,chars,prevBufferSize);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CharIterator_obj,fromArray,return )

 ::hx::strings::CharIterator CharIterator_obj::fromInput( ::haxe::io::Input chars,::hx::Null< int >  __o_prevBufferSize){
            		int prevBufferSize = __o_prevBufferSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_69_fromInput)
HXLINE(  70)		if (::hx::IsNull( chars )) {
HXLINE(  70)			return ::hx::strings::_CharIterator::NullCharIterator_obj::INSTANCE;
            		}
HXLINE(  71)		return  ::hx::strings::_CharIterator::InputCharIterator_obj::__alloc( HX_CTX ,chars,prevBufferSize);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CharIterator_obj,fromInput,return )

 ::hx::strings::CharIterator CharIterator_obj::fromIterator( ::Dynamic chars,::hx::Null< int >  __o_prevBufferSize){
            		int prevBufferSize = __o_prevBufferSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_cfe0227c992c8ab4_87_fromIterator)
HXLINE(  88)		if (::hx::IsNull( chars )) {
HXLINE(  88)			return ::hx::strings::_CharIterator::NullCharIterator_obj::INSTANCE;
            		}
HXLINE(  89)		return  ::hx::strings::_CharIterator::IteratorCharIterator_obj::__alloc( HX_CTX ,chars,prevBufferSize);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CharIterator_obj,fromIterator,return )


::hx::ObjectPtr< CharIterator_obj > CharIterator_obj::__new(int prevBufferSize) {
	::hx::ObjectPtr< CharIterator_obj > __this = new CharIterator_obj();
	__this->__construct(prevBufferSize);
	return __this;
}

::hx::ObjectPtr< CharIterator_obj > CharIterator_obj::__alloc(::hx::Ctx *_hx_ctx,int prevBufferSize) {
	CharIterator_obj *__this = (CharIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharIterator_obj), true, "hx.strings.CharIterator"));
	*(void **)__this = CharIterator_obj::_hx_vtable;
	__this->__construct(prevBufferSize);
	return __this;
}

CharIterator_obj::CharIterator_obj()
{
}

void CharIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharIterator);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(col,"col");
	HX_MARK_MEMBER_NAME(currChar,"currChar");
	HX_MARK_MEMBER_NAME(prevBuffer,"prevBuffer");
	HX_MARK_MEMBER_NAME(prevBufferPrevIdx,"prevBufferPrevIdx");
	HX_MARK_MEMBER_NAME(prevBufferNextIdx,"prevBufferNextIdx");
	HX_MARK_END_CLASS();
}

void CharIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(col,"col");
	HX_VISIT_MEMBER_NAME(currChar,"currChar");
	HX_VISIT_MEMBER_NAME(prevBuffer,"prevBuffer");
	HX_VISIT_MEMBER_NAME(prevBufferPrevIdx,"prevBufferPrevIdx");
	HX_VISIT_MEMBER_NAME(prevBufferNextIdx,"prevBufferNextIdx");
}

::hx::Val CharIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { return ::hx::Val( col ); }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"isEOF") ) { return ::hx::Val( isEOF_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_current() ); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasPrev") ) { return ::hx::Val( hasPrev_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChar") ) { return ::hx::Val( getChar_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currChar") ) { return ::hx::Val( currChar ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"prevBuffer") ) { return ::hx::Val( prevBuffer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_current") ) { return ::hx::Val( get_current_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prevBufferPrevIdx") ) { return ::hx::Val( prevBufferPrevIdx ); }
		if (HX_FIELD_EQ(inName,"prevBufferNextIdx") ) { return ::hx::Val( prevBufferNextIdx ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CharIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromInput") ) { outValue = fromInput_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromIterator") ) { outValue = fromIterator_dyn(); return true; }
	}
	return false;
}

::hx::Val CharIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { col=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currChar") ) { currChar=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"prevBuffer") ) { prevBuffer=inValue.Cast<  ::hx::strings::internal::_RingBuffer::RingBufferImpl >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prevBufferPrevIdx") ) { prevBufferPrevIdx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevBufferNextIdx") ) { prevBufferNextIdx=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("col",40,80,4b,00));
	outFields->push(HX_("currChar",e8,36,c7,84));
	outFields->push(HX_("prevBuffer",53,28,0a,d1));
	outFields->push(HX_("prevBufferPrevIdx",f7,96,79,3a));
	outFields->push(HX_("prevBufferNextIdx",f7,90,f5,a3));
	outFields->push(HX_("current",39,9c,e3,cb));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CharIterator_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(CharIterator_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsInt,(int)offsetof(CharIterator_obj,col),HX_("col",40,80,4b,00)},
	{::hx::fsInt,(int)offsetof(CharIterator_obj,currChar),HX_("currChar",e8,36,c7,84)},
	{::hx::fsObject /*  ::hx::strings::internal::_RingBuffer::RingBufferImpl */ ,(int)offsetof(CharIterator_obj,prevBuffer),HX_("prevBuffer",53,28,0a,d1)},
	{::hx::fsInt,(int)offsetof(CharIterator_obj,prevBufferPrevIdx),HX_("prevBufferPrevIdx",f7,96,79,3a)},
	{::hx::fsInt,(int)offsetof(CharIterator_obj,prevBufferNextIdx),HX_("prevBufferNextIdx",f7,90,f5,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String CharIterator_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("line",f4,17,b3,47),
	HX_("col",40,80,4b,00),
	HX_("currChar",e8,36,c7,84),
	HX_("prevBuffer",53,28,0a,d1),
	HX_("prevBufferPrevIdx",f7,96,79,3a),
	HX_("prevBufferNextIdx",f7,90,f5,a3),
	HX_("get_current",50,fc,dd,51),
	HX_("get_pos",2b,26,ca,26),
	HX_("hasPrev",6d,df,a2,19),
	HX_("prev",f3,be,5e,4a),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	HX_("getChar",8c,0e,42,14),
	HX_("isEOF",f2,12,4b,c1),
	::String(null()) };

::hx::Class CharIterator_obj::__mClass;

static ::String CharIterator_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("fromArray",cf,57,18,da),
	HX_("fromInput",40,ae,a6,72),
	HX_("fromIterator",78,25,b1,33),
	::String(null())
};

void CharIterator_obj::__register()
{
	CharIterator_obj _hx_dummy;
	CharIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.CharIterator",8e,e2,a0,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CharIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CharIterator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
