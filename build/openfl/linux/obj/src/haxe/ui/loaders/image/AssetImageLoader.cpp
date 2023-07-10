#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_loaders_image_AssetImageLoader
#include <haxe/ui/loaders/image/AssetImageLoader.h>
#endif
#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoaderBase
#include <haxe/ui/loaders/image/ImageLoaderBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c4f7f401f477be9a_6_new,"haxe.ui.loaders.image.AssetImageLoader","new",0x41770203,"haxe.ui.loaders.image.AssetImageLoader.new","haxe/ui/loaders/image/AssetImageLoader.hx",6,0xed178eab)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7f401f477be9a_8_load,"haxe.ui.loaders.image.AssetImageLoader","load",0x055fd723,"haxe.ui.loaders.image.AssetImageLoader.load","haxe/ui/loaders/image/AssetImageLoader.hx",8,0xed178eab)
namespace haxe{
namespace ui{
namespace loaders{
namespace image{

void AssetImageLoader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c4f7f401f477be9a_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic AssetImageLoader_obj::__CreateEmpty() { return new AssetImageLoader_obj; }

void *AssetImageLoader_obj::_hx_vtable = 0;

Dynamic AssetImageLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetImageLoader_obj > _hx_result = new AssetImageLoader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetImageLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e044b33) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e044b33;
	} else {
		return inClassId==(int)0x64efe746;
	}
}

void AssetImageLoader_obj::load( ::haxe::ui::util::VariantType resource, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_c4f7f401f477be9a_8_load)
HXDLIN(   8)		 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::Toolkit_obj::get_assets();
HXDLIN(   8)		_hx_tmp->getImage(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(resource),callback,null());
            	}



::hx::ObjectPtr< AssetImageLoader_obj > AssetImageLoader_obj::__new() {
	::hx::ObjectPtr< AssetImageLoader_obj > __this = new AssetImageLoader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetImageLoader_obj > AssetImageLoader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetImageLoader_obj *__this = (AssetImageLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetImageLoader_obj), false, "haxe.ui.loaders.image.AssetImageLoader"));
	*(void **)__this = AssetImageLoader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetImageLoader_obj::AssetImageLoader_obj()
{
}

::hx::Val AssetImageLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetImageLoader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetImageLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetImageLoader_obj_sMemberFields[] = {
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class AssetImageLoader_obj::__mClass;

void AssetImageLoader_obj::__register()
{
	AssetImageLoader_obj _hx_dummy;
	AssetImageLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.loaders.image.AssetImageLoader",91,44,af,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetImageLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetImageLoader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetImageLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetImageLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image
