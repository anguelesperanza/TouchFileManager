#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hx_strings_Matcher
#include <hx/strings/Matcher.h>
#endif
#ifndef INCLUDED_hx_strings__Pattern_MatcherImpl
#include <hx/strings/_Pattern/MatcherImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_263_new,"hx.strings._Pattern.MatcherImpl","new",0xc5340291,"hx.strings._Pattern.MatcherImpl.new","hx/strings/Pattern.hx",263,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_270_reset,"hx.strings._Pattern.MatcherImpl","reset",0xc9be2a40,"hx.strings._Pattern.MatcherImpl.reset","hx/strings/Pattern.hx",270,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_277_iterate,"hx.strings._Pattern.MatcherImpl","iterate",0xd75418ab,"hx.strings._Pattern.MatcherImpl.iterate","hx/strings/Pattern.hx",277,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_290_map,"hx.strings._Pattern.MatcherImpl","map",0xc5333ccd,"hx.strings._Pattern.MatcherImpl.map","hx/strings/Pattern.hx",290,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_289_map,"hx.strings._Pattern.MatcherImpl","map",0xc5333ccd,"hx.strings._Pattern.MatcherImpl.map","hx/strings/Pattern.hx",289,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_297_matched,"hx.strings._Pattern.MatcherImpl","matched",0x7dffdb95,"hx.strings._Pattern.MatcherImpl.matched","hx/strings/Pattern.hx",297,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_310_matches,"hx.strings._Pattern.MatcherImpl","matches",0x7dffdba4,"hx.strings._Pattern.MatcherImpl.matches","hx/strings/Pattern.hx",310,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_323_matchesInRegion,"hx.strings._Pattern.MatcherImpl","matchesInRegion",0x1f36e67d,"hx.strings._Pattern.MatcherImpl.matchesInRegion","hx/strings/Pattern.hx",323,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_327_matchedPos,"hx.strings._Pattern.MatcherImpl","matchedPos",0x2fd4e4ff,"hx.strings._Pattern.MatcherImpl.matchedPos","hx/strings/Pattern.hx",327,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_333_substringAfterMatch,"hx.strings._Pattern.MatcherImpl","substringAfterMatch",0xc2e5776b,"hx.strings._Pattern.MatcherImpl.substringAfterMatch","hx/strings/Pattern.hx",333,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_339_substringBeforeMatch,"hx.strings._Pattern.MatcherImpl","substringBeforeMatch",0x41469424,"hx.strings._Pattern.MatcherImpl.substringBeforeMatch","hx/strings/Pattern.hx",339,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a6d2a4ed26a4b1_347__cloneEReg,"hx.strings._Pattern.MatcherImpl","_cloneEReg",0xccbb319c,"hx.strings._Pattern.MatcherImpl._cloneEReg","hx/strings/Pattern.hx",347,0x80e2271a)
namespace hx{
namespace strings{
namespace _Pattern{

void MatcherImpl_obj::__construct( ::EReg ereg,::String pattern,::String options,::String str){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_263_new)
HXLINE( 264)		 ::EReg clone = ( ( ::EReg)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::EReg >())) );
HXDLIN( 264)		::Reflect_obj::setField(clone,HX_("r",72,00,00,00),::Reflect_obj::field(ereg,HX_("r",72,00,00,00)));
HXDLIN( 264)		::Reflect_obj::setField(clone,HX_("global",63,31,b2,a7),::Reflect_obj::field(ereg,HX_("global",63,31,b2,a7)));
HXDLIN( 264)		this->ereg = clone;
HXLINE( 265)		this->str = str;
            	}

Dynamic MatcherImpl_obj::__CreateEmpty() { return new MatcherImpl_obj; }

void *MatcherImpl_obj::_hx_vtable = 0;

Dynamic MatcherImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MatcherImpl_obj > _hx_result = new MatcherImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MatcherImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18b13b4f;
}

