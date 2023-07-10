#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0f9c8ebff9ca9a6_4_new,"haxe.ui.backend.ImageSurface","new",0xaa8250d0,"haxe.ui.backend.ImageSurface.new","haxe/ui/backend/ImageSurface.hx",4,0x39bd7f1f)
namespace haxe{
namespace ui{
namespace backend{

void ImageSurface_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e0f9c8ebff9ca9a6_4_new)
            	}

Dynamic ImageSurface_obj::__CreateEmpty() { return new ImageSurface_obj; }

void *ImageSurface_obj::_hx_vtable = 0;

Dynamic ImageSurface_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageSurface_obj > _hx_result = new ImageSurface_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageSurface_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20bbbdc4;
}


ImageSurface_obj::ImageSurface_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageSurface_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageSurface_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ImageSurface_obj::__mClass;

void ImageSurface_obj::__register()
{
	ImageSurface_obj _hx_dummy;
	ImageSurface_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ImageSurface",de,e8,bd,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ImageSurface_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageSurface_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageSurface_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
