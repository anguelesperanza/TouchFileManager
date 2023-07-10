#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoader
#include <haxe/ui/loaders/image/ImageLoader.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a60d0d207c2115a_7_new,"haxe.ui.loaders.image.ImageLoader","new",0x1a228e4d,"haxe.ui.loaders.image.ImageLoader.new","haxe/ui/loaders/image/ImageLoader.hx",7,0x3ef366a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0a60d0d207c2115a_26_load,"haxe.ui.loaders.image.ImageLoader","load",0xc2cf0b99,"haxe.ui.loaders.image.ImageLoader.load","haxe/ui/loaders/image/ImageLoader.hx",26,0x3ef366a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0a60d0d207c2115a_59_register,"haxe.ui.loaders.image.ImageLoader","register",0xa1d84d56,"haxe.ui.loaders.image.ImageLoader.register","haxe/ui/loaders/image/ImageLoader.hx",59,0x3ef366a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0a60d0d207c2115a_72_get,"haxe.ui.loaders.image.ImageLoader","get",0x1a1d3e83,"haxe.ui.loaders.image.ImageLoader.get","haxe/ui/loaders/image/ImageLoader.hx",72,0x3ef366a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0a60d0d207c2115a_10_get_instance,"haxe.ui.loaders.image.ImageLoader","get_instance",0x4add7011,"haxe.ui.loaders.image.ImageLoader.get_instance","haxe/ui/loaders/image/ImageLoader.hx",10,0x3ef366a5)
namespace haxe{
namespace ui{
namespace loaders{
namespace image{

void ImageLoader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0a60d0d207c2115a_7_new)
HXLINE(  24)		this->_defaultLoader = null();
HXLINE(  23)		this->_registeredLoaders =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ImageLoader_obj::__CreateEmpty() { return new ImageLoader_obj; }

void *ImageLoader_obj::_hx_vtable = 0;

Dynamic ImageLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageLoader_obj > _hx_result = new ImageLoader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageLoader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1984e079;
}

void ImageLoader_obj::load( ::haxe::ui::util::VariantType resource, ::Dynamic callback,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_0a60d0d207c2115a_26_load)
HXDLIN(  26)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(resource)) {
HXLINE(  27)			::String stringResource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(resource);
HXLINE(  28)			if ((useCache == true)) {
HXLINE(  29)				 ::Dynamic cachedImage = ::haxe::ui::ToolkitAssets_obj::get_instance()->getCachedImage(stringResource);
HXLINE(  30)				if (::hx::IsNotNull( cachedImage )) {
HXLINE(  31)					callback(cachedImage);
HXLINE(  32)					return;
            				}
            			}
HXLINE(  36)			stringResource = ::StringTools_obj::trim(stringResource);
HXLINE(  37)			::String prefix = HX_("",00,00,00,00);
HXLINE(  38)			int n = stringResource.indexOf(HX_("://",da,2b,2c,00),null());
HXLINE(  39)			if ((n != -1)) {
HXLINE(  40)				prefix = stringResource.substring(0,n);
            			}
HXLINE(  43)			 ::haxe::ui::loaders::image::ImageLoaderBase loader = this->get(prefix);
HXLINE(  44)			if (::hx::IsNull( loader )) {
HXLINE(  45)				::haxe::Log_obj::trace(((HX_("WARNING: no image loader could be found for '",7f,21,16,9d) + prefix) + HX_("'",27,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/loaders/image/ImageLoader.hx",a5,66,f3,3e),45,HX_("haxe.ui.loaders.image.ImageLoader",db,63,38,3b),HX_("load",26,9a,b7,47)));
HXLINE(  46)				callback(null());
HXLINE(  47)				return;
            			}
HXLINE(  50)			loader->load(resource,callback);
            		}
            		else {
HXLINE(  51)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isImageData(resource)) {
HXLINE(  52)				 ::openfl::display::BitmapData imageData = ::haxe::ui::util::_Variant::Variant_Impl__obj::toImageData(resource);
HXLINE(  53)				if (::hx::IsNotNull( callback )) {
HXLINE(  54)					callback(::haxe::ui::ToolkitAssets_obj::get_instance()->imageInfoFromImageData(imageData));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ImageLoader_obj,load,(void))

void ImageLoader_obj::_hx_register(::String prefix, ::Dynamic ctor,::hx::Null< bool >  __o_isDefault,::hx::Null< bool >  __o_singleInstance){
            		bool isDefault = __o_isDefault.Default(false);
            		bool singleInstance = __o_singleInstance.Default(false);
            	HX_STACKFRAME(&_hx_pos_0a60d0d207c2115a_59_register)
HXLINE(  60)		 ::Dynamic info =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("isDefault",f7,55,c2,9f),isDefault)
            			->setFixed(1,HX_("prefix",92,d9,b6,ae),prefix)
            			->setFixed(2,HX_("singleInstance",3d,0a,ca,b5),singleInstance)
            			->setFixed(3,HX_("ctor",14,86,c8,41),ctor));
HXLINE(  66)		this->_registeredLoaders->set(prefix,info);
HXLINE(  67)		if (isDefault) {
HXLINE(  68)			this->_defaultLoader = info;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ImageLoader_obj,_hx_register,(void))

 ::haxe::ui::loaders::image::ImageLoaderBase ImageLoader_obj::get(::String prefix){
            	HX_STACKFRAME(&_hx_pos_0a60d0d207c2115a_72_get)
HXLINE(  73)		 ::Dynamic info = this->_defaultLoader;
HXLINE(  74)		if (this->_registeredLoaders->exists(prefix)) {
HXLINE(  75)			info = this->_registeredLoaders->get(prefix);
            		}
HXLINE(  77)		if (::hx::IsNull( info )) {
HXLINE(  78)			return null();
            		}
HXLINE(  81)		 ::haxe::ui::loaders::image::ImageLoaderBase instance = null();
HXLINE(  82)		if (( (bool)(info->__Field(HX_("singleInstance",3d,0a,ca,b5),::hx::paccDynamic)) )) {
HXLINE(  83)			instance = ( ( ::haxe::ui::loaders::image::ImageLoaderBase)(info->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
            		}
HXLINE(  85)		if (::hx::IsNull( instance )) {
HXLINE(  86)			instance = ( ( ::haxe::ui::loaders::image::ImageLoaderBase)(info->__Field(HX_("ctor",14,86,c8,41),::hx::paccDynamic)()) );
HXLINE(  87)			if (::hx::IsNull( instance )) {
HXLINE(  88)				return null();
            			}
HXLINE(  90)			if (( (bool)(info->__Field(HX_("singleInstance",3d,0a,ca,b5),::hx::paccDynamic)) )) {
HXLINE(  91)				info->__SetField(HX_("instance",95,1f,e1,59),instance,::hx::paccDynamic);
            			}
            		}
HXLINE(  94)		return instance;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageLoader_obj,get,return )

 ::haxe::ui::loaders::image::ImageLoader ImageLoader_obj::_instance;

 ::haxe::ui::loaders::image::ImageLoader ImageLoader_obj::instance;

 ::haxe::ui::loaders::image::ImageLoader ImageLoader_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_0a60d0d207c2115a_10_get_instance)
HXLINE(  11)		if (::hx::IsNull( ::haxe::ui::loaders::image::ImageLoader_obj::_instance )) {
HXLINE(  12)			::haxe::ui::loaders::image::ImageLoader_obj::_instance =  ::haxe::ui::loaders::image::ImageLoader_obj::__alloc( HX_CTX );
            		}
HXLINE(  14)		return ::haxe::ui::loaders::image::ImageLoader_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ImageLoader_obj,get_instance,return )


::hx::ObjectPtr< ImageLoader_obj > ImageLoader_obj::__new() {
	::hx::ObjectPtr< ImageLoader_obj > __this = new ImageLoader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageLoader_obj > ImageLoader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageLoader_obj *__this = (ImageLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageLoader_obj), true, "haxe.ui.loaders.image.ImageLoader"));
	*(void **)__this = ImageLoader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageLoader_obj::ImageLoader_obj()
{
}

void ImageLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageLoader);
	HX_MARK_MEMBER_NAME(_registeredLoaders,"_registeredLoaders");
	HX_MARK_MEMBER_NAME(_defaultLoader,"_defaultLoader");
	HX_MARK_END_CLASS();
}

void ImageLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_registeredLoaders,"_registeredLoaders");
	HX_VISIT_MEMBER_NAME(_defaultLoader,"_defaultLoader");
}