static ::hx::strings::Matcher_obj _hx_hx_strings__Pattern_MatcherImpl__hx_hx_strings_Matcher= {
	( void (::hx::Object::*)( ::Dynamic))&::hx::strings::_Pattern::MatcherImpl_obj::iterate,
	( ::String (::hx::Object::*)( ::Dynamic))&::hx::strings::_Pattern::MatcherImpl_obj::map,
	( ::String (::hx::Object::*)(::hx::Null< int > ))&::hx::strings::_Pattern::MatcherImpl_obj::matched,
	(  ::Dynamic (::hx::Object::*)())&::hx::strings::_Pattern::MatcherImpl_obj::matchedPos,
	( bool (::hx::Object::*)())&::hx::strings::_Pattern::MatcherImpl_obj::matches,
	( bool (::hx::Object::*)(int,::hx::Null< int > ))&::hx::strings::_Pattern::MatcherImpl_obj::matchesInRegion,
	( ::Dynamic (::hx::Object::*)(::String))&::hx::strings::_Pattern::MatcherImpl_obj::reset,
	( ::String (::hx::Object::*)())&::hx::strings::_Pattern::MatcherImpl_obj::substringAfterMatch,
	( ::String (::hx::Object::*)())&::hx::strings::_Pattern::MatcherImpl_obj::substringBeforeMatch,
};

void *MatcherImpl_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa8cead20: return &_hx_hx_strings__Pattern_MatcherImpl__hx_hx_strings_Matcher;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic MatcherImpl_obj::reset(::String str){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_270_reset)
HXLINE( 271)		this->str = str;
HXLINE( 272)		this->isMatch = null();
HXLINE( 273)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MatcherImpl_obj,reset,return )

void MatcherImpl_obj::iterate( ::Dynamic onMatch){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_277_iterate)
HXLINE( 278)		int startAt = 0;
HXLINE( 279)		while(this->ereg->matchSub(this->str,startAt,null())){
HXLINE( 280)			this->isMatch = true;
HXLINE( 281)			 ::Dynamic matchedPos = this->ereg->matchedPos();
HXLINE( 282)			onMatch(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 283)			startAt = ( (int)((matchedPos->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + matchedPos->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            		}
HXLINE( 285)		this->isMatch = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MatcherImpl_obj,iterate,(void))

::String MatcherImpl_obj::map( ::Dynamic mapper){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,mapper, ::hx::strings::_Pattern::MatcherImpl,_gthis) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_290_map)
HXLINE( 291)			_gthis->isMatch = true;
HXLINE( 292)			return ( (::String)(mapper(_gthis)) );
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_289_map)
HXDLIN( 289)		 ::hx::strings::_Pattern::MatcherImpl _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 290)		return this->ereg->map(this->str, ::Dynamic(new _hx_Closure_0(mapper,_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MatcherImpl_obj,map,return )

::String MatcherImpl_obj::matched(::hx::Null< int >  __o_n){
            		int n = __o_n.Default(0);
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_297_matched)
HXLINE( 298)		if (!(this->matches())) {
HXLINE( 298)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("No string matched",74,2b,19,44)));
            		}
HXLINE( 300)		::String result = this->ereg->matched(n);
HXLINE( 306)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MatcherImpl_obj,matched,return )

bool MatcherImpl_obj::matches(){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_310_matches)
HXLINE( 311)		if (::hx::IsNull( this->isMatch )) {
HXLINE( 311)			this->isMatch = this->ereg->match(this->str);
            		}
HXLINE( 312)		return ( (bool)(this->isMatch) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatcherImpl_obj,matches,return )

bool MatcherImpl_obj::matchesInRegion(int pos,::hx::Null< int >  __o_len){
            		int len = __o_len.Default(-1);
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_323_matchesInRegion)
HXDLIN( 323)		return ( (bool)((this->isMatch = this->ereg->matchSub(this->str,pos,len))) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(MatcherImpl_obj,matchesInRegion,return )

 ::Dynamic MatcherImpl_obj::matchedPos(){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_327_matchedPos)
HXLINE( 328)		if (!(this->matches())) {
HXLINE( 328)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("No string matched",74,2b,19,44)));
            		}
HXLINE( 329)		return this->ereg->matchedPos();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatcherImpl_obj,matchedPos,return )

::String MatcherImpl_obj::substringAfterMatch(){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_333_substringAfterMatch)
HXLINE( 334)		if (!(this->matches())) {
HXLINE( 334)			return HX_("",00,00,00,00);
            		}
HXLINE( 335)		return this->ereg->matchedRight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatcherImpl_obj,substringAfterMatch,return )

::String MatcherImpl_obj::substringBeforeMatch(){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_339_substringBeforeMatch)
HXLINE( 340)		if (!(this->matches())) {
HXLINE( 340)			return HX_("",00,00,00,00);
            		}
