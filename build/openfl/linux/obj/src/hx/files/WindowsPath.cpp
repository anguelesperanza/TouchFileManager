#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
#ifndef INCLUDED_hx_files_WindowsPath
#include <hx/files/WindowsPath.h>
#endif
#ifndef INCLUDED_hx_files_internal_OS
#include <hx/files/internal/OS.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings_collection__StringArray_StringArray_Impl_
#include <hx/strings/collection/_StringArray/StringArray_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1201_new,"hx.files.WindowsPath","new",0x4c187ec5,"hx.files.WindowsPath.new","hx/files/Path.hx",1201,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1213_get_root,"hx.files.WindowsPath","get_root",0xd3f9ad26,"hx.files.WindowsPath.get_root","hx/files/Path.hx",1213,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1226_newPathForString,"hx.files.WindowsPath","newPathForString",0xa140a850,"hx.files.WindowsPath.newPathForString","hx/files/Path.hx",1226,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1231_newPathForChild,"hx.files.WindowsPath","newPathForChild",0xc817defd,"hx.files.WindowsPath.newPathForChild","hx/files/Path.hx",1231,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1061_of,"hx.files.WindowsPath","of",0xe3a44652,"hx.files.WindowsPath.of","hx/files/Path.hx",1061,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1088_clean,"hx.files.WindowsPath","clean",0x9174432e,"hx.files.WindowsPath.clean","hx/files/Path.hx",1088,0x962760c2)
static const ::String _hx_array_data_a15eb853_11[] = {
	HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1043_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1043,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1048_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1048,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1049_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1049,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1052_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1052,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1053_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1053,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1054_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1054,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_5d4b4b2c8f79f1af_1055_boot,"hx.files.WindowsPath","boot",0x416f6e2d,"hx.files.WindowsPath.boot","hx/files/Path.hx",1055,0x962760c2)
namespace hx{
namespace files{

void WindowsPath_obj::__construct( ::hx::files::Path parent,::String path){
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1201_new)
HXLINE(1202)		if (::hx::IsNull( path )) {
HXLINE(1203)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path] must not be null",03,20,29,72)));
            		}
HXLINE(1205)		super::__construct(parent,path,HX_("\\",5c,00,00,00),HX_(";",3b,00,00,00),null());
HXLINE(1206)		this->isLocal = ::hx::files::internal::OS_obj::isWindows;
HXLINE(1207)		this->isUnix = false;
HXLINE(1208)		this->isWindows = true;
            	}

Dynamic WindowsPath_obj::__CreateEmpty() { return new WindowsPath_obj; }

void *WindowsPath_obj::_hx_vtable = 0;

Dynamic WindowsPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WindowsPath_obj > _hx_result = new WindowsPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WindowsPath_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12df4900) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12df4900;
	} else {
		return inClassId==(int)0x1f8f56a1;
	}
}

 ::hx::files::Path WindowsPath_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1213_get_root)
HXLINE(1214)		 ::hx::files::Path p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1215)		while(::hx::IsNotNull( p )){
HXLINE(1216)			bool _hx_tmp;
HXDLIN(1216)			bool _hx_tmp1;
HXDLIN(1216)			if (::hx::IsNull( p->parent )) {
HXLINE(1216)				_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::files::WindowsPath_obj::DRIVE_ROOT );
            			}
            			else {
HXLINE(1216)				_hx_tmp1 = false;
            			}
HXDLIN(1216)			if (_hx_tmp1) {
HXLINE(1216)				_hx_tmp = ::hx::strings::Strings_obj::endsWith(p->filename,this->dirSep);
            			}
            			else {
HXLINE(1216)				_hx_tmp = false;
            			}
HXDLIN(1216)			if (_hx_tmp) {
HXLINE(1217)				return p;
            			}
HXLINE(1218)			p = p->parent;
            		}
HXLINE(1220)		return null();
            	}


 ::hx::files::Path WindowsPath_obj::newPathForString(::String path,bool trimWhiteSpaces){
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1226_newPathForString)
HXDLIN(1226)		return ::hx::files::WindowsPath_obj::of(path,trimWhiteSpaces);
            	}


 ::hx::files::Path WindowsPath_obj::newPathForChild(::String filename){
            	HX_GC_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1231_newPathForChild)
