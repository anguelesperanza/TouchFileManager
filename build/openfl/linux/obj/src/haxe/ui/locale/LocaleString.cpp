#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleString
#include <haxe/ui/locale/LocaleString.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpression
#include <haxe/ui/locale/LocaleStringExpression.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpressionBlock
#include <haxe/ui/locale/LocaleStringExpressionBlock.h>
#endif
#ifndef INCLUDED_haxe_ui_locale__LocaleString_LocaleStringPart
#include <haxe/ui/locale/_LocaleString/LocaleStringPart.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d02f3afcce71e19_5_new,"haxe.ui.locale.LocaleString","new",0xc65c491f,"haxe.ui.locale.LocaleString.new","haxe/ui/locale/LocaleString.hx",5,0x4ee6d6f0)
HX_LOCAL_STACK_FRAME(_hx_pos_4d02f3afcce71e19_20_build,"haxe.ui.locale.LocaleString","build",0x6e9241ad,"haxe.ui.locale.LocaleString.build","haxe/ui/locale/LocaleString.hx",20,0x4ee6d6f0)
HX_LOCAL_STACK_FRAME(_hx_pos_4d02f3afcce71e19_93_parse,"haxe.ui.locale.LocaleString","parse",0x70fcf6b2,"haxe.ui.locale.LocaleString.parse","haxe/ui/locale/LocaleString.hx",93,0x4ee6d6f0)
namespace haxe{
namespace ui{
namespace locale{

void LocaleString_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4d02f3afcce71e19_5_new)
HXLINE(  15)		this->_cachedValue = null();
HXLINE(  13)		this->_isSimple = true;
HXLINE(   8)		this->parts = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic LocaleString_obj::__CreateEmpty() { return new LocaleString_obj; }

void *LocaleString_obj::_hx_vtable = 0;

Dynamic LocaleString_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleString_obj > _hx_result = new LocaleString_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocaleString_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c3257a3;
}

::String LocaleString_obj::build( ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_STACKFRAME(&_hx_pos_4d02f3afcce71e19_20_build)
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if ((this->_isSimple == true)) {
HXLINE(  21)			_hx_tmp = ::hx::IsNotNull( this->_cachedValue );
            		}
            		else {
HXLINE(  21)			_hx_tmp = false;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  22)			return this->_cachedValue;
            		}
HXLINE(  25)		::String result = null();
HXLINE(  27)		if ((::Type_obj::_hx_typeof(param0)->_hx_getIndex() == 4)) {
HXLINE(  29)			bool _hx_tmp;
HXDLIN(  29)			if (::hx::IsNotNull( param0 )) {
HXLINE(  29)				_hx_tmp = ::hx::IsNotNull( param0->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  29)				_hx_tmp = false;
            			}
HXDLIN(  29)			if (_hx_tmp) {
HXLINE(  29)				param0 =  ::Dynamic(param0->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
            			}
HXLINE(  30)			bool _hx_tmp1;
HXDLIN(  30)			if (::hx::IsNotNull( param1 )) {
HXLINE(  30)				_hx_tmp1 = ::hx::IsNotNull( param1->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  30)				_hx_tmp1 = false;
            			}
HXDLIN(  30)			if (_hx_tmp1) {
HXLINE(  30)				param1 =  ::Dynamic(param1->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
            			}
HXLINE(  31)			bool _hx_tmp2;
HXDLIN(  31)			if (::hx::IsNotNull( param2 )) {
HXLINE(  31)				_hx_tmp2 = ::hx::IsNotNull( param2->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  31)				_hx_tmp2 = false;
            			}
HXDLIN(  31)			if (_hx_tmp2) {
HXLINE(  31)				param2 =  ::Dynamic(param2->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
            			}
HXLINE(  32)			bool _hx_tmp3;
HXDLIN(  32)			if (::hx::IsNotNull( param3 )) {
HXLINE(  32)				_hx_tmp3 = ::hx::IsNotNull( param3->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  32)				_hx_tmp3 = false;
            			}
HXDLIN(  32)			if (_hx_tmp3) {
HXLINE(  32)				param3 =  ::Dynamic(param3->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
            			}
            		}
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			::Array< ::Dynamic> _g1 = this->parts;
HXDLIN(  36)			while((_g < _g1->length)){
HXLINE(  36)				 ::haxe::ui::locale::_LocaleString::LocaleStringPart part = _g1->__get(_g).StaticCast<  ::haxe::ui::locale::_LocaleString::LocaleStringPart >();
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  37)				switch((int)(part->_hx_getIndex())){
            					case (int)0: {
HXLINE(  38)						::String s = part->_hx_getString(0);
HXDLIN(  38)						{
HXLINE(  39)							if (::hx::IsNull( result )) {
HXLINE(  40)								result = HX_("",00,00,00,00);
            							}
HXLINE(  42)							result = (result + s);
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  43)						 ::haxe::ui::locale::LocaleStringExpressionBlock expr = part->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::LocaleStringExpressionBlock >();
HXDLIN(  43)						{
HXLINE(  44)							if (::hx::IsNull( result )) {
HXLINE(  45)								result = HX_("",00,00,00,00);
            							}
HXLINE(  47)							result = (result + expr->evaluate(param0,param1,param2,param3));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE(  51)		if (::hx::IsNull( result )) {
HXLINE(  52)			result = this->id;
            		}
HXLINE(  55)		if (::hx::IsNotNull( result )) {
HXLINE(  56)			if ((this->_isSimple == true)) {
HXLINE(  57)				if ((result.indexOf(HX_("[0]",48,37,45,00),null()) != -1)) {
HXLINE(  57)					this->_isSimple = false;
            				}
HXLINE(  58)				if ((result.indexOf(HX_("[1]",27,38,45,00),null()) != -1)) {
HXLINE(  58)					this->_isSimple = false;
            				}
HXLINE(  59)				if ((result.indexOf(HX_("[2]",06,39,45,00),null()) != -1)) {
HXLINE(  59)					this->_isSimple = false;
            				}
HXLINE(  60)				if ((result.indexOf(HX_("[3]",e5,39,45,00),null()) != -1)) {
HXLINE(  60)					this->_isSimple = false;
            				}
HXLINE(  61)				bool _hx_tmp;
HXDLIN(  61)				if ((result.indexOf(HX_("{{",a0,6b,00,00),null()) != -1)) {
HXLINE(  61)					_hx_tmp = (result.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            				}
            				else {
HXLINE(  61)					_hx_tmp = false;
            				}
HXDLIN(  61)				if (_hx_tmp) {
HXLINE(  61)					this->_isSimple = false;
            				}
            			}
HXLINE(  64)			if (::hx::IsNotNull( param0 )) {
HXLINE(  64)				result = ::StringTools_obj::replace(result,HX_("[0]",48,37,45,00),::Std_obj::string(param0));
            			}
HXLINE(  65)			if (::hx::IsNotNull( param1 )) {
HXLINE(  65)				result = ::StringTools_obj::replace(result,HX_("[1]",27,38,45,00),::Std_obj::string(param1));
            			}
HXLINE(  66)			if (::hx::IsNotNull( param2 )) {
HXLINE(  66)				result = ::StringTools_obj::replace(result,HX_("[2]",06,39,45,00),::Std_obj::string(param2));
            			}
HXLINE(  67)			if (::hx::IsNotNull( param3 )) {
HXLINE(  67)				result = ::StringTools_obj::replace(result,HX_("[3]",e5,39,45,00),::Std_obj::string(param3));
            			}
HXLINE(  69)			int n1 = result.indexOf(HX_("{{",a0,6b,00,00),null());
HXLINE(  70)			int beforePos = 0;
HXLINE(  71)			while((n1 != -1)){
HXLINE(  72)				::String before = result.substring(beforePos,n1);
HXLINE(  73)				int n2 = result.indexOf(HX_("}}",60,6d,00,00),n1);
HXLINE(  74)				::String code = result.substring((n1 + 2),n2);
HXLINE(  75)				::String after = result.substring((n2 + 2),null());
HXLINE(  76)				::String subResult = ::haxe::ui::locale::LocaleManager_obj::get_instance()->lookupString(code,null(),null(),null(),null());
HXLINE(  77)				if (::hx::IsNotNull( subResult )) {
HXLINE(  78)					result = ((before + subResult) + after);
            				}
HXLINE(  81)				n1 = result.indexOf(HX_("{{",a0,6b,00,00),n2);
HXLINE(  82)				beforePos = (n2 + 2);
            			}
HXLINE(  85)			if (this->_isSimple) {
HXLINE(  86)				this->_cachedValue = result;
            			}
            		}
HXLINE(  90)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC4(LocaleString_obj,build,return )

void LocaleString_obj::parse(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_4d02f3afcce71e19_93_parse)
HXLINE(  94)		this->parts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  95)		int n = s.indexOf(HX_("=",3d,00,00,00),null());
HXLINE(  96)		if ((n == -1)) {
HXLINE(  97)			return;
            		}
HXLINE( 100)		this->id = ::StringTools_obj::trim(s.substring(0,n));
HXLINE( 101)		s = ::StringTools_obj::trim(s.substr((n + 1),null()));
HXLINE( 103)		bool inExpression = false;
HXLINE( 104)		::String part = HX_("",00,00,00,00);
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = s.length;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 106)				::String ch = s.charAt(i);
HXLINE( 107)				::String _hx_switch_0 = ch;
            				if (  (_hx_switch_0==HX_("{",7b,00,00,00)) ){
HXLINE( 109)					if ((part.length > 0)) {
HXLINE( 110)						this->parts->push(::haxe::ui::locale::_LocaleString::LocaleStringPart_obj::Literal(part));
            					}
HXLINE( 112)					inExpression = true;
HXLINE( 113)					part = HX_("",00,00,00,00);
HXLINE( 108)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("}",7d,00,00,00)) ){
HXLINE( 115)					if ((part.length > 0)) {
HXLINE( 116)						 ::haxe::ui::locale::LocaleStringExpressionBlock block =  ::haxe::ui::locale::LocaleStringExpressionBlock_obj::__alloc( HX_CTX );
HXLINE( 117)						block->parse(part);
HXLINE( 118)						this->parts->push(::haxe::ui::locale::_LocaleString::LocaleStringPart_obj::ExpressionBlock(block));
            					}
HXLINE( 120)					inExpression = false;
HXLINE( 121)					part = HX_("",00,00,00,00);
HXLINE( 114)					goto _hx_goto_5;
            				}
            				/* default */{
HXLINE( 123)					part = (part + ch);
            				}
            				_hx_goto_5:;
            			}
            		}
HXLINE( 126)		if ((part.length > 0)) {
HXLINE( 127)			this->parts->push(::haxe::ui::locale::_LocaleString::LocaleStringPart_obj::Literal(part));
            		}
HXLINE( 130)		{
HXLINE( 130)			int _g2 = 0;
HXDLIN( 130)			::Array< ::Dynamic> _g3 = this->parts;
HXDLIN( 130)			while((_g2 < _g3->length)){
HXLINE( 130)				 ::haxe::ui::locale::_LocaleString::LocaleStringPart part = _g3->__get(_g2).StaticCast<  ::haxe::ui::locale::_LocaleString::LocaleStringPart >();
HXDLIN( 130)				_g2 = (_g2 + 1);
HXLINE( 131)				switch((int)(part->_hx_getIndex())){
            					case (int)0: {
HXLINE( 132)						::String s = part->_hx_getString(0);
            					}
            					break;
            					case (int)1: {
HXLINE( 133)						 ::haxe::ui::locale::LocaleStringExpressionBlock block = part->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::LocaleStringExpressionBlock >();
HXLINE( 134)						bool _hx_tmp;
HXDLIN( 134)						if (::hx::IsNotNull( block->expressions )) {
HXLINE( 134)							_hx_tmp = (block->expressions->length > 0);
            						}
            						else {
HXLINE( 134)							_hx_tmp = false;
            						}
HXDLIN( 134)						if (_hx_tmp) {
HXLINE( 135)							this->_isSimple = false;
HXLINE( 136)							goto _hx_goto_6;
            						}
            					}
            					break;
            				}
            			}
            			_hx_goto_6:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleString_obj,parse,(void))


::hx::ObjectPtr< LocaleString_obj > LocaleString_obj::__new() {
	::hx::ObjectPtr< LocaleString_obj > __this = new LocaleString_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocaleString_obj > LocaleString_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocaleString_obj *__this = (LocaleString_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleString_obj), true, "haxe.ui.locale.LocaleString"));
	*(void **)__this = LocaleString_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocaleString_obj::LocaleString_obj()
{
}

void LocaleString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocaleString);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(parts,"parts");
	HX_MARK_MEMBER_NAME(_isSimple,"_isSimple");
	HX_MARK_MEMBER_NAME(_cachedValue,"_cachedValue");
	HX_MARK_END_CLASS();
}

void LocaleString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(parts,"parts");
	HX_VISIT_MEMBER_NAME(_isSimple,"_isSimple");
	HX_VISIT_MEMBER_NAME(_cachedValue,"_cachedValue");
}

