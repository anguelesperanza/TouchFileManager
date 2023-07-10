#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_assets_AssetPlugin
#include <haxe/ui/assets/AssetPlugin.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_util_CallbackMap
#include <haxe/ui/util/CallbackMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0397d73654d5d7af_13_new,"haxe.ui.ToolkitAssets","new",0x0bdf55e1,"haxe.ui.ToolkitAssets.new","haxe/ui/ToolkitAssets.hx",13,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_40_getFont,"haxe.ui.ToolkitAssets","getFont",0xd525e786,"haxe.ui.ToolkitAssets.getFont","haxe/ui/ToolkitAssets.hx",40,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_52_getFont,"haxe.ui.ToolkitAssets","getFont",0xd525e786,"haxe.ui.ToolkitAssets.getFont","haxe/ui/ToolkitAssets.hx",52,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_65__onFontLoaded,"haxe.ui.ToolkitAssets","_onFontLoaded",0x4c8ce4d3,"haxe.ui.ToolkitAssets._onFontLoaded","haxe/ui/ToolkitAssets.hx",65,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_73_cacheImage,"haxe.ui.ToolkitAssets","cacheImage",0x53ac2258,"haxe.ui.ToolkitAssets.cacheImage","haxe/ui/ToolkitAssets.hx",73,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_83_getCachedImage,"haxe.ui.ToolkitAssets","getCachedImage",0xadb08742,"haxe.ui.ToolkitAssets.getCachedImage","haxe/ui/ToolkitAssets.hx",83,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_90_getImage,"haxe.ui.ToolkitAssets","getImage",0x64dc15c4,"haxe.ui.ToolkitAssets.getImage","haxe/ui/ToolkitAssets.hx",90,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_104_getImage,"haxe.ui.ToolkitAssets","getImage",0x64dc15c4,"haxe.ui.ToolkitAssets.getImage","haxe/ui/ToolkitAssets.hx",104,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_121__onImageLoaded,"haxe.ui.ToolkitAssets","_onImageLoaded",0x31aa3741,"haxe.ui.ToolkitAssets._onImageLoaded","haxe/ui/ToolkitAssets.hx",121,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_133_getText,"haxe.ui.ToolkitAssets","getText",0xde5f5664,"haxe.ui.ToolkitAssets.getText","haxe/ui/ToolkitAssets.hx",133,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_142_getBytes,"haxe.ui.ToolkitAssets","getBytes",0x650afed4,"haxe.ui.ToolkitAssets.getBytes","haxe/ui/ToolkitAssets.hx",142,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_149_addPlugin,"haxe.ui.ToolkitAssets","addPlugin",0x5dd5dbf5,"haxe.ui.ToolkitAssets.addPlugin","haxe/ui/ToolkitAssets.hx",149,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_156_runPlugins,"haxe.ui.ToolkitAssets","runPlugins",0xc03cfef4,"haxe.ui.ToolkitAssets.runPlugins","haxe/ui/ToolkitAssets.hx",156,0x8586374f)
HX_LOCAL_STACK_FRAME(_hx_pos_0397d73654d5d7af_16_get_instance,"haxe.ui.ToolkitAssets","get_instance",0x4fdd15fd,"haxe.ui.ToolkitAssets.get_instance","haxe/ui/ToolkitAssets.hx",16,0x8586374f)
namespace haxe{
namespace ui{

void ToolkitAssets_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_13_new)
HXLINE(  28)		this->options = null();
HXLINE(  26)		this->preloadList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		super::__construct();
            	}

Dynamic ToolkitAssets_obj::__CreateEmpty() { return new ToolkitAssets_obj; }

void *ToolkitAssets_obj::_hx_vtable = 0;

Dynamic ToolkitAssets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToolkitAssets_obj > _hx_result = new ToolkitAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolkitAssets_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f0c8145) {
		if (inClassId<=(int)0x3d9e5663) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3d9e5663;
		} else {
			return inClassId==(int)0x7f0c8145;
		}
	} else {
		return inClassId==(int)0x7ff6ca06;
	}
}

