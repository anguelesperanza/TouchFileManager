#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
#ifndef INCLUDED_hx_files_UnixPath
#include <hx/files/UnixPath.h>
#endif
#ifndef INCLUDED_hx_files_internal_OS
#include <hx/files/internal/OS.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings_collection__StringArray_StringArray_Impl_
#include <hx/strings/collection/_StringArray/StringArray_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ea691ba82eb9105_1009_new,"hx.files.UnixPath","new",0xe20e7ad4,"hx.files.UnixPath.new","hx/files/Path.hx",1009,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_1020_get_root,"hx.files.UnixPath","get_root",0x742c9ab7,"hx.files.UnixPath.get_root","hx/files/Path.hx",1020,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_1033_newPathForString,"hx.files.UnixPath","newPathForString",0xbc650ee1,"hx.files.UnixPath.newPathForString","hx/files/Path.hx",1033,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_1038_newPathForChild,"hx.files.UnixPath","newPathForChild",0x8b5f358c,"hx.files.UnixPath.newPathForChild","hx/files/Path.hx",1038,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_960_of,"hx.files.UnixPath","of",0x8879c123,"hx.files.UnixPath.of","hx/files/Path.hx",960,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_988_clean,"hx.files.UnixPath","clean",0x0deca0fd,"hx.files.UnixPath.clean","hx/files/Path.hx",988,0x962760c2)
static const ::String _hx_array_data_85e3c0e2_10[] = {
	HX_("/",2f,00,00,00),HX_("\\",5c,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_942_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",942,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_947_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",947,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_950_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",950,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_951_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",951,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_952_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",952,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_953_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",953,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2ea691ba82eb9105_954_boot,"hx.files.UnixPath","boot",0xe2b5ff3e,"hx.files.UnixPath.boot","hx/files/Path.hx",954,0x962760c2)
namespace hx{
namespace files{

void UnixPath_obj::__construct( ::hx::files::Path parent,::String path){
            	HX_STACKFRAME(&_hx_pos_2ea691ba82eb9105_1009_new)
HXLINE(1010)		if (::hx::IsNull( path )) {
HXLINE(1011)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path] must not be null",03,20,29,72)));
            		}
HXLINE(1013)		super::__construct(parent,path,HX_("/",2f,00,00,00),HX_(":",3a,00,00,00),null());
HXLINE(1014)		this->isLocal = !(::hx::files::internal::OS_obj::isWindows);
HXLINE(1015)		this->isUnix = true;
HXLINE(1016)		this->isWindows = false;
            	}

Dynamic UnixPath_obj::__CreateEmpty() { return new UnixPath_obj; }

void *UnixPath_obj::_hx_vtable = 0;

Dynamic UnixPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UnixPath_obj > _hx_result = new UnixPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool UnixPath_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12df4900) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12df4900;
	} else {
		return inClassId==(int)0x405d600c;
	}
}

 ::hx::files::Path UnixPath_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_2ea691ba82eb9105_1020_get_root)
HXLINE(1021)		 ::hx::files::Path p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1022)		while(::hx::IsNotNull( p )){
HXLINE(1023)			if (::hx::IsInstanceEq( p,::hx::files::UnixPath_obj::ROOT )) {
HXLINE(1024)				return ::hx::files::UnixPath_obj::ROOT;
            			}
HXLINE(1025)			p = p->parent;
            		}
HXLINE(1027)		return null();
            	}


 ::hx::files::Path UnixPath_obj::newPathForString(::String path,bool trimWhiteSpaces){
            	HX_STACKFRAME(&_hx_pos_2ea691ba82eb9105_1033_newPathForString)
HXDLIN(1033)		return ::hx::files::UnixPath_obj::of(path,trimWhiteSpaces);
            	}


 ::hx::files::Path UnixPath_obj::newPathForChild(::String filename){
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_1038_newPathForChild)
HXDLIN(1038)		return  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),filename);
            	}


::String UnixPath_obj::DIR_SEP;

 ::hx::files::UnixPath UnixPath_obj::EMPTY;

 ::hx::files::UnixPath UnixPath_obj::ROOT;

 ::hx::files::UnixPath UnixPath_obj::HOME;

 ::hx::files::UnixPath UnixPath_obj::CURRENT;

 ::hx::files::UnixPath UnixPath_obj::PARENT;

 ::hx::files::UnixPath UnixPath_obj::of(::String path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_960_of)
HXLINE( 962)		if (::hx::IsNull( path )) {
HXLINE( 963)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path] must not be null",03,20,29,72)));
            		}
HXLINE( 965)		::Array< ::String > parts = ::hx::files::UnixPath_obj::clean(path,trimWhiteSpaces);
HXLINE( 967)		if ((parts->length == 0)) {
HXLINE( 968)			return ::hx::files::UnixPath_obj::EMPTY;
            		}
