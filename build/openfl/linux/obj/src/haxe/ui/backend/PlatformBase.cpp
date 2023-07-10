#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_50_new,"haxe.ui.backend.PlatformBase","new",0x67b89e22,"haxe.ui.backend.PlatformBase.new","haxe/ui/backend/PlatformBase.hx",50,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_19_get_isWindows,"haxe.ui.backend.PlatformBase","get_isWindows",0x7eab83d2,"haxe.ui.backend.PlatformBase.get_isWindows","haxe/ui/backend/PlatformBase.hx",19,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_29_get_isLinux,"haxe.ui.backend.PlatformBase","get_isLinux",0x2eed4f83,"haxe.ui.backend.PlatformBase.get_isLinux","haxe/ui/backend/PlatformBase.hx",29,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_39_get_isMac,"haxe.ui.backend.PlatformBase","get_isMac",0x42bb1c5e,"haxe.ui.backend.PlatformBase.get_isMac","haxe/ui/backend/PlatformBase.hx",39,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_52_get_isMobile,"haxe.ui.backend.PlatformBase","get_isMobile",0xb38365f3,"haxe.ui.backend.PlatformBase.get_isMobile","haxe/ui/backend/PlatformBase.hx",52,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_75_getMetric,"haxe.ui.backend.PlatformBase","getMetric",0xc3799ca8,"haxe.ui.backend.PlatformBase.getMetric","haxe/ui/backend/PlatformBase.hx",75,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_79_getColor,"haxe.ui.backend.PlatformBase","getColor",0xb28393eb,"haxe.ui.backend.PlatformBase.getColor","haxe/ui/backend/PlatformBase.hx",79,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_83_getSystemLocale,"haxe.ui.backend.PlatformBase","getSystemLocale",0x4d829b61,"haxe.ui.backend.PlatformBase.getSystemLocale","haxe/ui/backend/PlatformBase.hx",83,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_87_perf,"haxe.ui.backend.PlatformBase","perf",0x5b2428e7,"haxe.ui.backend.PlatformBase.perf","haxe/ui/backend/PlatformBase.hx",87,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_93_get_KeyTab,"haxe.ui.backend.PlatformBase","get_KeyTab",0x2fb8485d,"haxe.ui.backend.PlatformBase.get_KeyTab","haxe/ui/backend/PlatformBase.hx",93,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_98_get_KeyUp,"haxe.ui.backend.PlatformBase","get_KeyUp",0xf3961153,"haxe.ui.backend.PlatformBase.get_KeyUp","haxe/ui/backend/PlatformBase.hx",98,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_103_get_KeyDown,"haxe.ui.backend.PlatformBase","get_KeyDown",0x86fe515a,"haxe.ui.backend.PlatformBase.get_KeyDown","haxe/ui/backend/PlatformBase.hx",103,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_108_get_KeyLeft,"haxe.ui.backend.PlatformBase","get_KeyLeft",0x8c4060ff,"haxe.ui.backend.PlatformBase.get_KeyLeft","haxe/ui/backend/PlatformBase.hx",108,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_113_get_KeyRight,"haxe.ui.backend.PlatformBase","get_KeyRight",0xa3218be4,"haxe.ui.backend.PlatformBase.get_KeyRight","haxe/ui/backend/PlatformBase.hx",113,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_118_get_KeySpace,"haxe.ui.backend.PlatformBase","get_KeySpace",0x3b240cce,"haxe.ui.backend.PlatformBase.get_KeySpace","haxe/ui/backend/PlatformBase.hx",118,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_123_get_KeyEnter,"haxe.ui.backend.PlatformBase","get_KeyEnter",0x2a43ed20,"haxe.ui.backend.PlatformBase.get_KeyEnter","haxe/ui/backend/PlatformBase.hx",123,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_128_get_KeyEscape,"haxe.ui.backend.PlatformBase","get_KeyEscape",0xa6ecca79,"haxe.ui.backend.PlatformBase.get_KeyEscape","haxe/ui/backend/PlatformBase.hx",128,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_135_getKeyCode,"haxe.ui.backend.PlatformBase","getKeyCode",0xb5b8f6f4,"haxe.ui.backend.PlatformBase.getKeyCode","haxe/ui/backend/PlatformBase.hx",135,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_4_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",4,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_5_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",5,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_6_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",6,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_7_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",7,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_8_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",8,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_9_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",9,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_10_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",10,0x3041c20d)
HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_11_boot,"haxe.ui.backend.PlatformBase","boot",0x51eac030,"haxe.ui.backend.PlatformBase.boot","haxe/ui/backend/PlatformBase.hx",11,0x3041c20d)
namespace haxe{
namespace ui{
namespace backend{

void PlatformBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_50_new)
HXDLIN(  50)		this->_isMobile = null();
            	}

Dynamic PlatformBase_obj::__CreateEmpty() { return new PlatformBase_obj; }

void *PlatformBase_obj::_hx_vtable = 0;

Dynamic PlatformBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlatformBase_obj > _hx_result = new PlatformBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7903ebde;
}