::hx::Val LocaleString_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { return ::hx::Val( parts ); }
		if (HX_FIELD_EQ(inName,"build") ) { return ::hx::Val( build_dyn() ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_isSimple") ) { return ::hx::Val( _isSimple ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedValue") ) { return ::hx::Val( _cachedValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocaleString_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { parts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_isSimple") ) { _isSimple=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedValue") ) { _cachedValue=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocaleString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("parts",20,91,55,bd));
	outFields->push(HX_("_isSimple",1b,97,7e,58));
	outFields->push(HX_("_cachedValue",30,6a,ac,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocaleString_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(LocaleString_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LocaleString_obj,parts),HX_("parts",20,91,55,bd)},
	{::hx::fsBool,(int)offsetof(LocaleString_obj,_isSimple),HX_("_isSimple",1b,97,7e,58)},
	{::hx::fsString,(int)offsetof(LocaleString_obj,_cachedValue),HX_("_cachedValue",30,6a,ac,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocaleString_obj_sStaticStorageInfo = 0;
#endif

static ::String LocaleString_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("parts",20,91,55,bd),
	HX_("_isSimple",1b,97,7e,58),
	HX_("_cachedValue",30,6a,ac,10),
	HX_("build",2e,db,ea,ba),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class LocaleString_obj::__mClass;

void LocaleString_obj::__register()
{
	LocaleString_obj _hx_dummy;
	LocaleString_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.LocaleString",ad,cd,e3,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleString_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleString_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleString_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleString_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
