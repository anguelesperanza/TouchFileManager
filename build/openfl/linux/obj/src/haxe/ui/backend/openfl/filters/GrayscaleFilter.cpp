#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_openfl_filters_GrayscaleFilter
#include <haxe/ui/backend/openfl/filters/GrayscaleFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_94296b8b4f13ddb8_19_new,"haxe.ui.backend.openfl.filters.GrayscaleFilter","new",0x0a7464cc,"haxe.ui.backend.openfl.filters.GrayscaleFilter.new","haxe/ui/backend/openfl/filters/GrayscaleFilter.hx",19,0x979b5be5)
HX_LOCAL_STACK_FRAME(_hx_pos_94296b8b4f13ddb8_12_boot,"haxe.ui.backend.openfl.filters.GrayscaleFilter","boot",0x137cce46,"haxe.ui.backend.openfl.filters.GrayscaleFilter.boot","haxe/ui/backend/openfl/filters/GrayscaleFilter.hx",12,0x979b5be5)
HX_LOCAL_STACK_FRAME(_hx_pos_94296b8b4f13ddb8_13_boot,"haxe.ui.backend.openfl.filters.GrayscaleFilter","boot",0x137cce46,"haxe.ui.backend.openfl.filters.GrayscaleFilter.boot","haxe/ui/backend/openfl/filters/GrayscaleFilter.hx",13,0x979b5be5)
HX_LOCAL_STACK_FRAME(_hx_pos_94296b8b4f13ddb8_14_boot,"haxe.ui.backend.openfl.filters.GrayscaleFilter","boot",0x137cce46,"haxe.ui.backend.openfl.filters.GrayscaleFilter.boot","haxe/ui/backend/openfl/filters/GrayscaleFilter.hx",14,0x979b5be5)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{

void GrayscaleFilter_obj::__construct(::hx::Null< Float >  __o_amount){
            		Float amount = __o_amount.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_94296b8b4f13ddb8_19_new)
HXDLIN(  19)		this->filter =  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(20)->init(0,(1 + (((Float)-0.701000000000000068) * amount)))->init(1,(((Float)0.587) * amount))->init(2,(((Float)0.114) * amount))->init(3,0)->init(4,0)->init(5,(((Float)0.299) * amount))->init(6,(1 + (((Float)-0.413000000000000034) * amount)))->init(7,(((Float)0.114) * amount))->init(8,0)->init(9,0)->init(10,(((Float)0.299) * amount))->init(11,(((Float)0.587) * amount))->init(12,(1 + (((Float)-0.886) * amount)))->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0));
            	}

Dynamic GrayscaleFilter_obj::__CreateEmpty() { return new GrayscaleFilter_obj; }

void *GrayscaleFilter_obj::_hx_vtable = 0;

Dynamic GrayscaleFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GrayscaleFilter_obj > _hx_result = new GrayscaleFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GrayscaleFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b0ee7aa;
}

Float GrayscaleFilter_obj::RED;

Float GrayscaleFilter_obj::GREEN;

Float GrayscaleFilter_obj::BLUE;


::hx::ObjectPtr< GrayscaleFilter_obj > GrayscaleFilter_obj::__new(::hx::Null< Float >  __o_amount) {
	::hx::ObjectPtr< GrayscaleFilter_obj > __this = new GrayscaleFilter_obj();
	__this->__construct(__o_amount);
	return __this;
}

::hx::ObjectPtr< GrayscaleFilter_obj > GrayscaleFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_amount) {
	GrayscaleFilter_obj *__this = (GrayscaleFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GrayscaleFilter_obj), true, "haxe.ui.backend.openfl.filters.GrayscaleFilter"));
	*(void **)__this = GrayscaleFilter_obj::_hx_vtable;
	__this->__construct(__o_amount);
	return __this;
}

GrayscaleFilter_obj::GrayscaleFilter_obj()
{
}

void GrayscaleFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GrayscaleFilter);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_END_CLASS();
}

void GrayscaleFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
}

::hx::Val GrayscaleFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GrayscaleFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::openfl::filters::ColorMatrixFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GrayscaleFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GrayscaleFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::ColorMatrixFilter */ ,(int)offsetof(GrayscaleFilter_obj,filter),HX_("filter",b8,1f,35,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GrayscaleFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &GrayscaleFilter_obj::RED,HX_("RED",31,75,3e,00)},
	{::hx::fsFloat,(void *) &GrayscaleFilter_obj::GREEN,HX_("GREEN",a3,46,db,17)},
	{::hx::fsFloat,(void *) &GrayscaleFilter_obj::BLUE,HX_("BLUE",9a,0a,da,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GrayscaleFilter_obj_sMemberFields[] = {
	HX_("filter",b8,1f,35,85),
	::String(null()) };

static void GrayscaleFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GrayscaleFilter_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(GrayscaleFilter_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(GrayscaleFilter_obj::BLUE,"BLUE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GrayscaleFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GrayscaleFilter_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(GrayscaleFilter_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(GrayscaleFilter_obj::BLUE,"BLUE");
};

#endif

::hx::Class GrayscaleFilter_obj::__mClass;

static ::String GrayscaleFilter_obj_sStaticFields[] = {
	HX_("RED",31,75,3e,00),
	HX_("GREEN",a3,46,db,17),
	HX_("BLUE",9a,0a,da,2b),
	::String(null())
};

void GrayscaleFilter_obj::__register()
{
	GrayscaleFilter_obj _hx_dummy;
	GrayscaleFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.filters.GrayscaleFilter",da,4e,9f,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GrayscaleFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GrayscaleFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GrayscaleFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GrayscaleFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GrayscaleFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GrayscaleFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GrayscaleFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GrayscaleFilter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_94296b8b4f13ddb8_12_boot)
HXDLIN(  12)		RED = ((Float)0.299);
            	}
{
            	HX_STACKFRAME(&_hx_pos_94296b8b4f13ddb8_13_boot)
HXDLIN(  13)		GREEN = ((Float)0.587);
            	}
{
            	HX_STACKFRAME(&_hx_pos_94296b8b4f13ddb8_14_boot)
HXDLIN(  14)		BLUE = ((Float)0.114);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters
