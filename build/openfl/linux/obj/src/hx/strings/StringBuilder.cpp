#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings__StringBuilder_OutputWrapper
#include <hx/strings/_StringBuilder/OutputWrapper.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b646f356da37ac48_21_new,"hx.strings.StringBuilder","new",0xee97d452,"hx.strings.StringBuilder.new","hx/strings/StringBuilder.hx",21,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_55_get_length,"hx.strings.StringBuilder","get_length",0x5ad142fd,"hx.strings.StringBuilder.get_length","hx/strings/StringBuilder.hx",55,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_68_add,"hx.strings.StringBuilder","add",0xee8df613,"hx.strings.StringBuilder.add","hx/strings/StringBuilder.hx",68,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_85_addChar,"hx.strings.StringBuilder","addChar",0x68f68689,"hx.strings.StringBuilder.addChar","hx/strings/StringBuilder.hx",85,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_109_addAll,"hx.strings.StringBuilder","addAll",0x8ed088ce,"hx.strings.StringBuilder.addAll","hx/strings/StringBuilder.hx",109,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_129_clear,"hx.strings.StringBuilder","clear",0x529dd5ff,"hx.strings.StringBuilder.clear","hx/strings/StringBuilder.hx",129,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_153_isEmpty,"hx.strings.StringBuilder","isEmpty",0xf759c335,"hx.strings.StringBuilder.isEmpty","hx/strings/StringBuilder.hx",153,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_161_newLine,"hx.strings.StringBuilder","newLine",0xe279a966,"hx.strings.StringBuilder.newLine","hx/strings/StringBuilder.hx",161,0x236fa860)
static const ::String _hx_array_data_b6270360_9[] = {
	HX_("\n",0a,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_188_insert,"hx.strings.StringBuilder","insert",0x8db2c287,"hx.strings.StringBuilder.insert","hx/strings/StringBuilder.hx",188,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_266_insertChar,"hx.strings.StringBuilder","insertChar",0xf2ec9cfd,"hx.strings.StringBuilder.insertChar","hx/strings/StringBuilder.hx",266,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_335_insertAll,"hx.strings.StringBuilder","insertAll",0x225ffcda,"hx.strings.StringBuilder.insertAll","hx/strings/StringBuilder.hx",335,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_426_asOutput,"hx.strings.StringBuilder","asOutput",0x4b058861,"hx.strings.StringBuilder.asOutput","hx/strings/StringBuilder.hx",426,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_440_toString,"hx.strings.StringBuilder","toString",0xe81d3f7a,"hx.strings.StringBuilder.toString","hx/strings/StringBuilder.hx",440,0x236fa860)
HX_LOCAL_STACK_FRAME(_hx_pos_b646f356da37ac48_21_boot,"hx.strings.StringBuilder","boot",0xce5af400,"hx.strings.StringBuilder.boot","hx/strings/StringBuilder.hx",21,0x236fa860)
namespace hx{
namespace strings{

void StringBuilder_obj::__construct(::String initialContent){
            	HX_GC_STACKFRAME(&_hx_pos_b646f356da37ac48_21_new)
HXLINE(  27)		this->len = 0;
HXLINE(  26)		this->pre = null();
HXLINE(  23)		this->sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  33)		if (::hx::IsNotNull( initialContent )) {
HXLINE(  34)			this->add(initialContent);
            		}
            	}

Dynamic StringBuilder_obj::__CreateEmpty() { return new StringBuilder_obj; }

void *StringBuilder_obj::_hx_vtable = 0;

Dynamic StringBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringBuilder_obj > _hx_result = new StringBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StringBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32066fb8;
}

int StringBuilder_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_55_get_length)
HXDLIN(  55)		return this->len;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuilder_obj,get_length,return )

 ::hx::strings::StringBuilder StringBuilder_obj::add(::String item){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_68_add)
HXLINE(  69)		{
HXLINE(  69)			 ::StringBuf _this = this->sb;
HXDLIN(  69)			::String x;
HXDLIN(  69)			if (::hx::IsNull( item )) {
HXLINE(  69)				x = HX_("null",87,9e,0e,49);
            			}
            			else {
HXLINE(  69)				x = item;
            			}
HXDLIN(  69)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  69)				_this->flush();
            			}