bool PlatformBase_obj::get_isWindows(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_19_get_isWindows)
HXDLIN(  19)		return (::Sys_obj::systemName().toLowerCase().indexOf(HX_("windows",83,de,74,e8),null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_isWindows,return )

bool PlatformBase_obj::get_isLinux(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_29_get_isLinux)
HXDLIN(  29)		return (::Sys_obj::systemName().toLowerCase().indexOf(HX_("linux",f4,eb,01,75),null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_isLinux,return )

bool PlatformBase_obj::get_isMac(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_39_get_isMac)
HXDLIN(  39)		return (::Sys_obj::systemName().toLowerCase().indexOf(HX_("mac",8f,0a,53,00),null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_isMac,return )

bool PlatformBase_obj::get_isMobile(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_52_get_isMobile)
HXLINE(  57)		if (::hx::IsNotNull( this->_isMobile )) {
HXLINE(  58)			return ( (bool)(this->_isMobile) );
            		}
HXLINE(  61)		this->_isMobile = false;
HXLINE(  70)		return ( (bool)(this->_isMobile) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_isMobile,return )

Float PlatformBase_obj::getMetric(::String id){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_75_getMetric)
HXDLIN(  75)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlatformBase_obj,getMetric,return )

 ::Dynamic PlatformBase_obj::getColor(::String id){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_79_getColor)
HXDLIN(  79)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlatformBase_obj,getColor,return )

::String PlatformBase_obj::getSystemLocale(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_83_getSystemLocale)
HXDLIN(  83)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,getSystemLocale,return )

Float PlatformBase_obj::perf(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_87_perf)
HXDLIN(  87)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  87)		Float _hx_tmp;
HXDLIN(  87)		if ((timer > 0)) {
HXDLIN(  87)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXDLIN(  87)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  87)		return (_hx_tmp * ( (Float)(1000) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,perf,return )

int PlatformBase_obj::get_KeyTab(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_93_get_KeyTab)
HXDLIN(  93)		return this->getKeyCode(HX_("tab",55,5a,58,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyTab,return )

int PlatformBase_obj::get_KeyUp(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_98_get_KeyUp)
HXDLIN(  98)		return this->getKeyCode(HX_("up",5b,66,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyUp,return )

int PlatformBase_obj::get_KeyDown(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_103_get_KeyDown)
HXDLIN( 103)		return this->getKeyCode(HX_("down",62,f8,6d,42));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyDown,return )

int PlatformBase_obj::get_KeyLeft(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_108_get_KeyLeft)
HXDLIN( 108)		return this->getKeyCode(HX_("left",07,08,b0,47));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyLeft,return )

int PlatformBase_obj::get_KeyRight(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_113_get_KeyRight)
HXDLIN( 113)		return this->getKeyCode(HX_("right",dc,0b,64,e9));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyRight,return )

int PlatformBase_obj::get_KeySpace(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_118_get_KeySpace)
HXDLIN( 118)		return this->getKeyCode(HX_("space",c6,8c,66,81));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeySpace,return )

int PlatformBase_obj::get_KeyEnter(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_123_get_KeyEnter)
HXDLIN( 123)		return this->getKeyCode(HX_("enter",18,6d,86,70));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyEnter,return )

int PlatformBase_obj::get_KeyEscape(){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_128_get_KeyEscape)
HXDLIN( 128)		return this->getKeyCode(HX_("escape",81,43,da,da));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformBase_obj,get_KeyEscape,return )

