#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e621796a8d98261_8_new,"haxe.ui.backend.AssetsBase","new",0x7c4ef8f2,"haxe.ui.backend.AssetsBase.new","haxe/ui/backend/AssetsBase.hx",8,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_13_getTextDelegate,"haxe.ui.backend.AssetsBase","getTextDelegate",0x9553865a,"haxe.ui.backend.AssetsBase.getTextDelegate","haxe/ui/backend/AssetsBase.hx",13,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_17_getImageInternal,"haxe.ui.backend.AssetsBase","getImageInternal",0xf13ea370,"haxe.ui.backend.AssetsBase.getImageInternal","haxe/ui/backend/AssetsBase.hx",17,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_21_getImageFromHaxeResource,"haxe.ui.backend.AssetsBase","getImageFromHaxeResource",0xd76c72d1,"haxe.ui.backend.AssetsBase.getImageFromHaxeResource","haxe/ui/backend/AssetsBase.hx",21,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_25_imageFromBytes,"haxe.ui.backend.AssetsBase","imageFromBytes",0x8899cc74,"haxe.ui.backend.AssetsBase.imageFromBytes","haxe/ui/backend/AssetsBase.hx",25,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_28_imageFromFile,"haxe.ui.backend.AssetsBase","imageFromFile",0x24801e93,"haxe.ui.backend.AssetsBase.imageFromFile","haxe/ui/backend/AssetsBase.hx",28,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_70_getFontInternal,"haxe.ui.backend.AssetsBase","getFontInternal",0x510a7974,"haxe.ui.backend.AssetsBase.getFontInternal","haxe/ui/backend/AssetsBase.hx",70,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_74_getFontFromHaxeResource,"haxe.ui.backend.AssetsBase","getFontFromHaxeResource",0x93c3ecd5,"haxe.ui.backend.AssetsBase.getFontFromHaxeResource","haxe/ui/backend/AssetsBase.hx",74,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_78_imageInfoFromImageData,"haxe.ui.backend.AssetsBase","imageInfoFromImageData",0xc00077e0,"haxe.ui.backend.AssetsBase.imageInfoFromImageData","haxe/ui/backend/AssetsBase.hx",78,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_56_isAbsolutePath,"haxe.ui.backend.AssetsBase","isAbsolutePath",0x36432374,"haxe.ui.backend.AssetsBase.isAbsolutePath","haxe/ui/backend/AssetsBase.hx",56,0x0e45c37d)
namespace haxe{
namespace ui{
namespace backend{

void AssetsBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_8_new)
            	}

Dynamic AssetsBase_obj::__CreateEmpty() { return new AssetsBase_obj; }

void *AssetsBase_obj::_hx_vtable = 0;

Dynamic AssetsBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetsBase_obj > _hx_result = new AssetsBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ff6ca06;
}

::String AssetsBase_obj::getTextDelegate(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_13_getTextDelegate)
HXDLIN(  13)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetsBase_obj,getTextDelegate,return )

void AssetsBase_obj::getImageInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_17_getImageInternal)
HXDLIN(  17)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getImageInternal,(void))

void AssetsBase_obj::getImageFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_21_getImageFromHaxeResource)
HXDLIN(  21)		callback(resourceId,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getImageFromHaxeResource,(void))

void AssetsBase_obj::imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_25_imageFromBytes)
HXDLIN(  25)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,imageFromBytes,(void))

void AssetsBase_obj::imageFromFile(::String filename, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_28_imageFromFile)
HXLINE(  31)		if ((::haxe::ui::backend::AssetsBase_obj::isAbsolutePath(filename) == false)) {
HXLINE(  32)			::Array< ::String > parts = ::haxe::io::Path_obj::normalize(::Sys_obj::programPath()).split(HX_("/",2f,00,00,00));
HXLINE(  33)			parts->pop();
HXLINE(  34)			filename = ((parts->join(HX_("/",2f,00,00,00)) + HX_("/",2f,00,00,00)) + filename);
            		}
HXLINE(  36)		filename = ::haxe::io::Path_obj::normalize(filename);
HXLINE(  37)		if ((::sys::FileSystem_obj::exists(filename) == false)) {
HXLINE(  38)			callback(null());
            		}