HXDLIN(  69)			if (::hx::IsNull( _this->b )) {
HXLINE(  69)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  69)				::Array< ::String > _this1 = _this->b;
HXDLIN(  69)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  71)		 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  71)		int _hx_tmp1;
HXDLIN(  71)		if (::hx::IsNull( item )) {
HXLINE(  71)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = item.length;
            		}
HXDLIN(  71)		_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
HXLINE(  73)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringBuilder_obj,add,return )

 ::hx::strings::StringBuilder StringBuilder_obj::addChar(int ch){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_85_addChar)
HXLINE(  89)		bool _hx_tmp;
HXDLIN(  89)		if ((ch > -1)) {
HXLINE(  89)			_hx_tmp = (ch < 128);
            		}
            		else {
HXLINE(  89)			_hx_tmp = false;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  90)			 ::StringBuf _this = this->sb;
HXDLIN(  90)			int c = ch;
HXDLIN(  90)			if ((c >= 127)) {
HXLINE(  90)				::String x = ::String::fromCharCode(c);
HXDLIN(  90)				if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  90)					_this->flush();
            				}
HXDLIN(  90)				if (::hx::IsNull( _this->b )) {
HXLINE(  90)					_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE(  90)					::Array< ::String > _this1 = _this->b;
HXDLIN(  90)					_this1->push(::Std_obj::string(x));
            				}
            			}
            			else {
HXLINE(  90)				if (::hx::IsNull( _this->charBuf )) {
HXLINE(  90)					_this->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN(  90)				_this->charBuf->push(c);
            			}
            		}
            		else {
HXLINE(  92)			 ::StringBuf _this = this->sb;
HXDLIN(  92)			::String x = ::String::fromCharCode(ch);
HXDLIN(  92)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  92)				_this->flush();
            			}
HXDLIN(  92)			if (::hx::IsNull( _this->b )) {
HXLINE(  92)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  92)				::Array< ::String > _this1 = _this->b;
HXDLIN(  92)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  96)		this->len++;
HXLINE(  98)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringBuilder_obj,addChar,return )

 ::hx::strings::StringBuilder StringBuilder_obj::addAll(::Array< ::String > items){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_109_addAll)
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			while((_g < items->length)){
HXLINE( 110)				::String item = items->__get(_g);
HXDLIN( 110)				_g = (_g + 1);
HXLINE( 111)				{
HXLINE( 111)					 ::StringBuf _this = this->sb;
HXDLIN( 111)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 111)						_this->flush();
            					}
HXDLIN( 111)					if (::hx::IsNull( _this->b )) {
HXLINE( 111)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(item));
            					}
            					else {
HXLINE( 111)						::Array< ::String > _this1 = _this->b;
HXDLIN( 111)						_this1->push(::Std_obj::string(item));
            					}
            				}
HXLINE( 113)				 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 113)				int _hx_tmp1;
HXDLIN( 113)				if (::hx::IsNull( item )) {
HXLINE( 113)					_hx_tmp1 = 0;
            				}
            				else {
HXLINE( 113)					_hx_tmp1 = item.length;
            				}
HXDLIN( 113)				_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
            			}
            		}
HXLINE( 116)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringBuilder_obj,addAll,return )

 ::hx::strings::StringBuilder StringBuilder_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_b646f356da37ac48_129_clear)
HXLINE( 135)		this->pre = null();
HXLINE( 136)		this->sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 137)		this->len = 0;
HXLINE( 139)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuilder_obj,clear,return )

bool StringBuilder_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_153_isEmpty)
HXDLIN( 153)		return (this->len == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuilder_obj,isEmpty,return )

 ::hx::strings::StringBuilder StringBuilder_obj::newLine(){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_161_newLine)
HXLINE( 162)		{
HXLINE( 162)			 ::StringBuf _this = this->sb;
HXDLIN( 162)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 162)				_this->flush();
            			}
HXDLIN( 162)			if (::hx::IsNull( _this->b )) {
HXLINE( 162)				_this->b = ::Array_obj< ::String >::fromData( _hx_array_data_b6270360_9,1);
            			}
            			else {
HXLINE( 162)				_this->b->push(HX_("\n",0a,00,00,00));
            			}
            		}