HXDLIN(1231)		return  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),filename);
            	}


::String WindowsPath_obj::DIR_SEP;

::String WindowsPath_obj::UNC_PREFIX;

 ::hx::files::WindowsPath WindowsPath_obj::DRIVE_ROOT;

 ::hx::files::WindowsPath WindowsPath_obj::EMPTY;

 ::hx::files::WindowsPath WindowsPath_obj::CURRENT;

 ::hx::files::WindowsPath WindowsPath_obj::PARENT;

 ::hx::files::WindowsPath WindowsPath_obj::of(::String path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1061_of)
HXLINE(1063)		if (::hx::IsNull( path )) {
HXLINE(1064)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path] must not be null",03,20,29,72)));
            		}
HXLINE(1066)		::Array< ::String > parts = ::hx::files::WindowsPath_obj::clean(path,trimWhiteSpaces);
HXLINE(1068)		bool _hx_tmp;
HXDLIN(1068)		if (::hx::IsNotNull( parts )) {
HXLINE(1068)			_hx_tmp = (parts->length == 0);
            		}
            		else {
HXLINE(1068)			_hx_tmp = true;
            		}
HXDLIN(1068)		if (_hx_tmp) {
HXLINE(1069)			return ::hx::files::WindowsPath_obj::EMPTY;
            		}
HXLINE(1071)		 ::hx::files::WindowsPath p = null();
HXLINE(1072)		{
HXLINE(1072)			int _g = 0;
HXDLIN(1072)			int _g1 = parts->length;
HXDLIN(1072)			while((_g < _g1)){
HXLINE(1072)				_g = (_g + 1);
HXDLIN(1072)				int i = (_g - 1);
HXLINE(1073)				::String part = parts->__get(i);
HXLINE(1074)				if ((i == 0)) {
HXLINE(1075)					::String _hx_switch_0 = part;
            					if (  (_hx_switch_0==HX_("..",40,28,00,00)) ){
HXLINE(1077)						p = ::hx::files::WindowsPath_obj::PARENT;
HXDLIN(1077)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("\\",5c,00,00,00)) ){
HXLINE(1076)						p = ::hx::files::WindowsPath_obj::DRIVE_ROOT;
HXDLIN(1076)						goto _hx_goto_6;
            					}
            					/* default */{
HXLINE(1078)						p =  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,null(),part);
            					}
            					_hx_goto_6:;
            				}
            				else {
HXLINE(1081)					p =  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,p,part);
            				}
            			}
            		}
HXLINE(1084)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WindowsPath_obj,of,return )

::Array< ::String > WindowsPath_obj::clean(::String path,bool trimWhiteSpaces){
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1088_clean)
HXLINE(1089)		if (trimWhiteSpaces) {
HXLINE(1090)			path = ( (::String)(::hx::strings::Strings_obj::trim(path,null())) );
            		}
HXLINE(1092)		bool _hx_tmp;
HXDLIN(1092)		if (::hx::IsNotNull( path )) {
HXLINE(1092)			_hx_tmp = (path.length == 0);
            		}
            		else {
HXLINE(1092)			_hx_tmp = true;
            		}
HXDLIN(1092)		if (_hx_tmp) {
HXLINE(1093)			return null();
            		}
HXLINE(1095)		::Array< ::String > parts = ::hx::strings::Strings_obj::split8(path,::Array_obj< ::String >::fromData( _hx_array_data_a15eb853_11,2),null());
HXLINE(1096)		 ::hx::strings::internal::_Either2::_Either2 initialItems = null();
HXDLIN(1096)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN(1096)		if (::hx::IsNotNull( initialItems )) {
HXLINE(1096)			::hx::strings::collection::_StringArray::StringArray_Impl__obj::pushAll(this1,initialItems);
            		}
