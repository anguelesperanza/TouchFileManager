#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_hx_strings__CharIterator_InputCharIterator
#include <hx/strings/_CharIterator/InputCharIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d90c307ece713da_269_new,"hx.strings._CharIterator.InputCharIterator","new",0xfb9d00cb,"hx.strings._CharIterator.InputCharIterator.new","hx/strings/CharIterator.hx",269,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d90c307ece713da_283_isEOF,"hx.strings._CharIterator.InputCharIterator","isEOF",0x0591741d,"hx.strings._CharIterator.InputCharIterator.isEOF","hx/strings/CharIterator.hx",283,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d90c307ece713da_297_getChar,"hx.strings._CharIterator.InputCharIterator","getChar",0xbfc35077,"hx.strings._CharIterator.InputCharIterator.getChar","hx/strings/CharIterator.hx",297,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d90c307ece713da_311_readUtf8Char,"hx.strings._CharIterator.InputCharIterator","readUtf8Char",0x939e0452,"hx.strings._CharIterator.InputCharIterator.readUtf8Char","hx/strings/CharIterator.hx",311,0x1504f62e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d90c307ece713da_374_readUtf8MultiSequenceByte,"hx.strings._CharIterator.InputCharIterator","readUtf8MultiSequenceByte",0x9f78e306,"hx.strings._CharIterator.InputCharIterator.readUtf8MultiSequenceByte","hx/strings/CharIterator.hx",374,0x1504f62e)
namespace hx{
namespace strings{
namespace _CharIterator{

void InputCharIterator_obj::__construct( ::haxe::io::Input chars,int prevBufferSize){
            	HX_STACKFRAME(&_hx_pos_0d90c307ece713da_269_new)
HXLINE( 274)		this->nextCharAvailable = null();
HXLINE( 273)		this->nextChar = -1;
HXLINE( 272)		this->currCharIndex = -1;
HXLINE( 270)		this->byteIndex = 0;
HXLINE( 277)		super::__construct(prevBufferSize);
HXLINE( 278)		this->input = chars;
            	}

Dynamic InputCharIterator_obj::__CreateEmpty() { return new InputCharIterator_obj; }

void *InputCharIterator_obj::_hx_vtable = 0;

Dynamic InputCharIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputCharIterator_obj > _hx_result = new InputCharIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool InputCharIterator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1962fe5d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1962fe5d;
	} else {
		return inClassId==(int)0x59db4936;
	}
}

bool InputCharIterator_obj::isEOF(){
            	HX_STACKFRAME(&_hx_pos_0d90c307ece713da_283_isEOF)
HXLINE( 284)		if (::hx::IsNull( this->nextCharAvailable )) {
HXLINE( 285)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 286)				int byte1 = this->input->readByte();
HXDLIN( 286)				this->byteIndex++;
HXDLIN( 286)				int _hx_tmp;
HXDLIN( 286)				if ((byte1 <= 127)) {
HXLINE( 286)					_hx_tmp = byte1;
            				}
            				else {
HXLINE( 286)					byte1 = (byte1 & -129);
HXDLIN( 286)					byte1 = (byte1 & -65);
HXDLIN( 286)					int totalBytes = 2;
HXDLIN( 286)					bool isBit6Set = (1 == ((byte1 >> 5) & 1));
HXDLIN( 286)					bool isBit5Set = false;
HXDLIN( 286)					if (isBit6Set) {
HXLINE( 286)						byte1 = (byte1 & -33);
HXDLIN( 286)						totalBytes = (totalBytes + 1);
HXDLIN( 286)						isBit5Set = (1 == ((byte1 >> 4) & 1));
HXDLIN( 286)						if (isBit5Set) {
HXLINE( 286)							byte1 = (byte1 & -17);
HXDLIN( 286)							totalBytes = (totalBytes + 1);
HXDLIN( 286)							if ((1 == ((byte1 >> 3) & 1))) {
HXLINE( 286)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 byte expected at position [",6f,4c,4a,03) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte1) + HX_("]!",24,51,00,00))));
            							}
            						}
            					}
HXDLIN( 286)					int result = (byte1 << (6 * (totalBytes - 1)));
HXDLIN( 286)					int byte = this->input->readByte();
HXDLIN( 286)					this->byteIndex++;
HXDLIN( 286)					if ((1 != ((byte >> 7) & 1))) {
HXLINE( 286)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            					}
HXDLIN( 286)					if ((1 == ((byte >> 6) & 1))) {
HXLINE( 286)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            					}
HXDLIN( 286)					int byte2 = (byte & -129);
HXDLIN( 286)					result = (result + (byte2 << (6 * (totalBytes - 2))));
HXDLIN( 286)					if (isBit6Set) {
HXLINE( 286)						int byte = this->input->readByte();
HXDLIN( 286)						this->byteIndex++;
HXDLIN( 286)						if ((1 != ((byte >> 7) & 1))) {
HXLINE( 286)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            						}
HXDLIN( 286)						if ((1 == ((byte >> 6) & 1))) {
HXLINE( 286)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            						}
HXDLIN( 286)						int byte3 = (byte & -129);
HXDLIN( 286)						result = (result + (byte3 << (6 * (totalBytes - 3))));
HXDLIN( 286)						if (isBit5Set) {
HXLINE( 286)							int byte = this->input->readByte();
HXDLIN( 286)							this->byteIndex++;
HXDLIN( 286)							if ((1 != ((byte >> 7) & 1))) {
HXLINE( 286)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            							}
HXDLIN( 286)							if ((1 == ((byte >> 6) & 1))) {
HXLINE( 286)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            							}
HXDLIN( 286)							int byte4 = (byte & -129);
HXDLIN( 286)							result = (result + (byte4 << (6 * (totalBytes - 4))));
            						}
            					}
HXDLIN( 286)					bool _hx_tmp1;
HXDLIN( 286)					if ((this->index == 0)) {
HXLINE( 286)						_hx_tmp1 = (result == 65279);
            					}
            					else {
HXLINE( 286)						_hx_tmp1 = false;
            					}
HXDLIN( 286)					if (_hx_tmp1) {
HXLINE( 286)						int byte1 = this->input->readByte();
HXDLIN( 286)						this->byteIndex++;
HXDLIN( 286)						if ((byte1 <= 127)) {
HXLINE( 286)							_hx_tmp = byte1;
            						}
            						else {
HXLINE( 286)							byte1 = (byte1 & -129);
HXDLIN( 286)							byte1 = (byte1 & -65);
HXDLIN( 286)							int totalBytes = 2;
HXDLIN( 286)							bool isBit6Set = (1 == ((byte1 >> 5) & 1));
HXDLIN( 286)							bool isBit5Set = false;
HXDLIN( 286)							if (isBit6Set) {
HXLINE( 286)								byte1 = (byte1 & -33);
HXDLIN( 286)								totalBytes = (totalBytes + 1);
HXDLIN( 286)								isBit5Set = (1 == ((byte1 >> 4) & 1));
HXDLIN( 286)								if (isBit5Set) {
HXLINE( 286)									byte1 = (byte1 & -17);
HXDLIN( 286)									totalBytes = (totalBytes + 1);
HXDLIN( 286)									if ((1 == ((byte1 >> 3) & 1))) {
HXLINE( 286)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 byte expected at position [",6f,4c,4a,03) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte1) + HX_("]!",24,51,00,00))));
            									}
            								}
            							}
HXDLIN( 286)							int result = (byte1 << (6 * (totalBytes - 1)));
HXDLIN( 286)							int byte = this->input->readByte();
HXDLIN( 286)							this->byteIndex++;
HXDLIN( 286)							if ((1 != ((byte >> 7) & 1))) {
HXLINE( 286)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            							}
HXDLIN( 286)							if ((1 == ((byte >> 6) & 1))) {
HXLINE( 286)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            							}
HXDLIN( 286)							int byte2 = (byte & -129);
HXDLIN( 286)							result = (result + (byte2 << (6 * (totalBytes - 2))));
HXDLIN( 286)							if (isBit6Set) {
HXLINE( 286)								int byte = this->input->readByte();
HXDLIN( 286)								this->byteIndex++;
HXDLIN( 286)								if ((1 != ((byte >> 7) & 1))) {
HXLINE( 286)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            								}
HXDLIN( 286)								if ((1 == ((byte >> 6) & 1))) {
HXLINE( 286)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            								}
HXDLIN( 286)								int byte3 = (byte & -129);
HXDLIN( 286)								result = (result + (byte3 << (6 * (totalBytes - 3))));
HXDLIN( 286)								if (isBit5Set) {
HXLINE( 286)									int byte = this->input->readByte();
HXDLIN( 286)									this->byteIndex++;
HXDLIN( 286)									if ((1 != ((byte >> 7) & 1))) {
HXLINE( 286)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            									}
HXDLIN( 286)									if ((1 == ((byte >> 6) & 1))) {
HXLINE( 286)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            									}
HXDLIN( 286)									int byte4 = (byte & -129);
HXDLIN( 286)									result = (result + (byte4 << (6 * (totalBytes - 4))));
            								}
            							}
HXDLIN( 286)							bool _hx_tmp1;
HXDLIN( 286)							if ((this->index == 0)) {
HXLINE( 286)								_hx_tmp1 = (result == 65279);
            							}
            							else {
HXLINE( 286)								_hx_tmp1 = false;
            							}
HXDLIN( 286)							if (_hx_tmp1) {
HXLINE( 286)								_hx_tmp = this->readUtf8Char();
            							}
            							else {
HXLINE( 286)								_hx_tmp = result;
            							}
            						}
            					}
            					else {
HXLINE( 286)						_hx_tmp = result;
            					}
            				}
HXDLIN( 286)				this->nextChar = _hx_tmp;
HXLINE( 287)				this->nextCharAvailable = true;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 288)					{
HXLINE( 288)						null();
            					}
HXLINE( 285)					if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 289)						this->nextCharAvailable = false;
            					}
            					else {
HXLINE( 285)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 292)		return ::hx::IsNotEq( this->nextCharAvailable,true );
            	}


