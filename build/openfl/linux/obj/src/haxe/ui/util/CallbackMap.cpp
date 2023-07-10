#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_CallbackMap
#include <haxe/ui/util/CallbackMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_FunctionArray
#include <haxe/ui/util/FunctionArray.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#include <haxe/ui/util/_Listener/ListenerInternal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_7_new,"haxe.ui.util.CallbackMap","new",0x900ef9cf,"haxe.ui.util.CallbackMap.new","haxe/ui/util/CallbackMap.hx",7,0x678e81a2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_10_add,"haxe.ui.util.CallbackMap","add",0x90051b90,"haxe.ui.util.CallbackMap.add","haxe/ui/util/CallbackMap.hx",10,0x678e81a2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_27_remove,"haxe.ui.util.CallbackMap","remove",0x1ecbc235,"haxe.ui.util.CallbackMap.remove","haxe/ui/util/CallbackMap.hx",27,0x678e81a2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_40_removeAll,"haxe.ui.util.CallbackMap","removeAll",0x50b37dec,"haxe.ui.util.CallbackMap.removeAll","haxe/ui/util/CallbackMap.hx",40,0x678e81a2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_50_invoke,"haxe.ui.util.CallbackMap","invoke",0xba239d69,"haxe.ui.util.CallbackMap.invoke","haxe/ui/util/CallbackMap.hx",50,0x678e81a2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_60_invokeAndRemove,"haxe.ui.util.CallbackMap","invokeAndRemove",0x8e0413d2,"haxe.ui.util.CallbackMap.invokeAndRemove","haxe/ui/util/CallbackMap.hx",60,0x678e81a2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb371fc57d4bec_71_count,"haxe.ui.util.CallbackMap","count",0x9e4ee7fe,"haxe.ui.util.CallbackMap.count","haxe/ui/util/CallbackMap.hx",71,0x678e81a2)
namespace haxe{
namespace ui{
namespace util{

void CallbackMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_7_new)
HXDLIN(   7)		this->_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic CallbackMap_obj::__CreateEmpty() { return new CallbackMap_obj; }

void *CallbackMap_obj::_hx_vtable = 0;

Dynamic CallbackMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallbackMap_obj > _hx_result = new CallbackMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallbackMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c61e0ab;
}

bool CallbackMap_obj::add(::String key, ::Dynamic callback,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_10_add)
HXLINE(  11)		if (::hx::IsNull( callback )) {
HXLINE(  12)			return false;
            		}
HXLINE(  14)		bool b = false;
HXLINE(  15)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(key)) );
HXLINE(  16)		if (::hx::IsNull( arr )) {
HXLINE(  17)			arr =  ::haxe::ui::util::FunctionArray_obj::__alloc( HX_CTX );
HXLINE(  18)			arr->push(callback,priority);
HXLINE(  19)			this->_map->set(key,arr);
HXLINE(  20)			b = true;
            		}
            		else {
HXLINE(  21)			if ((arr->contains(callback) == false)) {
HXLINE(  22)				arr->push(callback,priority);
            			}
            		}
HXLINE(  24)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CallbackMap_obj,add,return )

bool CallbackMap_obj::remove(::String key, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_27_remove)
HXLINE(  28)		bool b = false;
HXLINE(  29)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(key)) );
HXLINE(  30)		if (::hx::IsNotNull( arr )) {
HXLINE(  31)			arr->remove(callback);
HXLINE(  32)			if ((arr->get_length() == 0)) {
HXLINE(  33)				this->_map->remove(key);
HXLINE(  34)				b = true;
            			}
            		}
HXLINE(  37)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CallbackMap_obj,remove,return )

void CallbackMap_obj::removeAll(::String key){
            	HX_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_40_removeAll)
HXLINE(  41)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(key)) );
HXLINE(  42)		if (::hx::IsNotNull( arr )) {
HXLINE(  43)			while((arr->get_length() > 0)){
HXLINE(  44)				arr->remove(arr->get(0));
            			}
HXLINE(  46)			this->_map->remove(key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackMap_obj,removeAll,(void))

void CallbackMap_obj::invoke(::String key, ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_50_invoke)
HXLINE(  51)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(key)) );
HXLINE(  52)		if (::hx::IsNotNull( arr )) {
HXLINE(  53)			arr = arr->copy();
HXLINE(  54)			{
HXLINE(  54)				 ::Dynamic listener = arr->iterator();
HXDLIN(  54)				while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  54)					 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  55)					listener1->callback(param);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CallbackMap_obj,invoke,(void))

void CallbackMap_obj::invokeAndRemove(::String key, ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_60_invokeAndRemove)
HXLINE(  61)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(key)) );
HXLINE(  62)		if (::hx::IsNotNull( arr )) {
HXLINE(  63)			arr = arr->copy();
HXLINE(  64)			this->removeAll(key);
HXLINE(  65)			{
HXLINE(  65)				 ::Dynamic listener = arr->iterator();
HXDLIN(  65)				while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  65)					 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  66)					listener1->callback(param);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CallbackMap_obj,invokeAndRemove,(void))

int CallbackMap_obj::count(::String key){
            	HX_STACKFRAME(&_hx_pos_2ddb371fc57d4bec_71_count)
HXLINE(  72)		int n = 0;
HXLINE(  73)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(key)) );
HXLINE(  74)		if (::hx::IsNotNull( arr )) {
HXLINE(  75)			n = arr->get_length();
            		}
HXLINE(  77)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackMap_obj,count,return )


::hx::ObjectPtr< CallbackMap_obj > CallbackMap_obj::__new() {
	::hx::ObjectPtr< CallbackMap_obj > __this = new CallbackMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CallbackMap_obj > CallbackMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CallbackMap_obj *__this = (CallbackMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallbackMap_obj), true, "haxe.ui.util.CallbackMap"));
	*(void **)__this = CallbackMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CallbackMap_obj::CallbackMap_obj()
{
}

void CallbackMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallbackMap);
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void CallbackMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

::hx::Val CallbackMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return ::hx::Val( _map ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"invoke") ) { return ::hx::Val( invoke_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"invokeAndRemove") ) { return ::hx::Val( invokeAndRemove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CallbackMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CallbackMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_map",9d,4f,1e,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CallbackMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(CallbackMap_obj,_map),HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CallbackMap_obj_sStaticStorageInfo = 0;
#endif

static ::String CallbackMap_obj_sMemberFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	HX_("invoke",78,77,e0,9f),
	HX_("invokeAndRemove",e3,ff,38,bf),
	HX_("count",cf,44,63,4a),
	::String(null()) };

::hx::Class CallbackMap_obj::__mClass;

void CallbackMap_obj::__register()
{
	CallbackMap_obj _hx_dummy;
	CallbackMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.CallbackMap",5d,66,e4,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CallbackMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CallbackMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
