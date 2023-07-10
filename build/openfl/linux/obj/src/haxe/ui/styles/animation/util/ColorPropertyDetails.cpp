#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails
#include <haxe/ui/styles/animation/util/ColorPropertyDetails.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_44218ffaa5a81fdb_14_new,"haxe.ui.styles.animation.util.ColorPropertyDetails","new",0xd48fac24,"haxe.ui.styles.animation.util.ColorPropertyDetails.new","haxe/ui/styles/animation/util/ColorPropertyDetails.hx",14,0xdc3f138d)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void ColorPropertyDetails_obj::__construct( ::Dynamic target,::String propertyName,int start,int changeR,int changeG,int changeB,int changeA){
            	HX_STACKFRAME(&_hx_pos_44218ffaa5a81fdb_14_new)
HXLINE(  15)		this->target = target;
HXLINE(  16)		this->propertyName = propertyName;
HXLINE(  17)		this->start = start;
HXLINE(  18)		this->changeR = changeR;
HXLINE(  19)		this->changeG = changeG;
HXLINE(  20)		this->changeB = changeB;
HXLINE(  21)		this->changeA = changeA;
            	}

Dynamic ColorPropertyDetails_obj::__CreateEmpty() { return new ColorPropertyDetails_obj; }

void *ColorPropertyDetails_obj::_hx_vtable = 0;

Dynamic ColorPropertyDetails_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorPropertyDetails_obj > _hx_result = new ColorPropertyDetails_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool ColorPropertyDetails_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0273c47c;
}


ColorPropertyDetails_obj::ColorPropertyDetails_obj()
{
}

void ColorPropertyDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorPropertyDetails);
	HX_MARK_MEMBER_NAME(changeR,"changeR");
	HX_MARK_MEMBER_NAME(changeG,"changeG");
	HX_MARK_MEMBER_NAME(changeB,"changeB");
	HX_MARK_MEMBER_NAME(changeA,"changeA");
	HX_MARK_MEMBER_NAME(propertyName,"propertyName");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void ColorPropertyDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(changeR,"changeR");
	HX_VISIT_MEMBER_NAME(changeG,"changeG");
	HX_VISIT_MEMBER_NAME(changeB,"changeB");
	HX_VISIT_MEMBER_NAME(changeA,"changeA");
	HX_VISIT_MEMBER_NAME(propertyName,"propertyName");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(target,"target");
}

::hx::Val ColorPropertyDetails_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"changeR") ) { return ::hx::Val( changeR ); }
		if (HX_FIELD_EQ(inName,"changeG") ) { return ::hx::Val( changeG ); }
		if (HX_FIELD_EQ(inName,"changeB") ) { return ::hx::Val( changeB ); }
		if (HX_FIELD_EQ(inName,"changeA") ) { return ::hx::Val( changeA ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { return ::hx::Val( propertyName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorPropertyDetails_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"changeR") ) { changeR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeG") ) { changeG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeB") ) { changeB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeA") ) { changeA=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { propertyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorPropertyDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("changeR",e2,b0,cc,cc));
	outFields->push(HX_("changeG",d7,b0,cc,cc));
	outFields->push(HX_("changeB",d2,b0,cc,cc));
	outFields->push(HX_("changeA",d1,b0,cc,cc));
	outFields->push(HX_("propertyName",40,35,e4,26));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorPropertyDetails_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ColorPropertyDetails_obj,changeR),HX_("changeR",e2,b0,cc,cc)},
	{::hx::fsInt,(int)offsetof(ColorPropertyDetails_obj,changeG),HX_("changeG",d7,b0,cc,cc)},
	{::hx::fsInt,(int)offsetof(ColorPropertyDetails_obj,changeB),HX_("changeB",d2,b0,cc,cc)},
	{::hx::fsInt,(int)offsetof(ColorPropertyDetails_obj,changeA),HX_("changeA",d1,b0,cc,cc)},
	{::hx::fsString,(int)offsetof(ColorPropertyDetails_obj,propertyName),HX_("propertyName",40,35,e4,26)},
	{::hx::fsInt,(int)offsetof(ColorPropertyDetails_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ColorPropertyDetails_obj,target),HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorPropertyDetails_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorPropertyDetails_obj_sMemberFields[] = {
	HX_("changeR",e2,b0,cc,cc),
	HX_("changeG",d7,b0,cc,cc),
	HX_("changeB",d2,b0,cc,cc),
	HX_("changeA",d1,b0,cc,cc),
	HX_("propertyName",40,35,e4,26),
	HX_("start",62,74,0b,84),
	HX_("target",51,f3,ec,86),
	::String(null()) };

::hx::Class ColorPropertyDetails_obj::__mClass;

void ColorPropertyDetails_obj::__register()
{
	ColorPropertyDetails_obj _hx_dummy;
	ColorPropertyDetails_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.ColorPropertyDetails",32,0a,fe,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorPropertyDetails_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorPropertyDetails_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorPropertyDetails_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorPropertyDetails_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
