#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c81183e02c625e87_3_new,"haxe.ui.geom.Rectangle","new",0x4dea32e1,"haxe.ui.geom.Rectangle.new","haxe/ui/geom/Rectangle.hx",3,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_16_set,"haxe.ui.geom.Rectangle","set",0x4dedfe23,"haxe.ui.geom.Rectangle.set","haxe/ui/geom/Rectangle.hx",16,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_25_get_right,"haxe.ui.geom.Rectangle","get_right",0xfaea2174,"haxe.ui.geom.Rectangle.get_right","haxe/ui/geom/Rectangle.hx",25,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_27_set_right,"haxe.ui.geom.Rectangle","set_right",0xde3b0d80,"haxe.ui.geom.Rectangle.set_right","haxe/ui/geom/Rectangle.hx",27,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_34_get_bottom,"haxe.ui.geom.Rectangle","get_bottom",0xa945b653,"haxe.ui.geom.Rectangle.get_bottom","haxe/ui/geom/Rectangle.hx",34,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_36_set_bottom,"haxe.ui.geom.Rectangle","set_bottom",0xacc354c7,"haxe.ui.geom.Rectangle.set_bottom","haxe/ui/geom/Rectangle.hx",36,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_41_inflate,"haxe.ui.geom.Rectangle","inflate",0x683bd388,"haxe.ui.geom.Rectangle.inflate","haxe/ui/geom/Rectangle.hx",41,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_46_equals,"haxe.ui.geom.Rectangle","equals",0xb04a525e,"haxe.ui.geom.Rectangle.equals","haxe/ui/geom/Rectangle.hx",46,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_53_containsPoint,"haxe.ui.geom.Rectangle","containsPoint",0x0d24a772,"haxe.ui.geom.Rectangle.containsPoint","haxe/ui/geom/Rectangle.hx",53,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_61_containsRect,"haxe.ui.geom.Rectangle","containsRect",0x5d309442,"haxe.ui.geom.Rectangle.containsRect","haxe/ui/geom/Rectangle.hx",61,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_68_intersects,"haxe.ui.geom.Rectangle","intersects",0x37312253,"haxe.ui.geom.Rectangle.intersects","haxe/ui/geom/Rectangle.hx",68,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_83_intersection,"haxe.ui.geom.Rectangle","intersection",0x3f7567a8,"haxe.ui.geom.Rectangle.intersection","haxe/ui/geom/Rectangle.hx",83,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_121_toInts,"haxe.ui.geom.Rectangle","toInts",0x6bcc13de,"haxe.ui.geom.Rectangle.toInts","haxe/ui/geom/Rectangle.hx",121,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_129_copy,"haxe.ui.geom.Rectangle","copy",0xd7c48a14,"haxe.ui.geom.Rectangle.copy","haxe/ui/geom/Rectangle.hx",129,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_133_toString,"haxe.ui.geom.Rectangle","toString",0x787eba8b,"haxe.ui.geom.Rectangle.toString","haxe/ui/geom/Rectangle.hx",133,0xebbd5690)
namespace haxe{
namespace ui{
namespace geom{

void Rectangle_obj::__construct(::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float left = __o_left.Default(0);
            		Float top = __o_top.Default(0);
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_3_new)
HXLINE(  82)		this->_intersectionCache = null();
HXLINE(  10)		this->left = left;
HXLINE(  11)		this->top = top;
HXLINE(  12)		this->width = width;
HXLINE(  13)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

void *Rectangle_obj::_hx_vtable = 0;

Dynamic Rectangle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rectangle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72cf5d19;
}

void Rectangle_obj::set(::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float left = __o_left.Default(0);
            		Float top = __o_top.Default(0);
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_16_set)
HXLINE(  17)		this->left = left;
HXLINE(  18)		this->top = top;
HXLINE(  19)		this->width = width;
HXLINE(  20)		this->height = height;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,set,(void))

Float Rectangle_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_25_get_right)
HXDLIN(  25)		return (this->left + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right(Float value){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_27_set_right)
HXLINE(  28)		this->width = (value - this->left);
HXLINE(  29)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

Float Rectangle_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_34_get_bottom)
HXDLIN(  34)		return (this->top + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom(Float value){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_36_set_bottom)
HXLINE(  37)		this->height = (value - this->top);
HXLINE(  38)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

void Rectangle_obj::inflate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_41_inflate)
HXLINE(  42)		 ::haxe::ui::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)		_hx_tmp->left = (_hx_tmp->left - dx);
HXDLIN(  42)		 ::haxe::ui::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)		_hx_tmp1->width = (_hx_tmp1->width + (dx * ( (Float)(2) )));
HXLINE(  43)		 ::haxe::ui::geom::Rectangle _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  43)		_hx_tmp2->top = (_hx_tmp2->top - dy);
HXDLIN(  43)		 ::haxe::ui::geom::Rectangle _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  43)		_hx_tmp3->height = (_hx_tmp3->height + (dy * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

bool Rectangle_obj::equals( ::haxe::ui::geom::Rectangle rc){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_46_equals)
HXLINE(  47)		if (::hx::IsNull( rc )) {
HXLINE(  48)			return false;
            		}
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		bool _hx_tmp1;
HXDLIN(  50)		if ((rc->left == this->left)) {
HXLINE(  50)			_hx_tmp1 = (rc->top == this->top);
            		}
            		else {
HXLINE(  50)			_hx_tmp1 = false;
            		}
HXDLIN(  50)		if (_hx_tmp1) {
HXLINE(  50)			_hx_tmp = (rc->width == this->width);
            		}
            		else {
HXLINE(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  50)			return (rc->height == this->height);
            		}
            		else {
HXLINE(  50)			return false;
            		}
HXDLIN(  50)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

bool Rectangle_obj::containsPoint(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_53_containsPoint)
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		bool _hx_tmp1;
HXDLIN(  54)		bool _hx_tmp2;
HXDLIN(  54)		if ((x >= this->left)) {
HXLINE(  54)			_hx_tmp2 = (x < (this->left + this->width));
            		}
            		else {
HXLINE(  54)			_hx_tmp2 = false;
            		}
HXDLIN(  54)		if (_hx_tmp2) {
HXLINE(  54)			_hx_tmp1 = (y >= this->top);
            		}
            		else {
HXLINE(  54)			_hx_tmp1 = false;
            		}
HXDLIN(  54)		if (_hx_tmp1) {
HXLINE(  54)			_hx_tmp = (y < (this->top + this->height));
            		}
            		else {
HXLINE(  54)			_hx_tmp = false;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			return true;
            		}
HXLINE(  57)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::haxe::ui::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_61_containsRect)
HXDLIN(  61)		bool _hx_tmp;
HXDLIN(  61)		if (!((rect->width <= 0))) {
HXDLIN(  61)			_hx_tmp = (rect->height <= 0);
            		}
            		else {
HXDLIN(  61)			_hx_tmp = true;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  62)			bool _hx_tmp;
HXDLIN(  62)			bool _hx_tmp1;
HXDLIN(  62)			if ((rect->left > this->left)) {
HXLINE(  62)				_hx_tmp1 = (rect->top > this->top);
            			}
            			else {
HXLINE(  62)				_hx_tmp1 = false;
            			}
HXDLIN(  62)			if (_hx_tmp1) {
HXLINE(  62)				Float _hx_tmp1 = rect->get_right();
HXDLIN(  62)				_hx_tmp = (_hx_tmp1 < this->get_right());
            			}
            			else {
HXLINE(  62)				_hx_tmp = false;
            			}
HXDLIN(  62)			if (_hx_tmp) {
HXLINE(  62)				Float _hx_tmp = rect->get_bottom();
HXDLIN(  62)				return (_hx_tmp < this->get_bottom());
            			}
            			else {
HXLINE(  62)				return false;
            			}
            		}
            		else {
HXLINE(  64)			bool _hx_tmp;
HXDLIN(  64)			bool _hx_tmp1;
HXDLIN(  64)			if ((rect->left >= this->left)) {
HXLINE(  64)				_hx_tmp1 = (rect->top >= this->top);
            			}
            			else {
HXLINE(  64)				_hx_tmp1 = false;
            			}
HXDLIN(  64)			if (_hx_tmp1) {
HXLINE(  64)				Float _hx_tmp1 = rect->get_right();
HXDLIN(  64)				_hx_tmp = (_hx_tmp1 <= this->get_right());
            			}
            			else {
HXLINE(  64)				_hx_tmp = false;
            			}
HXDLIN(  64)			if (_hx_tmp) {
HXLINE(  64)				Float _hx_tmp = rect->get_bottom();
HXDLIN(  64)				return (_hx_tmp <= this->get_bottom());
            			}
            			else {
HXLINE(  64)				return false;
            			}
            		}
