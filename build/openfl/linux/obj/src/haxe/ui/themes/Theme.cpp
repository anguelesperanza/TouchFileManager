#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_Theme
#include <haxe/ui/themes/Theme.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78d817c3c3f18acf_12_new,"haxe.ui.themes.Theme","new",0x53240349,"haxe.ui.themes.Theme.new","haxe/ui/themes/Theme.hx",12,0x61905ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_78d817c3c3f18acf_4_boot,"haxe.ui.themes.Theme","boot",0x6477dd29,"haxe.ui.themes.Theme.boot","haxe/ui/themes/Theme.hx",4,0x61905ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_78d817c3c3f18acf_5_boot,"haxe.ui.themes.Theme","boot",0x6477dd29,"haxe.ui.themes.Theme.boot","haxe/ui/themes/Theme.hx",5,0x61905ea8)
namespace haxe{
namespace ui{
namespace themes{

void Theme_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_78d817c3c3f18acf_12_new)
HXLINE(  13)		this->styles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  14)		this->images = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  15)		this->vars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Theme_obj::__CreateEmpty() { return new Theme_obj; }

void *Theme_obj::_hx_vtable = 0;

Dynamic Theme_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Theme_obj > _hx_result = new Theme_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Theme_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x124e84c1;
}

::String Theme_obj::DEFAULT;

::String Theme_obj::DARK;


::hx::ObjectPtr< Theme_obj > Theme_obj::__new() {
	::hx::ObjectPtr< Theme_obj > __this = new Theme_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Theme_obj > Theme_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Theme_obj *__this = (Theme_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Theme_obj), true, "haxe.ui.themes.Theme"));
	*(void **)__this = Theme_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Theme_obj::Theme_obj()
{
}

void Theme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(styles,"styles");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_MEMBER_NAME(vars,"vars");
	HX_MARK_END_CLASS();
}

void Theme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(styles,"styles");
	HX_VISIT_MEMBER_NAME(images,"images");
	HX_VISIT_MEMBER_NAME(vars,"vars");
}

::hx::Val Theme_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { return ::hx::Val( vars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"styles") ) { return ::hx::Val( styles ); }
		if (HX_FIELD_EQ(inName,"images") ) { return ::hx::Val( images ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Theme_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { vars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styles") ) { styles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("styles",22,e6,d2,15));
	outFields->push(HX_("images",b8,50,92,fe));
	outFields->push(HX_("vars",ac,2b,49,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Theme_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Theme_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Theme_obj,styles),HX_("styles",22,e6,d2,15)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Theme_obj,images),HX_("images",b8,50,92,fe)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Theme_obj,vars),HX_("vars",ac,2b,49,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Theme_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Theme_obj::DEFAULT,HX_("DEFAULT",a1,ac,97,1b)},
	{::hx::fsString,(void *) &Theme_obj::DARK,HX_("DARK",76,1c,24,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Theme_obj_sMemberFields[] = {
	HX_("parent",2a,05,7e,ed),
	HX_("styles",22,e6,d2,15),
	HX_("images",b8,50,92,fe),
	HX_("vars",ac,2b,49,4e),
	::String(null()) };

static void Theme_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(Theme_obj::DARK,"DARK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Theme_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(Theme_obj::DARK,"DARK");
};

#endif

::hx::Class Theme_obj::__mClass;

static ::String Theme_obj_sStaticFields[] = {
	HX_("DEFAULT",a1,ac,97,1b),
	HX_("DARK",76,1c,24,2d),
	::String(null())
};

void Theme_obj::__register()
{
	Theme_obj _hx_dummy;
	Theme_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.themes.Theme",d7,aa,a4,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Theme_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Theme_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Theme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Theme_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Theme_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Theme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Theme_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Theme_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_78d817c3c3f18acf_4_boot)
HXDLIN(   4)		DEFAULT = HX_("default",c1,d8,c3,9b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_78d817c3c3f18acf_5_boot)
HXDLIN(   5)		DARK = HX_("dark",76,54,63,42);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace themes
