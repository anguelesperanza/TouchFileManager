#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpression
#include <haxe/ui/locale/LocaleStringExpression.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpressionBlock
#include <haxe/ui/locale/LocaleStringExpressionBlock.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4082926cde0d2c5d_6_new,"haxe.ui.locale.LocaleStringExpressionBlock","new",0x6823265a,"haxe.ui.locale.LocaleStringExpressionBlock.new","haxe/ui/locale/LocaleStringExpressionBlock.hx",6,0xd7709977)
HX_LOCAL_STACK_FRAME(_hx_pos_4082926cde0d2c5d_12_evaluate,"haxe.ui.locale.LocaleStringExpressionBlock","evaluate",0x3605201f,"haxe.ui.locale.LocaleStringExpressionBlock.evaluate","haxe/ui/locale/LocaleStringExpressionBlock.hx",12,0xd7709977)
HX_LOCAL_STACK_FRAME(_hx_pos_4082926cde0d2c5d_35_findDefaultExpression,"haxe.ui.locale.LocaleStringExpressionBlock","findDefaultExpression",0x98cf45ba,"haxe.ui.locale.LocaleStringExpressionBlock.findDefaultExpression","haxe/ui/locale/LocaleStringExpressionBlock.hx",35,0xd7709977)
HX_LOCAL_STACK_FRAME(_hx_pos_4082926cde0d2c5d_44_parse,"haxe.ui.locale.LocaleStringExpressionBlock","parse",0x3821d8ad,"haxe.ui.locale.LocaleStringExpressionBlock.parse","haxe/ui/locale/LocaleStringExpressionBlock.hx",44,0xd7709977)
namespace haxe{
namespace ui{
namespace locale{

void LocaleStringExpressionBlock_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4082926cde0d2c5d_6_new)
HXDLIN(   6)		this->expressions = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic LocaleStringExpressionBlock_obj::__CreateEmpty() { return new LocaleStringExpressionBlock_obj; }

void *LocaleStringExpressionBlock_obj::_hx_vtable = 0;

Dynamic LocaleStringExpressionBlock_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleStringExpressionBlock_obj > _hx_result = new LocaleStringExpressionBlock_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocaleStringExpressionBlock_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38f3cc16;
}

::String LocaleStringExpressionBlock_obj::evaluate( ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_STACKFRAME(&_hx_pos_4082926cde0d2c5d_12_evaluate)
HXLINE(  13)		::String result = null();
HXLINE(  15)		{
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			::Array< ::Dynamic> _g1 = this->expressions;
HXDLIN(  15)			while((_g < _g1->length)){
HXLINE(  15)				 ::haxe::ui::locale::LocaleStringExpression expr = _g1->__get(_g).StaticCast<  ::haxe::ui::locale::LocaleStringExpression >();
HXDLIN(  15)				_g = (_g + 1);
HXLINE(  16)				if (expr->isDefault) {
HXLINE(  17)					continue;
            				}
HXLINE(  19)				if ((expr->evaluate(param0,param1,param2,param3) == true)) {
HXLINE(  20)					result = expr->expressionResult;
HXLINE(  21)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE(  25)		if (::hx::IsNull( result )) {
HXLINE(  26)			 ::haxe::ui::locale::LocaleStringExpression defaultExpression = this->findDefaultExpression();
HXLINE(  27)			if (::hx::IsNotNull( defaultExpression )) {
HXLINE(  28)				result = defaultExpression->expressionResult;
            			}
            		}
HXLINE(  32)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC4(LocaleStringExpressionBlock_obj,evaluate,return )

 ::haxe::ui::locale::LocaleStringExpression LocaleStringExpressionBlock_obj::findDefaultExpression(){
            	HX_STACKFRAME(&_hx_pos_4082926cde0d2c5d_35_findDefaultExpression)
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			::Array< ::Dynamic> _g1 = this->expressions;
HXDLIN(  36)			while((_g < _g1->length)){
HXLINE(  36)				 ::haxe::ui::locale::LocaleStringExpression expr = _g1->__get(_g).StaticCast<  ::haxe::ui::locale::LocaleStringExpression >();
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  37)				if (expr->isDefault) {
HXLINE(  38)					return expr;
            				}
            			}
            		}
HXLINE(  41)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocaleStringExpressionBlock_obj,findDefaultExpression,return )

void LocaleStringExpressionBlock_obj::parse(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_4082926cde0d2c5d_44_parse)
HXLINE(  45)		this->expressions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		s = ::StringTools_obj::trim(s);
HXLINE(  47)		::Array< ::String > lines = s.split(HX_("\n",0a,00,00,00));
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			while((_g < lines->length)){
HXLINE(  48)				::String l = lines->__get(_g);
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  49)				 ::haxe::ui::locale::LocaleStringExpression expr =  ::haxe::ui::locale::LocaleStringExpression_obj::__alloc( HX_CTX );
HXLINE(  50)				expr->parse(l);
HXLINE(  51)				this->expressions->push(expr);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleStringExpressionBlock_obj,parse,(void))


::hx::ObjectPtr< LocaleStringExpressionBlock_obj > LocaleStringExpressionBlock_obj::__new() {
	::hx::ObjectPtr< LocaleStringExpressionBlock_obj > __this = new LocaleStringExpressionBlock_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocaleStringExpressionBlock_obj > LocaleStringExpressionBlock_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocaleStringExpressionBlock_obj *__this = (LocaleStringExpressionBlock_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleStringExpressionBlock_obj), true, "haxe.ui.locale.LocaleStringExpressionBlock"));
	*(void **)__this = LocaleStringExpressionBlock_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocaleStringExpressionBlock_obj::LocaleStringExpressionBlock_obj()
{
}

void LocaleStringExpressionBlock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocaleStringExpressionBlock);
	HX_MARK_MEMBER_NAME(expressions,"expressions");
	HX_MARK_END_CLASS();
}

void LocaleStringExpressionBlock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expressions,"expressions");
}

::hx::Val LocaleStringExpressionBlock_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return ::hx::Val( evaluate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"expressions") ) { return ::hx::Val( expressions ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"findDefaultExpression") ) { return ::hx::Val( findDefaultExpression_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocaleStringExpressionBlock_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"expressions") ) { expressions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocaleStringExpressionBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("expressions",db,53,90,9c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocaleStringExpressionBlock_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LocaleStringExpressionBlock_obj,expressions),HX_("expressions",db,53,90,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocaleStringExpressionBlock_obj_sStaticStorageInfo = 0;
#endif

static ::String LocaleStringExpressionBlock_obj_sMemberFields[] = {
	HX_("expressions",db,53,90,9c),
	HX_("evaluate",59,60,50,01),
	HX_("findDefaultExpression",40,e9,c0,ca),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class LocaleStringExpressionBlock_obj::__mClass;

void LocaleStringExpressionBlock_obj::__register()
{
	LocaleStringExpressionBlock_obj _hx_dummy;
	LocaleStringExpressionBlock_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.LocaleStringExpressionBlock",68,b1,0e,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleStringExpressionBlock_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleStringExpressionBlock_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleStringExpressionBlock_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleStringExpressionBlock_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