HXDLIN(1096)		::Array< ::String > cleaned = this1;
HXLINE(1098)		{
HXLINE(1098)			int _g = 0;
HXDLIN(1098)			int _g1 = parts->length;
HXDLIN(1098)			while((_g < _g1)){
HXLINE(1098)				_g = (_g + 1);
HXDLIN(1098)				int i = (_g - 1);
HXLINE(1099)				::String part = parts->__get(i);
HXLINE(1100)				if (trimWhiteSpaces) {
HXLINE(1101)					part = ( (::String)(::hx::strings::Strings_obj::trim(part,null())) );
            				}
HXLINE(1102)				switch((int)(i)){
            					case (int)0: {
HXLINE(1105)						::String _hx_tmp;
HXDLIN(1105)						bool _hx_tmp1;
HXDLIN(1105)						if (::hx::IsNotNull( part )) {
HXLINE(1105)							_hx_tmp1 = (part.length == 0);
            						}
            						else {
HXLINE(1105)							_hx_tmp1 = true;
            						}
HXDLIN(1105)						if (_hx_tmp1) {
HXLINE(1105)							_hx_tmp = HX_("\\",5c,00,00,00);
            						}
            						else {
HXLINE(1105)							_hx_tmp = part;
            						}
HXDLIN(1105)						cleaned->push(_hx_tmp);
            					}
            					break;
            					case (int)1: {
HXLINE(1107)						bool _hx_tmp;
HXDLIN(1107)						if (::hx::IsNotNull( part )) {
HXLINE(1107)							_hx_tmp = (part.length == 0);
            						}
            						else {
HXLINE(1107)							_hx_tmp = true;
            						}
HXDLIN(1107)						if (_hx_tmp) {
HXLINE(1109)							bool _hx_tmp;
HXDLIN(1109)							if ((parts->length > 2)) {
HXLINE(1109)								_hx_tmp = (cleaned->__get(0) == HX_("\\",5c,00,00,00));
            							}
            							else {
HXLINE(1109)								_hx_tmp = false;
            							}
HXDLIN(1109)							if (_hx_tmp) {
HXLINE(1110)								cleaned[0] = HX_("\\\\",80,50,00,00);
            							}
            						}
            						else {
HXLINE(1112)							cleaned->push(part);
            						}
            					}
            					break;
            					default:{
HXLINE(1114)						bool _hx_tmp;
HXDLIN(1114)						if (::hx::IsNotNull( part )) {
HXLINE(1114)							_hx_tmp = (part.length > 0);
            						}
            						else {
HXLINE(1114)							_hx_tmp = false;
            						}
HXDLIN(1114)						if (_hx_tmp) {
HXLINE(1114)							cleaned->push(part);
            						}
            					}
            				}
            			}
            		}
HXLINE(1118)		if ((cleaned->length == 0)) {
HXLINE(1119)			return null();
            		}
HXLINE(1122)		if ((cleaned->__get(0) == HX_("\\\\",80,50,00,00))) {
HXLINE(1124)			if ((cleaned->length == 1)) {
HXLINE(1125)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] UNC path \"",e0,20,27,e8) + path) + HX_("\" is missing hostname.",e9,48,f0,91))));
            			}
HXLINE(1127)			::String part2 = cleaned->__get(1);
HXLINE(1128)			::String _hx_switch_0 = part2;
            			if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ){
HXLINE(1167)				if ((cleaned->length == 2)) {
HXLINE(1168)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] UNC path \"",e0,20,27,e8) + path) + HX_("\" is missing absolute path.",f2,6b,56,90))));
            				}
HXLINE(1170)				::String part3 = cleaned->__get(2);
HXLINE(1171)				bool _hx_tmp;
HXDLIN(1171)				bool _hx_tmp1;
HXDLIN(1171)				if ((part3.length == 2)) {
HXLINE(1171)					int this1 = ::hx::strings::Strings_obj::charCodeAt8(part3,0,null());
HXDLIN(1171)					bool _hx_tmp;
HXDLIN(1171)					if ((this1 > 64)) {
HXLINE(1171)						_hx_tmp = (this1 < 91);
            					}
            					else {
HXLINE(1171)						_hx_tmp = false;
            					}
HXDLIN(1171)					if (!(_hx_tmp)) {
HXLINE(1171)						if ((this1 > 96)) {
HXLINE(1171)							_hx_tmp1 = (this1 < 123);
            						}
            						else {
HXLINE(1171)							_hx_tmp1 = false;
            						}
            					}
            					else {
HXLINE(1171)						_hx_tmp1 = true;
            					}
            				}
            				else {
HXLINE(1171)					_hx_tmp1 = false;
            				}
