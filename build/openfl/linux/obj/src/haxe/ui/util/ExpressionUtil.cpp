#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_ExpressionUtil
#include <haxe/ui/util/ExpressionUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ea856c50f3e9e5f1_4_stringToLanguageExpression,"haxe.ui.util.ExpressionUtil","stringToLanguageExpression",0x43904d16,"haxe.ui.util.ExpressionUtil.stringToLanguageExpression","haxe/ui/util/ExpressionUtil.hx",4,0xd3822bc9)
namespace haxe{
namespace ui{
namespace util{

void ExpressionUtil_obj::__construct() { }

Dynamic ExpressionUtil_obj::__CreateEmpty() { return new ExpressionUtil_obj; }

void *ExpressionUtil_obj::_hx_vtable = 0;

Dynamic ExpressionUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExpressionUtil_obj > _hx_result = new ExpressionUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExpressionUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a73fe3a;
}

::String ExpressionUtil_obj::stringToLanguageExpression(::String s,::String __o_localeManager){
            		::String localeManager = __o_localeManager;
            		if (::hx::IsNull(__o_localeManager)) localeManager = HX_("haxe.ui.locale.LocaleManager",11,2e,3e,a9);
            	HX_STACKFRAME(&_hx_pos_ea856c50f3e9e5f1_4_stringToLanguageExpression)
HXLINE(   5)		::Array< ::String > fixedParts = ::Array_obj< ::String >::__new(0);
HXLINE(   6)		int beforePos = 0;
HXLINE(   7)		int n1 = s.indexOf(HX_("{{",a0,6b,00,00),null());
HXLINE(   8)		while((n1 != -1)){
HXLINE(   9)			::String before = s.substring(beforePos,n1);
HXLINE(  10)			if ((before.length > 0)) {
HXLINE(  11)				fixedParts->push(((HX_("'",27,00,00,00) + before) + HX_("'",27,00,00,00)));
            			}
HXLINE(  14)			int n2 = s.indexOf(HX_("}}",60,6d,00,00),n1);
HXLINE(  15)			::String code = s.substring((n1 + 2),n2);
HXLINE(  17)			::Array< ::String > parts = code.split(HX_(",",2c,00,00,00));
HXLINE(  18)			::String stringId = ( (::String)(parts->shift()) );
HXLINE(  19)			::String callString = (localeManager + HX_(".instance.lookupString('",f5,f4,76,07));
HXLINE(  20)			callString = (callString + stringId);
HXLINE(  21)			callString = (callString + HX_("'",27,00,00,00));
HXLINE(  22)			if ((parts->length > 0)) {
HXLINE(  23)				callString = (callString + HX_(", ",74,26,00,00));
HXLINE(  24)				callString = (callString + parts->join(HX_(", ",74,26,00,00)));
            			}
HXLINE(  26)			callString = (callString + HX_(")",29,00,00,00));
HXLINE(  27)			fixedParts->push(callString);
HXLINE(  29)			n1 = s.indexOf(HX_("{{",a0,6b,00,00),n2);
HXLINE(  30)			beforePos = (n2 + 2);
            		}
HXLINE(  32)		if ((beforePos < s.length)) {
HXLINE(  33)			::String before = s.substring(beforePos,s.length);
HXLINE(  34)			if ((before.length > 0)) {
HXLINE(  35)				fixedParts->push(((HX_("'",27,00,00,00) + before) + HX_("'",27,00,00,00)));
            			}
            		}
HXLINE(  38)		::String fixedCode = fixedParts->join(HX_(" + ",b5,6d,18,00));
HXLINE(  39)		return fixedCode;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionUtil_obj,stringToLanguageExpression,return )


ExpressionUtil_obj::ExpressionUtil_obj()
{
}

bool ExpressionUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"stringToLanguageExpression") ) { outValue = stringToLanguageExpression_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ExpressionUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ExpressionUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ExpressionUtil_obj::__mClass;

static ::String ExpressionUtil_obj_sStaticFields[] = {
	HX_("stringToLanguageExpression",dc,3b,0d,5c),
	::String(null())
};

void ExpressionUtil_obj::__register()
{
	ExpressionUtil_obj _hx_dummy;
	ExpressionUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.ExpressionUtil",f4,c4,5e,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExpressionUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ExpressionUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ExpressionUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpressionUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpressionUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
