#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_LineStyleView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/LineStyleView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_882__new,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","_new",0xafeedc34,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",882,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_891_get_thickness,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_thickness",0xaf330c18,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_thickness","openfl/display/_internal/DrawCommandReader.hx",891,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_898_get_color,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_color",0xd5956a07,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_color","openfl/display/_internal/DrawCommandReader.hx",898,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_905_get_alpha,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_alpha",0xaccfa002,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_alpha","openfl/display/_internal/DrawCommandReader.hx",905,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_912_get_pixelHinting,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_pixelHinting",0xbba2bfb1,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_pixelHinting","openfl/display/_internal/DrawCommandReader.hx",912,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_919_get_scaleMode,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_scaleMode",0x809ff5b1,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_scaleMode","openfl/display/_internal/DrawCommandReader.hx",919,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_926_get_caps,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_caps",0x1a2c03fd,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_caps","openfl/display/_internal/DrawCommandReader.hx",926,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_933_get_joints,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_joints",0xd7aa7ec5,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_joints","openfl/display/_internal/DrawCommandReader.hx",933,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_5acd36b46787c3ee_940_get_miterLimit,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_","get_miterLimit",0x323591d2,"openfl.display._internal._DrawCommandReader.LineStyleView_Impl_.get_miterLimit","openfl/display/_internal/DrawCommandReader.hx",940,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void LineStyleView_Impl__obj::__construct() { }

Dynamic LineStyleView_Impl__obj::__CreateEmpty() { return new LineStyleView_Impl__obj; }

void *LineStyleView_Impl__obj::_hx_vtable = 0;

Dynamic LineStyleView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineStyleView_Impl__obj > _hx_result = new LineStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineStyleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32793b49;
}

 ::openfl::display::_internal::DrawCommandReader LineStyleView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_882__new)
HXDLIN( 882)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 882)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,_new,return )

 ::Dynamic LineStyleView_Impl__obj::get_thickness( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_891_get_thickness)
HXDLIN( 891)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_thickness,return )

int LineStyleView_Impl__obj::get_color( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_898_get_color)
HXDLIN( 898)		return this1->buffer->i->__get(this1->iPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_color,return )

Float LineStyleView_Impl__obj::get_alpha( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_905_get_alpha)
HXDLIN( 905)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_alpha,return )

bool LineStyleView_Impl__obj::get_pixelHinting( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_912_get_pixelHinting)
HXDLIN( 912)		return this1->buffer->b->__get(this1->bPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_pixelHinting,return )

 ::Dynamic LineStyleView_Impl__obj::get_scaleMode( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_919_get_scaleMode)
HXDLIN( 919)		return this1->buffer->o->__get((this1->oPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_scaleMode,return )

 ::Dynamic LineStyleView_Impl__obj::get_caps( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_926_get_caps)
HXDLIN( 926)		return this1->buffer->o->__get((this1->oPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_caps,return )

 ::Dynamic LineStyleView_Impl__obj::get_joints( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_933_get_joints)
HXDLIN( 933)		return this1->buffer->o->__get((this1->oPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_joints,return )

Float LineStyleView_Impl__obj::get_miterLimit( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_5acd36b46787c3ee_940_get_miterLimit)
HXDLIN( 940)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_miterLimit,return )


LineStyleView_Impl__obj::LineStyleView_Impl__obj()
{
}

bool LineStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_caps") ) { outValue = get_caps_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_joints") ) { outValue = get_joints_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { outValue = get_thickness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { outValue = get_scaleMode_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { outValue = get_miterLimit_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_pixelHinting") ) { outValue = get_pixelHinting_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LineStyleView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LineStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class LineStyleView_Impl__obj::__mClass;

static ::String LineStyleView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_thickness",4b,c5,ca,1b),
	HX_("get_color",ba,cd,05,8e),
	HX_("get_alpha",b5,03,40,65),
	HX_("get_pixelHinting",5e,88,9a,71),
	HX_("get_scaleMode",e4,ae,37,ed),
	HX_("get_caps",aa,d7,74,c1),
	HX_("get_joints",b2,57,91,81),
	HX_("get_miterLimit",3f,e5,5f,ca),
	::String(null())
};

void LineStyleView_Impl__obj::__register()
{
	LineStyleView_Impl__obj _hx_dummy;
	LineStyleView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.LineStyleView_Impl_",7b,0a,20,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LineStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LineStyleView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineStyleView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
