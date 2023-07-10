#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
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
#ifndef INCLUDED_haxe_ui_loaders_image_HttpImageLoader
#include <haxe/ui/loaders/image/HttpImageLoader.h>
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
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_7_new,"haxe.ui.loaders.image.HttpImageLoader","new",0x0e51fe25,"haxe.ui.loaders.image.HttpImageLoader.new","haxe/ui/loaders/image/HttpImageLoader.hx",7,0x4161d2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_10_load,"haxe.ui.loaders.image.HttpImageLoader","load",0x782178c1,"haxe.ui.loaders.image.HttpImageLoader.load","haxe/ui/loaders/image/HttpImageLoader.hx",10,0x4161d2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_8_load,"haxe.ui.loaders.image.HttpImageLoader","load",0x782178c1,"haxe.ui.loaders.image.HttpImageLoader.load","haxe/ui/loaders/image/HttpImageLoader.hx",8,0x4161d2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_95_loadFromHttp,"haxe.ui.loaders.image.HttpImageLoader","loadFromHttp",0xaeedc7f3,"haxe.ui.loaders.image.HttpImageLoader.loadFromHttp","haxe/ui/loaders/image/HttpImageLoader.hx",95,0x4161d2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_161_loadFromHttp,"haxe.ui.loaders.image.HttpImageLoader","loadFromHttp",0xaeedc7f3,"haxe.ui.loaders.image.HttpImageLoader.loadFromHttp","haxe/ui/loaders/image/HttpImageLoader.hx",161,0x4161d2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_164_loadFromHttp,"haxe.ui.loaders.image.HttpImageLoader","loadFromHttp",0xaeedc7f3,"haxe.ui.loaders.image.HttpImageLoader.loadFromHttp","haxe/ui/loaders/image/HttpImageLoader.hx",164,0x4161d2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_0ecd1cf6b871d7ac_16_loadFromHttp,"haxe.ui.loaders.image.HttpImageLoader","loadFromHttp",0xaeedc7f3,"haxe.ui.loaders.image.HttpImageLoader.loadFromHttp","haxe/ui/loaders/image/HttpImageLoader.hx",16,0x4161d2cd)
static const int _hx_array_data_664d07b3_7[] = {
	(int)-1,
};
namespace haxe{
namespace ui{
namespace loaders{
namespace image{

void HttpImageLoader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic HttpImageLoader_obj::__CreateEmpty() { return new HttpImageLoader_obj; }

void *HttpImageLoader_obj::_hx_vtable = 0;

Dynamic HttpImageLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HttpImageLoader_obj > _hx_result = new HttpImageLoader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HttpImageLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03d72b51) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03d72b51;
	} else {
		return inClassId==(int)0x64efe746;
	}
}

void HttpImageLoader_obj::load( ::haxe::ui::util::VariantType resource, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,stringResource, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_10_load)
HXLINE(  11)			::haxe::ui::ToolkitAssets_obj::get_instance()->cacheImage(stringResource,imageInfo);
HXLINE(  12)			callback(imageInfo);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_8_load)
HXLINE(   9)		::String stringResource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(resource);
HXLINE(  10)		this->loadFromHttp(stringResource, ::Dynamic(new _hx_Closure_0(stringResource,callback)));
            	}


void HttpImageLoader_obj::loadFromHttp(::String url, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::loaders::image::HttpImageLoader,_gthis, ::sys::Http,http,::Array< int >,httpStatus,::String,url, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes data){
            			HX_GC_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_95_loadFromHttp)
HXLINE(  95)			bool _hx_tmp;
HXDLIN(  95)			if (::hx::IsNotNull( data )) {
HXLINE(  95)				_hx_tmp = (data->length > 0);
            			}
            			else {
HXLINE(  95)				_hx_tmp = false;
            			}