HXLINE(  61)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

bool Rectangle_obj::intersects( ::haxe::ui::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_68_intersects)
HXLINE(  69)		Float x0;
HXDLIN(  69)		if ((this->left < rect->left)) {
HXLINE(  69)			x0 = rect->left;
            		}
            		else {
HXLINE(  69)			x0 = this->left;
            		}
HXLINE(  70)		Float x1;
HXDLIN(  70)		Float x11 = this->get_right();
HXDLIN(  70)		if ((x11 > rect->get_right())) {
HXLINE(  70)			x1 = rect->get_right();
            		}
            		else {
HXLINE(  70)			x1 = this->get_right();
            		}
HXLINE(  72)		if ((x1 <= x0)) {
HXLINE(  73)			return false;
            		}
HXLINE(  76)		Float y0;
HXDLIN(  76)		if ((this->top < rect->top)) {
HXLINE(  76)			y0 = rect->top;
            		}
            		else {
HXLINE(  76)			y0 = this->top;
            		}
HXLINE(  77)		Float y1;
HXDLIN(  77)		Float y11 = this->get_bottom();
HXDLIN(  77)		if ((y11 > rect->get_bottom())) {
HXLINE(  77)			y1 = rect->get_bottom();
            		}
            		else {
HXLINE(  77)			y1 = this->get_bottom();
            		}
