#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#include <haxe/ui/styles/elements/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_757b3a2f53629a8c_3_new,"haxe.ui.styles.elements.AnimationKeyFrames","new",0xb2577630,"haxe.ui.styles.elements.AnimationKeyFrames.new","haxe/ui/styles/elements/AnimationKeyFrames.hx",3,0x4567e0c0)
HX_LOCAL_STACK_FRAME(_hx_pos_757b3a2f53629a8c_15_get_keyFrames,"haxe.ui.styles.elements.AnimationKeyFrames","get_keyFrames",0x898c0c4c,"haxe.ui.styles.elements.AnimationKeyFrames.get_keyFrames","haxe/ui/styles/elements/AnimationKeyFrames.hx",15,0x4567e0c0)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void AnimationKeyFrames_obj::__construct(::String id,::Array< ::Dynamic> keyframes){
            	HX_STACKFRAME(&_hx_pos_757b3a2f53629a8c_3_new)
HXLINE(   6)		this->_keyframes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   9)		this->id = id;
HXLINE(  10)		this->_keyframes = keyframes;
            	}

Dynamic AnimationKeyFrames_obj::__CreateEmpty() { return new AnimationKeyFrames_obj; }

void *AnimationKeyFrames_obj::_hx_vtable = 0;

Dynamic AnimationKeyFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationKeyFrames_obj > _hx_result = new AnimationKeyFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AnimationKeyFrames_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04dbef80;
}

::Array< ::Dynamic> AnimationKeyFrames_obj::get_keyFrames(){
            	HX_STACKFRAME(&_hx_pos_757b3a2f53629a8c_15_get_keyFrames)
HXDLIN(  15)		return this->_keyframes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationKeyFrames_obj,get_keyFrames,return )


::hx::ObjectPtr< AnimationKeyFrames_obj > AnimationKeyFrames_obj::__new(::String id,::Array< ::Dynamic> keyframes) {
	::hx::ObjectPtr< AnimationKeyFrames_obj > __this = new AnimationKeyFrames_obj();
	__this->__construct(id,keyframes);
	return __this;
}

::hx::ObjectPtr< AnimationKeyFrames_obj > AnimationKeyFrames_obj::__alloc(::hx::Ctx *_hx_ctx,::String id,::Array< ::Dynamic> keyframes) {
	AnimationKeyFrames_obj *__this = (AnimationKeyFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationKeyFrames_obj), true, "haxe.ui.styles.elements.AnimationKeyFrames"));
	*(void **)__this = AnimationKeyFrames_obj::_hx_vtable;
	__this->__construct(id,keyframes);
	return __this;
}

AnimationKeyFrames_obj::AnimationKeyFrames_obj()
{
}

void AnimationKeyFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationKeyFrames);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_keyframes,"_keyframes");
	HX_MARK_MEMBER_NAME(keyFrames,"keyFrames");
	HX_MARK_END_CLASS();
}

void AnimationKeyFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_keyframes,"_keyframes");
	HX_VISIT_MEMBER_NAME(keyFrames,"keyFrames");
}

::hx::Val AnimationKeyFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyFrames") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_keyFrames() : keyFrames ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyframes") ) { return ::hx::Val( _keyframes ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_keyFrames") ) { return ::hx::Val( get_keyFrames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationKeyFrames_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyFrames") ) { keyFrames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyframes") ) { _keyframes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationKeyFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("_keyframes",46,36,9b,6b));
	outFields->push(HX_("keyFrames",a5,2e,8d,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationKeyFrames_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnimationKeyFrames_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimationKeyFrames_obj,_keyframes),HX_("_keyframes",46,36,9b,6b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimationKeyFrames_obj,keyFrames),HX_("keyFrames",a5,2e,8d,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationKeyFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationKeyFrames_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("_keyframes",46,36,9b,6b),
	HX_("keyFrames",a5,2e,8d,44),
	HX_("get_keyFrames",7c,02,f1,05),
	::String(null()) };

::hx::Class AnimationKeyFrames_obj::__mClass;

void AnimationKeyFrames_obj::__register()
{
	AnimationKeyFrames_obj _hx_dummy;
	AnimationKeyFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.AnimationKeyFrames",3e,de,fc,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationKeyFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationKeyFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationKeyFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationKeyFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
