#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_elements_ImportElement
#include <haxe/ui/styles/elements/ImportElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3c806458e7607a0b_7_new,"haxe.ui.styles.elements.ImportElement","new",0x2edeebac,"haxe.ui.styles.elements.ImportElement.new","haxe/ui/styles/elements/ImportElement.hx",7,0x1d751bc4)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void ImportElement_obj::__construct(::String url){
            	HX_STACKFRAME(&_hx_pos_3c806458e7607a0b_7_new)
HXDLIN(   7)		this->url = url;
            	}

Dynamic ImportElement_obj::__CreateEmpty() { return new ImportElement_obj; }

void *ImportElement_obj::_hx_vtable = 0;

Dynamic ImportElement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImportElement_obj > _hx_result = new ImportElement_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImportElement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a33c6a0;
}


ImportElement_obj::ImportElement_obj()
{
}

void ImportElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImportElement);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void ImportElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
}

::hx::Val ImportElement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImportElement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImportElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("url",6f,2b,59,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImportElement_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ImportElement_obj,url),HX_("url",6f,2b,59,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImportElement_obj_sStaticStorageInfo = 0;
#endif

static ::String ImportElement_obj_sMemberFields[] = {
	HX_("url",6f,2b,59,00),
	::String(null()) };

::hx::Class ImportElement_obj::__mClass;

void ImportElement_obj::__register()
{
	ImportElement_obj _hx_dummy;
	ImportElement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.ImportElement",ba,e5,c4,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImportElement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImportElement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImportElement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImportElement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
