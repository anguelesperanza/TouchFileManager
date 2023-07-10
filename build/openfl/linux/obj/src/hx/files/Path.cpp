#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hx_concurrent_ConcurrentException
#include <hx/concurrent/ConcurrentException.h>
#endif
#ifndef INCLUDED_hx_files_Dir
#include <hx/files/Dir.h>
#endif
#ifndef INCLUDED_hx_files_File
#include <hx/files/File.h>
#endif
#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
#ifndef INCLUDED_hx_files_UnixPath
#include <hx/files/UnixPath.h>
#endif
#ifndef INCLUDED_hx_files_WindowsPath
#include <hx/files/WindowsPath.h>
#endif
#ifndef INCLUDED_hx_files_internal_OS
#include <hx/files/internal/OS.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2537abef62a40d61_17_new,"hx.files.Path","new",0x6464bdac,"hx.files.Path.new","hx/files/Path.hx",17,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_162_get_isAbsolute,"hx.files.Path","get_isAbsolute",0x677b26fe,"hx.files.Path.get_isAbsolute","hx/files/Path.hx",162,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_181_get_isRoot,"hx.files.Path","get_isRoot",0x462db729,"hx.files.Path.get_isRoot","hx/files/Path.hx",181,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_219_assertIsLocal,"hx.files.Path","assertIsLocal",0xb8c05747,"hx.files.Path.assertIsLocal","hx/files/Path.hx",219,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_247_exists,"hx.files.Path","exists",0x1f9d8810,"hx.files.Path.exists","hx/files/Path.hx",247,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_341_get_filenameStem,"hx.files.Path","get_filenameStem",0x473e516d,"hx.files.Path.get_filenameStem","hx/files/Path.hx",341,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_378_get_filenameExt,"hx.files.Path","get_filenameExt",0x58ac32fd,"hx.files.Path.get_filenameExt","hx/files/Path.hx",378,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_398_getAbsolutePath,"hx.files.Path","getAbsolutePath",0x3fbeecbe,"hx.files.Path.getAbsolutePath","hx/files/Path.hx",398,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_423_stat,"hx.files.Path","stat",0x771a9908,"hx.files.Path.stat","hx/files/Path.hx",423,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_454_getModificationTime,"hx.files.Path","getModificationTime",0x28bc8f8b,"hx.files.Path.getModificationTime","hx/files/Path.hx",454,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_492_isDirectory,"hx.files.Path","isDirectory",0x00b6c26f,"hx.files.Path.isDirectory","hx/files/Path.hx",492,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_524_isFile,"hx.files.Path","isFile",0xc0dffdba,"hx.files.Path.isFile","hx/files/Path.hx",524,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_572_join,"hx.files.Path","join",0x7123e91e,"hx.files.Path.join","hx/files/Path.hx",572,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_626_joinAll,"hx.files.Path","joinAll",0xbd79cea3,"hx.files.Path.joinAll","hx/files/Path.hx",626,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_726_get_root,"hx.files.Path","get_root",0xa4fd08df,"hx.files.Path.get_root","hx/files/Path.hx",726,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_731_toDir,"hx.files.Path","toDir",0x502dc6de,"hx.files.Path.toDir","hx/files/Path.hx",731,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_736_toFile,"hx.files.Path","toFile",0xd932a3cb,"hx.files.Path.toFile","hx/files/Path.hx",736,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_766_toStringWithTrailingSeparator,"hx.files.Path","toStringWithTrailingSeparator",0xf7698303,"hx.files.Path.toStringWithTrailingSeparator","hx/files/Path.hx",766,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_777_toString,"hx.files.Path","toString",0x12022fe0,"hx.files.Path.toString","hx/files/Path.hx",777,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_822_normalize,"hx.files.Path","normalize",0x330125d9,"hx.files.Path.normalize","hx/files/Path.hx",822,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_882_ellipsize,"hx.files.Path","ellipsize",0x31a21659,"hx.files.Path.ellipsize","hx/files/Path.hx",882,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_933_newPathForString,"hx.files.Path","newPathForString",0xee0be509,"hx.files.Path.newPathForString","hx/files/Path.hx",933,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_936_newPathForChild,"hx.files.Path","newPathForChild",0xb17a5c64,"hx.files.Path.newPathForChild","hx/files/Path.hx",936,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_24_of,"hx.files.Path","of",0x9a47a14b,"hx.files.Path.of","hx/files/Path.hx",24,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_55_unix,"hx.files.Path","unix",0x78687fbc,"hx.files.Path.unix","hx/files/Path.hx",55,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_92_win,"hx.files.Path","win",0x646b9568,"hx.files.Path.win","hx/files/Path.hx",92,0x962760c2)
HX_LOCAL_STACK_FRAME(_hx_pos_2537abef62a40d61_17_boot,"hx.files.Path","boot",0x6bda3966,"hx.files.Path.boot","hx/files/Path.hx",17,0x962760c2)
namespace hx{
namespace files{

void Path_obj::__construct( ::hx::files::Path parent,::String filename,::String dirSep,::String pathSep,::String __o_extSep){
            		::String extSep = __o_extSep;
            		if (::hx::IsNull(__o_extSep)) extSep = HX_(".",2e,00,00,00);
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_17_new)
HXLINE( 203)		this->isWindows = false;
HXLINE( 192)		this->isUnix = false;
HXLINE( 168)		this->isLocal = false;
HXLINE( 210)		this->parent = parent;
HXLINE( 211)		this->filename = filename;
HXLINE( 212)		this->dirSep = dirSep;
HXLINE( 213)		this->pathSep = pathSep;
HXLINE( 214)		this->extSep = extSep;
            	}

bool Path_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12df4900;
}

bool Path_obj::get_isAbsolute(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_162_get_isAbsolute)
HXDLIN( 162)		return ::hx::IsNotNull( this->get_root() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,get_isAbsolute,return )

bool Path_obj::get_isRoot(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_181_get_isRoot)
HXDLIN( 181)		if (::hx::IsNotNull( this->get_root() )) {
HXDLIN( 181)			return ::hx::IsNull( this->parent );
            		}
            		else {
HXDLIN( 181)			return false;
            		}
HXDLIN( 181)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,get_isRoot,return )

void Path_obj::assertIsLocal(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_219_assertIsLocal)
HXDLIN( 219)		if (!(this->isLocal)) {
HXLINE( 221)			::String className = ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
HXLINE( 222)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("This path object of type \"",3d,06,68,e2) + className) + HX_("\" is not compatible with the local operating/file system",8e,b4,3f,a8))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,assertIsLocal,(void))

bool Path_obj::exists(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_247_exists)
HXLINE( 248)		this->assertIsLocal();
HXLINE( 250)		::String path = this->toString();
HXLINE( 267)		return ::sys::FileSystem_obj::exists(path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,exists,return )

::String Path_obj::get_filenameStem(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_341_get_filenameStem)
HXLINE( 342)		bool _hx_tmp;
HXDLIN( 342)		if ((this->filename.length != 1)) {
HXLINE( 342)			_hx_tmp = (this->filename == HX_("..",40,28,00,00));
            		}
            		else {
HXLINE( 342)			_hx_tmp = true;
            		}
HXDLIN( 342)		if (_hx_tmp) {
HXLINE( 343)			return this->filename;
            		}
HXLINE( 344)		return ( (::String)(::hx::strings::Strings_obj::substringBeforeLast(this->filename,this->extSep,3)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,get_filenameStem,return )

::String Path_obj::get_filenameExt(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_378_get_filenameExt)
HXLINE( 379)		bool _hx_tmp;
HXDLIN( 379)		if ((this->filename.length != 1)) {
HXLINE( 379)			_hx_tmp = (this->filename == HX_("..",40,28,00,00));
            		}
            		else {
HXLINE( 379)			_hx_tmp = true;
            		}
HXDLIN( 379)		if (_hx_tmp) {
HXLINE( 380)			return HX_("",00,00,00,00);
            		}
HXLINE( 381)		return ( (::String)(::hx::strings::Strings_obj::substringAfterLast(this->filename,this->extSep,2)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,get_filenameExt,return )

::String Path_obj::getAbsolutePath(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_398_getAbsolutePath)
HXLINE( 399)		if (::hx::IsNotNull( this->get_root() )) {
HXLINE( 400)			return this->normalize()->toString();
            		}
HXLINE( 402)		this->assertIsLocal();
HXLINE( 404)		::String path = this->toString();
HXLINE( 407)		return ::sys::FileSystem_obj::absolutePath(path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,getAbsolutePath,return )

 ::Dynamic Path_obj::stat(){
            	HX_GC_STACKFRAME(&_hx_pos_2537abef62a40d61_423_stat)
HXLINE( 424)		if (!(this->exists())) {
HXLINE( 425)			return null();
            		}
HXLINE( 427)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 428)			return ::sys::FileSystem_obj::stat(this->toString());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 429)				{
HXLINE( 429)					null();
            				}
HXDLIN( 429)				 ::Dynamic ex = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 430)				if (!(this->exists())) {
HXLINE( 431)					return null();
            				}
HXLINE( 432)				 ::hx::concurrent::ConcurrentException ex1 =  ::hx::concurrent::ConcurrentException_obj::__alloc( HX_CTX ,ex);
HXLINE( 433)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(ex1->toString()));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 427)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,stat,return )

Float Path_obj::getModificationTime(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_454_getModificationTime)
HXLINE( 455)		if (!(this->exists())) {
HXLINE( 456)			return ( (Float)(-1) );
            		}