int PlatformBase_obj::getKeyCode(::String keyId){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_135_getKeyCode)
HXDLIN( 135)		::String _hx_switch_0 = keyId;
            		if (  (_hx_switch_0==HX_("down",62,f8,6d,42)) ){
HXLINE( 138)			return 40;
HXDLIN( 138)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("enter",18,6d,86,70)) ){
HXLINE( 142)			return 13;
HXDLIN( 142)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("escape",81,43,da,da)) ){
HXLINE( 143)			return 27;
HXDLIN( 143)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 139)			return 37;
HXDLIN( 139)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 140)			return 39;
HXDLIN( 140)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("space",c6,8c,66,81)) ){
HXLINE( 141)			return 32;
HXDLIN( 141)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("tab",55,5a,58,00)) ){
HXLINE( 136)			return 9;
HXDLIN( 136)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("up",5b,66,00,00)) ){
HXLINE( 137)			return 38;
HXDLIN( 137)			goto _hx_goto_17;
            		}
            		/* default */{
HXLINE( 144)			return ( (int)(keyId.charCodeAt(0)) );
            		}
            		_hx_goto_17:;
HXLINE( 135)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlatformBase_obj,getKeyCode,return )

int PlatformBase_obj::KEY_CODE_TAB;

int PlatformBase_obj::KEY_CODE_UP;

int PlatformBase_obj::KEY_CODE_DOWN;

int PlatformBase_obj::KEY_CODE_LEFT;

int PlatformBase_obj::KEY_CODE_RIGHT;

int PlatformBase_obj::KEY_CODE_SPACE;

int PlatformBase_obj::KEY_CODE_ENTER;

int PlatformBase_obj::KEY_CODE_ESCAPE;


::hx::ObjectPtr< PlatformBase_obj > PlatformBase_obj::__new() {
	::hx::ObjectPtr< PlatformBase_obj > __this = new PlatformBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlatformBase_obj > PlatformBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlatformBase_obj *__this = (PlatformBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlatformBase_obj), true, "haxe.ui.backend.PlatformBase"));
	*(void **)__this = PlatformBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlatformBase_obj::PlatformBase_obj()
{
}

void PlatformBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlatformBase);
	HX_MARK_MEMBER_NAME(isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(isLinux,"isLinux");
	HX_MARK_MEMBER_NAME(isMac,"isMac");
	HX_MARK_MEMBER_NAME(_isMobile,"_isMobile");
	HX_MARK_MEMBER_NAME(isMobile,"isMobile");
	HX_MARK_MEMBER_NAME(KeyTab,"KeyTab");
	HX_MARK_MEMBER_NAME(KeyUp,"KeyUp");
	HX_MARK_MEMBER_NAME(KeyDown,"KeyDown");
	HX_MARK_MEMBER_NAME(KeyLeft,"KeyLeft");
	HX_MARK_MEMBER_NAME(KeyRight,"KeyRight");
	HX_MARK_MEMBER_NAME(KeySpace,"KeySpace");
	HX_MARK_MEMBER_NAME(KeyEnter,"KeyEnter");
	HX_MARK_MEMBER_NAME(KeyEscape,"KeyEscape");
	HX_MARK_END_CLASS();
}

void PlatformBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(isLinux,"isLinux");
	HX_VISIT_MEMBER_NAME(isMac,"isMac");
	HX_VISIT_MEMBER_NAME(_isMobile,"_isMobile");
	HX_VISIT_MEMBER_NAME(isMobile,"isMobile");
	HX_VISIT_MEMBER_NAME(KeyTab,"KeyTab");
	HX_VISIT_MEMBER_NAME(KeyUp,"KeyUp");
	HX_VISIT_MEMBER_NAME(KeyDown,"KeyDown");
	HX_VISIT_MEMBER_NAME(KeyLeft,"KeyLeft");
	HX_VISIT_MEMBER_NAME(KeyRight,"KeyRight");
	HX_VISIT_MEMBER_NAME(KeySpace,"KeySpace");
	HX_VISIT_MEMBER_NAME(KeyEnter,"KeyEnter");
	HX_VISIT_MEMBER_NAME(KeyEscape,"KeyEscape");
}

