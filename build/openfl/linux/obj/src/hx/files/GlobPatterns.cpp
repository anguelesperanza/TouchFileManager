#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hx_files_GlobPatterns
#include <hx/files/GlobPatterns.h>
#endif
#ifndef INCLUDED_hx_strings_Pattern
#include <hx/strings/Pattern.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#include <hx/strings/internal/_Either3/_Either3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d311abca17341fcc_45_toEReg,"hx.files.GlobPatterns","toEReg",0xc92487e8,"hx.files.GlobPatterns.toEReg","hx/files/GlobPatterns.hx",45,0x4a4c866c)
HX_LOCAL_STACK_FRAME(_hx_pos_d311abca17341fcc_73_toPattern,"hx.files.GlobPatterns","toPattern",0xcf315df7,"hx.files.GlobPatterns.toPattern","hx/files/GlobPatterns.hx",73,0x4a4c866c)
HX_LOCAL_STACK_FRAME(_hx_pos_d311abca17341fcc_94_toRegEx,"hx.files.GlobPatterns","toRegEx",0xbf9862ce,"hx.files.GlobPatterns.toRegEx","hx/files/GlobPatterns.hx",94,0x4a4c866c)
namespace hx{
namespace files{

void GlobPatterns_obj::__construct() { }

Dynamic GlobPatterns_obj::__CreateEmpty() { return new GlobPatterns_obj; }

void *GlobPatterns_obj::_hx_vtable = 0;

Dynamic GlobPatterns_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlobPatterns_obj > _hx_result = new GlobPatterns_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlobPatterns_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1437e2de;
}

 ::EReg GlobPatterns_obj::toEReg(::String globPattern,::String __o_regexOptions){
            		::String regexOptions = __o_regexOptions;
            		if (::hx::IsNull(__o_regexOptions)) regexOptions = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_d311abca17341fcc_45_toEReg)
HXDLIN(  45)		::String str = ::hx::files::GlobPatterns_obj::toRegEx(globPattern);
HXDLIN(  45)		::String opt = regexOptions;
HXDLIN(  45)		if (::hx::IsNull( opt )) {
HXDLIN(  45)			opt = HX_("",00,00,00,00);
            		}
HXDLIN(  45)		if (::hx::IsNull( str )) {
HXDLIN(  45)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[str] must not be null",39,a9,3f,f6)));
            		}
HXDLIN(  45)		return  ::EReg_obj::__alloc( HX_CTX ,str,opt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GlobPatterns_obj,toEReg,return )

