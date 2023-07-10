#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoaderBase
#include <haxe/ui/loaders/image/ImageLoaderBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8c8591a74ede4e5_7_new,"haxe.ui.loaders.image.ImageLoaderBase","new",0xc53a587e,"haxe.ui.loaders.image.ImageLoaderBase.new","haxe/ui/loaders/image/ImageLoaderBase.hx",7,0xe9cec694)
HX_LOCAL_STACK_FRAME(_hx_pos_c8c8591a74ede4e5_10_load,"haxe.ui.loaders.image.ImageLoaderBase","load",0xcc882c48,"haxe.ui.loaders.image.ImageLoaderBase.load","haxe/ui/loaders/image/ImageLoaderBase.hx",10,0xe9cec694)
namespace haxe{
namespace ui{
namespace loaders{
namespace image{

void ImageLoaderBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c8c8591a74ede4e5_7_new)
            	}

Dynamic ImageLoaderBase_obj::__CreateEmpty() { return new ImageLoaderBase_obj; }

void *ImageLoaderBase_obj::_hx_vtable = 0;

Dynamic ImageLoaderBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageLoaderBase_obj > _hx_result = new ImageLoaderBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageLoaderBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x64efe746;
}

void ImageLoaderBase_obj::load( ::haxe::ui::util::VariantType resource, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_c8c8591a74ede4e5_10_load)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ImageLoaderBase_obj,load,(void))


::hx::ObjectPtr< ImageLoaderBase_obj > ImageLoaderBase_obj::__new() {
	::hx::ObjectPtr< ImageLoaderBase_obj > __this = new ImageLoaderBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageLoaderBase_obj > ImageLoaderBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageLoaderBase_obj *__this = (ImageLoaderBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageLoaderBase_obj), false, "haxe.ui.loaders.image.ImageLoaderBase"));
	*(void **)__this = ImageLoaderBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageLoaderBase_obj::ImageLoaderBase_obj()
{
}

::hx::Val ImageLoaderBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageLoaderBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageLoaderBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageLoaderBase_obj_sMemberFields[] = {
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class ImageLoaderBase_obj::__mClass;

void ImageLoaderBase_obj::__register()
{
	ImageLoaderBase_obj _hx_dummy;
	ImageLoaderBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.loaders.image.ImageLoaderBase",8c,01,51,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageLoaderBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageLoaderBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageLoaderBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageLoaderBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image
