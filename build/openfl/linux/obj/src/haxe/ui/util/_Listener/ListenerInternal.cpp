#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#include <haxe/ui/util/_Listener/ListenerInternal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19e42336dc92e684_30_new,"haxe.ui.util._Listener.ListenerInternal","new",0x50bf34d8,"haxe.ui.util._Listener.ListenerInternal.new","haxe/ui/util/Listener.hx",30,0x62097b8f)
namespace haxe{
namespace ui{
namespace util{
namespace _Listener{

void ListenerInternal_obj::__construct( ::Dynamic callback,int priority){
            	HX_STACKFRAME(&_hx_pos_19e42336dc92e684_30_new)
HXLINE(  31)		this->callback = callback;
HXLINE(  32)		this->priority = priority;
            	}

Dynamic ListenerInternal_obj::__CreateEmpty() { return new ListenerInternal_obj; }

void *ListenerInternal_obj::_hx_vtable = 0;

Dynamic ListenerInternal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListenerInternal_obj > _hx_result = new ListenerInternal_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ListenerInternal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57b89020;
}


ListenerInternal_obj::ListenerInternal_obj()
{
}

void ListenerInternal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListenerInternal);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_END_CLASS();
}

void ListenerInternal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(priority,"priority");
}

::hx::Val ListenerInternal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListenerInternal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListenerInternal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("callback",c5,99,06,7f));
	outFields->push(HX_("priority",64,7b,3e,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListenerInternal_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ListenerInternal_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsInt,(int)offsetof(ListenerInternal_obj,priority),HX_("priority",64,7b,3e,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListenerInternal_obj_sStaticStorageInfo = 0;
#endif

static ::String ListenerInternal_obj_sMemberFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("priority",64,7b,3e,bb),
	::String(null()) };

::hx::Class ListenerInternal_obj::__mClass;

void ListenerInternal_obj::__register()
{
	ListenerInternal_obj _hx_dummy;
	ListenerInternal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util._Listener.ListenerInternal",e6,28,a6,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListenerInternal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListenerInternal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListenerInternal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListenerInternal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Listener