HXLINE( 165)		this->len++;
HXLINE( 167)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuilder_obj,newLine,return )

 ::hx::strings::StringBuilder StringBuilder_obj::insert(int pos,::String item){
            	HX_GC_STACKFRAME(&_hx_pos_b646f356da37ac48_188_insert)
HXLINE( 189)		if ((pos < 0)) {
HXLINE( 189)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must not be negative",4a,29,00,72)));
            		}
HXLINE( 190)		if ((pos > this->len)) {
HXLINE( 190)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must not be greater than this.length",72,00,e4,81)));
            		}
HXLINE( 192)		if ((pos == this->len)) {
HXLINE( 193)			this->add(item);
HXLINE( 194)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 202)		if ((pos == 0)) {
HXLINE( 203)			if (::hx::IsNull( this->pre )) {
HXLINE( 203)				this->pre = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 204)			this->pre->unshift(item);
HXLINE( 205)			 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)			int _hx_tmp1;
HXDLIN( 205)			if (::hx::IsNull( item )) {
HXLINE( 205)				_hx_tmp1 = 0;
            			}
            			else {
HXLINE( 205)				_hx_tmp1 = item.length;
            			}
HXDLIN( 205)			_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
HXLINE( 206)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 210)		int pre_len = 0;
HXLINE( 211)		if (::hx::IsNotNull( this->pre )) {
HXLINE( 212)			::Array< ::String > pre = this->pre;
HXLINE( 213)			int i = pre->length;
HXLINE( 214)			{
HXLINE( 214)				int _g = 0;
HXDLIN( 214)				int _g1 = pre->length;
HXDLIN( 214)				while((_g < _g1)){
HXLINE( 214)					_g = (_g + 1);
HXDLIN( 214)					int i = (_g - 1);
HXLINE( 215)					::String str = pre->__get(i);
HXDLIN( 215)					int next_pre_len;
HXDLIN( 215)					if (::hx::IsNull( str )) {
HXLINE( 215)						next_pre_len = 0;
            					}
            					else {
HXLINE( 215)						next_pre_len = str.length;
            					}
HXDLIN( 215)					int next_pre_len1 = (pre_len + next_pre_len);
HXLINE( 216)					if ((next_pre_len1 == pos)) {
HXLINE( 217)						pre->insert((i + 1),item);
HXLINE( 218)						 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)						int _hx_tmp1;
HXDLIN( 218)						if (::hx::IsNull( item )) {
HXLINE( 218)							_hx_tmp1 = 0;
            						}
            						else {
HXLINE( 218)							_hx_tmp1 = item.length;
            						}
HXDLIN( 218)						_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
HXLINE( 219)						return ::hx::ObjectPtr<OBJ_>(this);
            					}
HXLINE( 221)					if ((next_pre_len1 > pos)) {
HXLINE( 222)						::Array< ::String > preSplitted = ::hx::strings::Strings_obj::splitAt(pre->__get(i),::Array_obj< int >::__new(1)->init(0,(pos - pre_len)));
HXLINE( 223)						pre[i] = preSplitted->__get(0);
HXLINE( 224)						pre->insert((i + 1),item);
HXLINE( 225)						pre->insert((i + 2),preSplitted->__get(1));
HXLINE( 226)						 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)						int _hx_tmp1;
HXDLIN( 226)						if (::hx::IsNull( item )) {
HXLINE( 226)							_hx_tmp1 = 0;
            						}
            						else {
HXLINE( 226)							_hx_tmp1 = item.length;
            						}
HXDLIN( 226)						_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
HXLINE( 227)						return ::hx::ObjectPtr<OBJ_>(this);
            					}
HXLINE( 229)					pre_len = next_pre_len1;
            				}
            			}
            		}
HXLINE( 233)		if ((this->sb->get_length() == 0)) {
HXLINE( 234)			this->add(item);
HXLINE( 235)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 238)		::Array< ::String > sbSplitted = ::hx::strings::Strings_obj::splitAt(this->sb->toString(),::Array_obj< int >::__new(1)->init(0,(pos - pre_len)));
HXLINE( 239)		this->sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 240)		{
HXLINE( 240)			 ::StringBuf _this = this->sb;
HXDLIN( 240)			::String x = sbSplitted->__get(0);
HXDLIN( 240)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 240)				_this->flush();
            			}