HXDLIN(  95)			if (_hx_tmp) {
HXLINE(  96)				::haxe::ui::Toolkit_obj::get_assets()->imageFromBytes(data,callback);
            			}
            			else {
HXLINE(  98)				bool _hx_tmp;
HXDLIN(  98)				if ((httpStatus->__get(0) != 301)) {
HXLINE(  98)					_hx_tmp = (httpStatus->__get(0) == 302);
            				}
            				else {
HXLINE(  98)					_hx_tmp = true;
            				}
HXDLIN(  98)				if (_hx_tmp) {
HXLINE( 106)					::String location = http->responseHeaders->get_string(HX_("location",35,6e,46,e5));
HXLINE( 107)					if (::hx::IsNull( location )) {
HXLINE( 108)						location = http->responseHeaders->get_string(HX_("Location",55,2a,f8,be));
            					}
HXLINE( 110)					if (::hx::IsNotNull( location )) {
HXLINE( 111)						_gthis->loadFromHttp(location,callback);
            					}
            					else {
HXLINE( 113)						::haxe::Log_obj::trace(((HX_("WARNING: redirect encounters but no location header found (http status: ",70,88,f9,10) + httpStatus->__get(0)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/loaders/image/HttpImageLoader.hx",cd,d2,61,41),113,HX_("haxe.ui.loaders.image.HttpImageLoader",b3,07,4d,66),HX_("loadFromHttp",58,56,4b,5c)));
HXLINE( 114)						callback(null());
            					}
            				}
            				else {
HXLINE( 119)					::haxe::Log_obj::trace(((((HX_("WARNING: 0 length bytes found for '",55,2a,c1,5b) + url) + HX_("' (http status: ",a1,e0,83,d1)) + httpStatus->__get(0)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/loaders/image/HttpImageLoader.hx",cd,d2,61,41),119,HX_("haxe.ui.loaders.image.HttpImageLoader",b3,07,4d,66),HX_("loadFromHttp",58,56,4b,5c)));
HXLINE( 120)					callback(null());
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< int >,httpStatus) HXARGC(1)
            		void _hx_run(int status){
            			HX_GC_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_161_loadFromHttp)
HXLINE( 161)			httpStatus[0] = status;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::Array< int >,httpStatus, ::Dynamic,callback) HXARGC(1)
            		void _hx_run(::String msg){
            			HX_GC_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_164_loadFromHttp)
HXLINE( 165)			::haxe::Log_obj::trace((((msg + HX_(" (http status: ",e8,9c,2d,79)) + httpStatus->__get(0)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/loaders/image/HttpImageLoader.hx",cd,d2,61,41),165,HX_("haxe.ui.loaders.image.HttpImageLoader",b3,07,4d,66),HX_("loadFromHttp",58,56,4b,5c)));
HXLINE( 166)			callback(null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_0ecd1cf6b871d7ac_16_loadFromHttp)
HXDLIN(  16)		 ::haxe::ui::loaders::image::HttpImageLoader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,url);
HXLINE(  91)		::Array< int > httpStatus = ::Array_obj< int >::fromData( _hx_array_data_664d07b3_7,1);
HXLINE(  94)		http->onBytes =  ::Dynamic(new _hx_Closure_0(_gthis,http,httpStatus,url,callback));
HXLINE( 160)		http->onStatus =  ::Dynamic(new _hx_Closure_1(httpStatus));
HXLINE( 164)		http->onError =  ::Dynamic(new _hx_Closure_2(httpStatus,callback));
HXLINE( 169)		http->request(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(HttpImageLoader_obj,loadFromHttp,(void))


::hx::ObjectPtr< HttpImageLoader_obj > HttpImageLoader_obj::__new() {
	::hx::ObjectPtr< HttpImageLoader_obj > __this = new HttpImageLoader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HttpImageLoader_obj > HttpImageLoader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HttpImageLoader_obj *__this = (HttpImageLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HttpImageLoader_obj), false, "haxe.ui.loaders.image.HttpImageLoader"));
	*(void **)__this = HttpImageLoader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HttpImageLoader_obj::HttpImageLoader_obj()
{
}

::hx::Val HttpImageLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromHttp") ) { return ::hx::Val( loadFromHttp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HttpImageLoader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HttpImageLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String HttpImageLoader_obj_sMemberFields[] = {
	HX_("load",26,9a,b7,47),
	HX_("loadFromHttp",58,56,4b,5c),
	::String(null()) };

::hx::Class HttpImageLoader_obj::__mClass;

void HttpImageLoader_obj::__register()
{
	HttpImageLoader_obj _hx_dummy;
	HttpImageLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.loaders.image.HttpImageLoader",b3,07,4d,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HttpImageLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HttpImageLoader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HttpImageLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HttpImageLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image
