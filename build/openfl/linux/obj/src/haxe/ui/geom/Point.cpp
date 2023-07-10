#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_153cc208b8cdc04d_242_new,"haxe.ui.geom.Point","new",0xa04c1782,"haxe.ui.geom.Point.new","haxe/ui/geom/Point.hx",242,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_14_add,"haxe.ui.geom.Point","add",0xa0423943,"haxe.ui.geom.Point.add","haxe/ui/geom/Point.hx",14,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_26_subtract,"haxe.ui.geom.Point","subtract",0x63da12b2,"haxe.ui.geom.Point.subtract","haxe/ui/geom/Point.hx",26,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_39_addCoords,"haxe.ui.geom.Point","addCoords",0x646a25c1,"haxe.ui.geom.Point.addCoords","haxe/ui/geom/Point.hx",39,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_52_subtractCoords,"haxe.ui.geom.Point","subtractCoords",0x2cb93c70,"haxe.ui.geom.Point.subtractCoords","haxe/ui/geom/Point.hx",52,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_65_sum,"haxe.ui.geom.Point","sum",0xa04ff0ad,"haxe.ui.geom.Point.sum","haxe/ui/geom/Point.hx",65,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_76_diff,"haxe.ui.geom.Point","diff",0x9baf52a3,"haxe.ui.geom.Point.diff","haxe/ui/geom/Point.hx",76,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_85_orthogonalCW,"haxe.ui.geom.Point","orthogonalCW",0x0b2b090b,"haxe.ui.geom.Point.orthogonalCW","haxe/ui/geom/Point.hx",85,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_94_orthogonalCCW,"haxe.ui.geom.Point","orthogonalCCW",0xba7ccf80,"haxe.ui.geom.Point.orthogonalCCW","haxe/ui/geom/Point.hx",94,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_104_opposite,"haxe.ui.geom.Point","opposite",0x67d27685,"haxe.ui.geom.Point.opposite","haxe/ui/geom/Point.hx",104,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_113_revert,"haxe.ui.geom.Point","revert",0xba1b4802,"haxe.ui.geom.Point.revert","haxe/ui/geom/Point.hx",113,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_125_rotate,"haxe.ui.geom.Point","rotate",0x7ac7a079,"haxe.ui.geom.Point.rotate","haxe/ui/geom/Point.hx",125,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_143_rotated,"haxe.ui.geom.Point","rotated",0xf3e4c9cb,"haxe.ui.geom.Point.rotated","haxe/ui/geom/Point.hx",143,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_159_length,"haxe.ui.geom.Point","length",0x4eaeef04,"haxe.ui.geom.Point.length","haxe/ui/geom/Point.hx",159,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_170_multiply,"haxe.ui.geom.Point","multiply",0x06557fc2,"haxe.ui.geom.Point.multiply","haxe/ui/geom/Point.hx",170,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_185_product,"haxe.ui.geom.Point","product",0xf4c76f51,"haxe.ui.geom.Point.product","haxe/ui/geom/Point.hx",185,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_197_normalize,"haxe.ui.geom.Point","normalize",0x8f62842f,"haxe.ui.geom.Point.normalize","haxe/ui/geom/Point.hx",197,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_215_normalized,"haxe.ui.geom.Point","normalized",0xe6d12555,"haxe.ui.geom.Point.normalized","haxe/ui/geom/Point.hx",215,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_230_orth,"haxe.ui.geom.Point","orth",0xa2fb8bf5,"haxe.ui.geom.Point.orth","haxe/ui/geom/Point.hx",230,0x877f5c8f)
HX_LOCAL_STACK_FRAME(_hx_pos_153cc208b8cdc04d_239_copy,"haxe.ui.geom.Point","copy",0x9b0ab253,"haxe.ui.geom.Point.copy","haxe/ui/geom/Point.hx",239,0x877f5c8f)
namespace haxe{
namespace ui{
namespace geom{

void Point_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_242_new)
HXLINE( 243)		this->x = x;
HXLINE( 244)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c1d003a;
}

void Point_obj::add( ::haxe::ui::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_14_add)
HXLINE(  15)		 ::haxe::ui::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  15)		_hx_tmp->x = (_hx_tmp->x + point->x);
HXLINE(  16)		 ::haxe::ui::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  16)		_hx_tmp1->y = (_hx_tmp1->y + point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,(void))

void Point_obj::subtract( ::haxe::ui::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_26_subtract)
HXLINE(  27)		 ::haxe::ui::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  27)		_hx_tmp->x = (_hx_tmp->x - point->x);
HXLINE(  28)		 ::haxe::ui::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  28)		_hx_tmp1->y = (_hx_tmp1->y - point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,(void))

void Point_obj::addCoords(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_39_addCoords)
HXLINE(  40)		 ::haxe::ui::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  40)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE(  41)		 ::haxe::ui::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  41)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,addCoords,(void))

void Point_obj::subtractCoords(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_52_subtractCoords)
HXLINE(  53)		 ::haxe::ui::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  53)		_hx_tmp->x = (_hx_tmp->x - dx);
HXLINE(  54)		 ::haxe::ui::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  54)		_hx_tmp1->y = (_hx_tmp1->y - dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,subtractCoords,(void))

 ::haxe::ui::geom::Point Point_obj::sum( ::haxe::ui::geom::Point point){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_65_sum)
HXDLIN(  65)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,(this->x + point->x),(this->y + point->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,sum,return )

 ::haxe::ui::geom::Point Point_obj::diff( ::haxe::ui::geom::Point point){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_76_diff)
HXDLIN(  76)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,(this->x - point->x),(this->y - point->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,diff,return )

 ::haxe::ui::geom::Point Point_obj::orthogonalCW(){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_85_orthogonalCW)