HXLINE( 458)		this->assertIsLocal();
HXLINE( 460)		::String path = this->toString();
HXLINE( 467)		 ::Dynamic stat = ::sys::FileSystem_obj::stat(path);
HXLINE( 468)		if (::hx::IsNull( stat->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic) )) {
HXLINE( 468)			return ( ( ::Date)(stat->__Field(HX_("ctime",f0,39,a8,4d),::hx::paccDynamic)) )->getTime();
            		}
            		else {
HXLINE( 468)			return ( ( ::Date)(stat->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
            		}
HXDLIN( 468)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,getModificationTime,return )

bool Path_obj::isDirectory(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_492_isDirectory)
HXLINE( 493)		if (!(this->exists())) {
HXLINE( 494)			return false;
            		}
HXLINE( 496)		this->assertIsLocal();
HXLINE( 498)		::String path = this->toString();
HXLINE( 501)		return ::sys::FileSystem_obj::isDirectory(path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,isDirectory,return )

bool Path_obj::isFile(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_524_isFile)
HXLINE( 525)		if (!(this->exists())) {
HXLINE( 526)			return false;
            		}
HXLINE( 529)		return ::hx::IsEq( HX_("file",7c,ce,bb,43),_hx_std_sys_file_type(toString()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,isFile,return )

 ::hx::files::Path Path_obj::join( ::hx::strings::internal::_Either2::_Either2 path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_572_join)
HXLINE( 573)		if (::hx::IsNull( path )) {
HXLINE( 574)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 576)		::String str = this->filename;
HXDLIN( 576)		bool _hx_tmp;
HXDLIN( 576)		if (::hx::IsNotNull( str )) {
HXLINE( 576)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE( 576)			_hx_tmp = true;
            		}
HXDLIN( 576)		if (_hx_tmp) {
HXLINE( 577)			 ::hx::strings::internal::_Either2::_Either2 _g = path;
HXDLIN( 577)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 578)					::String str = ( (::String)(_g->_hx_getObject(0)) );
HXDLIN( 578)					return this->newPathForString(str,trimWhiteSpaces);
            				}
            				break;
            				case (int)1: {
HXLINE( 579)					 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXDLIN( 579)					return obj;
            				}
            				break;
            			}
            		}
HXLINE( 583)		::String joinWith;
HXDLIN( 583)		 ::hx::strings::internal::_Either2::_Either2 _g = path;
HXDLIN( 583)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 584)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE( 583)				joinWith = str;
            			}
            			break;
            			case (int)1: {
HXLINE( 585)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXLINE( 583)				joinWith = obj->toString();
            			}
            			break;
            		}
HXLINE( 588)		bool _hx_tmp1;
HXDLIN( 588)		bool _hx_tmp2;
HXDLIN( 588)		if (::hx::IsNull( joinWith )) {
HXLINE( 588)			_hx_tmp2 = false;
            		}
            		else {
HXLINE( 588)			_hx_tmp2 = (joinWith.indexOf(HX_("/",2f,00,00,00),null()) > -1);
            		}
HXDLIN( 588)		if (!(_hx_tmp2)) {
HXLINE( 588)			if (::hx::IsNull( joinWith )) {
HXLINE( 588)				_hx_tmp1 = false;
            			}
            			else {
HXLINE( 588)				_hx_tmp1 = (joinWith.indexOf(HX_("\\",5c,00,00,00),null()) > -1);
            			}
            		}
            		else {
HXLINE( 588)			_hx_tmp1 = true;
            		}
HXDLIN( 588)		if (_hx_tmp1) {
HXLINE( 589)			::String thisPath = this->toString();
HXLINE( 590)			if (::hx::strings::Strings_obj::endsWith(thisPath,this->dirSep)) {
HXLINE( 591)				return this->newPathForString((thisPath + joinWith),trimWhiteSpaces);
            			}
HXLINE( 593)			return this->newPathForString(((thisPath + this->dirSep) + joinWith),trimWhiteSpaces);
            		}
HXLINE( 596)		::String file;
HXDLIN( 596)		if (trimWhiteSpaces) {
HXLINE( 596)			file = ( (::String)(::hx::strings::Strings_obj::trim(joinWith,null())) );
            		}
            		else {
HXLINE( 596)			file = joinWith;
            		}
HXLINE( 597)		bool _hx_tmp3;
HXDLIN( 597)		if (::hx::IsNotNull( file )) {
HXLINE( 597)			_hx_tmp3 = (file.length == 0);
            		}
            		else {
HXLINE( 597)			_hx_tmp3 = true;
            		}
HXDLIN( 597)		if (_hx_tmp3) {
HXLINE( 598)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 599)		return this->newPathForChild(file);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Path_obj,join,return )

 ::hx::files::Path Path_obj::joinAll(::Array< ::Dynamic> paths,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_2537abef62a40d61_626_joinAll)
