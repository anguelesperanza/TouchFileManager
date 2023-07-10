#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_SelectorPart
#include <haxe/ui/styles/elements/SelectorPart.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3568bda1d302e2c1_3_new,"haxe.ui.styles.elements.SelectorPart","new",0x3cf226a1,"haxe.ui.styles.elements.SelectorPart.new","haxe/ui/styles/elements/SelectorPart.hx",3,0x091ea96f)
HX_LOCAL_STACK_FRAME(_hx_pos_3568bda1d302e2c1_17_get_classNameParts,"haxe.ui.styles.elements.SelectorPart","get_classNameParts",0x3fc6bb25,"haxe.ui.styles.elements.SelectorPart.get_classNameParts","haxe/ui/styles/elements/SelectorPart.hx",17,0x091ea96f)
HX_LOCAL_STACK_FRAME(_hx_pos_3568bda1d302e2c1_27_toString,"haxe.ui.styles.elements.SelectorPart","toString",0x2d4b2ecb,"haxe.ui.styles.elements.SelectorPart.toString","haxe/ui/styles/elements/SelectorPart.hx",27,0x091ea96f)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void SelectorPart_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3568bda1d302e2c1_3_new)
HXLINE(  15)		this->_parts = null();
HXLINE(  10)		this->direct = false;
HXLINE(   9)		this->nodeName = null();
HXLINE(   8)		this->id = null();
HXLINE(   7)		this->className = null();
HXLINE(   6)		this->pseudoClass = null();
HXLINE(   4)		this->parent = null();
            	}

Dynamic SelectorPart_obj::__CreateEmpty() { return new SelectorPart_obj; }

void *SelectorPart_obj::_hx_vtable = 0;

Dynamic SelectorPart_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectorPart_obj > _hx_result = new SelectorPart_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SelectorPart_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x455d8aa5;
}

::Array< ::String > SelectorPart_obj::get_classNameParts(){
            	HX_STACKFRAME(&_hx_pos_3568bda1d302e2c1_17_get_classNameParts)
HXLINE(  18)		if (::hx::IsNull( this->className )) {
HXLINE(  19)			return null();
            		}
HXLINE(  21)		if (::hx::IsNull( this->_parts )) {
HXLINE(  22)			this->_parts = this->className.split(HX_(".",2e,00,00,00));
            		}
HXLINE(  24)		return this->_parts;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectorPart_obj,get_classNameParts,return )

::String SelectorPart_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_3568bda1d302e2c1_27_toString)
HXLINE(  28)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  30)		if (::hx::IsNotNull( this->id )) {
HXLINE(  31)			::String x = (HX_("#",23,00,00,00) + this->id);
HXDLIN(  31)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  31)				sb->flush();
            			}
HXDLIN(  31)			if (::hx::IsNull( sb->b )) {
HXLINE(  31)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  31)				::Array< ::String > sb1 = sb->b;
HXDLIN(  31)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  33)		if (::hx::IsNotNull( this->nodeName )) {
HXLINE(  34)			::String x = this->nodeName;
HXDLIN(  34)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  34)				sb->flush();
            			}
HXDLIN(  34)			if (::hx::IsNull( sb->b )) {
HXLINE(  34)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  34)				::Array< ::String > sb1 = sb->b;
HXDLIN(  34)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  36)		if (::hx::IsNotNull( this->className )) {
HXLINE(  37)			::String x = (HX_(".",2e,00,00,00) + this->className);
HXDLIN(  37)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  37)				sb->flush();
            			}
HXDLIN(  37)			if (::hx::IsNull( sb->b )) {
HXLINE(  37)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  37)				::Array< ::String > sb1 = sb->b;
HXDLIN(  37)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  39)		if (::hx::IsNotNull( this->pseudoClass )) {
HXLINE(  40)			::String x = (HX_(":",3a,00,00,00) + this->pseudoClass);
HXDLIN(  40)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  40)				sb->flush();
            			}