HXDLIN( 240)			if (::hx::IsNull( _this->b )) {
HXLINE( 240)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 240)				::Array< ::String > _this1 = _this->b;
HXDLIN( 240)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 241)		{
HXLINE( 241)			 ::StringBuf _this1 = this->sb;
HXDLIN( 241)			if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 241)				_this1->flush();
            			}
HXDLIN( 241)			if (::hx::IsNull( _this1->b )) {
HXLINE( 241)				_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(item));
            			}
            			else {
HXLINE( 241)				::Array< ::String > _this = _this1->b;
HXDLIN( 241)				_this->push(::Std_obj::string(item));
            			}
            		}
HXLINE( 242)		 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 242)		int _hx_tmp1;
HXDLIN( 242)		if (::hx::IsNull( item )) {
HXLINE( 242)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 242)			_hx_tmp1 = item.length;
            		}
HXDLIN( 242)		_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
HXLINE( 243)		{
HXLINE( 243)			 ::StringBuf _this2 = this->sb;
HXDLIN( 243)			::String x1 = sbSplitted->__get(1);
HXDLIN( 243)			if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 243)				_this2->flush();
            			}
HXDLIN( 243)			if (::hx::IsNull( _this2->b )) {
HXLINE( 243)				_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 243)				::Array< ::String > _this = _this2->b;
HXDLIN( 243)				_this->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 245)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringBuilder_obj,insert,return )

 ::hx::strings::StringBuilder StringBuilder_obj::insertChar(int pos,int ch){
            	HX_GC_STACKFRAME(&_hx_pos_b646f356da37ac48_266_insertChar)
HXLINE( 267)		if ((pos < 0)) {
HXLINE( 267)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must not be negative",4a,29,00,72)));
            		}
HXLINE( 268)		if ((pos > this->len)) {
HXLINE( 268)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must not be greater than this.length",72,00,e4,81)));
            		}
HXLINE( 270)		if ((pos == this->len)) {
HXLINE( 271)			this->addChar(ch);
HXLINE( 272)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 280)		if ((pos == 0)) {
HXLINE( 281)			if (::hx::IsNull( this->pre )) {
HXLINE( 281)				this->pre = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 282)			this->pre->unshift(::String::fromCharCode(ch));
HXLINE( 283)			this->len++;
HXLINE( 284)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 288)		int pre_len = 0;
HXLINE( 289)		if (::hx::IsNotNull( this->pre )) {
HXLINE( 290)			::Array< ::String > pre = this->pre;
HXLINE( 291)			int i = pre->length;
HXLINE( 292)			{
HXLINE( 292)				int _g = 0;
HXDLIN( 292)				int _g1 = pre->length;
HXDLIN( 292)				while((_g < _g1)){
HXLINE( 292)					_g = (_g + 1);
HXDLIN( 292)					int i = (_g - 1);
HXLINE( 293)					::String str = pre->__get(i);
HXDLIN( 293)					int next_pre_len;
HXDLIN( 293)					if (::hx::IsNull( str )) {
HXLINE( 293)						next_pre_len = 0;
            					}
            					else {
HXLINE( 293)						next_pre_len = str.length;
            					}
HXDLIN( 293)					int next_pre_len1 = (pre_len + next_pre_len);
HXLINE( 294)					if ((next_pre_len1 == pos)) {
HXLINE( 295)						pre->insert((i + 1),::String::fromCharCode(ch));
HXLINE( 296)						this->len++;
HXLINE( 297)						return ::hx::ObjectPtr<OBJ_>(this);
            					}
HXLINE( 299)					if ((next_pre_len1 > pos)) {
HXLINE( 300)						::Array< ::String > preSplitted = ::hx::strings::Strings_obj::splitAt(pre->__get(i),::Array_obj< int >::__new(1)->init(0,(pos - pre_len)));
HXLINE( 301)						pre[i] = preSplitted->__get(0);
HXLINE( 302)						pre->insert((i + 1),::String::fromCharCode(ch));
HXLINE( 303)						pre->insert((i + 2),preSplitted->__get(1));
HXLINE( 304)						this->len++;
HXLINE( 305)						return ::hx::ObjectPtr<OBJ_>(this);
            					}
HXLINE( 307)					pre_len = next_pre_len1;
            				}
            			}
            		}
HXLINE( 311)		if ((this->sb->get_length() == 0)) {
HXLINE( 312)			this->addChar(ch);
HXLINE( 313)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 316)		::Array< ::String > sbSplitted = ::hx::strings::Strings_obj::splitAt(this->sb->toString(),::Array_obj< int >::__new(1)->init(0,(pos - pre_len)));
HXLINE( 317)		this->sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 318)		{
HXLINE( 318)			 ::StringBuf _this = this->sb;
HXDLIN( 318)			::String x = sbSplitted->__get(0);
HXDLIN( 318)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 318)				_this->flush();
            			}