HXLINE( 627)		bool _hx_tmp;
HXDLIN( 627)		if (::hx::IsNotNull( paths )) {
HXLINE( 627)			_hx_tmp = (paths->length == 0);
            		}
            		else {
HXLINE( 627)			_hx_tmp = true;
            		}
HXDLIN( 627)		if (_hx_tmp) {
HXLINE( 628)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 630)		if ((paths->length == 1)) {
HXLINE( 631)			return this->join(paths->__get(0).StaticCast<  ::hx::strings::internal::_Either2::_Either2 >(),trimWhiteSpaces);
            		}
HXLINE( 633)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 634)		::String thisPath = this->toString();
HXLINE( 635)		bool _hx_tmp1;
HXDLIN( 635)		if (::hx::IsNotNull( thisPath )) {
HXLINE( 635)			_hx_tmp1 = (thisPath.length > 0);
            		}
            		else {
HXLINE( 635)			_hx_tmp1 = false;
            		}
HXDLIN( 635)		if (_hx_tmp1) {
HXLINE( 636)			sb->add(thisPath)->add(this->dirSep);
            		}
HXLINE( 638)		{
HXLINE( 638)			int _g = 0;
HXDLIN( 638)			while((_g < paths->length)){
HXLINE( 638)				 ::hx::strings::internal::_Either2::_Either2 path = paths->__get(_g).StaticCast<  ::hx::strings::internal::_Either2::_Either2 >();
HXDLIN( 638)				_g = (_g + 1);
HXLINE( 639)				if (::hx::IsNull( path )) {
HXLINE( 639)					continue;
            				}
HXLINE( 640)				::String joinWith;
HXDLIN( 640)				 ::hx::strings::internal::_Either2::_Either2 _g1 = path;
HXDLIN( 640)				switch((int)(_g1->_hx_getIndex())){
            					case (int)0: {
HXLINE( 641)						::String str = ( (::String)(_g1->_hx_getObject(0)) );
HXLINE( 640)						joinWith = str;
            					}
            					break;
            					case (int)1: {
HXLINE( 642)						 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g1->_hx_getObject(0)) );
HXLINE( 640)						joinWith = obj->toString();
            					}
            					break;
            				}
HXLINE( 644)				if (trimWhiteSpaces) {
HXLINE( 645)					joinWith = ( (::String)(::hx::strings::Strings_obj::trim(joinWith,null())) );
            				}
HXLINE( 646)				bool _hx_tmp;
HXDLIN( 646)				if (::hx::IsNotNull( joinWith )) {
HXLINE( 646)					_hx_tmp = (joinWith.length > 0);
            				}
            				else {
HXLINE( 646)					_hx_tmp = false;
            				}
HXDLIN( 646)				if (_hx_tmp) {
HXLINE( 647)					sb->add(joinWith)->add(this->dirSep);
            				}
            			}
            		}
HXLINE( 650)		return this->newPathForString(sb->toString(),trimWhiteSpaces);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Path_obj,joinAll,return )

 ::hx::files::Path Path_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_726_get_root)
HXDLIN( 726)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 726)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,get_root,return )

 ::hx::files::Dir Path_obj::toDir(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_731_toDir)
HXDLIN( 731)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 731)		return ::hx::files::Dir_obj::of(this1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toDir,return )

 ::hx::files::File Path_obj::toFile(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_736_toFile)
HXDLIN( 736)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 736)		return ::hx::files::File_obj::of(this1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toFile,return )

::String Path_obj::toStringWithTrailingSeparator(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_766_toStringWithTrailingSeparator)
HXLINE( 767)		::String str = this->filename;
HXDLIN( 767)		bool _hx_tmp;
HXDLIN( 767)		if (::hx::IsNotNull( str )) {
HXLINE( 767)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE( 767)			_hx_tmp = true;
            		}
HXDLIN( 767)		if (_hx_tmp) {
HXLINE( 768)			return this->filename;
            		}
HXLINE( 770)		::String path = this->toString();
HXLINE( 771)		if (::hx::strings::Strings_obj::endsWith(path,this->dirSep)) {
HXLINE( 772)			return path;
            		}
HXLINE( 773)		return (path + this->dirSep);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toStringWithTrailingSeparator,return )

::String Path_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_777_toString)
HXLINE( 778)		 ::hx::strings::internal::_Either2::_Either2 initialItems = null();
HXDLIN( 778)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 778)		if (::hx::IsNotNull( initialItems )) {
HXLINE( 778)			::hx::strings::collection::_StringArray::StringArray_Impl__obj::pushAll(this1,initialItems);
            		}
