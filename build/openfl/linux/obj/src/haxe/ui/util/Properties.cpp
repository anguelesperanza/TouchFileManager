#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3268d5d7055de888_12_new,"haxe.ui.util.Properties","new",0xbfb6959f,"haxe.ui.util.Properties.new","haxe/ui/util/Properties.hx",12,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_16_fromFile,"haxe.ui.util.Properties","fromFile",0x5d767367,"haxe.ui.util.Properties.fromFile","haxe/ui/util/Properties.hx",16,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_31_exists,"haxe.ui.util.Properties","exists",0xaa6ae9fd,"haxe.ui.util.Properties.exists","haxe/ui/util/Properties.hx",31,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_34_getProp,"haxe.ui.util.Properties","getProp",0x6bc94818,"haxe.ui.util.Properties.getProp","haxe/ui/util/Properties.hx",34,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_42_getPropInt,"haxe.ui.util.Properties","getPropInt",0xff489bb7,"haxe.ui.util.Properties.getPropInt","haxe/ui/util/Properties.hx",42,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_51_getPropBool,"haxe.ui.util.Properties","getPropBool",0x5b9fe462,"haxe.ui.util.Properties.getPropBool","haxe/ui/util/Properties.hx",51,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_60_getPropCol,"haxe.ui.util.Properties","getPropCol",0xff440f08,"haxe.ui.util.Properties.getPropCol","haxe/ui/util/Properties.hx",60,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_69_setProp,"haxe.ui.util.Properties","setProp",0x5ecad924,"haxe.ui.util.Properties.setProp","haxe/ui/util/Properties.hx",69,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_77_names,"haxe.ui.util.Properties","names",0x081262c7,"haxe.ui.util.Properties.names","haxe/ui/util/Properties.hx",77,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_81_addAll,"haxe.ui.util.Properties","addAll",0x8985d5a1,"haxe.ui.util.Properties.addAll","haxe/ui/util/Properties.hx",81,0xe390f4b0)
namespace haxe{
namespace ui{
namespace util{

void Properties_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3268d5d7055de888_12_new)
HXDLIN(  12)		this->_props =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Properties_obj::__CreateEmpty() { return new Properties_obj; }

void *Properties_obj::_hx_vtable = 0;

Dynamic Properties_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Properties_obj > _hx_result = new Properties_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Properties_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48df7873;
}

void Properties_obj::fromFile(::String filePath){
            	HX_GC_STACKFRAME(&_hx_pos_3268d5d7055de888_16_fromFile)
HXLINE(  17)		this->_props =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  18)		::String content = ::sys::io::File_obj::getContent(filePath);
HXLINE(  19)		::Array< ::String > lines = content.split(HX_("\n",0a,00,00,00));
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			while((_g < lines->length)){
HXLINE(  20)				::String line = lines->__get(_g);
HXDLIN(  20)				_g = (_g + 1);
HXLINE(  21)				line = ::StringTools_obj::trim(line);
HXLINE(  22)				if ((line.length != 0)) {
HXLINE(  23)					::Array< ::String > parts = line.split(HX_("=",3d,00,00,00));
HXLINE(  24)					this->setProp(parts->__get(0),parts->__get(1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,fromFile,(void))

bool Properties_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_31_exists)
HXDLIN(  31)		return this->_props->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,exists,return )

::String Properties_obj::getProp(::String name,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_34_getProp)
HXLINE(  35)		::String v = defaultValue;
HXLINE(  36)		if (this->_props->exists(name)) {
HXLINE(  37)			v = this->_props->get_string(name);
            		}
HXLINE(  39)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getProp,return )

int Properties_obj::getPropInt(::String name,::hx::Null< int >  __o_defaultValue){
            		int defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_42_getPropInt)
HXLINE(  43)		int v = defaultValue;
HXLINE(  44)		::String stringValue = this->getProp(name,null());
HXLINE(  45)		if (::hx::IsNotNull( stringValue )) {
HXLINE(  46)			v = ( (int)(::Std_obj::parseInt(stringValue)) );
            		}
HXLINE(  48)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getPropInt,return )