HXDLIN( 318)			if (::hx::IsNull( _this->b )) {
HXLINE( 318)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 318)				::Array< ::String > _this1 = _this->b;
HXDLIN( 318)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 319)		this->addChar(ch);
HXLINE( 320)		{
HXLINE( 320)			 ::StringBuf _this1 = this->sb;
HXDLIN( 320)			::String x1 = sbSplitted->__get(1);
HXDLIN( 320)			if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 320)				_this1->flush();
            			}
HXDLIN( 320)			if (::hx::IsNull( _this1->b )) {
HXLINE( 320)				_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 320)				::Array< ::String > _this = _this1->b;
HXDLIN( 320)				_this->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 322)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringBuilder_obj,insertChar,return )

 ::hx::strings::StringBuilder StringBuilder_obj::insertAll(int pos,::Array< ::String > items){
            	HX_GC_STACKFRAME(&_hx_pos_b646f356da37ac48_335_insertAll)
HXLINE( 336)		if ((pos < 0)) {
HXLINE( 336)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must not be negative",4a,29,00,72)));
            		}
HXLINE( 337)		if ((pos > this->len)) {
HXLINE( 337)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must not be greater than this.length",72,00,e4,81)));
            		}
HXLINE( 339)		if ((pos == this->len)) {
HXLINE( 340)			this->addAll(items);
HXLINE( 341)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 355)		if ((pos == 0)) {
HXLINE( 356)			if (::hx::IsNull( this->pre )) {
HXLINE( 356)				this->pre = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 357)			::Array< ::String > pre = this->pre;
HXLINE( 358)			int i = items->length;
HXLINE( 359)			while(true){
HXLINE( 359)				i = (i - 1);
HXDLIN( 359)				if (!(((i + 1) > 0))) {
HXLINE( 359)					goto _hx_goto_14;
            				}
HXLINE( 360)				::String item = items->__get(i);
HXLINE( 361)				pre->unshift(item);
HXLINE( 362)				 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 362)				int _hx_tmp1;
HXDLIN( 362)				if (::hx::IsNull( item )) {
HXLINE( 362)					_hx_tmp1 = 0;
            				}
            				else {
HXLINE( 362)					_hx_tmp1 = item.length;
            				}
HXDLIN( 362)				_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
            			}
            			_hx_goto_14:;
HXLINE( 364)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 368)		int pre_len = 0;
HXLINE( 369)		if (::hx::IsNotNull( this->pre )) {
HXLINE( 370)			::Array< ::String > pre = this->pre;
HXLINE( 371)			int i = pre->length;
HXLINE( 372)			{
HXLINE( 372)				int _g = 0;
HXDLIN( 372)				int _g1 = pre->length;
HXDLIN( 372)				while((_g < _g1)){
HXLINE( 372)					_g = (_g + 1);
HXDLIN( 372)					int i = (_g - 1);
HXLINE( 373)					::String str = pre->__get(i);
HXDLIN( 373)					int next_pre_len;
HXDLIN( 373)					if (::hx::IsNull( str )) {
HXLINE( 373)						next_pre_len = 0;
            					}
            					else {
HXLINE( 373)						next_pre_len = str.length;
            					}
HXDLIN( 373)					int next_pre_len1 = (pre_len + next_pre_len);
HXLINE( 374)					if ((next_pre_len1 == pos)) {
HXLINE( 375)						int j = items->length;
HXLINE( 376)						while(true){
HXLINE( 376)							j = (j - 1);
HXDLIN( 376)							if (!(((j + 1) > 0))) {
HXLINE( 376)								goto _hx_goto_16;
            							}
HXLINE( 377)							::String item = items->__get(j);
HXLINE( 378)							pre->insert((i + 1),item);
HXLINE( 379)							 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 379)							int _hx_tmp1;
HXDLIN( 379)							if (::hx::IsNull( item )) {
HXLINE( 379)								_hx_tmp1 = 0;
            							}
            							else {
HXLINE( 379)								_hx_tmp1 = item.length;
            							}
HXDLIN( 379)							_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
            						}
            						_hx_goto_16:;
HXLINE( 381)						return ::hx::ObjectPtr<OBJ_>(this);
            					}
HXLINE( 383)					if ((next_pre_len1 > pos)) {
HXLINE( 384)						::Array< ::String > preSplitted = ::hx::strings::Strings_obj::splitAt(pre->__get(i),::Array_obj< int >::__new(1)->init(0,(pos - pre_len)));
HXLINE( 385)						pre[i] = preSplitted->__get(0);
HXLINE( 386)						pre->insert((i + 1),preSplitted->__get(1));
HXLINE( 387)						int j = items->length;
HXLINE( 388)						while(true){
HXLINE( 388)							j = (j - 1);
HXDLIN( 388)							if (!(((j + 1) > 0))) {
HXLINE( 388)								goto _hx_goto_17;
            							}
HXLINE( 389)							::String item = items->__get(j);
HXLINE( 390)							pre->insert((i + 1),item);
HXLINE( 391)							 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 391)							int _hx_tmp1;
HXDLIN( 391)							if (::hx::IsNull( item )) {
HXLINE( 391)								_hx_tmp1 = 0;
            							}
            							else {
HXLINE( 391)								_hx_tmp1 = item.length;
            							}
HXDLIN( 391)							_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
            						}
            						_hx_goto_17:;
HXLINE( 393)						return ::hx::ObjectPtr<OBJ_>(this);
            					}
HXLINE( 395)					pre_len = next_pre_len1;
            				}
            			}
            		}