void ToolkitAssets_obj::getFont(::String resourceId, ::Dynamic callback,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_40_getFont)
HXDLIN(  40)		 ::haxe::ui::ToolkitAssets _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  41)		bool _hx_tmp;
HXDLIN(  41)		bool _hx_tmp1;
HXDLIN(  41)		if (::hx::IsNotNull( this->_fontCache )) {
HXLINE(  41)			_hx_tmp1 = ::hx::IsNotNull( this->_fontCache->get(resourceId) );
            		}
            		else {
HXLINE(  41)			_hx_tmp1 = false;
            		}
HXDLIN(  41)		if (_hx_tmp1) {
HXLINE(  41)			_hx_tmp = (useCache == true);
            		}
            		else {
HXLINE(  41)			_hx_tmp = false;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  42)			 ::Dynamic callback1 = callback;
HXDLIN(  42)			callback1(this->_fontCache->get(resourceId));
            		}
            		else {
HXLINE(  44)			if (::hx::IsNull( this->_fontCallbacks )) {
HXLINE(  45)				this->_fontCallbacks =  ::haxe::ui::util::CallbackMap_obj::__alloc( HX_CTX );
            			}
HXLINE(  48)			this->_fontCallbacks->add(resourceId,callback,null());
HXLINE(  50)			if ((this->_fontCallbacks->count(resourceId) == 1)) {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::ToolkitAssets,_gthis,::String,resourceId, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::Dynamic font){
            					HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_52_getFont)
HXLINE(  52)					if (::hx::IsNotNull( font )) {
HXLINE(  53)						_gthis->_onFontLoaded(resourceId,font);
            					}
            					else {
HXLINE(  54)						if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != -1)) {
HXLINE(  55)							_gthis->getFontFromHaxeResource(resourceId,_gthis->_onFontLoaded_dyn());
            						}
            						else {
HXLINE(  57)							_gthis->_fontCallbacks->remove(resourceId,callback);
HXLINE(  58)							callback(null());
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  51)				this->getFontInternal(resourceId, ::Dynamic(new _hx_Closure_0(_gthis,resourceId,callback)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ToolkitAssets_obj,getFont,(void))

void ToolkitAssets_obj::_onFontLoaded(::String resourceId, ::Dynamic font){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_65__onFontLoaded)
HXLINE(  66)		if (::hx::IsNull( this->_fontCache )) {
HXLINE(  67)			this->_fontCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  69)		this->_fontCache->set(resourceId,font);
HXLINE(  70)		this->_fontCallbacks->invokeAndRemove(resourceId,font);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolkitAssets_obj,_onFontLoaded,(void))

void ToolkitAssets_obj::cacheImage(::String resourceId, ::Dynamic imageInfo){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_73_cacheImage)
HXLINE(  74)		if (::hx::IsNull( this->_imageCache )) {
HXLINE(  75)			this->_imageCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		if (::hx::IsNotNull( imageInfo )) {
HXLINE(  77)			_hx_tmp = ::hx::IsNull( resourceId );
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			return;
            		}
HXLINE(  80)		this->_imageCache->set(resourceId,imageInfo);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolkitAssets_obj,cacheImage,(void))

 ::Dynamic ToolkitAssets_obj::getCachedImage(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_83_getCachedImage)
HXLINE(  84)		if (::hx::IsNull( this->_imageCache )) {
HXLINE(  85)			return null();
            		}
HXLINE(  87)		return this->_imageCache->get(resourceId);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,getCachedImage,return )

void ToolkitAssets_obj::getImage(::String resourceId, ::Dynamic callback,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_90_getImage)
HXDLIN(  90)		::Array< ::String > resourceId1 = ::Array_obj< ::String >::__new(1)->init(0,resourceId);
HXDLIN(  90)		 ::haxe::ui::ToolkitAssets _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  91)		::String orginalResourceId = resourceId1->__get(0);
HXLINE(  92)		resourceId1[0] = ( (::String)(this->runPlugins(resourceId1->__get(0))) );
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		bool _hx_tmp1;
HXDLIN(  93)		if (::hx::IsNotNull( this->_imageCache )) {
HXLINE(  93)			_hx_tmp1 = ::hx::IsNotNull( this->_imageCache->get(resourceId1->__get(0)) );
            		}
            		else {
HXLINE(  93)			_hx_tmp1 = false;
            		}
