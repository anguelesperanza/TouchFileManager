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
#ifndef INCLUDED_haxe_ui_loaders_image_FileImageLoader
#include <haxe/ui/loaders/image/FileImageLoader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_44275976f81956bb_6_new,"haxe.ui.loaders.image.FileImageLoader","new",0x933c3db1,"haxe.ui.loaders.image.FileImageLoader.new","haxe/ui/loaders/image/FileImageLoader.hx",6,0xdbcec8c1)
HX_LOCAL_STACK_FRAME(_hx_pos_44275976f81956bb_9_load,"haxe.ui.loaders.image.FileImageLoader","load",0x402ed3b5,"haxe.ui.loaders.image.FileImageLoader.load","haxe/ui/loaders/image/FileImageLoader.hx",9,0xdbcec8c1)
HX_LOCAL_STACK_FRAME(_hx_pos_44275976f81956bb_7_load,"haxe.ui.loaders.image.FileImageLoader","load",0x402ed3b5,"haxe.ui.loaders.image.FileImageLoader.load","haxe/ui/loaders/image/FileImageLoader.hx",7,0xdbcec8c1)
namespace haxe{
namespace ui{
namespace loaders{
namespace image{

void FileImageLoader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_44275976f81956bb_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic FileImageLoader_obj::__CreateEmpty() { return new FileImageLoader_obj; }

void *FileImageLoader_obj::_hx_vtable = 0;

Dynamic FileImageLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileImageLoader_obj > _hx_result = new FileImageLoader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileImageLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x64efe746) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x64efe746;
	} else {
		return inClassId==(int)0x7b2fb4dd;
	}
}

void FileImageLoader_obj::load( ::haxe::ui::util::VariantType resource, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,stringResource, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_STACKFRAME(&_hx_pos_44275976f81956bb_9_load)
HXLINE(  10)			::haxe::ui::ToolkitAssets_obj::get_instance()->cacheImage(stringResource,imageInfo);
HXLINE(  11)			callback(imageInfo);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_44275976f81956bb_7_load)
HXLINE(   8)		::String stringResource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(resource);
HXLINE(   9)		 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::Toolkit_obj::get_assets();
HXDLIN(   9)		_hx_tmp->imageFromFile(stringResource.substr(7,null()), ::Dynamic(new _hx_Closure_0(stringResource,callback)));
            	}



::hx::ObjectPtr< FileImageLoader_obj > FileImageLoader_obj::__new() {
	::hx::ObjectPtr< FileImageLoader_obj > __this = new FileImageLoader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FileImageLoader_obj > FileImageLoader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FileImageLoader_obj *__this = (FileImageLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileImageLoader_obj), false, "haxe.ui.loaders.image.FileImageLoader"));
	*(void **)__this = FileImageLoader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FileImageLoader_obj::FileImageLoader_obj()
{
}

::hx::Val FileImageLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FileImageLoader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FileImageLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String FileImageLoader_obj_sMemberFields[] = {
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class FileImageLoader_obj::__mClass;

void FileImageLoader_obj::__register()
{
	FileImageLoader_obj _hx_dummy;
	FileImageLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.loaders.image.FileImageLoader",3f,91,a5,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileImageLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileImageLoader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileImageLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileImageLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image
