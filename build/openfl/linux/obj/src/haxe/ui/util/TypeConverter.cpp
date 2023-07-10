#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_util_TypeConverter
#include <haxe/ui/util/TypeConverter.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f09608b2cfec152c_4_convertFrom,"haxe.ui.util.TypeConverter","convertFrom",0x55e95a9b,"haxe.ui.util.TypeConverter.convertFrom","haxe/ui/util/TypeConverter.hx",4,0x71b8c893)
HX_LOCAL_STACK_FRAME(_hx_pos_f09608b2cfec152c_25_convertTo,"haxe.ui.util.TypeConverter","convertTo",0xc8aebc6c,"haxe.ui.util.TypeConverter.convertTo","haxe/ui/util/TypeConverter.hx",25,0x71b8c893)
namespace haxe{
namespace ui{
namespace util{

void TypeConverter_obj::__construct() { }

Dynamic TypeConverter_obj::__CreateEmpty() { return new TypeConverter_obj; }

void *TypeConverter_obj::_hx_vtable = 0;

Dynamic TypeConverter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypeConverter_obj > _hx_result = new TypeConverter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TypeConverter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f488c2a;
}

 ::Dynamic TypeConverter_obj::convertFrom( ::Dynamic input){
            	HX_GC_STACKFRAME(&_hx_pos_f09608b2cfec152c_4_convertFrom)
HXLINE(   5)		 ::Dynamic output = input;
HXLINE(   8)		{
HXLINE(   8)			 ::ValueType _g = ::Type_obj::_hx_typeof(input);
HXDLIN(   8)			if ((_g->_hx_getIndex() == 6)) {
HXLINE(   9)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE(  10)					::String s = ::Std_obj::string(input);
HXLINE(  11)					bool _hx_tmp;
HXDLIN(  11)					if ((s != HX_("true",4e,a7,03,4d))) {
HXLINE(  11)						_hx_tmp = (s == HX_("false",a3,35,4f,fb));
            					}
            					else {
HXLINE(  11)						_hx_tmp = true;
            					}
HXDLIN(  11)					if (_hx_tmp) {
HXLINE(  12)						output = (s == HX_("true",4e,a7,03,4d));
            					}
            					else {
HXLINE(  13)						 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^-?[0-9]*$",86,11,70,cb),HX_("i",69,00,00,00));
HXDLIN(  13)						if (_hx_tmp->match(::Std_obj::string(s))) {
HXLINE(  14)							output = ::Std_obj::parseInt(s);
            						}
            						else {
HXLINE(  15)							 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^-?[0-9]*\\.[0-9]*$",26,04,e4,a1),HX_("i",69,00,00,00));
HXDLIN(  15)							if (_hx_tmp->match(::Std_obj::string(s))) {
HXLINE(  16)								output = ::Std_obj::parseFloat(s);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  22)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeConverter_obj,convertFrom,return )

 ::Dynamic TypeConverter_obj::convertTo( ::Dynamic input,::String type){
            	HX_STACKFRAME(&_hx_pos_f09608b2cfec152c_25_convertTo)
HXLINE(  26)		if (::hx::IsNull( type )) {
HXLINE(  27)			return input;
            		}
HXLINE(  29)		::String _hx_switch_0 = type.toLowerCase();
            		if (  (_hx_switch_0==HX_("bool",2a,84,1b,41)) ){
HXLINE(  33)			return (::Std_obj::string(input) == HX_("true",4e,a7,03,4d));
HXDLIN(  33)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ){
HXLINE(  44)			if (::hx::IsNull( input )) {
HXLINE(  45)				return 0;
            			}
HXLINE(  47)			Float r = ::Std_obj::parseFloat(::Std_obj::string(input));
HXLINE(  48)			if (::Math_obj::isNaN(r)) {
HXLINE(  49)				return 0;
            			}
HXLINE(  51)			return r;
HXLINE(  43)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE(  35)			if (::hx::IsNull( input )) {
HXLINE(  36)				return 0;
            			}
HXLINE(  38)			 ::Dynamic r = ::Std_obj::parseInt(::Std_obj::string(input));
HXLINE(  39)			if (::hx::IsNull( r )) {
HXLINE(  40)				return 0;
            			}
HXLINE(  42)			return r;
HXLINE(  34)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("dynamic",7f,9f,15,36)) ||  (_hx_switch_0==HX_("scalemode",ed,ae,fa,40)) ||  (_hx_switch_0==HX_("selectionmode",af,e1,cb,0d)) ||  (_hx_switch_0==HX_("variant",85,40,e2,dc)) ){
HXLINE(  53)			return input;
HXDLIN(  53)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE(  31)			return ::Std_obj::string(input);
HXDLIN(  31)			goto _hx_goto_1;
            		}
            		/* default */{
            		}
            		_hx_goto_1:;
HXLINE(  60)		return input;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeConverter_obj,convertTo,return )


TypeConverter_obj::TypeConverter_obj()
{
}

bool TypeConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"convertTo") ) { outValue = convertTo_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"convertFrom") ) { outValue = convertFrom_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TypeConverter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TypeConverter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TypeConverter_obj::__mClass;

static ::String TypeConverter_obj_sStaticFields[] = {
	HX_("convertFrom",fd,44,07,2d),
	HX_("convertTo",4e,ea,bb,df),
	::String(null())
};

void TypeConverter_obj::__register()
{
	TypeConverter_obj _hx_dummy;
	TypeConverter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.TypeConverter",0c,01,79,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TypeConverter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TypeConverter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeConverter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeConverter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