HXDLIN( 778)		::Array< ::String > parts = this1;
HXLINE( 779)		 ::hx::files::Path part = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 780)		while(::hx::IsNotNull( part )){
HXLINE( 781)			parts->push(part->filename);
HXLINE( 783)			 ::hx::files::Path parent = part->parent;
HXLINE( 785)			bool _hx_tmp;
HXDLIN( 785)			if (::hx::IsNotNull( parent )) {
HXLINE( 785)				_hx_tmp = !(::hx::strings::Strings_obj::endsWith(parent->filename,this->dirSep));
            			}
            			else {
HXLINE( 785)				_hx_tmp = false;
            			}
HXDLIN( 785)			if (_hx_tmp) {
HXLINE( 786)				parts->push(this->dirSep);
            			}
HXLINE( 788)			part = parent;
            		}
HXLINE( 791)		parts->reverse();
HXLINE( 792)		return parts->join(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toString,return )

 ::hx::files::Path Path_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_822_normalize)
HXLINE( 823)		if (::hx::IsNull( this->parent )) {
HXLINE( 824)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 826)		bool isAbsolute = ::hx::IsNotNull( this->get_root() );
HXLINE( 828)		 ::hx::strings::internal::_Either2::_Either2 initialItems = null();
HXDLIN( 828)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 828)		if (::hx::IsNotNull( initialItems )) {
HXLINE( 828)			::hx::strings::collection::_StringArray::StringArray_Impl__obj::pushAll(this1,initialItems);
            		}
HXDLIN( 828)		::Array< ::String > parts = this1;
HXLINE( 829)		 ::hx::files::Path part = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 830)		while(::hx::IsNotNull( part )){
HXLINE( 831)			 ::hx::files::Path parent = part->parent;
HXLINE( 832)			bool _hx_tmp;
HXDLIN( 832)			if (::hx::IsNull( parent )) {
HXLINE( 832)				_hx_tmp = isAbsolute;
            			}
            			else {
HXLINE( 832)				_hx_tmp = false;
            			}
HXDLIN( 832)			if (_hx_tmp) {
HXLINE( 832)				goto _hx_goto_21;
            			}
HXLINE( 833)			parts->insert(0,part->filename);
HXLINE( 834)			part = parent;
            		}
            		_hx_goto_21:;
HXLINE( 837)		 ::hx::strings::internal::_Either2::_Either2 initialItems1 = null();
HXDLIN( 837)		::Array< ::String > this2 = ::Array_obj< ::String >::__new(0);
HXDLIN( 837)		if (::hx::IsNotNull( initialItems1 )) {
HXLINE( 837)			::hx::strings::collection::_StringArray::StringArray_Impl__obj::pushAll(this2,initialItems1);
            		}
HXDLIN( 837)		::Array< ::String > resultParts = this2;
HXLINE( 838)		{
HXLINE( 838)			int _g = 0;
HXDLIN( 838)			::Array< ::String > _g1 = parts;
HXDLIN( 838)			while((_g < _g1->length)){
HXLINE( 838)				::String part = _g1->__get(_g);
HXDLIN( 838)				_g = (_g + 1);
HXLINE( 839)				if ((part == HX_(".",2e,00,00,00))) {
HXLINE( 840)					bool _hx_tmp;
HXDLIN( 840)					if ((resultParts->length <= 0)) {
HXLINE( 840)						_hx_tmp = isAbsolute;
            					}
            					else {
HXLINE( 840)						_hx_tmp = true;
            					}
HXDLIN( 840)					if (_hx_tmp) {
HXLINE( 841)						continue;
            					}
            				}
            				else {
HXLINE( 842)					if ((part == HX_("..",40,28,00,00))) {
HXLINE( 843)						bool canGoUp;
HXDLIN( 843)						if (!(isAbsolute)) {
HXLINE( 843)							canGoUp = (resultParts->length > 0);
            						}
            						else {
HXLINE( 843)							canGoUp = true;
            						}
HXLINE( 844)						bool _hx_tmp;
HXDLIN( 844)						if (canGoUp) {
HXLINE( 844)							::String _hx_tmp1;
HXDLIN( 844)							if ((resultParts->length == 0)) {
HXLINE( 844)								_hx_tmp1 = null();
            							}
            							else {
HXLINE( 844)								_hx_tmp1 = resultParts->__get((resultParts->length - 1));
            							}
HXDLIN( 844)							_hx_tmp = (_hx_tmp1 == HX_("..",40,28,00,00));
            						}
            						else {
HXLINE( 844)							_hx_tmp = false;
            						}
HXDLIN( 844)						if (_hx_tmp) {
HXLINE( 845)							canGoUp = false;
            						}
HXLINE( 847)						if (canGoUp) {
HXLINE( 848)							resultParts->pop();
HXLINE( 849)							continue;
            						}
            					}
            				}
HXLINE( 852)				resultParts->push(part);
            			}
            		}