::hx::Val ImageLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultLoader") ) { return ::hx::Val( _defaultLoader ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_registeredLoaders") ) { return ::hx::Val( _registeredLoaders ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ImageLoader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ImageLoader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultLoader") ) { _defaultLoader=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_registeredLoaders") ) { _registeredLoaders=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ImageLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::loaders::image::ImageLoader >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::loaders::image::ImageLoader >(); return true; }
	}
	return false;
}

void ImageLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_registeredLoaders",5f,8c,51,84));
	outFields->push(HX_("_defaultLoader",f5,0b,3a,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageLoader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ImageLoader_obj,_registeredLoaders),HX_("_registeredLoaders",5f,8c,51,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageLoader_obj,_defaultLoader),HX_("_defaultLoader",f5,0b,3a,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ImageLoader_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::loaders::image::ImageLoader */ ,(void *) &ImageLoader_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::loaders::image::ImageLoader */ ,(void *) &ImageLoader_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ImageLoader_obj_sMemberFields[] = {
	HX_("_registeredLoaders",5f,8c,51,84),
	HX_("_defaultLoader",f5,0b,3a,91),
	HX_("load",26,9a,b7,47),
	HX_("register",63,a6,9f,d0),
	HX_("get",96,80,4e,00),
	::String(null()) };

static void ImageLoader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageLoader_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ImageLoader_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageLoader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageLoader_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ImageLoader_obj::instance,"instance");
};

#endif

::hx::Class ImageLoader_obj::__mClass;

static ::String ImageLoader_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ImageLoader_obj::__register()
{
	ImageLoader_obj _hx_dummy;
	ImageLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.loaders.image.ImageLoader",db,63,38,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageLoader_obj::__GetStatic;
	__mClass->mSetStaticField = &ImageLoader_obj::__SetStatic;
	__mClass->mMarkFunc = ImageLoader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ImageLoader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageLoader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageLoader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image