int InputCharIterator_obj::getChar(){
            	HX_STACKFRAME(&_hx_pos_0d90c307ece713da_297_getChar)
HXLINE( 298)		if ((this->index != this->currCharIndex)) {
HXLINE( 299)			this->currCharIndex = this->index;
HXLINE( 300)			this->nextCharAvailable = null();
HXLINE( 301)			return this->nextChar;
            		}
HXLINE( 303)		return this->currChar;
            	}


int InputCharIterator_obj::readUtf8Char(){
            	HX_STACKFRAME(&_hx_pos_0d90c307ece713da_311_readUtf8Char)
HXLINE( 312)		int byte1 = this->input->readByte();
HXLINE( 313)		this->byteIndex++;
HXLINE( 314)		if ((byte1 <= 127)) {
HXLINE( 315)			return byte1;
            		}
HXLINE( 321)		byte1 = (byte1 & -129);
HXLINE( 322)		byte1 = (byte1 & -65);
HXLINE( 323)		int totalBytes = 2;
HXLINE( 325)		bool isBit6Set = (1 == ((byte1 >> 5) & 1));
HXLINE( 326)		bool isBit5Set = false;
HXLINE( 327)		if (isBit6Set) {
HXLINE( 328)			byte1 = (byte1 & -33);
HXLINE( 329)			totalBytes = (totalBytes + 1);
HXLINE( 331)			isBit5Set = (1 == ((byte1 >> 4) & 1));
HXLINE( 332)			if (isBit5Set) {
HXLINE( 333)				byte1 = (byte1 & -17);
HXLINE( 334)				totalBytes = (totalBytes + 1);
HXLINE( 336)				if ((1 == ((byte1 >> 3) & 1))) {
HXLINE( 337)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 byte expected at position [",6f,4c,4a,03) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte1) + HX_("]!",24,51,00,00))));
            				}
            			}
            		}
HXLINE( 341)		int result = (byte1 << (6 * (totalBytes - 1)));
HXLINE( 346)		int byte = this->input->readByte();
HXDLIN( 346)		this->byteIndex++;
HXDLIN( 346)		if ((1 != ((byte >> 7) & 1))) {
HXLINE( 346)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            		}
HXDLIN( 346)		if ((1 == ((byte >> 6) & 1))) {
HXLINE( 346)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            		}
HXDLIN( 346)		int byte2 = (byte & -129);
HXLINE( 347)		result = (result + (byte2 << (6 * (totalBytes - 2))));
HXLINE( 352)		if (isBit6Set) {
HXLINE( 353)			int byte = this->input->readByte();
HXDLIN( 353)			this->byteIndex++;
HXDLIN( 353)			if ((1 != ((byte >> 7) & 1))) {
HXLINE( 353)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            			}
HXDLIN( 353)			if ((1 == ((byte >> 6) & 1))) {
HXLINE( 353)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            			}
HXDLIN( 353)			int byte3 = (byte & -129);
HXLINE( 354)			result = (result + (byte3 << (6 * (totalBytes - 3))));
HXLINE( 359)			if (isBit5Set) {
HXLINE( 360)				int byte = this->input->readByte();
HXDLIN( 360)				this->byteIndex++;
HXDLIN( 360)				if ((1 != ((byte >> 7) & 1))) {
HXLINE( 360)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            				}
HXDLIN( 360)				if ((1 == ((byte >> 6) & 1))) {
HXLINE( 360)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            				}
HXDLIN( 360)				int byte4 = (byte & -129);
HXLINE( 361)				result = (result + (byte4 << (6 * (totalBytes - 4))));
            			}
            		}
HXLINE( 366)		bool _hx_tmp;
HXDLIN( 366)		if ((this->index == 0)) {
HXLINE( 366)			_hx_tmp = (result == 65279);
            		}
            		else {
HXLINE( 366)			_hx_tmp = false;
            		}
HXDLIN( 366)		if (_hx_tmp) {
HXLINE( 367)			return this->readUtf8Char();
            		}
HXLINE( 369)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputCharIterator_obj,readUtf8Char,return )