HXDLIN(  85)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,this->y,-(this->x));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,orthogonalCW,return )

 ::haxe::ui::geom::Point Point_obj::orthogonalCCW(){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_94_orthogonalCCW)
HXDLIN(  94)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,-(this->y),this->x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,orthogonalCCW,return )

 ::haxe::ui::geom::Point Point_obj::opposite(){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_104_opposite)
HXDLIN( 104)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,-(this->x),-(this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,opposite,return )

void Point_obj::revert(){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_113_revert)
HXLINE( 114)		this->x = -(this->x);
HXLINE( 115)		this->y = -(this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,revert,(void))

void Point_obj::rotate(Float radians){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_125_rotate)
HXLINE( 126)		Float cos = ::Math_obj::cos(radians);
HXLINE( 127)		Float sin = ::Math_obj::sin(radians);
HXLINE( 129)		Float newX = ((cos * this->x) - (sin * this->y));
HXLINE( 130)		Float newY = ((sin * this->x) + (cos * this->y));
HXLINE( 132)		this->x = newX;
HXLINE( 133)		this->y = newY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,rotate,(void))

 ::haxe::ui::geom::Point Point_obj::rotated(Float radians){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_143_rotated)
HXLINE( 144)		Float cos = ::Math_obj::cos(radians);
HXLINE( 145)		Float sin = ::Math_obj::sin(radians);
HXLINE( 147)		Float newX = ((cos * this->x) - (sin * this->y));
HXLINE( 148)		Float newY = ((sin * this->x) + (cos * this->y));
HXLINE( 150)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,newX,newY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,rotated,return )

Float Point_obj::length(){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_159_length)
HXDLIN( 159)		return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,length,return )

void Point_obj::multiply(Float factor){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_170_multiply)
HXLINE( 171)		 ::haxe::ui::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)		_hx_tmp->x = (_hx_tmp->x * factor);
HXLINE( 172)		 ::haxe::ui::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 172)		_hx_tmp1->y = (_hx_tmp1->y * factor);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,multiply,(void))

 ::haxe::ui::geom::Point Point_obj::product(Float factor){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_185_product)
HXDLIN( 185)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,(this->x * factor),(this->y * factor));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,product,return )

void Point_obj::normalize(Float targetLength){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_197_normalize)
HXLINE( 198)		bool _hx_tmp;
HXDLIN( 198)		if ((this->x == 0)) {
HXLINE( 198)			_hx_tmp = (this->y == 0);
            		}
            		else {
HXLINE( 198)			_hx_tmp = false;
            		}
HXDLIN( 198)		if (_hx_tmp) {
HXLINE( 199)			return;
            		}
HXLINE( 201)		Float norm = (targetLength / this->length());
HXLINE( 202)		this->multiply(norm);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

 ::haxe::ui::geom::Point Point_obj::normalized(Float targetLength){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_215_normalized)
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if ((this->x == 0)) {
HXLINE( 216)			_hx_tmp = (this->y == 0);
            		}
            		else {
HXLINE( 216)			_hx_tmp = false;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 217)			return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 219)		Float norm = (targetLength / this->length());
HXLINE( 220)		return this->product(norm);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalized,return )

 ::haxe::ui::geom::Point Point_obj::orth(){
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_230_orth)
HXDLIN( 230)		return this->normalized(( (Float)(1) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,orth,return )

 ::haxe::ui::geom::Point Point_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_153cc208b8cdc04d_239_copy)
HXDLIN( 239)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,copy,return )


::hx::ObjectPtr< Point_obj > Point_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Point_obj > Point_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "haxe.ui.geom.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Point_obj::Point_obj()
{
}

::hx::Val Point_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"sum") ) { return ::hx::Val( sum_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { return ::hx::Val( diff_dyn() ); }
		if (HX_FIELD_EQ(inName,"orth") ) { return ::hx::Val( orth_dyn() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"revert") ) { return ::hx::Val( revert_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return ::hx::Val( rotated_dyn() ); }
		if (HX_FIELD_EQ(inName,"product") ) { return ::hx::Val( product_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subtract") ) { return ::hx::Val( subtract_dyn() ); }
		if (HX_FIELD_EQ(inName,"opposite") ) { return ::hx::Val( opposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addCoords") ) { return ::hx::Val( addCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { return ::hx::Val( normalized_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"orthogonalCW") ) { return ::hx::Val( orthogonalCW_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"orthogonalCCW") ) { return ::hx::Val( orthogonalCCW_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"subtractCoords") ) { return ::hx::Val( subtractCoords_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Point_obj_sStaticStorageInfo = 0;
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("add",21,f2,49,00),
	HX_("subtract",14,75,11,f8),
	HX_("addCoords",1f,d9,a8,80),
	HX_("subtractCoords",52,94,dd,66),
	HX_("sum",8b,a9,57,00),
	HX_("diff",05,5c,69,42),
	HX_("orthogonalCW",6d,44,00,39),
	HX_("orthogonalCCW",de,89,3b,a7),
	HX_("opposite",e7,d8,09,fc),
	HX_("revert",e4,ed,73,0a),
	HX_("rotate",5b,46,20,cb),
	HX_("rotated",a9,49,1d,f1),
	HX_("length",e6,94,07,9f),
	HX_("multiply",24,e2,8c,9a),
	HX_("product",2f,ef,ff,f1),
	HX_("normalize",8d,37,a1,ab),
	HX_("normalized",37,64,6f,81),
	HX_("orth",57,95,b5,49),
	HX_("copy",b5,bb,c4,41),
	::String(null()) };

::hx::Class Point_obj::__mClass;

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.geom.Point",90,ee,4d,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Point_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace geom
