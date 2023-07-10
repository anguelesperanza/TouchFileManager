#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_animation_util_StringPropertyDetails
#include <haxe/ui/styles/animation/util/StringPropertyDetails.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9c479dc3d42b059_3_new,"haxe.ui.styles.animation.util.StringPropertyDetails","new",0xf03b4da6,"haxe.ui.styles.animation.util.StringPropertyDetails.new","haxe/ui/styles/animation/util/StringPropertyDetails.hx",3,0xd74381a9)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void StringPropertyDetails_obj::__construct( ::Dynamic target,::String propertyName,::String start,::String end){
            	HX_STACKFRAME(&_hx_pos_e9c479dc3d42b059_3_new)
HXLINE(  13)		this->isVariant = false;
HXLINE(  11)		this->pattern = null();
HXLINE(  16)		this->target = target;
HXLINE(  17)		this->propertyName = propertyName;
HXLINE(  18)		this->start = start;
HXLINE(  19)		this->end = end;
            	}

Dynamic StringPropertyDetails_obj::__CreateEmpty() { return new StringPropertyDetails_obj; }

void *StringPropertyDetails_obj::_hx_vtable = 0;

Dynamic StringPropertyDetails_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringPropertyDetails_obj > _hx_result = new StringPropertyDetails_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool StringPropertyDetails_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x731590fe;
}


StringPropertyDetails_obj::StringPropertyDetails_obj()
{
}

void StringPropertyDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringPropertyDetails);
	HX_MARK_MEMBER_NAME(propertyName,"propertyName");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(startInt,"startInt");
	HX_MARK_MEMBER_NAME(changeInt,"changeInt");
	HX_MARK_MEMBER_NAME(pattern,"pattern");
	HX_MARK_MEMBER_NAME(isVariant,"isVariant");
	HX_MARK_END_CLASS();
}

void StringPropertyDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(propertyName,"propertyName");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(startInt,"startInt");
	HX_VISIT_MEMBER_NAME(changeInt,"changeInt");
	HX_VISIT_MEMBER_NAME(pattern,"pattern");
	HX_VISIT_MEMBER_NAME(isVariant,"isVariant");
}

::hx::Val StringPropertyDetails_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pattern") ) { return ::hx::Val( pattern ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startInt") ) { return ::hx::Val( startInt ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"changeInt") ) { return ::hx::Val( changeInt ); }
		if (HX_FIELD_EQ(inName,"isVariant") ) { return ::hx::Val( isVariant ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { return ::hx::Val( propertyName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringPropertyDetails_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pattern") ) { pattern=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startInt") ) { startInt=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"changeInt") ) { changeInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isVariant") ) { isVariant=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { propertyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringPropertyDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("propertyName",40,35,e4,26));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("startInt",ad,b9,93,42));
	outFields->push(HX_("changeInt",5f,b9,fd,1d));
	outFields->push(HX_("pattern",50,06,77,11));
	outFields->push(HX_("isVariant",bb,bd,e0,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringPropertyDetails_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StringPropertyDetails_obj,propertyName),HX_("propertyName",40,35,e4,26)},
	{::hx::fsString,(int)offsetof(StringPropertyDetails_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsString,(int)offsetof(StringPropertyDetails_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StringPropertyDetails_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsInt,(int)offsetof(StringPropertyDetails_obj,startInt),HX_("startInt",ad,b9,93,42)},
	{::hx::fsInt,(int)offsetof(StringPropertyDetails_obj,changeInt),HX_("changeInt",5f,b9,fd,1d)},
	{::hx::fsString,(int)offsetof(StringPropertyDetails_obj,pattern),HX_("pattern",50,06,77,11)},
	{::hx::fsBool,(int)offsetof(StringPropertyDetails_obj,isVariant),HX_("isVariant",bb,bd,e0,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringPropertyDetails_obj_sStaticStorageInfo = 0;
#endif

static ::String StringPropertyDetails_obj_sMemberFields[] = {
	HX_("propertyName",40,35,e4,26),
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	HX_("target",51,f3,ec,86),
	HX_("startInt",ad,b9,93,42),
	HX_("changeInt",5f,b9,fd,1d),
	HX_("pattern",50,06,77,11),
	HX_("isVariant",bb,bd,e0,e0),
	::String(null()) };

::hx::Class StringPropertyDetails_obj::__mClass;

void StringPropertyDetails_obj::__register()
{
	StringPropertyDetails_obj _hx_dummy;
	StringPropertyDetails_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.StringPropertyDetails",b4,42,16,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringPropertyDetails_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringPropertyDetails_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringPropertyDetails_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringPropertyDetails_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