HXDLIN(1171)				if (_hx_tmp1) {
HXLINE(1171)					_hx_tmp = (::hx::strings::Strings_obj::charCodeAt8(part3,1,null()) == 58);
            				}
            				else {
HXLINE(1171)					_hx_tmp = false;
            				}
HXDLIN(1171)				if (_hx_tmp) {
HXLINE(1173)					cleaned->shift();
HXLINE(1174)					cleaned->shift();
HXLINE(1177)					::String str = ( (::String)(::hx::strings::Strings_obj::charAt8(part3,0,null())) ).toUpperCase();
HXDLIN(1177)					cleaned[0] = ((str + ::String::fromCharCode(58)) + HX_("\\",5c,00,00,00));
            				}
            				else {
HXLINE(1179)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] UNC path \"",e0,20,27,e8) + path) + HX_("\" is missing absolute path.",f2,6b,56,90))));
            				}
HXLINE(1166)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("?",3f,00,00,00)) ){
HXLINE(1130)				if ((cleaned->length == 2)) {
HXLINE(1131)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] UNC path \"",e0,20,27,e8) + path) + HX_("\" is missing hostname or absolute path.",a2,7f,7b,75))));
            				}
HXLINE(1133)				::String part3 = cleaned->__get(2);
HXLINE(1136)				::String _hx_tmp = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(part3)) );
HXDLIN(1136)				if (::hx::IsEq( _hx_tmp,::hx::strings::Strings_obj::toLowerCase8(HX_("UNC",ca,c3,40,00)) )) {
HXLINE(1137)					if ((cleaned->length == 3)) {
HXLINE(1138)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] UNC path \"",e0,20,27,e8) + path) + HX_("\" is missing hostname.",e9,48,f0,91))));
            					}
HXLINE(1140)					::String part4 = cleaned->__get(3);
HXLINE(1142)					cleaned->shift();
HXLINE(1143)					cleaned->shift();
HXLINE(1144)					cleaned->shift();
HXLINE(1146)					cleaned[0] = ((HX_("\\\\",80,50,00,00) + part4) + HX_("\\",5c,00,00,00));
            				}
            				else {
HXLINE(1149)					bool _hx_tmp;
HXDLIN(1149)					bool _hx_tmp1;
HXDLIN(1149)					if ((part3.length == 2)) {
HXLINE(1149)						int this1 = ::hx::strings::Strings_obj::charCodeAt8(part3,0,null());
HXDLIN(1149)						bool _hx_tmp;
HXDLIN(1149)						if ((this1 > 64)) {
HXLINE(1149)							_hx_tmp = (this1 < 91);
            						}
            						else {
HXLINE(1149)							_hx_tmp = false;
            						}
HXDLIN(1149)						if (!(_hx_tmp)) {
HXLINE(1149)							if ((this1 > 96)) {
HXLINE(1149)								_hx_tmp1 = (this1 < 123);
            							}
            							else {
HXLINE(1149)								_hx_tmp1 = false;
            							}
            						}
            						else {
HXLINE(1149)							_hx_tmp1 = true;
            						}
            					}
            					else {
HXLINE(1149)						_hx_tmp1 = false;
            					}
HXDLIN(1149)					if (_hx_tmp1) {
HXLINE(1149)						_hx_tmp = (::hx::strings::Strings_obj::charCodeAt8(part3,1,null()) == 58);
            					}
            					else {
HXLINE(1149)						_hx_tmp = false;
            					}
HXDLIN(1149)					if (_hx_tmp) {
HXLINE(1151)						cleaned->shift();
HXLINE(1152)						cleaned->shift();
HXLINE(1155)						::String str = ( (::String)(::hx::strings::Strings_obj::charAt8(part3,0,null())) ).toUpperCase();
HXDLIN(1155)						cleaned[0] = ((str + ::String::fromCharCode(58)) + HX_("\\",5c,00,00,00));
            					}
            					else {
HXLINE(1159)						cleaned->shift();
HXLINE(1160)						cleaned->shift();
HXLINE(1162)						cleaned[0] = ((HX_("\\\\",80,50,00,00) + part3) + HX_("\\",5c,00,00,00));
            					}
            				}