HXLINE( 970)		 ::hx::files::UnixPath p = ::hx::files::UnixPath_obj::EMPTY;
HXLINE( 971)		{
HXLINE( 971)			int _g = 0;
HXDLIN( 971)			int _g1 = parts->length;
HXDLIN( 971)			while((_g < _g1)){
HXLINE( 971)				_g = (_g + 1);
HXDLIN( 971)				int i = (_g - 1);
HXLINE( 972)				::String part = parts->__get(i);
HXLINE( 973)				if ((i == 0)) {
HXLINE( 974)					::String _hx_switch_0 = part;
            					if (  (_hx_switch_0==HX_("..",40,28,00,00)) ){
HXLINE( 977)						p = ::hx::files::UnixPath_obj::PARENT;
HXDLIN( 977)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("/",2f,00,00,00)) ){
HXLINE( 975)						p = ::hx::files::UnixPath_obj::ROOT;
HXDLIN( 975)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("~",7e,00,00,00)) ){
HXLINE( 976)						p = ::hx::files::UnixPath_obj::HOME;
HXDLIN( 976)						goto _hx_goto_6;
            					}
            					/* default */{
HXLINE( 978)						p =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,null(),part);
            					}
            					_hx_goto_6:;
            				}
            				else {
HXLINE( 981)					p =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,p,part);
            				}
            			}
            		}
HXLINE( 984)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UnixPath_obj,of,return )

::Array< ::String > UnixPath_obj::clean(::String path,bool trimWhiteSpaces){
            	HX_STACKFRAME(&_hx_pos_2ea691ba82eb9105_988_clean)
HXLINE( 989)		::Array< ::String > parts = ::hx::strings::Strings_obj::split8(path,::Array_obj< ::String >::fromData( _hx_array_data_85e3c0e2_10,2),null());
HXLINE( 990)		 ::hx::strings::internal::_Either2::_Either2 initialItems = null();
HXDLIN( 990)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 990)		if (::hx::IsNotNull( initialItems )) {
HXLINE( 990)			::hx::strings::collection::_StringArray::StringArray_Impl__obj::pushAll(this1,initialItems);
            		}
HXDLIN( 990)		::Array< ::String > cleaned = this1;
HXLINE( 992)		{
HXLINE( 992)			int _g = 0;
HXDLIN( 992)			int _g1 = parts->length;
HXDLIN( 992)			while((_g < _g1)){
HXLINE( 992)				_g = (_g + 1);
HXDLIN( 992)				int i = (_g - 1);
HXLINE( 993)				::String part = parts->__get(i);
HXLINE( 994)				if (trimWhiteSpaces) {
HXLINE( 995)					part = ( (::String)(::hx::strings::Strings_obj::trim(part,null())) );
            				}
HXLINE( 996)				if ((i == 0)) {
HXLINE( 997)					bool _hx_tmp;
HXDLIN( 997)					if (::hx::IsNotNull( part )) {
HXLINE( 997)						_hx_tmp = (part.length == 0);
            					}
            					else {
HXLINE( 997)						_hx_tmp = true;
            					}
HXDLIN( 997)					if (_hx_tmp) {
HXLINE( 998)						cleaned->push(HX_("/",2f,00,00,00));
            					}
            					else {
HXLINE(1000)						cleaned->push(part);
            					}
            				}
            				else {
HXLINE(1001)					bool _hx_tmp;
HXDLIN(1001)					if (::hx::IsNotNull( part )) {
HXLINE(1001)						_hx_tmp = (part.length > 0);
            					}
            					else {
HXLINE(1001)						_hx_tmp = false;
            					}
HXDLIN(1001)					if (_hx_tmp) {
HXLINE(1002)						cleaned->push(part);
            					}
            				}
            			}
            		}
HXLINE(1005)		return cleaned;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UnixPath_obj,clean,return )


::hx::ObjectPtr< UnixPath_obj > UnixPath_obj::__new( ::hx::files::Path parent,::String path) {
	::hx::ObjectPtr< UnixPath_obj > __this = new UnixPath_obj();
	__this->__construct(parent,path);
	return __this;
}

::hx::ObjectPtr< UnixPath_obj > UnixPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path parent,::String path) {
	UnixPath_obj *__this = (UnixPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UnixPath_obj), true, "hx.files.UnixPath"));
	*(void **)__this = UnixPath_obj::_hx_vtable;
	__this->__construct(parent,path);
	return __this;
}

UnixPath_obj::UnixPath_obj()
{
}