HXLINE( 856)		::String _hx_tmp;
HXDLIN( 856)		if (isAbsolute) {
HXLINE( 856)			::String _hx_tmp1 = ::Std_obj::string(this->get_root());
HXDLIN( 856)			_hx_tmp = (_hx_tmp1 + resultParts->join(this->dirSep));
            		}
            		else {
HXLINE( 856)			_hx_tmp = resultParts->join(this->dirSep);
            		}
HXDLIN( 856)		return this->newPathForString(_hx_tmp,false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,normalize,return )

::String Path_obj::ellipsize(int maxLength,::hx::Null< bool >  __o_startFromLeft,::String __o_ellipsis){
            		bool startFromLeft = __o_startFromLeft.Default(true);
            		::String ellipsis = __o_ellipsis;
            		if (::hx::IsNull(__o_ellipsis)) ellipsis = HX_("...",ee,0f,23,00);
            	HX_GC_STACKFRAME(&_hx_pos_2537abef62a40d61_882_ellipsize)
HXLINE( 884)		::String path = this->normalize()->toString();
HXLINE( 886)		int _hx_tmp;
HXDLIN( 886)		if (::hx::IsNull( path )) {
HXLINE( 886)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 886)			_hx_tmp = path.length;
            		}
HXDLIN( 886)		if ((_hx_tmp <= maxLength)) {
HXLINE( 887)			return path;
            		}
HXLINE( 889)		int ellipsisLen;
HXDLIN( 889)		if (::hx::IsNull( ellipsis )) {
HXLINE( 889)			ellipsisLen = 0;
            		}
            		else {
HXLINE( 889)			ellipsisLen = ellipsis.length;
            		}
HXLINE( 890)		if ((maxLength < ellipsisLen)) {
HXLINE( 891)			int _hx_tmp;
HXDLIN( 891)			if (::hx::IsNull( path )) {
HXLINE( 891)				_hx_tmp = 0;
            			}
            			else {
HXLINE( 891)				_hx_tmp = path.length;
            			}
HXDLIN( 891)			if ((ellipsisLen > _hx_tmp)) {
HXLINE( 892)				int _hx_tmp;
HXDLIN( 892)				if (::hx::IsNull( path )) {
HXLINE( 892)					_hx_tmp = 0;
            				}
            				else {
HXLINE( 892)					_hx_tmp = path.length;
            				}
HXDLIN( 892)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("[maxLength] must not be smaller than ",68,6f,69,ad) + _hx_tmp)));
            			}
HXLINE( 893)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("[maxLength] must not be smaller than ",68,6f,69,ad) + ellipsisLen)));
            		}
HXLINE( 896)		bool processLeftSide = startFromLeft;
HXLINE( 897)		 ::hx::strings::StringBuilder leftPart =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 898)		int leftPartsCount = 0;
HXLINE( 899)		 ::hx::strings::StringBuilder rightPart =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 900)		int rightPartsCount = 0;
HXLINE( 901)		::Array< ::String > pathParts = ::hx::strings::Strings_obj::split8(path,::Array_obj< ::String >::__new(1)->init(0,this->dirSep),null());
HXLINE( 902)		::String str = this->dirSep;
HXDLIN( 902)		int dirSepLen;
HXDLIN( 902)		if (::hx::IsNull( str )) {
HXLINE( 902)			dirSepLen = 0;
            		}
            		else {
HXLINE( 902)			dirSepLen = str.length;
            		}
HXLINE( 904)		{
HXLINE( 904)			int _g = 0;
HXDLIN( 904)			int _g1 = pathParts->length;
HXDLIN( 904)			while((_g < _g1)){
HXLINE( 904)				_g = (_g + 1);
HXDLIN( 904)				int i = (_g - 1);
HXLINE( 905)				::String partToAdd;
HXDLIN( 905)				if (processLeftSide) {
HXLINE( 905)					partToAdd = pathParts->__get(leftPartsCount);
            				}
            				else {
HXLINE( 905)					partToAdd = pathParts->__get(((pathParts->length - rightPartsCount) - 1));
            				}
HXLINE( 906)				int newTotalLength;
HXDLIN( 906)				if (::hx::IsNull( partToAdd )) {
HXLINE( 906)					newTotalLength = 0;
            				}
            				else {
HXLINE( 906)					newTotalLength = partToAdd.length;
            				}
HXDLIN( 906)				int newTotalLength1 = ((((leftPart->len + rightPart->len) + ellipsisLen) + newTotalLength) + dirSepLen);
HXLINE( 908)				if ((newTotalLength1 > maxLength)) {
HXLINE( 909)					goto _hx_goto_24;
            				}
HXLINE( 911)				if (processLeftSide) {
HXLINE( 912)					leftPart->add(partToAdd);
HXLINE( 913)					leftPart->add(this->dirSep);
HXLINE( 914)					leftPartsCount = (leftPartsCount + 1);
HXLINE( 917)					bool _hx_tmp;
HXDLIN( 917)					bool _hx_tmp1;
HXDLIN( 917)					if ((i != 0)) {
HXLINE( 917)						_hx_tmp1 = (i == 1);
            					}
            					else {
HXLINE( 917)						_hx_tmp1 = true;
            					}
HXDLIN( 917)					if (_hx_tmp1) {
HXLINE( 917)						if (::hx::IsNotNull( partToAdd )) {
HXLINE( 917)							_hx_tmp = (partToAdd.length == 0);
            						}
            						else {
HXLINE( 917)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 917)						_hx_tmp = false;
            					}
HXDLIN( 917)					if (_hx_tmp) {
HXLINE( 918)						continue;
            					}
            				}
            				else {
HXLINE( 921)					rightPart->insert(0,partToAdd);
HXLINE( 922)					rightPart->insert(0,this->dirSep);
HXLINE( 923)					rightPartsCount = (rightPartsCount + 1);
            				}
HXLINE( 925)				processLeftSide = !(processLeftSide);
            			}
            			_hx_goto_24:;
            		}
