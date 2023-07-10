#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Selector
#include <haxe/ui/styles/elements/Selector.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_SelectorPart
#include <haxe/ui/styles/elements/SelectorPart.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_add162364d6aaadf_3_new,"haxe.ui.styles.elements.Selector","new",0x99a8d30e,"haxe.ui.styles.elements.Selector.new","haxe/ui/styles/elements/Selector.hx",3,0x650969a2)
HX_LOCAL_STACK_FRAME(_hx_pos_add162364d6aaadf_51_toString,"haxe.ui.styles.elements.Selector","toString",0xf3cb573e,"haxe.ui.styles.elements.Selector.toString","haxe/ui/styles/elements/Selector.hx",51,0x650969a2)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void Selector_obj::__construct(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_add162364d6aaadf_3_new)
HXLINE(   4)		this->parts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   7)		s = ::StringTools_obj::replace(s,HX_(">",3e,00,00,00),HX_(" > ",42,7e,18,00));
HXLINE(   8)		::Array< ::String > p = s.split(HX_(" ",20,00,00,00));
HXLINE(   9)		 ::haxe::ui::styles::elements::SelectorPart parent = null();
HXLINE(  10)		bool nextDirect = false;
HXLINE(  11)		{
HXLINE(  11)			int _g = 0;
HXDLIN(  11)			while((_g < p->length)){
HXLINE(  11)				::String i = p->__get(_g);
HXDLIN(  11)				_g = (_g + 1);
HXLINE(  12)				i = ::StringTools_obj::trim(i);
HXLINE(  13)				if ((i.length == 0)) {
HXLINE(  14)					continue;
            				}
HXLINE(  16)				if ((i == HX_(">",3e,00,00,00))) {
HXLINE(  17)					nextDirect = true;
HXLINE(  18)					continue;
            				}
HXLINE(  21)				 ::haxe::ui::styles::elements::SelectorPart current =  ::haxe::ui::styles::elements::SelectorPart_obj::__alloc( HX_CTX );
HXLINE(  22)				if ((nextDirect == true)) {
HXLINE(  23)					current->direct = true;
HXLINE(  24)					nextDirect = false;
            				}
HXLINE(  26)				current->parent = parent;
HXLINE(  28)				::Array< ::String > p1 = i.split(HX_(":",3a,00,00,00));
HXLINE(  29)				current->pseudoClass = p1->__get(1);
HXLINE(  31)				::String main = p1->__get(0);
HXLINE(  33)				if ((main.charAt(0) == HX_(".",2e,00,00,00))) {
HXLINE(  34)					current->className = main.substring(1,null());
            				}
            				else {
HXLINE(  36)					::Array< ::String > p2 = main.split(HX_(".",2e,00,00,00));
HXLINE(  37)					if ((p2->__get(0).charAt(0) == HX_("#",23,00,00,00))) {
HXLINE(  38)						current->id = p2->__get(0).substring(1,null());
            					}
            					else {
HXLINE(  40)						current->nodeName = p2->__get(0).toLowerCase();
            					}
HXLINE(  42)					current->className = p2->__get(1);
            				}
HXLINE(  45)				this->parts->push(current);
HXLINE(  46)				parent = current;
            			}
            		}
            	}

Dynamic Selector_obj::__CreateEmpty() { return new Selector_obj; }

void *Selector_obj::_hx_vtable = 0;

Dynamic Selector_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Selector_obj > _hx_result = new Selector_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Selector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e8e305a;
}

::String Selector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_add162364d6aaadf_51_toString)
HXDLIN(  51)		return this->parts->join(HX_(" ",20,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Selector_obj,toString,return )


::hx::ObjectPtr< Selector_obj > Selector_obj::__new(::String s) {
	::hx::ObjectPtr< Selector_obj > __this = new Selector_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< Selector_obj > Selector_obj::__alloc(::hx::Ctx *_hx_ctx,::String s) {
	Selector_obj *__this = (Selector_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Selector_obj), true, "haxe.ui.styles.elements.Selector"));
	*(void **)__this = Selector_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

Selector_obj::Selector_obj()
{
}

void Selector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Selector);
	HX_MARK_MEMBER_NAME(parts,"parts");
	HX_MARK_END_CLASS();
}

void Selector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parts,"parts");
}

::hx::Val Selector_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { return ::hx::Val( parts ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Selector_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { parts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Selector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parts",20,91,55,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Selector_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Selector_obj,parts),HX_("parts",20,91,55,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Selector_obj_sStaticStorageInfo = 0;
#endif

static ::String Selector_obj_sMemberFields[] = {
	HX_("parts",20,91,55,bd),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Selector_obj::__mClass;

void Selector_obj::__register()
{
	Selector_obj _hx_dummy;
	Selector_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.Selector",1c,f4,2a,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Selector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Selector_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Selector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Selector_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