HXLINE(  41)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  42)			 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::Toolkit_obj::get_assets();
HXDLIN(  42)			_hx_tmp->imageFromBytes(::sys::io::File_obj::getBytes(filename),callback);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  43)				{
HXLINE(  43)					null();
            				}
HXDLIN(  43)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN(  43)				{
HXLINE(  44)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  44)					::String _hx_tmp1 = (HX_("Problem loading image file: ",ec,2c,08,c9) + ::Std_obj::string(e));
HXDLIN(  44)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("haxe/ui/backend/AssetsBase.hx",7d,c3,45,0e),44,HX_("haxe.ui.backend.AssetsBase",00,58,07,8b),HX_("imageFromFile",81,cb,29,81)));
HXLINE(  45)					callback(null());
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,imageFromFile,(void))

void AssetsBase_obj::getFontInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_70_getFontInternal)
HXDLIN(  70)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getFontInternal,(void))

void AssetsBase_obj::getFontFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_74_getFontFromHaxeResource)
HXDLIN(  74)		callback(resourceId,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getFontFromHaxeResource,(void))

 ::Dynamic AssetsBase_obj::imageInfoFromImageData( ::openfl::display::BitmapData imageData){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_78_imageInfoFromImageData)
HXDLIN(  78)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("width",06,b6,62,ca),0)
            			->setFixed(1,HX_("height",e7,07,4c,02),0)
            			->setFixed(2,HX_("data",2a,56,63,42),imageData));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetsBase_obj,imageInfoFromImageData,return )

bool AssetsBase_obj::isAbsolutePath(::String path){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_56_isAbsolutePath)
HXLINE(  57)		if (::StringTools_obj::startsWith(path,HX_("/",2f,00,00,00))) {
HXLINE(  58)			return true;
            		}
HXLINE(  60)		if ((path.charAt(1) == HX_(":",3a,00,00,00))) {
HXLINE(  61)			return true;
            		}
HXLINE(  63)		if (::StringTools_obj::startsWith(path,HX_("\\\\",80,50,00,00))) {
HXLINE(  64)			return true;
            		}
HXLINE(  66)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetsBase_obj,isAbsolutePath,return )


::hx::ObjectPtr< AssetsBase_obj > AssetsBase_obj::__new() {
	::hx::ObjectPtr< AssetsBase_obj > __this = new AssetsBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetsBase_obj > AssetsBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetsBase_obj *__this = (AssetsBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetsBase_obj), false, "haxe.ui.backend.AssetsBase"));
	*(void **)__this = AssetsBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetsBase_obj::AssetsBase_obj()
{
}

::hx::Val AssetsBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"imageFromFile") ) { return ::hx::Val( imageFromFile_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageFromBytes") ) { return ::hx::Val( imageFromBytes_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextDelegate") ) { return ::hx::Val( getTextDelegate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFontInternal") ) { return ::hx::Val( getFontInternal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getImageInternal") ) { return ::hx::Val( getImageInternal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"imageInfoFromImageData") ) { return ::hx::Val( imageInfoFromImageData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFontFromHaxeResource") ) { return ::hx::Val( getFontFromHaxeResource_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getImageFromHaxeResource") ) { return ::hx::Val( getImageFromHaxeResource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetsBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"isAbsolutePath") ) { outValue = isAbsolutePath_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetsBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetsBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetsBase_obj_sMemberFields[] = {
	HX_("getTextDelegate",c8,ca,74,b1),
	HX_("getImageInternal",42,3f,39,72),
	HX_("getImageFromHaxeResource",a3,30,02,17),
	HX_("imageFromBytes",c6,6f,67,40),
	HX_("imageFromFile",81,cb,29,81),
	HX_("getFontInternal",e2,bd,2b,6d),
	HX_("getFontFromHaxeResource",43,4f,84,fc),
	HX_("imageInfoFromImageData",32,bd,fc,d3),
	::String(null()) };

::hx::Class AssetsBase_obj::__mClass;

static ::String AssetsBase_obj_sStaticFields[] = {
	HX_("isAbsolutePath",c6,c6,10,ee),
	::String(null())
};

void AssetsBase_obj::__register()
{
	AssetsBase_obj _hx_dummy;
	AssetsBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AssetsBase",00,58,07,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetsBase_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetsBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetsBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetsBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