HXLINE( 928)		::String _hx_tmp1 = (::Std_obj::string(leftPart) + ellipsis);
HXDLIN( 928)		return (_hx_tmp1 + ::Std_obj::string(rightPart));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Path_obj,ellipsize,return )

 ::hx::files::Path Path_obj::newPathForString(::String path,bool trimWhiteSpaces){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_933_newPathForString)
HXDLIN( 933)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 933)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Path_obj,newPathForString,return )

 ::hx::files::Path Path_obj::newPathForChild(::String filename){
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_936_newPathForChild)
HXDLIN( 936)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 936)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Path_obj,newPathForChild,return )

 ::hx::files::Path Path_obj::of(::String path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_24_of)
HXLINE(  25)		if (::hx::files::internal::OS_obj::isWindows) {
HXLINE(  26)			return ::hx::files::WindowsPath_obj::of(path,trimWhiteSpaces);
            		}
HXLINE(  27)		return ::hx::files::UnixPath_obj::of(path,trimWhiteSpaces);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_obj,of,return )

 ::hx::files::UnixPath Path_obj::unix(::String path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_55_unix)
HXDLIN(  55)		return ::hx::files::UnixPath_obj::of(path,trimWhiteSpaces);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_obj,unix,return )

 ::hx::files::WindowsPath Path_obj::win(::String path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_92_win)
HXDLIN(  92)		return ::hx::files::WindowsPath_obj::of(path,trimWhiteSpaces);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_obj,win,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dirSep,"dirSep");
	HX_MARK_MEMBER_NAME(pathSep,"pathSep");
	HX_MARK_MEMBER_NAME(extSep,"extSep");
	HX_MARK_MEMBER_NAME(isLocal,"isLocal");
	HX_MARK_MEMBER_NAME(isUnix,"isUnix");
	HX_MARK_MEMBER_NAME(isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(filename,"filename");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dirSep,"dirSep");
	HX_VISIT_MEMBER_NAME(pathSep,"pathSep");
	HX_VISIT_MEMBER_NAME(extSep,"extSep");
	HX_VISIT_MEMBER_NAME(isLocal,"isLocal");
	HX_VISIT_MEMBER_NAME(isUnix,"isUnix");
	HX_VISIT_MEMBER_NAME(isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(filename,"filename");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
}