HXLINE( 399)		if ((this->sb->get_length() == 0)) {
HXLINE( 400)			{
HXLINE( 400)				int _g = 0;
HXDLIN( 400)				while((_g < items->length)){
HXLINE( 400)					::String item = items->__get(_g);
HXDLIN( 400)					_g = (_g + 1);
HXLINE( 401)					this->add(item);
            				}
            			}
HXLINE( 402)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 405)		::Array< ::String > sbSplitted = ::hx::strings::Strings_obj::splitAt(this->sb->toString(),::Array_obj< int >::__new(1)->init(0,(pos - pre_len)));
HXLINE( 406)		this->sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 407)		{
HXLINE( 407)			 ::StringBuf _this = this->sb;
HXDLIN( 407)			::String x = sbSplitted->__get(0);
HXDLIN( 407)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 407)				_this->flush();
            			}
HXDLIN( 407)			if (::hx::IsNull( _this->b )) {
HXLINE( 407)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 407)				::Array< ::String > _this1 = _this->b;
HXDLIN( 407)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 408)		{
HXLINE( 408)			int _g = 0;
HXDLIN( 408)			while((_g < items->length)){
HXLINE( 408)				::String item = items->__get(_g);
HXDLIN( 408)				_g = (_g + 1);
HXLINE( 409)				{
HXLINE( 409)					 ::StringBuf _this = this->sb;
HXDLIN( 409)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 409)						_this->flush();
            					}
HXDLIN( 409)					if (::hx::IsNull( _this->b )) {
HXLINE( 409)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(item));
            					}
            					else {
HXLINE( 409)						::Array< ::String > _this1 = _this->b;
HXDLIN( 409)						_this1->push(::Std_obj::string(item));
            					}
            				}
HXLINE( 410)				 ::hx::strings::StringBuilder _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 410)				int _hx_tmp1;
HXDLIN( 410)				if (::hx::IsNull( item )) {
HXLINE( 410)					_hx_tmp1 = 0;
            				}
            				else {
HXLINE( 410)					_hx_tmp1 = item.length;
            				}
HXDLIN( 410)				_hx_tmp->len = (_hx_tmp->len + _hx_tmp1);
            			}
            		}
HXLINE( 412)		{
HXLINE( 412)			 ::StringBuf _this1 = this->sb;
HXDLIN( 412)			::String x1 = sbSplitted->__get(1);
HXDLIN( 412)			if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 412)				_this1->flush();
            			}