HXDLIN(  40)			if (::hx::IsNull( sb->b )) {
HXLINE(  40)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  40)				::Array< ::String > sb1 = sb->b;
HXDLIN(  40)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  43)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectorPart_obj,toString,return )


::hx::ObjectPtr< SelectorPart_obj > SelectorPart_obj::__new() {
	::hx::ObjectPtr< SelectorPart_obj > __this = new SelectorPart_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SelectorPart_obj > SelectorPart_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SelectorPart_obj *__this = (SelectorPart_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectorPart_obj), true, "haxe.ui.styles.elements.SelectorPart"));
	*(void **)__this = SelectorPart_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SelectorPart_obj::SelectorPart_obj()
{
}

void SelectorPart_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SelectorPart);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(pseudoClass,"pseudoClass");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(nodeName,"nodeName");
	HX_MARK_MEMBER_NAME(direct,"direct");
	HX_MARK_MEMBER_NAME(_parts,"_parts");
	HX_MARK_MEMBER_NAME(classNameParts,"classNameParts");
	HX_MARK_END_CLASS();
}

void SelectorPart_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(pseudoClass,"pseudoClass");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(nodeName,"nodeName");
	HX_VISIT_MEMBER_NAME(direct,"direct");
	HX_VISIT_MEMBER_NAME(_parts,"_parts");
	HX_VISIT_MEMBER_NAME(classNameParts,"classNameParts");
}

::hx::Val SelectorPart_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"direct") ) { return ::hx::Val( direct ); }
		if (HX_FIELD_EQ(inName,"_parts") ) { return ::hx::Val( _parts ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeName") ) { return ::hx::Val( nodeName ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( className ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pseudoClass") ) { return ::hx::Val( pseudoClass ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"classNameParts") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_classNameParts() : classNameParts ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_classNameParts") ) { return ::hx::Val( get_classNameParts_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SelectorPart_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::haxe::ui::styles::elements::SelectorPart >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direct") ) { direct=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parts") ) { _parts=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeName") ) { nodeName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pseudoClass") ) { pseudoClass=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"classNameParts") ) { classNameParts=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SelectorPart_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("pseudoClass",da,b3,94,9b));
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("nodeName",6d,d1,7c,f2));
	outFields->push(HX_("direct",29,4b,6a,bc));
	outFields->push(HX_("_parts",61,d8,3c,b9));
	outFields->push(HX_("classNameParts",7d,ff,ff,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SelectorPart_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::styles::elements::SelectorPart */ ,(int)offsetof(SelectorPart_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(SelectorPart_obj,pseudoClass),HX_("pseudoClass",da,b3,94,9b)},
	{::hx::fsString,(int)offsetof(SelectorPart_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsString,(int)offsetof(SelectorPart_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(SelectorPart_obj,nodeName),HX_("nodeName",6d,d1,7c,f2)},
	{::hx::fsBool,(int)offsetof(SelectorPart_obj,direct),HX_("direct",29,4b,6a,bc)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(SelectorPart_obj,_parts),HX_("_parts",61,d8,3c,b9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(SelectorPart_obj,classNameParts),HX_("classNameParts",7d,ff,ff,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SelectorPart_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectorPart_obj_sMemberFields[] = {
	HX_("parent",2a,05,7e,ed),
	HX_("pseudoClass",da,b3,94,9b),
	HX_("className",a3,92,3d,dc),
	HX_("id",db,5b,00,00),
	HX_("nodeName",6d,d1,7c,f2),
	HX_("direct",29,4b,6a,bc),
	HX_("_parts",61,d8,3c,b9),
	HX_("classNameParts",7d,ff,ff,3d),
	HX_("get_classNameParts",46,e0,99,d9),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class SelectorPart_obj::__mClass;

void SelectorPart_obj::__register()
{
	SelectorPart_obj _hx_dummy;
	SelectorPart_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.SelectorPart",2f,42,18,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectorPart_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectorPart_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectorPart_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectorPart_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