::hx::Val Path_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { return ::hx::Val( stat_dyn() ); }
		if (HX_FIELD_EQ(inName,"join") ) { return ::hx::Val( join_dyn() ); }
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_root() : root ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toDir") ) { return ::hx::Val( toDir_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dirSep") ) { return ::hx::Val( dirSep ); }
		if (HX_FIELD_EQ(inName,"extSep") ) { return ::hx::Val( extSep ); }
		if (HX_FIELD_EQ(inName,"isRoot") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isRoot() ); }
		if (HX_FIELD_EQ(inName,"isUnix") ) { return ::hx::Val( isUnix ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"isFile") ) { return ::hx::Val( isFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"toFile") ) { return ::hx::Val( toFile_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pathSep") ) { return ::hx::Val( pathSep ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal ); }
		if (HX_FIELD_EQ(inName,"joinAll") ) { return ::hx::Val( joinAll_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { return ::hx::Val( filename ); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { return ::hx::Val( isWindows ); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"ellipsize") ) { return ::hx::Val( ellipsize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isAbsolute") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isAbsolute() ); }
		if (HX_FIELD_EQ(inName,"get_isRoot") ) { return ::hx::Val( get_isRoot_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filenameExt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filenameExt() ); }
		if (HX_FIELD_EQ(inName,"isDirectory") ) { return ::hx::Val( isDirectory_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filenameStem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filenameStem() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assertIsLocal") ) { return ::hx::Val( assertIsLocal_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isAbsolute") ) { return ::hx::Val( get_isAbsolute_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_filenameExt") ) { return ::hx::Val( get_filenameExt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAbsolutePath") ) { return ::hx::Val( getAbsolutePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"newPathForChild") ) { return ::hx::Val( newPathForChild_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_filenameStem") ) { return ::hx::Val( get_filenameStem_dyn() ); }
		if (HX_FIELD_EQ(inName,"newPathForString") ) { return ::hx::Val( newPathForString_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getModificationTime") ) { return ::hx::Val( getModificationTime_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"toStringWithTrailingSeparator") ) { return ::hx::Val( toStringWithTrailingSeparator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"win") ) { outValue = win_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"unix") ) { outValue = unix_dyn(); return true; }
	}
	return false;
}

::hx::Val Path_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::hx::files::Path >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dirSep") ) { dirSep=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extSep") ) { extSep=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isUnix") ) { isUnix=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::hx::files::Path >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pathSep") ) { pathSep=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { isLocal=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { filename=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dirSep",51,a4,5c,bc));
	outFields->push(HX_("pathSep",f9,c2,7a,09));
	outFields->push(HX_("extSep",7d,21,0d,c7));
	outFields->push(HX_("isAbsolute",81,e0,44,3e));
	outFields->push(HX_("isLocal",21,6d,76,15));
	outFields->push(HX_("isRoot",2c,b3,15,69));
	outFields->push(HX_("isUnix",92,8f,10,6b));
	outFields->push(HX_("isWindows",b9,5b,73,ec));
	outFields->push(HX_("filename",c7,2e,6a,77));
	outFields->push(HX_("filenameStem",b0,b1,0b,af));
	outFields->push(HX_("filenameExt",1a,cc,64,72));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("root",22,ee,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Path_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Path_obj,dirSep),HX_("dirSep",51,a4,5c,bc)},
	{::hx::fsString,(int)offsetof(Path_obj,pathSep),HX_("pathSep",f9,c2,7a,09)},
	{::hx::fsString,(int)offsetof(Path_obj,extSep),HX_("extSep",7d,21,0d,c7)},
	{::hx::fsBool,(int)offsetof(Path_obj,isLocal),HX_("isLocal",21,6d,76,15)},
	{::hx::fsBool,(int)offsetof(Path_obj,isUnix),HX_("isUnix",92,8f,10,6b)},
	{::hx::fsBool,(int)offsetof(Path_obj,isWindows),HX_("isWindows",b9,5b,73,ec)},
	{::hx::fsString,(int)offsetof(Path_obj,filename),HX_("filename",c7,2e,6a,77)},
	{::hx::fsObject /*  ::hx::files::Path */ ,(int)offsetof(Path_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::hx::files::Path */ ,(int)offsetof(Path_obj,root),HX_("root",22,ee,ae,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Path_obj_sStaticStorageInfo = 0;
#endif

static ::String Path_obj_sMemberFields[] = {
	HX_("dirSep",51,a4,5c,bc),
	HX_("pathSep",f9,c2,7a,09),
	HX_("extSep",7d,21,0d,c7),
	HX_("get_isAbsolute",ca,68,3a,b4),
	HX_("isLocal",21,6d,76,15),
	HX_("get_isRoot",f5,22,9d,59),
	HX_("isUnix",92,8f,10,6b),
	HX_("isWindows",b9,5b,73,ec),
	HX_("assertIsLocal",fb,52,5d,75),
	HX_("exists",dc,1d,e0,bf),
	HX_("filename",c7,2e,6a,77),
	HX_("get_filenameStem",39,9e,aa,b3),
	HX_("get_filenameExt",b1,83,46,33),
	HX_("getAbsolutePath",72,3d,59,1a),
	HX_("stat",d4,e3,5b,4c),
	HX_("getModificationTime",3f,4a,df,0a),
	HX_("isDirectory",23,a9,c5,ee),
	HX_("isFile",86,93,22,61),
	HX_("join",ea,33,65,46),
	HX_("joinAll",57,4b,7a,57),
	HX_("parent",2a,05,7e,ed),
	HX_("root",22,ee,ae,4b),
	HX_("get_root",ab,a9,69,cb),
	HX_("toDir",92,ee,0d,14),
	HX_("toFile",97,39,75,79),
	HX_("toStringWithTrailingSeparator",b7,26,5c,ce),
	HX_("toString",ac,d0,6e,38),
	HX_("normalize",8d,37,a1,ab),
	HX_("ellipsize",0d,28,42,aa),
	HX_("newPathForString",d5,31,78,5a),
	HX_("newPathForChild",18,ad,14,8c),
	::String(null()) };

::hx::Class Path_obj::__mClass;

void Path_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.Path",ba,b7,79,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Path_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xb99c766c >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Path_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2537abef62a40d61_17_boot)
HXDLIN(  17)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("immutable",42,28,c7,66),null()))));
            	}
}

} // end namespace hx
} // end namespace files