HXLINE(  79)		return (y1 > y0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

 ::haxe::ui::geom::Rectangle Rectangle_obj::intersection( ::haxe::ui::geom::Rectangle rect,::hx::Null< bool >  __o_noAlloc){
            		bool noAlloc = __o_noAlloc.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_c81183e02c625e87_83_intersection)
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if ((noAlloc == true)) {
HXLINE(  84)			_hx_tmp = ::hx::IsNull( this->_intersectionCache );
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			this->_intersectionCache =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  88)		Float x0;
HXDLIN(  88)		if ((this->left < rect->left)) {
HXLINE(  88)			x0 = rect->left;
            		}
            		else {
HXLINE(  88)			x0 = this->left;
            		}
HXLINE(  89)		Float x1;
HXDLIN(  89)		Float x11 = this->get_right();
HXDLIN(  89)		if ((x11 > rect->get_right())) {
HXLINE(  89)			x1 = rect->get_right();
            		}
            		else {
HXLINE(  89)			x1 = this->get_right();
            		}
HXLINE(  90)		if ((x1 <= x0)) {
HXLINE(  91)			if ((noAlloc == true)) {
HXLINE(  92)				this->_intersectionCache->set(null(),null(),null(),null());
HXLINE(  93)				return this->_intersectionCache;
            			}
            			else {
HXLINE(  95)				return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
            		}
HXLINE(  99)		Float y0;
HXDLIN(  99)		if ((this->top < rect->top)) {
HXLINE(  99)			y0 = rect->top;
            		}
            		else {
HXLINE(  99)			y0 = this->top;
            		}
HXLINE( 100)		Float y1;
HXDLIN( 100)		Float y11 = this->get_bottom();
HXDLIN( 100)		if ((y11 > rect->get_bottom())) {
HXLINE( 100)			y1 = rect->get_bottom();
            		}
            		else {
HXLINE( 100)			y1 = this->get_bottom();
            		}
HXLINE( 101)		if ((y1 <= y0)) {
HXLINE( 102)			if ((noAlloc == true)) {
HXLINE( 103)				this->_intersectionCache->set(null(),null(),null(),null());
HXLINE( 104)				return this->_intersectionCache;
            			}
            			else {
HXLINE( 106)				return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
            		}
HXLINE( 110)		 ::haxe::ui::geom::Rectangle r = null();
HXLINE( 111)		if ((noAlloc == true)) {
HXLINE( 112)			r = this->_intersectionCache;
            		}
            		else {
HXLINE( 114)			r =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 117)		r->set(x0,y0,(x1 - x0),(y1 - y0));
HXLINE( 118)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,intersection,return )

void Rectangle_obj::toInts(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_121_toInts)
HXLINE( 122)		this->left = ( (Float)(::Std_obj::_hx_int(this->left)) );
HXLINE( 123)		this->top = ( (Float)(::Std_obj::_hx_int(this->top)) );
HXLINE( 124)		this->width = ( (Float)(::Std_obj::_hx_int(this->width)) );
HXLINE( 125)		this->height = ( (Float)(::Std_obj::_hx_int(this->height)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toInts,(void))

 ::haxe::ui::geom::Rectangle Rectangle_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_c81183e02c625e87_129_copy)
HXDLIN( 129)		return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,this->left,this->top,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,copy,return )

::String Rectangle_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_133_toString)
HXDLIN( 133)		::String _hx_tmp = ((((HX_("{left: ",28,99,97,94) + this->left) + HX_(", top: ",87,1d,4b,05)) + this->top) + HX_(", bottom: ",c5,a4,aa,cd));
HXDLIN( 133)		::String _hx_tmp1 = ((_hx_tmp + this->get_bottom()) + HX_(", right: ",8e,3d,30,7b));
HXDLIN( 133)		::String _hx_tmp2 = ((_hx_tmp1 + this->get_right()) + HX_(", width: ",38,46,cd,98));
HXDLIN( 133)		return ((((_hx_tmp2 + this->width) + HX_(", height: ",c1,fc,44,9e)) + this->height) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )


::hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< Rectangle_obj > __this = new Rectangle_obj();
	__this->__construct(__o_left,__o_top,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	Rectangle_obj *__this = (Rectangle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Rectangle_obj), true, "haxe.ui.geom.Rectangle"));
	*(void **)__this = Rectangle_obj::_hx_vtable;
	__this->__construct(__o_left,__o_top,__o_width,__o_height);
	return __this;
}

Rectangle_obj::Rectangle_obj()
{
}

void Rectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rectangle);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_intersectionCache,"_intersectionCache");
	HX_MARK_END_CLASS();
}

void Rectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_intersectionCache,"_intersectionCache");
}

::hx::Val Rectangle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return ::hx::Val( top ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_right() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottom() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"toInts") ) { return ::hx::Val( toInts_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inflate") ) { return ::hx::Val( inflate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return ::hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return ::hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return ::hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return ::hx::Val( set_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return ::hx::Val( containsRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_intersectionCache") ) { return ::hx::Val( _intersectionCache ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Rectangle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_right(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottom(inValue.Cast< Float >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_intersectionCache") ) { _intersectionCache=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("bottom",eb,e6,78,65));
	outFields->push(HX_("_intersectionCache",fa,23,d8,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,top),HX_("top",95,66,58,00)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(Rectangle_obj,_intersectionCache),HX_("_intersectionCache",fa,23,d8,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Rectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("top",95,66,58,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("set",a2,9b,57,00),
	HX_("get_right",33,68,0d,2d),
	HX_("set_right",3f,54,5e,10),
	HX_("get_bottom",b4,56,00,56),
	HX_("set_bottom",28,f5,7d,59),
	HX_("inflate",87,9c,1b,0c),
	HX_("equals",3f,ee,f2,bf),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("containsRect",e3,ce,1c,a6),
	HX_("intersects",b4,c2,eb,e3),
	HX_("_intersectionCache",fa,23,d8,1f),
	HX_("intersection",49,a2,61,88),
	HX_("toInts",bf,af,74,7b),
	HX_("copy",b5,bb,c4,41),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	Rectangle_obj _hx_dummy;
	Rectangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.geom.Rectangle",6f,2e,85,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace geom
