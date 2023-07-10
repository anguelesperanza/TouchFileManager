#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#include <haxe/ui/parsers/locale/LocaleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_PropertiesParser
#include <haxe/ui/parsers/locale/PropertiesParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d63ac6a12e620884_6_new,"haxe.ui.parsers.locale.LocaleParser","new",0xc84b2273,"haxe.ui.parsers.locale.LocaleParser.new","haxe/ui/parsers/locale/LocaleParser.hx",6,0x8f81ecdd)
HX_LOCAL_STACK_FRAME(_hx_pos_d63ac6a12e620884_10_parse,"haxe.ui.parsers.locale.LocaleParser","parse",0xef53cd06,"haxe.ui.parsers.locale.LocaleParser.parse","haxe/ui/parsers/locale/LocaleParser.hx",10,0x8f81ecdd)
HX_LOCAL_STACK_FRAME(_hx_pos_d63ac6a12e620884_13_get,"haxe.ui.parsers.locale.LocaleParser","get",0xc845d2a9,"haxe.ui.parsers.locale.LocaleParser.get","haxe/ui/parsers/locale/LocaleParser.hx",13,0x8f81ecdd)
HX_LOCAL_STACK_FRAME(_hx_pos_d63ac6a12e620884_30_defaultParsers,"haxe.ui.parsers.locale.LocaleParser","defaultParsers",0xa8fc10c0,"haxe.ui.parsers.locale.LocaleParser.defaultParsers","haxe/ui/parsers/locale/LocaleParser.hx",30,0x8f81ecdd)
HX_LOCAL_STACK_FRAME(_hx_pos_d63ac6a12e620884_33_register,"haxe.ui.parsers.locale.LocaleParser","register",0xa5a6ef70,"haxe.ui.parsers.locale.LocaleParser.register","haxe/ui/parsers/locale/LocaleParser.hx",33,0x8f81ecdd)
namespace haxe{
namespace ui{
namespace parsers{
namespace locale{

void LocaleParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d63ac6a12e620884_6_new)
            	}

Dynamic LocaleParser_obj::__CreateEmpty() { return new LocaleParser_obj; }

void *LocaleParser_obj::_hx_vtable = 0;

Dynamic LocaleParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleParser_obj > _hx_result = new LocaleParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocaleParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55ebf20d;
}

 ::haxe::ds::StringMap LocaleParser_obj::parse(::String data){
            	HX_STACKFRAME(&_hx_pos_d63ac6a12e620884_10_parse)
HXDLIN(  10)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Locale parser not implemented!",47,5b,e5,53)));
HXDLIN(  10)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleParser_obj,parse,return )

 ::haxe::ds::StringMap LocaleParser_obj::_parsers;

 ::haxe::ui::parsers::locale::LocaleParser LocaleParser_obj::get(::String extension){
            	HX_STACKFRAME(&_hx_pos_d63ac6a12e620884_13_get)
HXLINE(  14)		::haxe::ui::parsers::locale::LocaleParser_obj::defaultParsers();
HXLINE(  16)		::hx::Class cls = ::haxe::ui::parsers::locale::LocaleParser_obj::_parsers->get(extension);
HXLINE(  17)		if (::hx::IsNull( cls )) {
HXLINE(  18)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("No locale parser found for \"",73,17,77,f8) + extension) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  21)		 ::haxe::ui::parsers::locale::LocaleParser instance = ( ( ::haxe::ui::parsers::locale::LocaleParser)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  22)		if (::hx::IsNull( instance )) {
HXLINE(  23)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Could not create locale parser instance \"",4a,6d,a0,1c) + ::Std_obj::string(cls)) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  26)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocaleParser_obj,get,return )

void LocaleParser_obj::defaultParsers(){
            	HX_STACKFRAME(&_hx_pos_d63ac6a12e620884_30_defaultParsers)
HXDLIN(  30)		::haxe::ui::parsers::locale::LocaleParser_obj::_hx_register(HX_("properties",f3,fb,0e,61),::hx::ClassOf< ::haxe::ui::parsers::locale::PropertiesParser >());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LocaleParser_obj,defaultParsers,(void))

void LocaleParser_obj::_hx_register(::String extension,::hx::Class cls){
            	HX_GC_STACKFRAME(&_hx_pos_d63ac6a12e620884_33_register)
HXLINE(  34)		if (::hx::IsNull( ::haxe::ui::parsers::locale::LocaleParser_obj::_parsers )) {
HXLINE(  35)			::haxe::ui::parsers::locale::LocaleParser_obj::_parsers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  37)		::haxe::ui::parsers::locale::LocaleParser_obj::_parsers->set(extension,cls);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LocaleParser_obj,_hx_register,(void))


::hx::ObjectPtr< LocaleParser_obj > LocaleParser_obj::__new() {
	::hx::ObjectPtr< LocaleParser_obj > __this = new LocaleParser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocaleParser_obj > LocaleParser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocaleParser_obj *__this = (LocaleParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleParser_obj), false, "haxe.ui.parsers.locale.LocaleParser"));
	*(void **)__this = LocaleParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocaleParser_obj::LocaleParser_obj()
{
}

::hx::Val LocaleParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LocaleParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { outValue = ( _parsers ); return true; }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultParsers") ) { outValue = defaultParsers_dyn(); return true; }
	}
	return false;
}

bool LocaleParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { _parsers=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LocaleParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LocaleParser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &LocaleParser_obj::_parsers,HX_("_parsers",35,00,b9,23)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LocaleParser_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void LocaleParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocaleParser_obj::_parsers,"_parsers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocaleParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocaleParser_obj::_parsers,"_parsers");
};

#endif

::hx::Class LocaleParser_obj::__mClass;

static ::String LocaleParser_obj_sStaticFields[] = {
	HX_("_parsers",35,00,b9,23),
	HX_("get",96,80,4e,00),
	HX_("defaultParsers",f3,ff,40,19),
	HX_("register",63,a6,9f,d0),
	::String(null())
};

void LocaleParser_obj::__register()
{
	LocaleParser_obj _hx_dummy;
	LocaleParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.parsers.locale.LocaleParser",01,6d,ee,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LocaleParser_obj::__GetStatic;
	__mClass->mSetStaticField = &LocaleParser_obj::__SetStatic;
	__mClass->mMarkFunc = LocaleParser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LocaleParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocaleParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace locale
