#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_ui_util_FunctionArray
#include <haxe/ui/util/FunctionArray.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#include <haxe/ui/util/_Listener/ListenerInternal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_7_new,"haxe.ui.util.FunctionArray","new",0x69d91dd9,"haxe.ui.util.FunctionArray.new","haxe/ui/util/FunctionArray.hx",7,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_11_get,"haxe.ui.util.FunctionArray","get",0x69d3ce0f,"haxe.ui.util.FunctionArray.get","haxe/ui/util/FunctionArray.hx",11,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_16_get_length,"haxe.ui.util.FunctionArray","get_length",0xc5d54856,"haxe.ui.util.FunctionArray.get_length","haxe/ui/util/FunctionArray.hx",16,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_19_push,"haxe.ui.util.FunctionArray","push",0x357f8e41,"haxe.ui.util.FunctionArray.push","haxe/ui/util/FunctionArray.hx",19,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_32_pop,"haxe.ui.util.FunctionArray","pop",0x69daab0a,"haxe.ui.util.FunctionArray.pop","haxe/ui/util/FunctionArray.hx",32,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_35_indexOf,"haxe.ui.util.FunctionArray","indexOf",0x76eb46c2,"haxe.ui.util.FunctionArray.indexOf","haxe/ui/util/FunctionArray.hx",35,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_57_remove,"haxe.ui.util.FunctionArray","remove",0xd18c406b,"haxe.ui.util.FunctionArray.remove","haxe/ui/util/FunctionArray.hx",57,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_67_contains,"haxe.ui.util.FunctionArray","contains",0xfccd9606,"haxe.ui.util.FunctionArray.contains","haxe/ui/util/FunctionArray.hx",67,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_71_iterator,"haxe.ui.util.FunctionArray","iterator",0x63ec85d5,"haxe.ui.util.FunctionArray.iterator","haxe/ui/util/FunctionArray.hx",71,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_74_copy,"haxe.ui.util.FunctionArray","copy",0x2ce3381c,"haxe.ui.util.FunctionArray.copy","haxe/ui/util/FunctionArray.hx",74,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_80_toString,"haxe.ui.util.FunctionArray","toString",0x08c10c93,"haxe.ui.util.FunctionArray.toString","haxe/ui/util/FunctionArray.hx",80,0xc0b07718)
HX_LOCAL_STACK_FRAME(_hx_pos_5cdf254a4f2dae08_94_removeAll,"haxe.ui.util.FunctionArray","removeAll",0x42874576,"haxe.ui.util.FunctionArray.removeAll","haxe/ui/util/FunctionArray.hx",94,0xc0b07718)
namespace haxe{
namespace ui{
namespace util{

void FunctionArray_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_7_new)
HXDLIN(   7)		this->_array = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic FunctionArray_obj::__CreateEmpty() { return new FunctionArray_obj; }

void *FunctionArray_obj::_hx_vtable = 0;

Dynamic FunctionArray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FunctionArray_obj > _hx_result = new FunctionArray_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FunctionArray_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7faf4ee1;
}

 ::Dynamic FunctionArray_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_11_get)
HXDLIN(  11)		return this->_array->__get(index).StaticCast<  ::haxe::ui::util::_Listener::ListenerInternal >()->callback;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,get,return )

int FunctionArray_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_16_get_length)
HXDLIN(  16)		return this->_array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,get_length,return )

int FunctionArray_obj::push( ::Dynamic x,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_19_push)
HXLINE(  20)		 ::haxe::ui::util::_Listener::ListenerInternal this1 =  ::haxe::ui::util::_Listener::ListenerInternal_obj::__alloc( HX_CTX ,x,priority);
HXDLIN(  20)		 ::haxe::ui::util::_Listener::ListenerInternal listener = this1;
HXLINE(  21)		{
HXLINE(  21)			int _g = 0;
HXDLIN(  21)			int _g1 = this->_array->length;
HXDLIN(  21)			while((_g < _g1)){
HXLINE(  21)				_g = (_g + 1);
HXDLIN(  21)				int i = (_g - 1);
HXLINE(  22)				if ((this->_array->__get(i).StaticCast<  ::haxe::ui::util::_Listener::ListenerInternal >()->priority < priority)) {
HXLINE(  23)					this->_array->insert(i,listener);
HXLINE(  24)					return i;
            				}
            			}
            		}
HXLINE(  28)		return this->_array->push(listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionArray_obj,push,return )

 ::Dynamic FunctionArray_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_32_pop)
HXDLIN(  32)		return this->_array->pop().StaticCast<  ::haxe::ui::util::_Listener::ListenerInternal >()->callback;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,pop,return )