HXLINE(1129)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE(1182)				cleaned->shift();
HXLINE(1185)				cleaned[0] = ((HX_("\\\\",80,50,00,00) + part2) + HX_("\\",5c,00,00,00));
            			}
            			_hx_goto_9:;
            		}
            		else {
HXLINE(1188)			::String part1 = cleaned->__get(0);
HXLINE(1189)			bool _hx_tmp;
HXDLIN(1189)			bool _hx_tmp1;
HXDLIN(1189)			if ((part1.length == 2)) {
HXLINE(1190)				int this1 = ::hx::strings::Strings_obj::charCodeAt8(part1,0,null());
HXDLIN(1190)				bool _hx_tmp;
HXDLIN(1190)				if ((this1 > 64)) {
HXLINE(1190)					_hx_tmp = (this1 < 91);
            				}
            				else {
HXLINE(1190)					_hx_tmp = false;
            				}
HXDLIN(1190)				if (!(_hx_tmp)) {
HXLINE(1190)					if ((this1 > 96)) {
HXLINE(1189)						_hx_tmp1 = (this1 < 123);
            					}
            					else {
HXLINE(1189)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE(1189)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE(1189)				_hx_tmp1 = false;
            			}
HXDLIN(1189)			if (_hx_tmp1) {
HXLINE(1189)				_hx_tmp = (::hx::strings::Strings_obj::charCodeAt8(part1,1,null()) == 58);
            			}
            			else {
HXLINE(1189)				_hx_tmp = false;
            			}
HXDLIN(1189)			if (_hx_tmp) {
HXLINE(1194)				::String str = ( (::String)(::hx::strings::Strings_obj::charAt8(part1,0,null())) ).toUpperCase();
HXDLIN(1194)				cleaned[0] = ((str + ::String::fromCharCode(58)) + HX_("\\",5c,00,00,00));
            			}
            		}
HXLINE(1197)		return cleaned;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WindowsPath_obj,clean,return )


::hx::ObjectPtr< WindowsPath_obj > WindowsPath_obj::__new( ::hx::files::Path parent,::String path) {
	::hx::ObjectPtr< WindowsPath_obj > __this = new WindowsPath_obj();
	__this->__construct(parent,path);
	return __this;
}

::hx::ObjectPtr< WindowsPath_obj > WindowsPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path parent,::String path) {
	WindowsPath_obj *__this = (WindowsPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WindowsPath_obj), true, "hx.files.WindowsPath"));
	*(void **)__this = WindowsPath_obj::_hx_vtable;
	__this->__construct(parent,path);
	return __this;
}

WindowsPath_obj::WindowsPath_obj()
{
}