::hx::Val UnixPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"newPathForChild") ) { return ::hx::Val( newPathForChild_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"newPathForString") ) { return ::hx::Val( newPathForString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool UnixPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ROOT") ) { outValue = ( ROOT ); return true; }
		if (HX_FIELD_EQ(inName,"HOME") ) { outValue = ( HOME ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EMPTY") ) { outValue = ( EMPTY ); return true; }
		if (HX_FIELD_EQ(inName,"clean") ) { outValue = clean_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PARENT") ) { outValue = ( PARENT ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CURRENT") ) { outValue = ( CURRENT ); return true; }
	}
	return false;
}

bool UnixPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ROOT") ) { ROOT=ioValue.Cast<  ::hx::files::UnixPath >(); return true; }
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=ioValue.Cast<  ::hx::files::UnixPath >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EMPTY") ) { EMPTY=ioValue.Cast<  ::hx::files::UnixPath >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PARENT") ) { PARENT=ioValue.Cast<  ::hx::files::UnixPath >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CURRENT") ) { CURRENT=ioValue.Cast<  ::hx::files::UnixPath >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UnixPath_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo UnixPath_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &UnixPath_obj::DIR_SEP,HX_("DIR_SEP",2c,f0,a6,b1)},
	{::hx::fsObject /*  ::hx::files::UnixPath */ ,(void *) &UnixPath_obj::EMPTY,HX_("EMPTY",6d,72,c8,ed)},
	{::hx::fsObject /*  ::hx::files::UnixPath */ ,(void *) &UnixPath_obj::ROOT,HX_("ROOT",22,b6,6f,36)},
	{::hx::fsObject /*  ::hx::files::UnixPath */ ,(void *) &UnixPath_obj::HOME,HX_("HOME",1f,92,d3,2f)},
	{::hx::fsObject /*  ::hx::files::UnixPath */ ,(void *) &UnixPath_obj::CURRENT,HX_("CURRENT",19,70,b7,4b)},
	{::hx::fsObject /*  ::hx::files::UnixPath */ ,(void *) &UnixPath_obj::PARENT,HX_("PARENT",2a,b1,00,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String UnixPath_obj_sMemberFields[] = {
	HX_("get_root",ab,a9,69,cb),
	HX_("newPathForString",d5,31,78,5a),
	HX_("newPathForChild",18,ad,14,8c),
	::String(null()) };

static void UnixPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnixPath_obj::DIR_SEP,"DIR_SEP");
	HX_MARK_MEMBER_NAME(UnixPath_obj::EMPTY,"EMPTY");
	HX_MARK_MEMBER_NAME(UnixPath_obj::ROOT,"ROOT");
	HX_MARK_MEMBER_NAME(UnixPath_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(UnixPath_obj::CURRENT,"CURRENT");
	HX_MARK_MEMBER_NAME(UnixPath_obj::PARENT,"PARENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UnixPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnixPath_obj::DIR_SEP,"DIR_SEP");
	HX_VISIT_MEMBER_NAME(UnixPath_obj::EMPTY,"EMPTY");
	HX_VISIT_MEMBER_NAME(UnixPath_obj::ROOT,"ROOT");
	HX_VISIT_MEMBER_NAME(UnixPath_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(UnixPath_obj::CURRENT,"CURRENT");
	HX_VISIT_MEMBER_NAME(UnixPath_obj::PARENT,"PARENT");
};

#endif

::hx::Class UnixPath_obj::__mClass;

static ::String UnixPath_obj_sStaticFields[] = {
	HX_("DIR_SEP",2c,f0,a6,b1),
	HX_("EMPTY",6d,72,c8,ed),
	HX_("ROOT",22,b6,6f,36),
	HX_("HOME",1f,92,d3,2f),
	HX_("CURRENT",19,70,b7,4b),
	HX_("PARENT",2a,b1,00,a0),
	HX_("of",17,61,00,00),
	HX_("clean",89,71,5b,48),
	::String(null())
};

void UnixPath_obj::__register()
{
	UnixPath_obj _hx_dummy;
	UnixPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.UnixPath",e2,c0,e3,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UnixPath_obj::__GetStatic;
	__mClass->mSetStaticField = &UnixPath_obj::__SetStatic;
	__mClass->mMarkFunc = UnixPath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UnixPath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UnixPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UnixPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UnixPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UnixPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UnixPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UnixPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2ea691ba82eb9105_942_boot)
HXDLIN( 942)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("immutable",42,28,c7,66),null()))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ea691ba82eb9105_947_boot)
HXDLIN( 947)		DIR_SEP = HX_("/",2f,00,00,00);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_950_boot)
HXDLIN( 950)		EMPTY =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,null(),HX_("",00,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_951_boot)
HXDLIN( 951)		ROOT =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,null(),HX_("/",2f,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_952_boot)
HXDLIN( 952)		HOME =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,null(),HX_("~",7e,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_953_boot)
HXDLIN( 953)		CURRENT =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,null(),HX_(".",2e,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ea691ba82eb9105_954_boot)
HXDLIN( 954)		PARENT =  ::hx::files::UnixPath_obj::__alloc( HX_CTX ,null(),HX_("..",40,28,00,00));
            	}
}

} // end namespace hx
} // end namespace files
