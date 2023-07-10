#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d11d077e5b70636_7_new,"haxe.ui.geom.Size","new",0x9064e3f3,"haxe.ui.geom.Size.new","haxe/ui/geom/Size.hx",7,0x11fa339c)
HX_LOCAL_STACK_FRAME(_hx_pos_5d11d077e5b70636_12_round,"haxe.ui.geom.Size","round",0x729156a1,"haxe.ui.geom.Size.round","haxe/ui/geom/Size.hx",12,0x11fa339c)
HX_LOCAL_STACK_FRAME(_hx_pos_5d11d077e5b70636_18_toString,"haxe.ui.geom.Size","toString",0x590ee839,"haxe.ui.geom.Size.toString","haxe/ui/geom/Size.hx",18,0x11fa339c)
namespace haxe{
namespace ui{
namespace geom{

void Size_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_5d11d077e5b70636_7_new)
HXLINE(   8)		this->width = width;
HXLINE(   9)		this->height = height;
            	}

Dynamic Size_obj::__CreateEmpty() { return new Size_obj; }

void *Size_obj::_hx_vtable = 0;

Dynamic Size_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Size_obj > _hx_result = new Size_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Size_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ef82b7b;
}

void Size_obj::round(){
            	HX_STACKFRAME(&_hx_pos_5d11d077e5b70636_12_round)
HXLINE(  13)		this->width = ::Math_obj::fround(this->width);
HXLINE(  14)		this->height = ::Math_obj::fround(this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,round,(void))

::String Size_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5d11d077e5b70636_18_toString)
HXDLIN(  18)		return ((((HX_("[",5b,00,00,00) + this->width) + HX_("x",78,00,00,00)) + this->height) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,toString,return )


::hx::ObjectPtr< Size_obj > Size_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< Size_obj > __this = new Size_obj();
	__this->__construct(__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Size_obj > Size_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	Size_obj *__this = (Size_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Size_obj), false, "haxe.ui.geom.Size"));
	*(void **)__this = Size_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height);
	return __this;
}

Size_obj::Size_obj()
{
}

::hx::Val Size_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"round") ) { return ::hx::Val( round_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Size_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Size_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Size_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Size_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Size_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Size_obj_sStaticStorageInfo = 0;
#endif

static ::String Size_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("round",4e,f8,65,ed),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Size_obj::__mClass;

void Size_obj::__register()
{
	Size_obj _hx_dummy;
	Size_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.geom.Size",81,6e,a9,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Size_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Size_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Size_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Size_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace geom
