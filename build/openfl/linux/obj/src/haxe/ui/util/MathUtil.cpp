#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_util_MathUtil
#include <haxe/ui/util/MathUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_8_distance,"haxe.ui.util.MathUtil","distance",0xc95b573f,"haxe.ui.util.MathUtil.distance","haxe/ui/util/MathUtil.hx",8,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_12_round,"haxe.ui.util.MathUtil","round",0x5a75aa04,"haxe.ui.util.MathUtil.round","haxe/ui/util/MathUtil.hx",12,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_15_roundToNearest,"haxe.ui.util.MathUtil","roundToNearest",0xdae0257f,"haxe.ui.util.MathUtil.roundToNearest","haxe/ui/util/MathUtil.hx",15,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_23_clamp,"haxe.ui.util.MathUtil","clamp",0xb56824b1,"haxe.ui.util.MathUtil.clamp","haxe/ui/util/MathUtil.hx",23,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_37_min,"haxe.ui.util.MathUtil","min",0x7f9bc9c8,"haxe.ui.util.MathUtil.min","haxe/ui/util/MathUtil.hx",37,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_47_max,"haxe.ui.util.MathUtil","max",0x7f9bc2da,"haxe.ui.util.MathUtil.max","haxe/ui/util/MathUtil.hx",47,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_57_wrapCircular,"haxe.ui.util.MathUtil","wrapCircular",0x6ff70753,"haxe.ui.util.MathUtil.wrapCircular","haxe/ui/util/MathUtil.hx",57,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_4_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",4,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_5_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",5,0x1b97ffd9)
namespace haxe{
namespace ui{
namespace util{

void MathUtil_obj::__construct() { }

Dynamic MathUtil_obj::__CreateEmpty() { return new MathUtil_obj; }

void *MathUtil_obj::_hx_vtable = 0;

Dynamic MathUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MathUtil_obj > _hx_result = new MathUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x665cb906;
}

int MathUtil_obj::MAX_INT;

int MathUtil_obj::MIN_INT;

Float MathUtil_obj::distance(Float x1,Float y1,Float x2,Float y2){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_8_distance)
HXDLIN(   8)		return ::Math_obj::sqrt((((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MathUtil_obj,distance,return )

Float MathUtil_obj::round(Float v,::hx::Null< int >  __o_precision){
            		int precision = __o_precision.Default(0);
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_12_round)
HXDLIN(  12)		return (( (Float)(::Math_obj::round((v * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,round,return )

Float MathUtil_obj::roundToNearest(Float v,Float n){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_15_roundToNearest)
HXLINE(  16)		Float r = ::hx::Mod(v,n);
HXLINE(  17)		if ((r <= (n / ( (Float)(2) )))) {
HXLINE(  18)			return ::Math_obj::fround((v - r));
            		}
HXLINE(  20)		return ::Math_obj::fround(((v + n) - r));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,roundToNearest,return )

Float MathUtil_obj::clamp( ::Dynamic v, ::Dynamic min, ::Dynamic max){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_23_clamp)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (::hx::IsNotNull( v )) {
HXLINE(  24)			_hx_tmp = ::Math_obj::isNaN(( (Float)(v) ));
            		}
            		else {
HXLINE(  24)			_hx_tmp = true;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  25)			return ( (Float)(min) );
            		}
HXLINE(  28)		bool _hx_tmp1;
HXDLIN(  28)		if (::hx::IsNotNull( min )) {
HXLINE(  28)			_hx_tmp1 = ::hx::IsLess( v,min );
            		}
            		else {
HXLINE(  28)			_hx_tmp1 = false;
            		}
HXDLIN(  28)		if (_hx_tmp1) {
HXLINE(  29)			v = min;
            		}
            		else {
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			if (::hx::IsNotNull( max )) {
HXLINE(  30)				_hx_tmp = ::hx::IsGreater( v,max );
            			}
            			else {
HXLINE(  30)				_hx_tmp = false;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  31)				v = max;
            			}
            		}
HXLINE(  34)		return ( (Float)(v) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MathUtil_obj,clamp,return )

Float MathUtil_obj::min(::Array< Float > numbers){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_37_min)
HXLINE(  38)		Float r = numbers->__get(0);
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			while((_g < numbers->length)){
HXLINE(  39)				Float n = numbers->__get(_g);
HXDLIN(  39)				_g = (_g + 1);
HXLINE(  40)				if ((n < r)) {
HXLINE(  41)					r = n;
            				}
            			}
            		}
HXLINE(  44)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,min,return )

Float MathUtil_obj::max(::Array< Float > numbers){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_47_max)
HXLINE(  48)		Float r = numbers->__get(0);
HXLINE(  49)		{
HXLINE(  49)			int _g = 0;
HXDLIN(  49)			while((_g < numbers->length)){
HXLINE(  49)				Float n = numbers->__get(_g);
HXDLIN(  49)				_g = (_g + 1);
HXLINE(  50)				if ((n > r)) {
HXLINE(  51)					r = n;
            				}
            			}
            		}
HXLINE(  54)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,max,return )

Float MathUtil_obj::wrapCircular(Float v,Float max){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_57_wrapCircular)
HXLINE(  58)		v = ::hx::Mod(v,max);
HXLINE(  59)		if ((v < 0)) {
HXLINE(  60)			v = (v + max);
            		}
HXLINE(  62)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,wrapCircular,return )


MathUtil_obj::MathUtil_obj()
{
}

bool MathUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrapCircular") ) { outValue = wrapCircular_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"roundToNearest") ) { outValue = roundToNearest_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MathUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MathUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MathUtil_obj::MAX_INT,HX_("MAX_INT",54,26,6d,69)},
	{::hx::fsInt,(void *) &MathUtil_obj::MIN_INT,HX_("MIN_INT",42,3c,46,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MathUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathUtil_obj::MAX_INT,"MAX_INT");
	HX_MARK_MEMBER_NAME(MathUtil_obj::MIN_INT,"MIN_INT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MathUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MAX_INT,"MAX_INT");
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MIN_INT,"MIN_INT");
};

#endif

::hx::Class MathUtil_obj::__mClass;

static ::String MathUtil_obj_sStaticFields[] = {
	HX_("MAX_INT",54,26,6d,69),
	HX_("MIN_INT",42,3c,46,da),
	HX_("distance",35,93,f9,6b),
	HX_("round",4e,f8,65,ed),
	HX_("roundToNearest",f5,bd,fc,af),
	HX_("clamp",fb,72,58,48),
	HX_("min",92,11,53,00),
	HX_("max",a4,0a,53,00),
	HX_("wrapCircular",49,76,61,02),
	::String(null())
};

void MathUtil_obj::__register()
{
	MathUtil_obj _hx_dummy;
	MathUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.MathUtil",a4,45,a3,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MathUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MathUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MathUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MathUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MathUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_4_boot)
HXDLIN(   4)		MAX_INT = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_5_boot)
HXDLIN(   5)		MIN_INT = (int)-2147483648;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
