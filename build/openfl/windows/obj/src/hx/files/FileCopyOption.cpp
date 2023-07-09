// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_hx_files_FileCopyOption
#include <hx/files/FileCopyOption.h>
#endif
namespace hx{
namespace files{

::hx::files::FileCopyOption FileCopyOption_obj::NO_WHITESPACE_TRIMMING;

::hx::files::FileCopyOption FileCopyOption_obj::OVERWRITE;

bool FileCopyOption_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) { outValue = FileCopyOption_obj::NO_WHITESPACE_TRIMMING; return true; }
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) { outValue = FileCopyOption_obj::OVERWRITE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileCopyOption_obj)

int FileCopyOption_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 1;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindIndex(inName);
}

int FileCopyOption_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 0;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileCopyOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return NO_WHITESPACE_TRIMMING;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return OVERWRITE;
	return super::__Field(inName,inCallProp);
}

static ::String FileCopyOption_obj_sStaticFields[] = {
	HX_("OVERWRITE",eb,fa,45,9c),
	HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),
	::String(null())
};

::hx::Class FileCopyOption_obj::__mClass;

Dynamic __Create_FileCopyOption_obj() { return new FileCopyOption_obj; }

void FileCopyOption_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.FileCopyOption",fb,9c,96,d4), ::hx::TCanCast< FileCopyOption_obj >,FileCopyOption_obj_sStaticFields,0,
	&__Create_FileCopyOption_obj, &__Create,
	&super::__SGetClass(), &CreateFileCopyOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileCopyOption_obj::__GetStatic;
}

void FileCopyOption_obj::__boot()
{
NO_WHITESPACE_TRIMMING = ::hx::CreateConstEnum< FileCopyOption_obj >(HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),1);
OVERWRITE = ::hx::CreateConstEnum< FileCopyOption_obj >(HX_("OVERWRITE",eb,fa,45,9c),0);
}


} // end namespace hx
} // end namespace files
