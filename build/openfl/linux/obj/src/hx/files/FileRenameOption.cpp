#include <hxcpp.h>

#ifndef INCLUDED_hx_files_FileRenameOption
#include <hx/files/FileRenameOption.h>
#endif
namespace hx{
namespace files{

::hx::files::FileRenameOption FileRenameOption_obj::OVERWRITE;

bool FileRenameOption_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) { outValue = FileRenameOption_obj::OVERWRITE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileRenameOption_obj)

int FileRenameOption_obj::__FindIndex(::String inName)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindIndex(inName);
}

int FileRenameOption_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileRenameOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return OVERWRITE;
	return super::__Field(inName,inCallProp);
}

static ::String FileRenameOption_obj_sStaticFields[] = {
	HX_("OVERWRITE",eb,fa,45,9c),
	::String(null())
};

::hx::Class FileRenameOption_obj::__mClass;

Dynamic __Create_FileRenameOption_obj() { return new FileRenameOption_obj; }

void FileRenameOption_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.FileRenameOption",c4,27,e6,d1), ::hx::TCanCast< FileRenameOption_obj >,FileRenameOption_obj_sStaticFields,0,
	&__Create_FileRenameOption_obj, &__Create,
	&super::__SGetClass(), &CreateFileRenameOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileRenameOption_obj::__GetStatic;
}

void FileRenameOption_obj::__boot()
{
OVERWRITE = ::hx::CreateConstEnum< FileRenameOption_obj >(HX_("OVERWRITE",eb,fa,45,9c),0);
}


} // end namespace hx
} // end namespace files