HXDLIN( 412)			if (::hx::IsNull( _this1->b )) {
HXLINE( 412)				_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 412)				::Array< ::String > _this = _this1->b;
HXDLIN( 412)				_this->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 414)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringBuilder_obj,insertAll,return )

 ::haxe::io::Output StringBuilder_obj::asOutput(){
            	HX_GC_STACKFRAME(&_hx_pos_b646f356da37ac48_426_asOutput)
HXDLIN( 426)		return  ::hx::strings::_StringBuilder::OutputWrapper_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuilder_obj,asOutput,return )

::String StringBuilder_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_440_toString)
HXLINE( 444)		if (::hx::IsNull( this->pre )) {
HXLINE( 445)			return this->sb->toString();
            		}
HXLINE( 446)		::String str = this->pre->join(HX_("",00,00,00,00));
HXDLIN( 446)		::String str1 = (str + this->sb->toString());
HXLINE( 447)		this->clear();
HXLINE( 448)		this->add(str1);
HXLINE( 449)		return str1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuilder_obj,toString,return )


::hx::ObjectPtr< StringBuilder_obj > StringBuilder_obj::__new(::String initialContent) {
	::hx::ObjectPtr< StringBuilder_obj > __this = new StringBuilder_obj();
	__this->__construct(initialContent);
	return __this;
}

::hx::ObjectPtr< StringBuilder_obj > StringBuilder_obj::__alloc(::hx::Ctx *_hx_ctx,::String initialContent) {
	StringBuilder_obj *__this = (StringBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringBuilder_obj), true, "hx.strings.StringBuilder"));
	*(void **)__this = StringBuilder_obj::_hx_vtable;
	__this->__construct(initialContent);
	return __this;
}

StringBuilder_obj::StringBuilder_obj()
{
}

void StringBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringBuilder);
	HX_MARK_MEMBER_NAME(sb,"sb");
	HX_MARK_MEMBER_NAME(pre,"pre");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_END_CLASS();
}

void StringBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sb,"sb");
	HX_VISIT_MEMBER_NAME(pre,"pre");
	HX_VISIT_MEMBER_NAME(len,"len");
}

::hx::Val StringBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sb") ) { return ::hx::Val( sb ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pre") ) { return ::hx::Val( pre ); }
		if (HX_FIELD_EQ(inName,"len") ) { return ::hx::Val( len ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return ::hx::Val( addAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { return ::hx::Val( addChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"newLine") ) { return ::hx::Val( newLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"asOutput") ) { return ::hx::Val( asOutput_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"insertAll") ) { return ::hx::Val( insertAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"insertChar") ) { return ::hx::Val( insertChar_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sb") ) { sb=inValue.Cast<  ::StringBuf >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pre") ) { pre=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sb",8f,64,00,00));
	outFields->push(HX_("pre",23,60,55,00));
	outFields->push(HX_("len",d5,4b,52,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::StringBuf */ ,(int)offsetof(StringBuilder_obj,sb),HX_("sb",8f,64,00,00)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StringBuilder_obj,pre),HX_("pre",23,60,55,00)},
	{::hx::fsInt,(int)offsetof(StringBuilder_obj,len),HX_("len",d5,4b,52,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String StringBuilder_obj_sMemberFields[] = {
	HX_("sb",8f,64,00,00),
	HX_("pre",23,60,55,00),
	HX_("len",d5,4b,52,00),
	HX_("get_length",af,04,8f,8f),
	HX_("add",21,f2,49,00),
	HX_("addChar",97,a1,fc,7d),
	HX_("addAll",80,09,fb,9e),
	HX_("clear",8d,71,5b,48),
	HX_("isEmpty",43,de,5f,0c),
	HX_("newLine",74,c4,7f,f7),
	HX_("insert",39,43,dd,9d),
	HX_("insertChar",af,5e,aa,27),
	HX_("insertAll",68,77,6d,19),
	HX_("asOutput",93,19,57,9b),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class StringBuilder_obj::__mClass;

void StringBuilder_obj::__register()
{
	StringBuilder_obj _hx_dummy;
	StringBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.StringBuilder",60,03,27,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StringBuilder_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b646f356da37ac48_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("notThreadSafe",2a,64,46,1e),null()))));
            	}
}

} // end namespace hx
} // end namespace strings