HXDLIN(  93)		if (_hx_tmp1) {
HXLINE(  93)			_hx_tmp = (useCache == true);
            		}
            		else {
HXLINE(  93)			_hx_tmp = false;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			 ::Dynamic callback1 = callback;
HXDLIN(  94)			callback1(this->_imageCache->get(resourceId1->__get(0)));
            		}
            		else {
HXLINE(  96)			if (::hx::IsNull( this->_imageCallbacks )) {
HXLINE(  97)				this->_imageCallbacks =  ::haxe::ui::util::CallbackMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 100)			this->_imageCallbacks->add(resourceId1->__get(0),callback,null());
HXLINE( 102)			if ((this->_imageCallbacks->count(resourceId1->__get(0)) == 1)) {
            				HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::ToolkitAssets,_gthis,::String,orginalResourceId,::Array< ::String >,resourceId1, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::Dynamic imageInfo){
            					HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_104_getImage)
HXLINE( 104)					if (::hx::IsNotNull( imageInfo )) {
HXLINE( 105)						_gthis->_onImageLoaded(resourceId1->__get(0),imageInfo);
            					}
            					else {
HXLINE( 106)						if ((::haxe::Resource_obj::listNames()->indexOf(orginalResourceId,null()) != -1)) {
HXLINE( 107)							_gthis->_imageCallbacks->remove(resourceId1->__get(0),callback);
HXLINE( 108)							_gthis->_imageCallbacks->add(orginalResourceId,callback,null());
HXLINE( 109)							_gthis->getImageFromHaxeResource(orginalResourceId,_gthis->_onImageLoaded_dyn());
            						}
            						else {
HXLINE( 110)							::Array< ::String > _hx_tmp = ::haxe::Resource_obj::listNames();
HXDLIN( 110)							if ((_hx_tmp->indexOf(resourceId1->__get(0),null()) != -1)) {
HXLINE( 111)								_gthis->getImageFromHaxeResource(resourceId1->__get(0),_gthis->_onImageLoaded_dyn());
            							}
            							else {
HXLINE( 113)								_gthis->_imageCallbacks->remove(resourceId1->__get(0),callback);
HXLINE( 114)								callback(null());
            							}
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 103)				this->getImageInternal(resourceId1->__get(0), ::Dynamic(new _hx_Closure_0(_gthis,orginalResourceId,resourceId1,callback)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ToolkitAssets_obj,getImage,(void))

void ToolkitAssets_obj::_onImageLoaded(::String resourceId, ::Dynamic imageInfo){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_121__onImageLoaded)
HXLINE( 122)		bool _hx_tmp;
HXDLIN( 122)		if (::hx::IsNotNull( imageInfo )) {
HXLINE( 122)			if (::hx::IsNotEq( imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),-1 )) {
HXLINE( 122)				_hx_tmp = ::hx::IsEq( imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),-1 );
            			}
            			else {
HXLINE( 122)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 122)			_hx_tmp = false;
            		}
HXDLIN( 122)		if (_hx_tmp) {
HXLINE( 123)			::haxe::Log_obj::trace(HX_("WARNING: imageData.originalWidth == -1 || imageData.originalHeight == -1",d3,d8,e4,8c),::hx::SourceInfo(HX_("haxe/ui/ToolkitAssets.hx",4f,37,86,85),123,HX_("haxe.ui.ToolkitAssets",6f,d1,6c,9e),HX_("_onImageLoaded",22,5f,eb,41)));
            		}
HXLINE( 126)		if (::hx::IsNull( this->_imageCache )) {
HXLINE( 127)			this->_imageCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 129)		this->_imageCache->set(resourceId,imageInfo);
HXLINE( 130)		this->_imageCallbacks->invokeAndRemove(resourceId,imageInfo);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolkitAssets_obj,_onImageLoaded,(void))

::String ToolkitAssets_obj::getText(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_133_getText)
HXLINE( 134)		::String s = this->getTextDelegate(resourceId);
HXLINE( 135)		if (::hx::IsNull( s )) {
HXLINE( 136)			s = ::haxe::Resource_obj::getString(resourceId);
            		}
