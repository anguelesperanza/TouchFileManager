#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hx_strings_Matcher
#include <hx/strings/Matcher.h>
#endif
#ifndef INCLUDED_hx_strings_Pattern
#include <hx/strings/Pattern.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings__Pattern_MatcherImpl
#include <hx/strings/_Pattern/MatcherImpl.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#include <hx/strings/internal/_Either3/_Either3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e1b1a9770adac693_51_new,"hx.strings.Pattern","new",0x9ce07ad8,"hx.strings.Pattern.new","hx/strings/Pattern.hx",51,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e1b1a9770adac693_70_matcher,"hx.strings.Pattern","matcher",0x92bb836a,"hx.strings.Pattern.matcher","hx/strings/Pattern.hx",70,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e1b1a9770adac693_84_replace,"hx.strings.Pattern","replace",0xb4678eac,"hx.strings.Pattern.replace","hx/strings/Pattern.hx",84,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e1b1a9770adac693_98_remove,"hx.strings.Pattern","remove",0x7513cccc,"hx.strings.Pattern.remove","hx/strings/Pattern.hx",98,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e1b1a9770adac693_111_split,"hx.strings.Pattern","split",0xda552352,"hx.strings.Pattern.split","hx/strings/Pattern.hx",111,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e1b1a9770adac693_32_compile,"hx.strings.Pattern","compile",0x8cae6beb,"hx.strings.Pattern.compile","hx/strings/Pattern.hx",32,0x80e2271a)
HX_LOCAL_STACK_FRAME(_hx_pos_e1b1a9770adac693_21_boot,"hx.strings.Pattern","boot",0x9fa402ba,"hx.strings.Pattern.boot","hx/strings/Pattern.hx",21,0x80e2271a)
namespace hx{
namespace strings{

void Pattern_obj::__construct(::String pattern,::String options){
            	HX_GC_STACKFRAME(&_hx_pos_e1b1a9770adac693_51_new)
HXLINE(  52)		this->pattern = pattern;
HXLINE(  53)		this->options = options;
HXLINE(  54)		this->ereg =  ::EReg_obj::__alloc( HX_CTX ,pattern,options);
HXLINE(  57)		 ::hx::strings::Pattern _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)		_hx_tmp->options = (_hx_tmp->options + HX_("u",75,00,00,00));
            	}

Dynamic Pattern_obj::__CreateEmpty() { return new Pattern_obj; }

void *Pattern_obj::_hx_vtable = 0;

Dynamic Pattern_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pattern_obj > _hx_result = new Pattern_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Pattern_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13086006;
}

::Dynamic Pattern_obj::matcher(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_e1b1a9770adac693_70_matcher)
HXDLIN(  70)		return  ::hx::strings::_Pattern::MatcherImpl_obj::__alloc( HX_CTX ,this->ereg,this->pattern,this->options,str);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pattern_obj,matcher,return )

::String Pattern_obj::replace(::String str,::String replaceWith){
            	HX_STACKFRAME(&_hx_pos_e1b1a9770adac693_84_replace)
HXDLIN(  84)		return this->ereg->replace(str,replaceWith);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pattern_obj,replace,return )

::String Pattern_obj::remove(::String str){
            	HX_STACKFRAME(&_hx_pos_e1b1a9770adac693_98_remove)
HXDLIN(  98)		return this->ereg->replace(str,HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pattern_obj,remove,return )

::Array< ::String > Pattern_obj::split(::String str){
            	HX_STACKFRAME(&_hx_pos_e1b1a9770adac693_111_split)
HXDLIN( 111)		return this->ereg->split(str);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pattern_obj,split,return )

 ::hx::strings::Pattern Pattern_obj::compile(::String pattern, ::hx::strings::internal::_Either3::_Either3 options){
            	HX_GC_STACKFRAME(&_hx_pos_e1b1a9770adac693_32_compile)
HXLINE(  33)		if (::hx::IsNull( options )) {
HXLINE(  34)			return  ::hx::strings::Pattern_obj::__alloc( HX_CTX ,pattern,HX_("",00,00,00,00));
            		}
HXLINE(  36)		 ::hx::strings::internal::_Either3::_Either3 _g = options;
HXDLIN(  36)		::String _hx_tmp;
HXDLIN(  36)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  37)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE(  38)				::String str1 = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(str)) );
HXDLIN(  38)				bool _hx_tmp1;
HXDLIN(  38)				if (::hx::IsNotNull( str1 )) {
HXLINE(  38)					_hx_tmp1 = (str1.length == 0);
            				}
            				else {
HXLINE(  38)					_hx_tmp1 = true;
            				}