::hx::Val PlatformBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"perf") ) { return ::hx::Val( perf_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMac") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isMac() : isMac ); }
		if (HX_FIELD_EQ(inName,"KeyUp") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyUp() : KeyUp ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"KeyTab") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyTab() : KeyTab ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLinux") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isLinux() : isLinux ); }
		if (HX_FIELD_EQ(inName,"KeyDown") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyDown() : KeyDown ); }
		if (HX_FIELD_EQ(inName,"KeyLeft") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyLeft() : KeyLeft ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isMobile") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isMobile() : isMobile ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"KeyRight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyRight() : KeyRight ); }
		if (HX_FIELD_EQ(inName,"KeySpace") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeySpace() : KeySpace ); }
		if (HX_FIELD_EQ(inName,"KeyEnter") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyEnter() : KeyEnter ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isWindows() : isWindows ); }
		if (HX_FIELD_EQ(inName,"get_isMac") ) { return ::hx::Val( get_isMac_dyn() ); }
		if (HX_FIELD_EQ(inName,"_isMobile") ) { return ::hx::Val( _isMobile ); }
		if (HX_FIELD_EQ(inName,"getMetric") ) { return ::hx::Val( getMetric_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeyUp") ) { return ::hx::Val( get_KeyUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"KeyEscape") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_KeyEscape() : KeyEscape ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_KeyTab") ) { return ::hx::Val( get_KeyTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKeyCode") ) { return ::hx::Val( getKeyCode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isLinux") ) { return ::hx::Val( get_isLinux_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeyDown") ) { return ::hx::Val( get_KeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeyLeft") ) { return ::hx::Val( get_KeyLeft_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isMobile") ) { return ::hx::Val( get_isMobile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeyRight") ) { return ::hx::Val( get_KeyRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeySpace") ) { return ::hx::Val( get_KeySpace_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeyEnter") ) { return ::hx::Val( get_KeyEnter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isWindows") ) { return ::hx::Val( get_isWindows_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_KeyEscape") ) { return ::hx::Val( get_KeyEscape_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSystemLocale") ) { return ::hx::Val( getSystemLocale_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlatformBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isMac") ) { isMac=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeyUp") ) { KeyUp=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"KeyTab") ) { KeyTab=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLinux") ) { isLinux=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeyDown") ) { KeyDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeyLeft") ) { KeyLeft=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isMobile") ) { isMobile=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeyRight") ) { KeyRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeySpace") ) { KeySpace=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeyEnter") ) { KeyEnter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isMobile") ) { _isMobile=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KeyEscape") ) { KeyEscape=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isWindows",b9,5b,73,ec));
	outFields->push(HX_("isLinux",aa,8f,87,11));
	outFields->push(HX_("isMac",c5,34,51,c1));
	outFields->push(HX_("_isMobile",4b,3f,77,5f));
	outFields->push(HX_("isMobile",ec,47,e1,17));
	outFields->push(HX_("KeyTab",16,8a,77,74));
	outFields->push(HX_("KeyUp",ba,29,2c,72));
	outFields->push(HX_("KeyDown",81,91,98,69));
	outFields->push(HX_("KeyLeft",26,a1,da,6e));
	outFields->push(HX_("KeyRight",dd,6d,7f,07));
	outFields->push(HX_("KeySpace",c7,ee,81,9f));
	outFields->push(HX_("KeyEnter",19,cf,a1,8e));
	outFields->push(HX_("KeyEscape",60,a2,b4,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlatformBase_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(PlatformBase_obj,isWindows),HX_("isWindows",b9,5b,73,ec)},
	{::hx::fsBool,(int)offsetof(PlatformBase_obj,isLinux),HX_("isLinux",aa,8f,87,11)},
	{::hx::fsBool,(int)offsetof(PlatformBase_obj,isMac),HX_("isMac",c5,34,51,c1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PlatformBase_obj,_isMobile),HX_("_isMobile",4b,3f,77,5f)},
	{::hx::fsBool,(int)offsetof(PlatformBase_obj,isMobile),HX_("isMobile",ec,47,e1,17)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyTab),HX_("KeyTab",16,8a,77,74)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyUp),HX_("KeyUp",ba,29,2c,72)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyDown),HX_("KeyDown",81,91,98,69)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyLeft),HX_("KeyLeft",26,a1,da,6e)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyRight),HX_("KeyRight",dd,6d,7f,07)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeySpace),HX_("KeySpace",c7,ee,81,9f)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyEnter),HX_("KeyEnter",19,cf,a1,8e)},
	{::hx::fsInt,(int)offsetof(PlatformBase_obj,KeyEscape),HX_("KeyEscape",60,a2,b4,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PlatformBase_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_TAB,HX_("KEY_CODE_TAB",e3,f8,ca,17)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_UP,HX_("KEY_CODE_UP",6d,b7,54,f2)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_DOWN,HX_("KEY_CODE_DOWN",f4,15,46,af)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_LEFT,HX_("KEY_CODE_LEFT",99,25,88,b4)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_RIGHT,HX_("KEY_CODE_RIGHT",ea,cd,a5,b9)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_SPACE,HX_("KEY_CODE_SPACE",d4,4e,a8,51)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_ENTER,HX_("KEY_CODE_ENTER",26,2f,c8,40)},
	{::hx::fsInt,(void *) &PlatformBase_obj::KEY_CODE_ESCAPE,HX_("KEY_CODE_ESCAPE",93,4d,22,44)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PlatformBase_obj_sMemberFields[] = {
	HX_("isWindows",b9,5b,73,ec),
	HX_("get_isWindows",90,2f,d7,ad),
	HX_("isLinux",aa,8f,87,11),
	HX_("get_isLinux",c1,ef,81,97),
	HX_("isMac",c5,34,51,c1),
	HX_("get_isMac",1c,91,fa,04),
	HX_("_isMobile",4b,3f,77,5f),
	HX_("isMobile",ec,47,e1,17),
	HX_("get_isMobile",f5,fb,fa,cc),
	HX_("getMetric",66,11,b9,85),
	HX_("getColor",ed,80,33,aa),
	HX_("getSystemLocale",9f,32,bf,5f),
	HX_("perf",e9,ec,54,4a),
	HX_("KeyTab",16,8a,77,74),
	HX_("get_KeyTab",df,f9,fe,64),
	HX_("KeyUp",ba,29,2c,72),
	HX_("get_KeyUp",11,86,d5,b5),
	HX_("KeyDown",81,91,98,69),
	HX_("get_KeyDown",98,f1,92,ef),
	HX_("KeyLeft",26,a1,da,6e),
	HX_("get_KeyLeft",3d,01,d5,f4),
	HX_("KeyRight",dd,6d,7f,07),
	HX_("get_KeyRight",e6,21,99,bc),
	HX_("KeySpace",c7,ee,81,9f),
	HX_("get_KeySpace",d0,a2,9b,54),
	HX_("KeyEnter",19,cf,a1,8e),
	HX_("get_KeyEnter",22,83,bb,43),
	HX_("KeyEscape",60,a2,b4,14),
	HX_("get_KeyEscape",37,76,18,d6),
	HX_("getKeyCode",76,a8,ff,ea),
	::String(null()) };

static void PlatformBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_TAB,"KEY_CODE_TAB");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_UP,"KEY_CODE_UP");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_DOWN,"KEY_CODE_DOWN");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_LEFT,"KEY_CODE_LEFT");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_RIGHT,"KEY_CODE_RIGHT");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_SPACE,"KEY_CODE_SPACE");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_ENTER,"KEY_CODE_ENTER");
	HX_MARK_MEMBER_NAME(PlatformBase_obj::KEY_CODE_ESCAPE,"KEY_CODE_ESCAPE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlatformBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_TAB,"KEY_CODE_TAB");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_UP,"KEY_CODE_UP");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_DOWN,"KEY_CODE_DOWN");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_LEFT,"KEY_CODE_LEFT");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_RIGHT,"KEY_CODE_RIGHT");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_SPACE,"KEY_CODE_SPACE");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_ENTER,"KEY_CODE_ENTER");
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::KEY_CODE_ESCAPE,"KEY_CODE_ESCAPE");
};

