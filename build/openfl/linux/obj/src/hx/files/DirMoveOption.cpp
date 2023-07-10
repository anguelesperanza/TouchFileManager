#include <hxcpp.h>

#ifndef INCLUDED_hx_files_DirMoveOption
#include <hx/files/DirMoveOption.h>
#endif
namespace hx{
namespace files{

::hx::files::DirMoveOption DirMoveOption_obj::NO_WHITESPACE_TRIMMING;

::hx::files::DirMoveOption DirMoveOption_obj::OVERWRITE;

bool DirMoveOption_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) { outValue = DirMoveOption_obj::NO_WHITESPACE_TRIMMING; return true; }
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) { outValue = DirMoveOption_obj::OVERWRITE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DirMoveOption_obj)

int DirMoveOption_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 1;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindIndex(inName);
}

int DirMoveOption_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 0;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DirMoveOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return NO_WHITESPACE_TRIMMING;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return OVERWRITE;
	return super::__Field(inName,inCallProp);
}

static ::String DirMoveOption_obj_sStaticFields[] = {
	HX_("OVERWRITE",eb,fa,45,9c),
	HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),
	::String(null())
};

::hx::Class DirMoveOption_obj::__mClass;

Dynamic __Create_DirMoveOption_obj() { return new DirMoveOption_obj; }

void DirMoveOption_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.DirMoveOption",5e,d4,84,0d), ::hx::TCanCast< DirMoveOption_obj >,DirMoveOption_obj_sStaticFields,0,
	&__Create_DirMoveOption_obj, &__Create,
	&super::__SGetClass(), &CreateDirMoveOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DirMoveOption_obj::__GetStatic;
}

void DirMoveOption_obj::__boot()
{
NO_WHITESPACE_TRIMMING = ::hx::CreateConstEnum< DirMoveOption_obj >(HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),1);
OVERWRITE = ::hx::CreateConstEnum< DirMoveOption_obj >(HX_("OVERWRITE",eb,fa,45,9c),0);
}


} // end namespace hx
} // end namespace files