int FunctionArray_obj::indexOf( ::Dynamic x,::hx::Null< int >  __o_fromIndex){
            		int fromIndex = __o_fromIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_35_indexOf)
HXLINE(  48)		{
HXLINE(  48)			int _g = fromIndex;
HXDLIN(  48)			int _g1 = this->_array->length;
HXDLIN(  48)			while((_g < _g1)){
HXLINE(  48)				_g = (_g + 1);
HXDLIN(  48)				int i = (_g - 1);
HXLINE(  49)				if (::hx::IsEq( this->_array->__get(i).StaticCast<  ::haxe::ui::util::_Listener::ListenerInternal >()->callback,x )) {
HXLINE(  50)					return i;
            				}
            			}
            		}
HXLINE(  53)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionArray_obj,indexOf,return )

bool FunctionArray_obj::remove( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_57_remove)
HXLINE(  58)		int index = this->indexOf(x,null());
HXLINE(  59)		if ((index != -1)) {
HXLINE(  60)			this->_array->removeRange(index,1);
            		}
HXLINE(  63)		return (index != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,remove,return )

bool FunctionArray_obj::contains( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_67_contains)
HXDLIN(  67)		return (this->indexOf(x,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionArray_obj,contains,return )

 ::Dynamic FunctionArray_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_71_iterator)
HXDLIN(  71)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->_array);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,iterator,return )

 ::haxe::ui::util::FunctionArray FunctionArray_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_74_copy)
HXLINE(  75)		 ::haxe::ui::util::FunctionArray fa =  ::haxe::ui::util::FunctionArray_obj::__alloc( HX_CTX );
HXLINE(  76)		fa->_array = this->_array->copy();
HXLINE(  77)		return fa;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,copy,return )

::String FunctionArray_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_80_toString)
HXLINE(  81)		::String s = HX_("[",5b,00,00,00);
HXLINE(  82)		 ::Dynamic iter = this->iterator();
HXLINE(  83)		while(( (bool)(iter->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  84)			s = (s + ::Std_obj::string(iter->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()));
HXLINE(  85)			if (( (bool)(iter->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )) {
HXLINE(  86)				s = (s + HX_(", ",74,26,00,00));
            			}
            		}
HXLINE(  89)		s = (s + HX_("]",5d,00,00,00));
HXLINE(  90)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,toString,return )

void FunctionArray_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_5cdf254a4f2dae08_94_removeAll)
HXDLIN(  94)		this->_array = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArray_obj,removeAll,(void))


::hx::ObjectPtr< FunctionArray_obj > FunctionArray_obj::__new() {
	::hx::ObjectPtr< FunctionArray_obj > __this = new FunctionArray_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FunctionArray_obj > FunctionArray_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FunctionArray_obj *__this = (FunctionArray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FunctionArray_obj), true, "haxe.ui.util.FunctionArray"));
	*(void **)__this = FunctionArray_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FunctionArray_obj::FunctionArray_obj()
{
}

void FunctionArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionArray);
	HX_MARK_MEMBER_NAME(_array,"_array");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void FunctionArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_array,"_array");
	HX_VISIT_MEMBER_NAME(length,"length");
}

::hx::Val FunctionArray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return ::hx::Val( _array ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_length() : length ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return ::hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FunctionArray_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_array",da,b4,76,21));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FunctionArray_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FunctionArray_obj,_array),HX_("_array",da,b4,76,21)},
	{::hx::fsInt,(int)offsetof(FunctionArray_obj,length),HX_("length",e6,94,07,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FunctionArray_obj_sStaticStorageInfo = 0;
#endif

static ::String FunctionArray_obj_sMemberFields[] = {
	HX_("_array",da,b4,76,21),
	HX_("get",96,80,4e,00),
	HX_("length",e6,94,07,9f),
	HX_("get_length",af,04,8f,8f),
	HX_("push",da,11,61,4a),
	HX_("pop",91,5d,55,00),
	HX_("indexOf",c9,48,bf,e0),
	HX_("remove",44,9c,88,04),
	HX_("contains",1f,5a,7b,2c),
	HX_("iterator",ee,49,9a,93),
	HX_("copy",b5,bb,c4,41),
	HX_("toString",ac,d0,6e,38),
	HX_("removeAll",3d,17,e5,ca),
	::String(null()) };

::hx::Class FunctionArray_obj::__mClass;

void FunctionArray_obj::__register()
{
	FunctionArray_obj _hx_dummy;
	FunctionArray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.FunctionArray",67,3d,f5,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FunctionArray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FunctionArray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FunctionArray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FunctionArray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