bool Properties_obj::getPropBool(::String name,::hx::Null< bool >  __o_defaultValue){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_51_getPropBool)
HXLINE(  52)		bool v = defaultValue;
HXLINE(  53)		::String stringValue = this->getProp(name,null());
HXLINE(  54)		if (::hx::IsNotNull( stringValue )) {
HXLINE(  55)			v = (stringValue == HX_("true",4e,a7,03,4d));
            		}
HXLINE(  57)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getPropBool,return )

int Properties_obj::getPropCol(::String name,::hx::Null< int >  __o_defaultValue){
            		int defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_60_getPropCol)
HXLINE(  61)		int v = defaultValue;
HXLINE(  62)		::String stringValue = this->getProp(name,null());
HXLINE(  63)		if (::hx::IsNotNull( stringValue )) {
HXLINE(  64)			::String s = stringValue;
HXDLIN(  64)			if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE(  64)				s = s.substring(1,s.length);
            			}
            			else {
HXLINE(  64)				if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE(  64)					s = s.substring(2,s.length);
            				}
            			}
HXDLIN(  64)			v = ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s))) );
            		}
HXLINE(  66)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getPropCol,return )

void Properties_obj::setProp(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_69_setProp)
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		if (::hx::IsNotNull( name )) {
HXLINE(  70)			_hx_tmp = (::StringTools_obj::trim(name).length == 0);
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			return;
            		}
HXLINE(  73)		{
HXLINE(  73)			::Dynamic this1 = this->_props;
HXDLIN(  73)			::String key = ::StringTools_obj::trim(name);
HXDLIN(  73)			( ( ::haxe::ds::StringMap)(this1) )->set(key,::StringTools_obj::trim(value));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,setProp,(void))

 ::Dynamic Properties_obj::names(){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_77_names)
HXDLIN(  77)		return this->_props->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Properties_obj,names,return )

void Properties_obj::addAll( ::haxe::ui::util::Properties p){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_81_addAll)
HXDLIN(  81)		 ::Dynamic name = p->names();
HXDLIN(  81)		while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  81)			::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  82)			this->setProp(name1,p->getProp(name1,null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,addAll,(void))


::hx::ObjectPtr< Properties_obj > Properties_obj::__new() {
	::hx::ObjectPtr< Properties_obj > __this = new Properties_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Properties_obj > Properties_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Properties_obj *__this = (Properties_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Properties_obj), true, "haxe.ui.util.Properties"));
	*(void **)__this = Properties_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Properties_obj::Properties_obj()
{
}

void Properties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Properties);
	HX_MARK_MEMBER_NAME(_props,"_props");
	HX_MARK_END_CLASS();
}

void Properties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_props,"_props");
}

::hx::Val Properties_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return ::hx::Val( names_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_props") ) { return ::hx::Val( _props ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return ::hx::Val( addAll_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getProp") ) { return ::hx::Val( getProp_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProp") ) { return ::hx::Val( setProp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return ::hx::Val( fromFile_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPropInt") ) { return ::hx::Val( getPropInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPropCol") ) { return ::hx::Val( getPropCol_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPropBool") ) { return ::hx::Val( getPropBool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Properties_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_props") ) { _props=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Properties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_props",b1,2e,77,c4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Properties_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Properties_obj,_props),HX_("_props",b1,2e,77,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Properties_obj_sStaticStorageInfo = 0;
#endif

static ::String Properties_obj_sMemberFields[] = {
	HX_("_props",b1,2e,77,c4),
	HX_("fromFile",06,9d,87,a1),
	HX_("exists",dc,1d,e0,bf),
	HX_("getProp",59,77,e1,1c),
	HX_("getPropInt",16,ab,2e,49),
	HX_("getPropBool",23,48,07,bb),
	HX_("getPropCol",67,1e,2a,49),
	HX_("setProp",65,08,e3,0f),
	HX_("names",c8,8f,84,96),
	HX_("addAll",80,09,fb,9e),
	::String(null()) };

::hx::Class Properties_obj::__mClass;

void Properties_obj::__register()
{
	Properties_obj _hx_dummy;
	Properties_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.Properties",2d,da,fd,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Properties_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Properties_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Properties_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Properties_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