int InputCharIterator_obj::readUtf8MultiSequenceByte(){
            	HX_STACKFRAME(&_hx_pos_0d90c307ece713da_374_readUtf8MultiSequenceByte)
HXLINE( 375)		int byte = this->input->readByte();
HXLINE( 376)		this->byteIndex++;
HXLINE( 378)		if ((1 != ((byte >> 7) & 1))) {
HXLINE( 379)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            		}
HXLINE( 381)		if ((1 == ((byte >> 6) & 1))) {
HXLINE( 382)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Valid UTF-8 multi-sequence byte expected at position [",c8,79,bd,80) + this->byteIndex) + HX_("] but found byte with value [",6a,c4,be,83)) + byte) + HX_("]!",24,51,00,00))));
            		}
HXLINE( 384)		return (byte & -129);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputCharIterator_obj,readUtf8MultiSequenceByte,return )


::hx::ObjectPtr< InputCharIterator_obj > InputCharIterator_obj::__new( ::haxe::io::Input chars,int prevBufferSize) {
	::hx::ObjectPtr< InputCharIterator_obj > __this = new InputCharIterator_obj();
	__this->__construct(chars,prevBufferSize);
	return __this;
}

::hx::ObjectPtr< InputCharIterator_obj > InputCharIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input chars,int prevBufferSize) {
	InputCharIterator_obj *__this = (InputCharIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputCharIterator_obj), true, "hx.strings._CharIterator.InputCharIterator"));
	*(void **)__this = InputCharIterator_obj::_hx_vtable;
	__this->__construct(chars,prevBufferSize);
	return __this;
}