HXLINE( 341)		return this->ereg->matchedLeft();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MatcherImpl_obj,substringBeforeMatch,return )

 ::EReg MatcherImpl_obj::_cloneEReg( ::EReg from,::String pattern,::String options){
            	HX_STACKFRAME(&_hx_pos_e7a6d2a4ed26a4b1_347__cloneEReg)
HXLINE( 351)		 ::EReg clone = ( ( ::EReg)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::EReg >())) );
HXLINE( 352)		::Reflect_obj::setField(clone,HX_("r",72,00,00,00),::Reflect_obj::field(from,HX_("r",72,00,00,00)));
HXLINE( 353)		::Reflect_obj::setField(clone,HX_("global",63,31,b2,a7),::Reflect_obj::field(from,HX_("global",63,31,b2,a7)));
HXLINE( 380)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC3(MatcherImpl_obj,_cloneEReg,return )


::hx::ObjectPtr< MatcherImpl_obj > MatcherImpl_obj::__new( ::EReg ereg,::String pattern,::String options,::String str) {
	::hx::ObjectPtr< MatcherImpl_obj > __this = new MatcherImpl_obj();
	__this->__construct(ereg,pattern,options,str);
	return __this;
}

::hx::ObjectPtr< MatcherImpl_obj > MatcherImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::EReg ereg,::String pattern,::String options,::String str) {
	MatcherImpl_obj *__this = (MatcherImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MatcherImpl_obj), true, "hx.strings._Pattern.MatcherImpl"));
	*(void **)__this = MatcherImpl_obj::_hx_vtable;
	__this->__construct(ereg,pattern,options,str);
	return __this;
}

MatcherImpl_obj::MatcherImpl_obj()
{
}

void MatcherImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatcherImpl);
	HX_MARK_MEMBER_NAME(ereg,"ereg");
	HX_MARK_MEMBER_NAME(isMatch,"isMatch");
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_END_CLASS();
}

void MatcherImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ereg,"ereg");
	HX_VISIT_MEMBER_NAME(isMatch,"isMatch");
	HX_VISIT_MEMBER_NAME(str,"str");
}

::hx::Val MatcherImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return ::hx::Val( str ); }
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ereg") ) { return ::hx::Val( ereg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMatch") ) { return ::hx::Val( isMatch ); }
		if (HX_FIELD_EQ(inName,"iterate") ) { return ::hx::Val( iterate_dyn() ); }
		if (HX_FIELD_EQ(inName,"matched") ) { return ::hx::Val( matched_dyn() ); }
		if (HX_FIELD_EQ(inName,"matches") ) { return ::hx::Val( matches_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchedPos") ) { return ::hx::Val( matchedPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"_cloneEReg") ) { return ::hx::Val( _cloneEReg_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"matchesInRegion") ) { return ::hx::Val( matchesInRegion_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"substringAfterMatch") ) { return ::hx::Val( substringAfterMatch_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"substringBeforeMatch") ) { return ::hx::Val( substringBeforeMatch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MatcherImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ereg") ) { ereg=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMatch") ) { isMatch=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatcherImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ereg",0f,66,19,43));
	outFields->push(HX_("isMatch",fb,ec,a8,9f));
	outFields->push(HX_("str",b1,a8,57,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MatcherImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(MatcherImpl_obj,ereg),HX_("ereg",0f,66,19,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MatcherImpl_obj,isMatch),HX_("isMatch",fb,ec,a8,9f)},
	{::hx::fsString,(int)offsetof(MatcherImpl_obj,str),HX_("str",b1,a8,57,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MatcherImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String MatcherImpl_obj_sMemberFields[] = {
	HX_("ereg",0f,66,19,43),
	HX_("isMatch",fb,ec,a8,9f),
	HX_("str",b1,a8,57,00),
	HX_("reset",cf,49,c8,e6),
	HX_("iterate",fa,79,d0,e2),
	HX_("map",9c,0a,53,00),
	HX_("matched",e4,3c,7c,89),
	HX_("matches",f3,3c,7c,89),
	HX_("matchesInRegion",cc,ae,fb,97),
	HX_("matchedPos",10,ff,c2,cb),
	HX_("substringAfterMatch",3a,13,56,8e),
	HX_("substringBeforeMatch",75,4d,5e,78),
	HX_("_cloneEReg",ad,4b,a9,68),
	::String(null()) };

::hx::Class MatcherImpl_obj::__mClass;

void MatcherImpl_obj::__register()
{
	MatcherImpl_obj _hx_dummy;
	MatcherImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._Pattern.MatcherImpl",1f,66,61,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MatcherImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MatcherImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MatcherImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MatcherImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _Pattern
