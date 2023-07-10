#include <hxcpp.h>

#ifndef INCLUDED_hx_files_FileWriteMode
#include <hx/files/FileWriteMode.h>
#endif
namespace hx{
namespace files{

::hx::files::FileWriteMode FileWriteMode_obj::APPEND;

::hx::files::FileWriteMode FileWriteMode_obj::REPLACE;

::hx::files::FileWriteMode FileWriteMode_obj::UPDATE;

bool FileWriteMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("APPEND",da,8d,56,42)) { outValue = FileWriteMode_obj::APPEND; return true; }
	if (inName==HX_("REPLACE",14,1c,fc,2a)) { outValue = FileWriteMode_obj::REPLACE; return true; }
	if (inName==HX_("UPDATE",09,32,88,39)) { outValue = FileWriteMode_obj::UPDATE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileWriteMode_obj)

int FileWriteMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("APPEND",da,8d,56,42)) return 2;
	if (inName==HX_("REPLACE",14,1c,fc,2a)) return 0;
	if (inName==HX_("UPDATE",09,32,88,39)) return 1;
	return super::__FindIndex(inName);
}

int FileWriteMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("APPEND",da,8d,56,42)) return 0;
	if (inName==HX_("REPLACE",14,1c,fc,2a)) return 0;
	if (inName==HX_("UPDATE",09,32,88,39)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileWriteMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("APPEND",da,8d,56,42)) return APPEND;
	if (inName==HX_("REPLACE",14,1c,fc,2a)) return REPLACE;
	if (inName==HX_("UPDATE",09,32,88,39)) return UPDATE;
	return super::__Field(inName,inCallProp);
}

static ::String FileWriteMode_obj_sStaticFields[] = {
	HX_("REPLACE",14,1c,fc,2a),
	HX_("UPDATE",09,32,88,39),
	HX_("APPEND",da,8d,56,42),
	::String(null())
};

::hx::Class FileWriteMode_obj::__mClass;

Dynamic __Create_FileWriteMode_obj() { return new FileWriteMode_obj; }

void FileWriteMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.FileWriteMode",11,ed,bd,f1), ::hx::TCanCast< FileWriteMode_obj >,FileWriteMode_obj_sStaticFields,0,
	&__Create_FileWriteMode_obj, &__Create,
	&super::__SGetClass(), &CreateFileWriteMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileWriteMode_obj::__GetStatic;
}

void FileWriteMode_obj::__boot()
{
APPEND = ::hx::CreateConstEnum< FileWriteMode_obj >(HX_("APPEND",da,8d,56,42),2);
REPLACE = ::hx::CreateConstEnum< FileWriteMode_obj >(HX_("REPLACE",14,1c,fc,2a),0);
UPDATE = ::hx::CreateConstEnum< FileWriteMode_obj >(HX_("UPDATE",09,32,88,39),1);
}


} // end namespace hx
} // end namespace files
