#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_Matcher
#include <hx/strings/Matcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b14085966b41e107_123_boot,"hx.strings.Matcher","boot",0x00cb80d8,"hx.strings.Matcher.boot","hx/strings/Pattern.hx",123,0x80e2271a)
namespace hx{
namespace strings{


static ::String Matcher_obj_sMemberFields[] = {
	HX_("iterate",fa,79,d0,e2),
	HX_("map",9c,0a,53,00),
	HX_("matched",e4,3c,7c,89),
	HX_("matchedPos",10,ff,c2,cb),
	HX_("matches",f3,3c,7c,89),
	HX_("matchesInRegion",cc,ae,fb,97),
	HX_("reset",cf,49,c8,e6),
	HX_("substringAfterMatch",3a,13,56,8e),
	HX_("substringBeforeMatch",75,4d,5e,78),
	::String(null()) };

::hx::Class Matcher_obj::__mClass;

void Matcher_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.Matcher",88,a5,31,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Matcher_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa8cead20 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matcher_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b14085966b41e107_123_boot)
HXDLIN( 123)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("notThreadSafe",2a,64,46,1e),null()))));
            	}
}

} // end namespace hx
} // end namespace strings