::hx::Val WindowsPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"newPathForChild") ) { return ::hx::Val( newPathForChild_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"newPathForString") ) { return ::hx::Val( newPathForString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WindowsPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EMPTY") ) { outValue = ( EMPTY ); return true; }
		if (HX_FIELD_EQ(inName,"clean") ) { outValue = clean_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PARENT") ) { outValue = ( PARENT ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CURRENT") ) { outValue = ( CURRENT ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DRIVE_ROOT") ) { outValue = ( DRIVE_ROOT ); return true; }
	}
	return false;
}

bool WindowsPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"EMPTY") ) { EMPTY=ioValue.Cast<  ::hx::files::WindowsPath >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PARENT") ) { PARENT=ioValue.Cast<  ::hx::files::WindowsPath >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CURRENT") ) { CURRENT=ioValue.Cast<  ::hx::files::WindowsPath >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DRIVE_ROOT") ) { DRIVE_ROOT=ioValue.Cast<  ::hx::files::WindowsPath >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WindowsPath_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo WindowsPath_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &WindowsPath_obj::DIR_SEP,HX_("DIR_SEP",2c,f0,a6,b1)},
	{::hx::fsString,(void *) &WindowsPath_obj::UNC_PREFIX,HX_("UNC_PREFIX",a7,40,2c,e6)},
	{::hx::fsObject /*  ::hx::files::WindowsPath */ ,(void *) &WindowsPath_obj::DRIVE_ROOT,HX_("DRIVE_ROOT",d7,a0,d4,6c)},
	{::hx::fsObject /*  ::hx::files::WindowsPath */ ,(void *) &WindowsPath_obj::EMPTY,HX_("EMPTY",6d,72,c8,ed)},
	{::hx::fsObject /*  ::hx::files::WindowsPath */ ,(void *) &WindowsPath_obj::CURRENT,HX_("CURRENT",19,70,b7,4b)},
	{::hx::fsObject /*  ::hx::files::WindowsPath */ ,(void *) &WindowsPath_obj::PARENT,HX_("PARENT",2a,b1,00,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WindowsPath_obj_sMemberFields[] = {
	HX_("get_root",ab,a9,69,cb),
	HX_("newPathForString",d5,31,78,5a),
	HX_("newPathForChild",18,ad,14,8c),
	::String(null()) };

static void WindowsPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowsPath_obj::DIR_SEP,"DIR_SEP");
	HX_MARK_MEMBER_NAME(WindowsPath_obj::UNC_PREFIX,"UNC_PREFIX");
	HX_MARK_MEMBER_NAME(WindowsPath_obj::DRIVE_ROOT,"DRIVE_ROOT");
	HX_MARK_MEMBER_NAME(WindowsPath_obj::EMPTY,"EMPTY");
	HX_MARK_MEMBER_NAME(WindowsPath_obj::CURRENT,"CURRENT");
	HX_MARK_MEMBER_NAME(WindowsPath_obj::PARENT,"PARENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowsPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowsPath_obj::DIR_SEP,"DIR_SEP");
	HX_VISIT_MEMBER_NAME(WindowsPath_obj::UNC_PREFIX,"UNC_PREFIX");
	HX_VISIT_MEMBER_NAME(WindowsPath_obj::DRIVE_ROOT,"DRIVE_ROOT");
	HX_VISIT_MEMBER_NAME(WindowsPath_obj::EMPTY,"EMPTY");
	HX_VISIT_MEMBER_NAME(WindowsPath_obj::CURRENT,"CURRENT");
	HX_VISIT_MEMBER_NAME(WindowsPath_obj::PARENT,"PARENT");
};

#endif

::hx::Class WindowsPath_obj::__mClass;

static ::String WindowsPath_obj_sStaticFields[] = {
	HX_("DIR_SEP",2c,f0,a6,b1),
	HX_("UNC_PREFIX",a7,40,2c,e6),
	HX_("DRIVE_ROOT",d7,a0,d4,6c),
	HX_("EMPTY",6d,72,c8,ed),
	HX_("CURRENT",19,70,b7,4b),
	HX_("PARENT",2a,b1,00,a0),
	HX_("of",17,61,00,00),
	HX_("clean",89,71,5b,48),
	::String(null())
};

void WindowsPath_obj::__register()
{
	WindowsPath_obj _hx_dummy;
	WindowsPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.WindowsPath",53,b8,5e,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindowsPath_obj::__GetStatic;
	__mClass->mSetStaticField = &WindowsPath_obj::__SetStatic;
	__mClass->mMarkFunc = WindowsPath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WindowsPath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WindowsPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WindowsPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowsPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowsPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowsPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WindowsPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1043_boot)
HXDLIN(1043)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("immutable",42,28,c7,66),null()))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1048_boot)
HXDLIN(1048)		DIR_SEP = HX_("\\",5c,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1049_boot)
HXDLIN(1049)		UNC_PREFIX = HX_("\\\\",80,50,00,00);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1052_boot)
HXDLIN(1052)		DRIVE_ROOT =  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,null(),HX_("\\",5c,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1053_boot)
HXDLIN(1053)		EMPTY =  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,null(),HX_("",00,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1054_boot)
HXDLIN(1054)		CURRENT =  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,null(),HX_(".",2e,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5d4b4b2c8f79f1af_1055_boot)
HXDLIN(1055)		PARENT =  ::hx::files::WindowsPath_obj::__alloc( HX_CTX ,null(),HX_("..",40,28,00,00));
            	}
}

} // end namespace hx
} // end namespace files