HXLINE( 138)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,getText,return )

 ::haxe::io::Bytes ToolkitAssets_obj::getBytes(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_142_getBytes)
HXDLIN( 142)		return ::haxe::Resource_obj::getBytes(resourceId);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,getBytes,return )

void ToolkitAssets_obj::addPlugin( ::haxe::ui::assets::AssetPlugin plugin){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_149_addPlugin)
HXLINE( 150)		if (::hx::IsNull( this->_plugins )) {
HXLINE( 151)			this->_plugins = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 153)		this->_plugins->push(plugin);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,addPlugin,(void))

 ::Dynamic ToolkitAssets_obj::runPlugins( ::Dynamic asset){
            	HX_STACKFRAME(&_hx_pos_0397d73654d5d7af_156_runPlugins)
HXLINE( 157)		if (::hx::IsNull( this->_plugins )) {
HXLINE( 158)			return asset;
            		}
HXLINE( 161)		{
HXLINE( 161)			int _g = 0;
HXDLIN( 161)			::Array< ::Dynamic> _g1 = this->_plugins;
HXDLIN( 161)			while((_g < _g1->length)){
HXLINE( 161)				 ::haxe::ui::assets::AssetPlugin p = _g1->__get(_g).StaticCast<  ::haxe::ui::assets::AssetPlugin >();
HXDLIN( 161)				_g = (_g + 1);
HXLINE( 162)				asset = p->invoke(asset);
            			}
            		}
HXLINE( 165)		return asset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolkitAssets_obj,runPlugins,return )

 ::haxe::ui::ToolkitAssets ToolkitAssets_obj::_instance;

 ::haxe::ui::ToolkitAssets ToolkitAssets_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_0397d73654d5d7af_16_get_instance)
HXLINE(  17)		if (::hx::IsNull( ::haxe::ui::ToolkitAssets_obj::_instance )) {
HXLINE(  18)			::haxe::ui::ToolkitAssets_obj::_instance =  ::haxe::ui::ToolkitAssets_obj::__alloc( HX_CTX );
            		}
HXLINE(  20)		return ::haxe::ui::ToolkitAssets_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolkitAssets_obj,get_instance,return )


::hx::ObjectPtr< ToolkitAssets_obj > ToolkitAssets_obj::__new() {
	::hx::ObjectPtr< ToolkitAssets_obj > __this = new ToolkitAssets_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ToolkitAssets_obj > ToolkitAssets_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ToolkitAssets_obj *__this = (ToolkitAssets_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToolkitAssets_obj), true, "haxe.ui.ToolkitAssets"));
	*(void **)__this = ToolkitAssets_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolkitAssets_obj::ToolkitAssets_obj()
{
}

void ToolkitAssets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolkitAssets);
	HX_MARK_MEMBER_NAME(preloadList,"preloadList");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(_fontCache,"_fontCache");
	HX_MARK_MEMBER_NAME(_fontCallbacks,"_fontCallbacks");
	HX_MARK_MEMBER_NAME(_imageCache,"_imageCache");
	HX_MARK_MEMBER_NAME(_imageCallbacks,"_imageCallbacks");
	HX_MARK_MEMBER_NAME(_plugins,"_plugins");
	HX_MARK_END_CLASS();
}

void ToolkitAssets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(preloadList,"preloadList");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(_fontCache,"_fontCache");
	HX_VISIT_MEMBER_NAME(_fontCallbacks,"_fontCallbacks");
	HX_VISIT_MEMBER_NAME(_imageCache,"_imageCache");
	HX_VISIT_MEMBER_NAME(_imageCallbacks,"_imageCallbacks");
	HX_VISIT_MEMBER_NAME(_plugins,"_plugins");
}