HXDLIN(  38)				if (_hx_tmp1) {
HXLINE(  36)					_hx_tmp = str1;
            				}
            				else {
HXLINE(  38)					::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(  38)					{
HXLINE(  38)						int _g1 = 0;
HXDLIN(  38)						::Array< int > _g2 = ::hx::strings::Strings_obj::toChars(str1);
HXDLIN(  38)						while((_g1 < _g2->length)){
HXLINE(  38)							int v = _g2->__get(_g1);
HXDLIN(  38)							_g1 = (_g1 + 1);
HXLINE(  40)							bool _hx_tmp;
HXDLIN(  40)							bool _hx_tmp1;
HXDLIN(  40)							bool _hx_tmp2;
HXDLIN(  40)							if ((v != ::hx::strings::Strings_obj::charCodeAt8(HX_("i",69,00,00,00),0,null()))) {
HXLINE(  40)								_hx_tmp2 = (v == ::hx::strings::Strings_obj::charCodeAt8(HX_("m",6d,00,00,00),0,null()));
            							}
            							else {
HXLINE(  40)								_hx_tmp2 = true;
            							}
HXDLIN(  40)							if (!(_hx_tmp2)) {
HXLINE(  40)								_hx_tmp1 = (v == ::hx::strings::Strings_obj::charCodeAt8(HX_("g",67,00,00,00),0,null()));
            							}
            							else {
HXLINE(  40)								_hx_tmp1 = true;
            							}
HXDLIN(  40)							if (!(_hx_tmp1)) {
HXLINE(  40)								_hx_tmp = (v == ::hx::strings::Strings_obj::charCodeAt8(HX_("s",73,00,00,00),0,null()));
            							}
            							else {
HXLINE(  40)								_hx_tmp = true;
            							}
HXLINE(  38)							if (_hx_tmp) {
HXLINE(  38)								_g->push(v);
            							}
            						}
            					}
HXDLIN(  38)					::Array< int > _this = _g;
HXDLIN(  38)					::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(  38)					{
HXLINE(  38)						int _g3 = 0;
HXDLIN(  38)						int _g4 = _this->length;
HXDLIN(  38)						while((_g3 < _g4)){
HXLINE(  38)							_g3 = (_g3 + 1);
HXDLIN(  38)							int i = (_g3 - 1);
HXDLIN(  38)							{
HXLINE(  38)								::String inValue = ::String::fromCharCode(( (int)(_hx_array_unsafe_get(_this,i)) ));
HXDLIN(  38)								result->__unsafe_set(i,inValue);
            							}
            						}
            					}
HXLINE(  36)					_hx_tmp = result->join(HX_("",00,00,00,00));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  45)				::String opt = ( (::String)(_g->_hx_getObject(0)) );
HXLINE(  36)				_hx_tmp = ::Std_obj::string(opt);
            			}
            			break;
            			case (int)2: {
HXLINE(  46)				::Array< ::String > arr = ( (::Array< ::String >)(_g->_hx_getObject(0)) );
HXDLIN(  46)				::Array< ::String > _g1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  46)				{
HXLINE(  46)					int _g2 = 0;
HXDLIN(  46)					::Array< ::String > _g3 = arr;
HXDLIN(  46)					while((_g2 < _g3->length)){
HXLINE(  46)						::String v = _g3->__get(_g2);
HXDLIN(  46)						_g2 = (_g2 + 1);
HXDLIN(  46)						if (::hx::IsNotNull( v )) {
HXLINE(  46)							_g1->push(v);
            						}
            					}
            				}
HXLINE(  36)				_hx_tmp = _g1->join(HX_("",00,00,00,00));
            			}
            			break;
            		}
HXDLIN(  36)		return  ::hx::strings::Pattern_obj::__alloc( HX_CTX ,pattern,_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Pattern_obj,compile,return )


::hx::ObjectPtr< Pattern_obj > Pattern_obj::__new(::String pattern,::String options) {
	::hx::ObjectPtr< Pattern_obj > __this = new Pattern_obj();
	__this->__construct(pattern,options);
	return __this;
}

::hx::ObjectPtr< Pattern_obj > Pattern_obj::__alloc(::hx::Ctx *_hx_ctx,::String pattern,::String options) {
	Pattern_obj *__this = (Pattern_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pattern_obj), true, "hx.strings.Pattern"));
	*(void **)__this = Pattern_obj::_hx_vtable;
	__this->__construct(pattern,options);
	return __this;
}

Pattern_obj::Pattern_obj()
{
}

void Pattern_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pattern);
	HX_MARK_MEMBER_NAME(pattern,"pattern");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(ereg,"ereg");
	HX_MARK_END_CLASS();
}

void Pattern_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pattern,"pattern");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(ereg,"ereg");
}

::hx::Val Pattern_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ereg") ) { return ::hx::Val( ereg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { return ::hx::Val( split_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pattern") ) { return ::hx::Val( pattern ); }
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"matcher") ) { return ::hx::Val( matcher_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Pattern_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compile") ) { outValue = compile_dyn(); return true; }
	}
	return false;
}

::hx::Val Pattern_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ereg") ) { ereg=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pattern") ) { pattern=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pattern_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pattern",50,06,77,11));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("ereg",0f,66,19,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pattern_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Pattern_obj,pattern),HX_("pattern",50,06,77,11)},
	{::hx::fsString,(int)offsetof(Pattern_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(Pattern_obj,ereg),HX_("ereg",0f,66,19,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Pattern_obj_sStaticStorageInfo = 0;
#endif

static ::String Pattern_obj_sMemberFields[] = {
	HX_("pattern",50,06,77,11),
	HX_("options",5e,33,fe,df),
	HX_("ereg",0f,66,19,43),
	HX_("matcher",f2,3c,7c,89),
	HX_("replace",34,48,28,ab),
	HX_("remove",44,9c,88,04),
	HX_("split",da,ea,6e,81),
	::String(null()) };

::hx::Class Pattern_obj::__mClass;

static ::String Pattern_obj_sStaticFields[] = {
	HX_("compile",73,25,6f,83),
	::String(null())
};

void Pattern_obj::__register()
{
	Pattern_obj _hx_dummy;
	Pattern_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.Pattern",e6,6e,2c,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pattern_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Pattern_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pattern_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pattern_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pattern_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pattern_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Pattern_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e1b1a9770adac693_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("threadSafe",37,51,16,48),null())
            				->setFixed(1,HX_("immutable",42,28,c7,66),null()))));
            	}
}

} // end namespace hx
} // end namespace strings