 ::hx::strings::Pattern GlobPatterns_obj::toPattern(::String globPattern, ::hx::strings::internal::_Either3::_Either3 options){
            	HX_STACKFRAME(&_hx_pos_d311abca17341fcc_73_toPattern)
HXDLIN(  73)		::String str = ::hx::files::GlobPatterns_obj::toRegEx(globPattern);
HXDLIN(  73)		if (::hx::IsNull( str )) {
HXDLIN(  73)			return null();
            		}
            		else {
HXDLIN(  73)			return ::hx::strings::Pattern_obj::compile(str,options);
            		}
HXDLIN(  73)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GlobPatterns_obj,toPattern,return )

::String GlobPatterns_obj::toRegEx(::String globPattern){
            	HX_GC_STACKFRAME(&_hx_pos_d311abca17341fcc_94_toRegEx)
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		if (::hx::IsNotNull( globPattern )) {
HXLINE(  95)			_hx_tmp = (globPattern.length == 0);
            		}
            		else {
HXLINE(  95)			_hx_tmp = true;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXLINE(  96)			return globPattern;
            		}
HXLINE(  98)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(  99)		sb->addChar(94);
HXLINE( 100)		::Array< int > chars = ::hx::strings::Strings_obj::toChars(globPattern);
HXLINE( 101)		int charsLenMinus1 = (chars->length - 1);
HXLINE( 102)		int chPrev = -1;
HXLINE( 103)		int groupDepth = 0;
HXLINE( 104)		int idx = -1;
HXLINE( 105)		while((idx < charsLenMinus1)){
HXLINE( 106)			idx = (idx + 1);
HXLINE( 107)			int ch = chars->__get(idx);
HXLINE( 109)			switch((int)(ch)){
            				case (int)33: {
HXLINE( 155)					if ((chPrev == 91)) {
HXLINE( 156)						sb->addChar(94);
            					}
            					else {
HXLINE( 158)						sb->addChar(ch);
            					}
            				}
            				break;
            				case (int)36: {
HXLINE( 118)					sb->add(HX_("\\$",48,50,00,00));
            				}
            				break;
            				case (int)40: {
HXLINE( 129)					sb->add(HX_("\\(",4c,50,00,00));
            				}
            				break;
            				case (int)41: {
HXLINE( 132)					sb->add(HX_("\\)",4d,50,00,00));
            				}
            				break;
            				case (int)42: {
HXLINE( 160)					if ((chars->__get((idx + 1)) == 42)) {
HXLINE( 161)						if ((chars->__get((idx + 2)) == 47)) {
HXLINE( 162)							if ((chars->__get((idx + 3)) == 42)) {
HXLINE( 164)								sb->add(HX_(".*",3c,28,00,00));
HXLINE( 165)								idx = (idx + 3);
            							}
            							else {
HXLINE( 168)								sb->add(HX_("(.*[\\/\\\\])?",49,6f,1c,93));
HXLINE( 169)								idx = (idx + 2);
HXLINE( 170)								ch = 47;
            							}
            						}
            						else {
HXLINE( 173)							sb->add(HX_(".*",3c,28,00,00));
HXLINE( 174)							idx = (idx + 1);
            						}
            					}
            					else {
HXLINE( 177)						sb->add(HX_("[^\\\\^\\/]*",db,3d,80,13));
            					}
            				}
            				break;
            				case (int)44: {
HXLINE( 148)					if ((chPrev == 92)) {
HXLINE( 149)						sb->add(HX_("\\,",50,50,00,00));
            					}
            					else {
HXLINE( 152)						int _hx_tmp;
HXDLIN( 152)						if ((groupDepth > 0)) {
HXLINE( 152)							_hx_tmp = 124;
            						}
            						else {
HXLINE( 152)							_hx_tmp = 44;
            						}
HXDLIN( 152)						sb->addChar(_hx_tmp);
            					}
            				}
            				break;
            				case (int)46: {
HXLINE( 126)					sb->add(HX_("\\.",52,50,00,00));
            				}
            				break;
            				case (int)47: {
HXLINE( 115)					sb->add(HX_("[\\/\\\\]",2f,5b,ae,7a));
            				}
            				break;
            				case (int)63: {
HXLINE( 120)					if ((chPrev == 92)) {
HXLINE( 121)						sb->add(HX_("\\?",63,50,00,00));
            					}
            					else {
HXLINE( 123)						sb->add(HX_("[^\\\\^\\/]",6f,c3,ea,99));
            					}
            				}
            				break;
            				case (int)92: {
HXLINE( 111)					if ((chPrev == 92)) {
HXLINE( 112)						sb->add(HX_("\\\\",80,50,00,00));
            					}
            				}
            				break;
            				case (int)123: {
HXLINE( 134)					if ((chPrev == 92)) {
HXLINE( 135)						sb->add(HX_("\\{",9f,50,00,00));
            					}
            					else {
HXLINE( 137)						groupDepth = (groupDepth + 1);
HXLINE( 138)						sb->addChar(40);
            					}
            				}
            				break;
            				case (int)125: {
HXLINE( 141)					if ((chPrev == 92)) {
HXLINE( 142)						sb->add(HX_("\\}",a1,50,00,00));
            					}
            					else {
HXLINE( 144)						groupDepth = (groupDepth - 1);
HXLINE( 145)						sb->addChar(41);
            					}
            				}
            				break;
            				default:{
HXLINE( 180)					if ((chPrev == 92)) {
HXLINE( 181)						sb->addChar(92);
            					}
HXLINE( 183)					sb->addChar(ch);
            				}
            			}
HXLINE( 186)			chPrev = ch;
            		}
HXLINE( 188)		sb->addChar(36);
HXLINE( 189)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GlobPatterns_obj,toRegEx,return )


GlobPatterns_obj::GlobPatterns_obj()
{
}

bool GlobPatterns_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"toEReg") ) { outValue = toEReg_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toRegEx") ) { outValue = toRegEx_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toPattern") ) { outValue = toPattern_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GlobPatterns_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GlobPatterns_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GlobPatterns_obj::__mClass;

static ::String GlobPatterns_obj_sStaticFields[] = {
	HX_("toEReg",0a,89,ba,78),
	HX_("toPattern",15,3e,0b,41),
	HX_("toRegEx",6c,5f,43,b3),
	::String(null())
};

void GlobPatterns_obj::__register()
{
	GlobPatterns_obj _hx_dummy;
	GlobPatterns_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.GlobPatterns",d0,31,06,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlobPatterns_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GlobPatterns_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GlobPatterns_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlobPatterns_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlobPatterns_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace files