InputCharIterator_obj::InputCharIterator_obj()
{
}

void InputCharIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputCharIterator);
	HX_MARK_MEMBER_NAME(byteIndex,"byteIndex");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(currCharIndex,"currCharIndex");
	HX_MARK_MEMBER_NAME(nextChar,"nextChar");
	HX_MARK_MEMBER_NAME(nextCharAvailable,"nextCharAvailable");
	 ::hx::strings::CharIterator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InputCharIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteIndex,"byteIndex");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(currCharIndex,"currCharIndex");
	HX_VISIT_MEMBER_NAME(nextChar,"nextChar");
	HX_VISIT_MEMBER_NAME(nextCharAvailable,"nextCharAvailable");
	 ::hx::strings::CharIterator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InputCharIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"isEOF") ) { return ::hx::Val( isEOF_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getChar") ) { return ::hx::Val( getChar_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextChar") ) { return ::hx::Val( nextChar ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"byteIndex") ) { return ::hx::Val( byteIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUtf8Char") ) { return ::hx::Val( readUtf8Char_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currCharIndex") ) { return ::hx::Val( currCharIndex ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextCharAvailable") ) { return ::hx::Val( nextCharAvailable ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"readUtf8MultiSequenceByte") ) { return ::hx::Val( readUtf8MultiSequenceByte_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InputCharIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextChar") ) { nextChar=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"byteIndex") ) { byteIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currCharIndex") ) { currCharIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextCharAvailable") ) { nextCharAvailable=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputCharIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("byteIndex",ea,6e,49,54));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("currCharIndex",0a,cb,62,23));
	outFields->push(HX_("nextChar",69,05,8c,ed));
	outFields->push(HX_("nextCharAvailable",20,bf,2c,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InputCharIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InputCharIterator_obj,byteIndex),HX_("byteIndex",ea,6e,49,54)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(InputCharIterator_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsInt,(int)offsetof(InputCharIterator_obj,currCharIndex),HX_("currCharIndex",0a,cb,62,23)},
	{::hx::fsInt,(int)offsetof(InputCharIterator_obj,nextChar),HX_("nextChar",69,05,8c,ed)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InputCharIterator_obj,nextCharAvailable),HX_("nextCharAvailable",20,bf,2c,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InputCharIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String InputCharIterator_obj_sMemberFields[] = {
	HX_("byteIndex",ea,6e,49,54),
	HX_("input",0a,c4,1d,be),
	HX_("currCharIndex",0a,cb,62,23),
	HX_("nextChar",69,05,8c,ed),
	HX_("nextCharAvailable",20,bf,2c,6d),
	HX_("isEOF",f2,12,4b,c1),
	HX_("getChar",8c,0e,42,14),
	HX_("readUtf8Char",1d,1a,6d,6a),
	HX_("readUtf8MultiSequenceByte",5b,ca,91,0a),
	::String(null()) };

::hx::Class InputCharIterator_obj::__mClass;

void InputCharIterator_obj::__register()
{
	InputCharIterator_obj _hx_dummy;
	InputCharIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._CharIterator.InputCharIterator",59,3f,ac,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InputCharIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InputCharIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputCharIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputCharIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator
