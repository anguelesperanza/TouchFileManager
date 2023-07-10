#include <hxcpp.h>

#ifndef INCLUDED_hx_files_DirRenameOption
#include <hx/files/DirRenameOption.h>
#endif
namespace hx{
namespace files{

::hx::files::DirRenameOption DirRenameOption_obj::OVERWRITE;

bool DirRenameOption_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) { outValue = DirRenameOption_obj::OVERWRITE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DirRenameOption_obj)

int DirRenameOption_obj::__FindIndex(::String inName)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindIndex(inName);
}

int DirRenameOption_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DirRenameOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OVERWRITE",eb,fa,45,9c)) return OVERWRITE;
	return super::__Field(inName,inCallProp);
}

static ::String DirRenameOption_obj_sStaticFields[] = {
	HX_("OVERWRITE",eb,fa,45,9c),
	::String(null())
};

::hx::Class DirRenameOption_obj::__mClass;

Dynamic __Create_DirRenameOption_obj() { return new DirRenameOption_obj; }

void DirRenameOption_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.files.DirRenameOption",8b,5a,fe,33), ::hx::TCanCast< DirRenameOption_obj >,DirRenameOption_obj_sStaticFields,0,
	&__Create_DirRenameOption_obj, &__Create,
	&super::__SGetClass(), &CreateDirRenameOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DirRenameOption_obj::__GetStatic;
}

void DirRenameOption_obj::__boot()
{
OVERWRITE = ::hx::CreateConstEnum< DirRenameOption_obj >(HX_("OVERWRITE",eb,fa,45,9c),0);
}


} // end namespace hx
} // end namespace files
