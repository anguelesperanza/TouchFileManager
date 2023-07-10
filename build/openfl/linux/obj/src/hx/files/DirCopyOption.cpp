#include <hxcpp.h>

#ifndef INCLUDED_hx_files_Dir
#include <hx/files/Dir.h>
#endif
#ifndef INCLUDED_hx_files_DirCopyOption
#include <hx/files/DirCopyOption.h>
#endif
#ifndef INCLUDED_hx_files_File
#include <hx/files/File.h>
#endif
namespace hx{
namespace files{

::hx::files::DirCopyOption DirCopyOption_obj::LISTENER( ::Dynamic onFile, ::Dynamic onDir)
{
	return ::hx::CreateEnum< DirCopyOption_obj >(HX_("LISTENER",74,90,b7,91),3,2)->_hx_init(0,onFile)->_hx_init(1,onDir);
}

::hx::files::DirCopyOption DirCopyOption_obj::MERGE;

::hx::files::DirCopyOption DirCopyOption_obj::NO_WHITESPACE_TRIMMING;

::hx::files::DirCopyOption DirCopyOption_obj::OVERWRITE;

bool DirCopyOption_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LISTENER",74,90,b7,91)) { outValue = DirCopyOption_obj::LISTENER_dyn(); return true; }
	if (inName==HX_("MERGE",98,da,b4,83)) { outValue = DirCopyOption_obj::MERGE; return true; }
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) { outValue = DirCopyOption_obj::NO_WHITESPACE_TRIMMING; return true; }
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) { outValue = DirCopyOption_obj::OVERWRITE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DirCopyOption_obj)

int DirCopyOption_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LISTENER",74,90,b7,91)) return 3;
	if (inName==HX_("MERGE",98,da,b4,83)) return 1;
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 2;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DirCopyOption_obj,LISTENER,return)

int DirCopyOption_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LISTENER",74,90,b7,91)) return 2;
	if (inName==HX_("MERGE",98,da,b4,83)) return 0;
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return 0;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DirCopyOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LISTENER",74,90,b7,91)) return LISTENER_dyn();
	if (inName==HX_("MERGE",98,da,b4,83)) return MERGE;
	if (inName==HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23)) return NO_WHITESPACE_TRIMMING;
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return OVERWRITE;
	return super::__Field(inName,inCallProp);
}

static ::String DirCopyOption_obj_sStaticFields[] = {
	HX_("OVERWRITE",eb,fa,45,9c),
	HX_("MERGE",98,da,b4,83),
	HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),
	HX_("LISTENER",74,90,b7,91),
	::String(null())
};

::hx::Class DirCopyOption_obj::__mClass;

Dynamic __Create_DirCopyOption_obj() { return new DirCopyOption_obj; }

void DirCopyOption_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.DirCopyOption",02,c0,1a,73), ::hx::TCanCast< DirCopyOption_obj >,DirCopyOption_obj_sStaticFields,0,
	&__Create_DirCopyOption_obj, &__Create,
	&super::__SGetClass(), &CreateDirCopyOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DirCopyOption_obj::__GetStatic;
}

void DirCopyOption_obj::__boot()
{
MERGE = ::hx::CreateConstEnum< DirCopyOption_obj >(HX_("MERGE",98,da,b4,83),1);
NO_WHITESPACE_TRIMMING = ::hx::CreateConstEnum< DirCopyOption_obj >(HX_("NO_WHITESPACE_TRIMMING",7b,e4,10,23),2);
OVERWRITE = ::hx::CreateConstEnum< DirCopyOption_obj >(HX_("OVERWRITE",eb,fa,45,9c),0);
}


} // end namespace hx
} // end namespace files
