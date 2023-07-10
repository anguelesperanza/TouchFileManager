#include <hxcpp.h>

#ifndef INCLUDED_hx_files_FileMoveOption
#include <hx/files/FileMoveOption.h>
#endif
namespace hx{
namespace files{

::hx::files::FileMoveOption FileMoveOption_obj::NO_WHITESPACE_TRIMMING;

::hx::files::FileMoveOption FileMoveOption_obj::OVERWRITE;

bool FileMoveOption_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) { outValue = FileMoveOption_obj::NO_WHITESPACE_TRIMMING; return true; }
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) { outValue = FileMoveOption_obj::OVERWRITE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileMoveOption_obj)

int FileMoveOption_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 1;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindIndex(inName);
}

int FileMoveOption_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 0;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileMoveOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return NO_WHITESPACE_TRIMMING;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return OVERWRITE;
	return super::__Field(inName,inCallProp);
}

static ::String FileMoveOption_obj_sStaticFields[] = {
	HX_("OVERWRITE",eb,fa,45,9c),
	HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),
	::String(null())
};

::hx::Class FileMoveOption_obj::__mClass;

Dynamic __Create_FileMoveOption_obj() { return new FileMoveOption_obj; }

void FileMoveOption_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.FileMoveOption",57,b1,00,6f), ::hx::TCanCast< FileMoveOption_obj >,FileMoveOption_obj_sStaticFields,0,
	&__Create_FileMoveOption_obj, &__Create,
	&super::__SGetClass(), &CreateFileMoveOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileMoveOption_obj::__GetStatic;
}

void FileMoveOption_obj::__boot()
{
NO_WHITESPACE_TRIMMING = ::hx::CreateConstEnum< FileMoveOption_obj >(HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),1);
OVERWRITE = ::hx::CreateConstEnum< FileMoveOption_obj >(HX_("OVERWRITE",eb,fa,45,9c),0);
}


} // end namespace hx
} // end namespace files