#endif

::hx::Class PlatformBase_obj::__mClass;

static ::String PlatformBase_obj_sStaticFields[] = {
	HX_("KEY_CODE_TAB",e3,f8,ca,17),
	HX_("KEY_CODE_UP",6d,b7,54,f2),
	HX_("KEY_CODE_DOWN",f4,15,46,af),
	HX_("KEY_CODE_LEFT",99,25,88,b4),
	HX_("KEY_CODE_RIGHT",ea,cd,a5,b9),
	HX_("KEY_CODE_SPACE",d4,4e,a8,51),
	HX_("KEY_CODE_ENTER",26,2f,c8,40),
	HX_("KEY_CODE_ESCAPE",93,4d,22,44),
	::String(null())
};

void PlatformBase_obj::__register()
{
	PlatformBase_obj _hx_dummy;
	PlatformBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.PlatformBase",30,a5,0a,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlatformBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlatformBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlatformBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlatformBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlatformBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlatformBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_4_boot)
HXDLIN(   4)		KEY_CODE_TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_5_boot)
HXDLIN(   5)		KEY_CODE_UP = 38;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_6_boot)
HXDLIN(   6)		KEY_CODE_DOWN = 40;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_7_boot)
HXDLIN(   7)		KEY_CODE_LEFT = 37;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_8_boot)
HXDLIN(   8)		KEY_CODE_RIGHT = 39;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_9_boot)
HXDLIN(   9)		KEY_CODE_SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_10_boot)
HXDLIN(  10)		KEY_CODE_ENTER = 13;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_11_boot)
HXDLIN(  11)		KEY_CODE_ESCAPE = 27;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