::hx::Val ToolkitAssets_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"_plugins") ) { return ::hx::Val( _plugins ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addPlugin") ) { return ::hx::Val( addPlugin_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fontCache") ) { return ::hx::Val( _fontCache ); }
		if (HX_FIELD_EQ(inName,"cacheImage") ) { return ::hx::Val( cacheImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"runPlugins") ) { return ::hx::Val( runPlugins_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preloadList") ) { return ::hx::Val( preloadList ); }
		if (HX_FIELD_EQ(inName,"_imageCache") ) { return ::hx::Val( _imageCache ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onFontLoaded") ) { return ::hx::Val( _onFontLoaded_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fontCallbacks") ) { return ::hx::Val( _fontCallbacks ); }
		if (HX_FIELD_EQ(inName,"getCachedImage") ) { return ::hx::Val( getCachedImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onImageLoaded") ) { return ::hx::Val( _onImageLoaded_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_imageCallbacks") ) { return ::hx::Val( _imageCallbacks ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ToolkitAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ToolkitAssets_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_plugins") ) { _plugins=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fontCache") ) { _fontCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preloadList") ) { preloadList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageCache") ) { _imageCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fontCallbacks") ) { _fontCallbacks=inValue.Cast<  ::haxe::ui::util::CallbackMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_imageCallbacks") ) { _imageCallbacks=inValue.Cast<  ::haxe::ui::util::CallbackMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ToolkitAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::ToolkitAssets >(); return true; }
	}
	return false;
}

void ToolkitAssets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("preloadList",c7,a8,09,f4));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("_fontCache",b4,b9,92,48));
	outFields->push(HX_("_fontCallbacks",80,b3,e7,54));
	outFields->push(HX_("_imageCache",06,2e,6c,1f));
	outFields->push(HX_("_imageCallbacks",d2,b8,66,be));
	outFields->push(HX_("_plugins",e1,2b,ee,3b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToolkitAssets_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ToolkitAssets_obj,preloadList),HX_("preloadList",c7,a8,09,f4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ToolkitAssets_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ToolkitAssets_obj,_fontCache),HX_("_fontCache",b4,b9,92,48)},
	{::hx::fsObject /*  ::haxe::ui::util::CallbackMap */ ,(int)offsetof(ToolkitAssets_obj,_fontCallbacks),HX_("_fontCallbacks",80,b3,e7,54)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ToolkitAssets_obj,_imageCache),HX_("_imageCache",06,2e,6c,1f)},
	{::hx::fsObject /*  ::haxe::ui::util::CallbackMap */ ,(int)offsetof(ToolkitAssets_obj,_imageCallbacks),HX_("_imageCallbacks",d2,b8,66,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ToolkitAssets_obj,_plugins),HX_("_plugins",e1,2b,ee,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ToolkitAssets_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::ToolkitAssets */ ,(void *) &ToolkitAssets_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ToolkitAssets_obj_sMemberFields[] = {
	HX_("preloadList",c7,a8,09,f4),
	HX_("options",5e,33,fe,df),
	HX_("_fontCache",b4,b9,92,48),
	HX_("_fontCallbacks",80,b3,e7,54),
	HX_("_imageCache",06,2e,6c,1f),
	HX_("_imageCallbacks",d2,b8,66,be),
	HX_("getFont",85,0d,43,16),
	HX_("_onFontLoaded",12,14,75,c7),
	HX_("cacheImage",b9,85,21,00),
	HX_("getCachedImage",23,af,f1,bd),
	HX_("getImage",e5,2e,40,1d),
	HX_("_onImageLoaded",22,5f,eb,41),
	HX_("getText",63,7c,7c,1f),
	HX_("getBytes",f5,17,6f,1d),
	HX_("_plugins",e1,2b,ee,3b),
	HX_("addPlugin",b4,bf,07,fd),
	HX_("runPlugins",55,62,b2,6c),
	::String(null()) };

static void ToolkitAssets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolkitAssets_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolkitAssets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolkitAssets_obj::_instance,"_instance");
};

#endif

::hx::Class ToolkitAssets_obj::__mClass;

static ::String ToolkitAssets_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ToolkitAssets_obj::__register()
{
	ToolkitAssets_obj _hx_dummy;
	ToolkitAssets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.ToolkitAssets",6f,d1,6c,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolkitAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &ToolkitAssets_obj::__SetStatic;
	__mClass->mMarkFunc = ToolkitAssets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ToolkitAssets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToolkitAssets_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToolkitAssets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolkitAssets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolkitAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolkitAssets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
