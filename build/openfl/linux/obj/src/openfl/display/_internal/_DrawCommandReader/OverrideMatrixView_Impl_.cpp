#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_OverrideMatrixView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/OverrideMatrixView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7bef863587a79a9e_1005__new,"openfl.display._internal._DrawCommandReader.OverrideMatrixView_Impl_","_new",0x552dc676,"openfl.display._internal._DrawCommandReader.OverrideMatrixView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",1005,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bef863587a79a9e_1014_get_matrix,"openfl.display._internal._DrawCommandReader.OverrideMatrixView_Impl_","get_matrix",0x813bd4df,"openfl.display._internal._DrawCommandReader.OverrideMatrixView_Impl_.get_matrix","openfl/display/_internal/DrawCommandReader.hx",1014,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void OverrideMatrixView_Impl__obj::__construct() { }

Dynamic OverrideMatrixView_Impl__obj::__CreateEmpty() { return new OverrideMatrixView_Impl__obj; }

void *OverrideMatrixView_Impl__obj::_hx_vtable = 0;

Dynamic OverrideMatrixView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OverrideMatrixView_Impl__obj > _hx_result = new OverrideMatrixView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OverrideMatrixView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fd025f3;
}

 ::openfl::display::_internal::DrawCommandReader OverrideMatrixView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_7bef863587a79a9e_1005__new)
HXDLIN(1005)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN(1005)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideMatrixView_Impl__obj,_new,return )

 ::openfl::geom::Matrix OverrideMatrixView_Impl__obj::get_matrix( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_7bef863587a79a9e_1014_get_matrix)
HXDLIN(1014)		return ( ( ::openfl::geom::Matrix)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideMatrixView_Impl__obj,get_matrix,return )


OverrideMatrixView_Impl__obj::OverrideMatrixView_Impl__obj()
{
}

bool OverrideMatrixView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OverrideMatrixView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OverrideMatrixView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OverrideMatrixView_Impl__obj::__mClass;

static ::String OverrideMatrixView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_matrix",0a,a6,4f,ac),
	::String(null())
};

void OverrideMatrixView_Impl__obj::__register()
{
	OverrideMatrixView_Impl__obj _hx_dummy;
	OverrideMatrixView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.OverrideMatrixView_Impl_",79,47,0d,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OverrideMatrixView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OverrideMatrixView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OverrideMatrixView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OverrideMatrixView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OverrideMatrixView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
