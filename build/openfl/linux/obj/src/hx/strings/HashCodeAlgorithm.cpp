#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_HashCodeAlgorithm
#include <hx/strings/HashCodeAlgorithm.h>
#endif
namespace hx{
namespace strings{

::hx::strings::HashCodeAlgorithm HashCodeAlgorithm_obj::ADLER32;

::hx::strings::HashCodeAlgorithm HashCodeAlgorithm_obj::CRC32B;

::hx::strings::HashCodeAlgorithm HashCodeAlgorithm_obj::DJB2A;

::hx::strings::HashCodeAlgorithm HashCodeAlgorithm_obj::JAVA;

::hx::strings::HashCodeAlgorithm HashCodeAlgorithm_obj::PLATFORM_SPECIFIC;

::hx::strings::HashCodeAlgorithm HashCodeAlgorithm_obj::SDBM;

bool HashCodeAlgorithm_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ADLER32",d5,e4,85,af)) { outValue = HashCodeAlgorithm_obj::ADLER32; return true; }
	if (inName==HX_("CRC32B",8f,e8,34,2d)) { outValue = HashCodeAlgorithm_obj::CRC32B; return true; }
	if (inName==HX_("DJB2A",cb,7c,5b,58)) { outValue = HashCodeAlgorithm_obj::DJB2A; return true; }
	if (inName==HX_("JAVA",a2,67,1b,31)) { outValue = HashCodeAlgorithm_obj::JAVA; return true; }
	if (inName==HX_("PLATFORM_SPECIFIC",fe,16,2f,6a)) { outValue = HashCodeAlgorithm_obj::PLATFORM_SPECIFIC; return true; }
	if (inName==HX_("SDBM",9c,88,10,37)) { outValue = HashCodeAlgorithm_obj::SDBM; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(HashCodeAlgorithm_obj)

int HashCodeAlgorithm_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ADLER32",d5,e4,85,af)) return 1;
	if (inName==HX_("CRC32B",8f,e8,34,2d)) return 2;
	if (inName==HX_("DJB2A",cb,7c,5b,58)) return 3;
	if (inName==HX_("JAVA",a2,67,1b,31)) return 4;
	if (inName==HX_("PLATFORM_SPECIFIC",fe,16,2f,6a)) return 0;
	if (inName==HX_("SDBM",9c,88,10,37)) return 5;
	return super::__FindIndex(inName);
}

int HashCodeAlgorithm_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ADLER32",d5,e4,85,af)) return 0;
	if (inName==HX_("CRC32B",8f,e8,34,2d)) return 0;
	if (inName==HX_("DJB2A",cb,7c,5b,58)) return 0;
	if (inName==HX_("JAVA",a2,67,1b,31)) return 0;
	if (inName==HX_("PLATFORM_SPECIFIC",fe,16,2f,6a)) return 0;
	if (inName==HX_("SDBM",9c,88,10,37)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val HashCodeAlgorithm_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ADLER32",d5,e4,85,af)) return ADLER32;
	if (inName==HX_("CRC32B",8f,e8,34,2d)) return CRC32B;
	if (inName==HX_("DJB2A",cb,7c,5b,58)) return DJB2A;
	if (inName==HX_("JAVA",a2,67,1b,31)) return JAVA;
	if (inName==HX_("PLATFORM_SPECIFIC",fe,16,2f,6a)) return PLATFORM_SPECIFIC;
	if (inName==HX_("SDBM",9c,88,10,37)) return SDBM;
	return super::__Field(inName,inCallProp);
}

static ::String HashCodeAlgorithm_obj_sStaticFields[] = {
	HX_("PLATFORM_SPECIFIC",fe,16,2f,6a),
	HX_("ADLER32",d5,e4,85,af),
	HX_("CRC32B",8f,e8,34,2d),
	HX_("DJB2A",cb,7c,5b,58),
	HX_("JAVA",a2,67,1b,31),
	HX_("SDBM",9c,88,10,37),
	::String(null())
};

::hx::Class HashCodeAlgorithm_obj::__mClass;

Dynamic __Create_HashCodeAlgorithm_obj() { return new HashCodeAlgorithm_obj; }

void HashCodeAlgorithm_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.strings.HashCodeAlgorithm",ea,e4,ff,74), ::hx::TCanCast< HashCodeAlgorithm_obj >,HashCodeAlgorithm_obj_sStaticFields,0,
	&__Create_HashCodeAlgorithm_obj, &__Create,
	&super::__SGetClass(), &CreateHashCodeAlgorithm_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &HashCodeAlgorithm_obj::__GetStatic;
}

void HashCodeAlgorithm_obj::__boot()
{
ADLER32 = ::hx::CreateConstEnum< HashCodeAlgorithm_obj >(HX_("ADLER32",d5,e4,85,af),1);
CRC32B = ::hx::CreateConstEnum< HashCodeAlgorithm_obj >(HX_("CRC32B",8f,e8,34,2d),2);
DJB2A = ::hx::CreateConstEnum< HashCodeAlgorithm_obj >(HX_("DJB2A",cb,7c,5b,58),3);
JAVA = ::hx::CreateConstEnum< HashCodeAlgorithm_obj >(HX_("JAVA",a2,67,1b,31),4);
PLATFORM_SPECIFIC = ::hx::CreateConstEnum< HashCodeAlgorithm_obj >(HX_("PLATFORM_SPECIFIC",fe,16,2f,6a),0);
SDBM = ::hx::CreateConstEnum< HashCodeAlgorithm_obj >(HX_("SDBM",9c,88,10,37),5);
}


} // end namespace hx
} // end namespace strings
