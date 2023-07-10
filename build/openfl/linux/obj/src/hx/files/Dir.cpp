#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_hx_files_Dir
#include <hx/files/Dir.h>
#endif
#ifndef INCLUDED_hx_files_DirCopyOption
#include <hx/files/DirCopyOption.h>
#endif
#ifndef INCLUDED_hx_files_DirMoveOption
#include <hx/files/DirMoveOption.h>
#endif
#ifndef INCLUDED_hx_files_DirRenameOption
#include <hx/files/DirRenameOption.h>
#endif
#ifndef INCLUDED_hx_files_File
#include <hx/files/File.h>
#endif
#ifndef INCLUDED_hx_files_FileCopyOption
#include <hx/files/FileCopyOption.h>
#endif
#ifndef INCLUDED_hx_files_GlobPatterns
#include <hx/files/GlobPatterns.h>
#endif
#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
#ifndef INCLUDED_hx_files_internal_OS
#include <hx/files/internal/OS.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings_internal_Exception
#include <hx/strings/internal/Exception.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e0193c5e30200a1_114_new,"hx.files.Dir","new",0x8d2df1ca,"hx.files.Dir.new","hx/files/Dir.hx",114,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_120_assertValidPath,"hx.files.Dir","assertValidPath",0xa8b2dd85,"hx.files.Dir.assertValidPath","hx/files/Dir.hx",120,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_144_create,"hx.files.Dir","create",0x099083d2,"hx.files.Dir.create","hx/files/Dir.hx",144,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_252_copyTo,"hx.files.Dir","copyTo",0x56b43966,"hx.files.Dir.copyTo","hx/files/Dir.hx",252,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_257_copyTo,"hx.files.Dir","copyTo",0x56b43966,"hx.files.Dir.copyTo","hx/files/Dir.hx",257,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_197_copyTo,"hx.files.Dir","copyTo",0x56b43966,"hx.files.Dir.copyTo","hx/files/Dir.hx",197,0x40e6c928)
static const bool _hx_array_data_701304d8_7[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_271_isEmpty,"hx.files.Dir","isEmpty",0x4fd7fcad,"hx.files.Dir.isEmpty","hx/files/Dir.hx",271,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_321_delete,"hx.files.Dir","delete",0xf859dd01,"hx.files.Dir.delete","hx/files/Dir.hx",321,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_322_delete,"hx.files.Dir","delete",0xf859dd01,"hx.files.Dir.delete","hx/files/Dir.hx",322,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_306_delete,"hx.files.Dir","delete",0xf859dd01,"hx.files.Dir.delete","hx/files/Dir.hx",306,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_354_find,"hx.files.Dir","find",0xf5beeb8f,"hx.files.Dir.find","hx/files/Dir.hx",354,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_358_find,"hx.files.Dir","find",0xf5beeb8f,"hx.files.Dir.find","hx/files/Dir.hx",358,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_339_find,"hx.files.Dir","find",0xf5beeb8f,"hx.files.Dir.find","hx/files/Dir.hx",339,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_384_findDirs,"hx.files.Dir","findDirs",0x5a9ff1b5,"hx.files.Dir.findDirs","hx/files/Dir.hx",384,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_382_findDirs,"hx.files.Dir","findDirs",0x5a9ff1b5,"hx.files.Dir.findDirs","hx/files/Dir.hx",382,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_404_findFiles,"hx.files.Dir","findFiles",0x181c1c68,"hx.files.Dir.findFiles","hx/files/Dir.hx",404,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_402_findFiles,"hx.files.Dir","findFiles",0x181c1c68,"hx.files.Dir.findFiles","hx/files/Dir.hx",402,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_420_list,"hx.files.Dir","list",0xf9b637b4,"hx.files.Dir.list","hx/files/Dir.hx",420,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_462_listDirs,"hx.files.Dir","listDirs",0xe800b45a,"hx.files.Dir.listDirs","hx/files/Dir.hx",462,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_477_listFiles,"hx.files.Dir","listFiles",0x3f65aa23,"hx.files.Dir.listFiles","hx/files/Dir.hx",477,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_496_moveTo,"hx.files.Dir","moveTo",0x5a2defc2,"hx.files.Dir.moveTo","hx/files/Dir.hx",496,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_570_renameTo,"hx.files.Dir","renameTo",0xc38a4eef,"hx.files.Dir.renameTo","hx/files/Dir.hx",570,0x40e6c928)
static const ::String _hx_array_data_701304d8_30[] = {
	HX_("/",2f,00,00,00),HX_("\\",5c,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_596_setCWD,"hx.files.Dir","setCWD",0xfce41584,"hx.files.Dir.setCWD","hx/files/Dir.hx",596,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_622_size,"hx.files.Dir","size",0xfe56bc17,"hx.files.Dir.size","hx/files/Dir.hx",622,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_617_size,"hx.files.Dir","size",0xfe56bc17,"hx.files.Dir.size","hx/files/Dir.hx",617,0x40e6c928)
static const int _hx_array_data_701304d8_34[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_637_walk,"hx.files.Dir","walk",0x00f5785f,"hx.files.Dir.walk","hx/files/Dir.hx",637,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_657_toString,"hx.files.Dir","toString",0xfe114f02,"hx.files.Dir.toString","hx/files/Dir.hx",657,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_41_getCWD,"hx.files.Dir","getCWD",0x309bc110,"hx.files.Dir.getCWD","hx/files/Dir.hx",41,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_58_getUserHome,"hx.files.Dir","getUserHome",0x9b24682a,"hx.files.Dir.getUserHome","hx/files/Dir.hx",58,0x40e6c928)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0193c5e30200a1_98_of,"hx.files.Dir","of",0xd190daed,"hx.files.Dir.of","hx/files/Dir.hx",98,0x40e6c928)
namespace hx{
namespace files{

void Dir_obj::__construct( ::hx::files::Path path){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_114_new)
HXDLIN( 114)		this->path = path;
            	}

Dynamic Dir_obj::__CreateEmpty() { return new Dir_obj; }

void *Dir_obj::_hx_vtable = 0;

Dynamic Dir_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Dir_obj > _hx_result = new Dir_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Dir_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c53ad8a;
}

void Dir_obj::assertValidPath(::hx::Null< bool >  __o_mustExist){
            		bool mustExist = __o_mustExist.Default(true);
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_120_assertValidPath)
HXLINE( 121)		::String str = this->path->filename;
HXDLIN( 121)		bool _hx_tmp;
HXDLIN( 121)		if (::hx::IsNotNull( str )) {
HXLINE( 121)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE( 121)			_hx_tmp = true;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 122)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path.filename] must not be null or empty!",69,e3,de,94)));
            		}
HXLINE( 124)		if (this->path->exists()) {
HXLINE( 125)			if (!(this->path->isDirectory())) {
HXLINE( 125)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" exists but is not a directory!",31,60,82,a9))));
            			}
            		}
            		else {
HXLINE( 127)			if (mustExist) {
HXLINE( 127)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" does not exist!",00,75,ac,03))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dir_obj,assertValidPath,(void))

bool Dir_obj::create(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_144_create)
HXLINE( 146)		this->assertValidPath(false);
HXLINE( 148)		if (this->path->exists()) {
HXLINE( 149)			return false;
            		}
HXLINE( 167)		::sys::FileSystem_obj::createDirectory(this->path->toString());
HXLINE( 168)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,create,return )

 ::hx::files::Dir Dir_obj::copyTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,onFile,int,sourcPathLen,::Array< bool >,merge, ::hx::files::Dir,targetDir) HXARGC(1)
            		void _hx_run( ::hx::files::File file){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_252_copyTo)
HXLINE( 253)			 ::hx::files::Path targetDir1 = targetDir->path;
HXDLIN( 253)			 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(file->path->toString().substr(sourcPathLen,null()));
HXDLIN( 253)			 ::hx::strings::internal::_Either2::_Either2 this2 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetDir1->join(this1,null()));
HXDLIN( 253)			 ::hx::files::File targetDirFile = ::hx::files::File_obj::of(this2,null());
HXLINE( 254)			 ::hx::strings::internal::_Either2::_Either2 this3 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetDirFile->path);
HXDLIN( 254)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 254)			if (merge->__get(0)) {
HXLINE( 254)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::files::FileCopyOption_obj::OVERWRITE_dyn());
            			}
            			else {
HXLINE( 254)				_hx_tmp = null();
            			}
HXDLIN( 254)			file->copyTo(this3,_hx_tmp);
HXLINE( 255)			if (::hx::IsNotNull( onFile->__get(0) )) {
HXLINE( 255)				onFile->__get(0)(file,targetDirFile);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,int,sourcPathLen, ::hx::files::Dir,targetDir,::Array< ::Dynamic>,onDir) HXARGC(1)
            		bool _hx_run( ::hx::files::Dir dir){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_257_copyTo)
HXLINE( 258)			 ::hx::files::Path targetDir1 = targetDir->path;
HXDLIN( 258)			 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(dir->path->toString().substr(sourcPathLen,null()));
HXDLIN( 258)			 ::hx::strings::internal::_Either2::_Either2 this2 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetDir1->join(this1,null()));
HXDLIN( 258)			 ::hx::files::Dir targetDirDir = ::hx::files::Dir_obj::of(this2,null());
HXLINE( 259)			targetDirDir->create();
HXLINE( 260)			if (::hx::IsNotNull( onDir->__get(0) )) {
HXLINE( 260)				onDir->__get(0)(dir,targetDirDir);
            			}
HXLINE( 261)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_197_copyTo)
HXLINE( 198)		this->assertValidPath(null());
HXLINE( 200)		if (::hx::IsNull( newPath )) {
HXLINE( 201)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be null or empty!",9e,4e,bc,29)));
            		}
HXLINE( 203)		bool trimWhiteSpaces = true;
HXLINE( 204)		bool overwrite = false;
HXLINE( 205)		::Array< bool > merge = ::Array_obj< bool >::fromData( _hx_array_data_701304d8_7,1);
HXLINE( 206)		::Array< ::Dynamic> onFile = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 207)		::Array< ::Dynamic> onDir = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 209)		if (::hx::IsNotNull( options )) {
HXLINE( 209)			int _g = 0;
HXDLIN( 209)			while((_g < options->length)){
HXLINE( 209)				 ::hx::files::DirCopyOption o = options->__get(_g).StaticCast<  ::hx::files::DirCopyOption >();
HXDLIN( 209)				_g = (_g + 1);
HXLINE( 210)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 211)						overwrite = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 212)						merge[0] = true;
            					}
            					break;
            					case (int)2: {
HXLINE( 213)						trimWhiteSpaces = false;
            					}
            					break;
            					case (int)3: {
HXLINE( 214)						 ::Dynamic f = o->_hx_getObject(0);
HXDLIN( 214)						 ::Dynamic d = o->_hx_getObject(1);
HXDLIN( 214)						{
HXLINE( 214)							onFile[0] = f;
HXDLIN( 214)							onDir[0] = d;
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 218)		 ::hx::files::Path targetPath;
HXDLIN( 218)		 ::hx::strings::internal::_Either2::_Either2 _g = newPath;
HXDLIN( 218)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 219)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE( 218)				targetPath = ::hx::files::Path_obj::of(str,trimWhiteSpaces);
            			}
            			break;
            			case (int)1: {
HXLINE( 220)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXLINE( 218)				targetPath = obj;
            			}
            			break;
            		}
HXLINE( 223)		if ((targetPath->filename == HX_("",00,00,00,00))) {
HXLINE( 224)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be null or empty!",9e,4e,bc,29)));
            		}
HXLINE( 226)		::String _hx_tmp = this->path->getAbsolutePath();
HXDLIN( 226)		if ((_hx_tmp == targetPath->getAbsolutePath())) {
HXLINE( 227)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 229)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetPath);
HXDLIN( 229)		 ::hx::files::Dir targetDir = ::hx::files::Dir_obj::of(this1,null());
HXLINE( 231)		if (targetPath->exists()) {
HXLINE( 232)			bool _hx_tmp;
HXDLIN( 232)			if (!(overwrite)) {
HXLINE( 232)				_hx_tmp = !(merge->__get(0));
            			}
            			else {
HXLINE( 232)				_hx_tmp = false;
            			}
HXDLIN( 232)			if (_hx_tmp) {
HXLINE( 233)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists!",3f,3e,1c,cf))));
            			}
HXLINE( 235)			if (!(targetPath->isDirectory())) {
HXLINE( 236)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists and is not a directory!",4f,d0,5a,2d))));
            			}
HXLINE( 238)			if (!(merge->__get(0))) {
HXLINE( 239)				targetDir->_hx_delete(true);
            			}
            		}
HXLINE( 249)		int sourcPathLen = this->path->toStringWithTrailingSeparator().length;
HXLINE( 250)		targetDir->create();
HXLINE( 251)		this->walk( ::Dynamic(new _hx_Closure_0(onFile,sourcPathLen,merge,targetDir)), ::Dynamic(new _hx_Closure_1(sourcPathLen,targetDir,onDir)));
HXLINE( 264)		return targetDir;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dir_obj,copyTo,return )

bool Dir_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_271_isEmpty)
HXLINE( 272)		this->assertValidPath(false);
HXLINE( 274)		if (!(this->path->exists())) {
HXLINE( 275)			return true;
            		}
HXLINE( 278)		return (::sys::FileSystem_obj::readDirectory(this->path->toString())->length == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,isEmpty,return )

bool Dir_obj::_hx_delete(::hx::Null< bool >  __o_recursively){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::hx::files::File file){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_321_delete)
HXLINE( 321)			file->_hx_delete();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,dirs) HXARGC(1)
            		bool _hx_run( ::hx::files::Dir dir){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_322_delete)
HXLINE( 322)			dirs->push(dir);
HXDLIN( 322)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool recursively = __o_recursively.Default(false);
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_306_delete)
HXLINE( 308)		if (!(this->path->exists())) {
HXLINE( 309)			return false;
            		}
HXLINE( 311)		this->assertValidPath(null());
HXLINE( 313)		bool _hx_tmp;
HXDLIN( 313)		if (!(recursively)) {
HXLINE( 313)			_hx_tmp = !(this->isEmpty());
            		}
            		else {
HXLINE( 313)			_hx_tmp = false;
            		}
HXDLIN( 313)		if (_hx_tmp) {
HXLINE( 314)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Cannot delete directory \"",17,f3,6d,9d) + ::Std_obj::string(this->path)) + HX_("\" because it is not empty!",3a,bb,e1,63))));
            		}
HXLINE( 319)		::Array< ::Dynamic> dirs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 320)		this->walk( ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1(dirs)));
HXLINE( 324)		dirs->reverse();
HXLINE( 325)		dirs->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 326)		{
HXLINE( 326)			int _g = 0;
HXDLIN( 326)			while((_g < dirs->length)){
HXLINE( 326)				 ::hx::files::Dir dir = dirs->__get(_g).StaticCast<  ::hx::files::Dir >();
HXDLIN( 326)				_g = (_g + 1);
HXLINE( 327)				::sys::FileSystem_obj::deleteDirectory(dir->path->toString());
            			}
            		}
HXLINE( 331)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dir_obj,_hx_delete,return )

void Dir_obj::find(::String globPattern, ::Dynamic onFileMatch, ::Dynamic onDirMatch){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onFileMatch,int,searchRootOffset, ::EReg,filePattern) HXARGC(1)
            		void _hx_run( ::hx::files::File file){
            			HX_GC_STACKFRAME(&_hx_pos_8e0193c5e30200a1_354_find)
HXLINE( 354)			 ::EReg filePattern1 = filePattern;
HXDLIN( 354)			::String _hx_tmp = file->path->toString();
HXDLIN( 354)			if (filePattern1->match(( (::String)(::hx::strings::Strings_obj::substr8(_hx_tmp,searchRootOffset,null())) ))) {
HXLINE( 355)				if (::hx::IsNotNull( onFileMatch )) {
HXLINE( 355)					onFileMatch(file);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,int,searchRootOffset, ::EReg,filePattern, ::Dynamic,onDirMatch) HXARGC(1)
            		bool _hx_run( ::hx::files::Dir dir){
            			HX_GC_STACKFRAME(&_hx_pos_8e0193c5e30200a1_358_find)
HXLINE( 360)			 ::EReg filePattern1 = filePattern;
HXDLIN( 360)			::String _hx_tmp = dir->path->toString();
HXDLIN( 360)			if (filePattern1->match(( (::String)(::hx::strings::Strings_obj::substr8(_hx_tmp,searchRootOffset,null())) ))) {
HXLINE( 361)				if (::hx::IsNotNull( onDirMatch )) {
HXLINE( 361)					onDirMatch(dir);
            				}
            			}
HXLINE( 363)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_8e0193c5e30200a1_339_find)
HXLINE( 341)		if (!(this->path->exists())) {
HXLINE( 342)			return;
            		}
HXLINE( 344)		this->assertValidPath(null());
HXLINE( 346)		::String p = this->path->toString();
HXLINE( 347)		::String searchRootPath = (p + ::hx::strings::Strings_obj::substringBeforeLast(::hx::strings::Strings_obj::substringBefore(globPattern,HX_("*",2a,00,00,00),null()),HX_("/",2f,00,00,00),null()));
HXLINE( 348)		::String str = ::hx::files::GlobPatterns_obj::toRegEx(globPattern);
HXDLIN( 348)		::String opt = HX_("",00,00,00,00);
HXDLIN( 348)		if (::hx::IsNull( opt )) {
HXLINE( 348)			opt = HX_("",00,00,00,00);
            		}
HXDLIN( 348)		if (::hx::IsNull( str )) {
HXLINE( 348)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[str] must not be null",39,a9,3f,f6)));
            		}
HXDLIN( 348)		 ::EReg filePattern =  ::EReg_obj::__alloc( HX_CTX ,str,opt);
HXLINE( 349)		int searchRootOffset;
HXDLIN( 349)		if (::hx::strings::Strings_obj::endsWith(p,this->path->dirSep)) {
HXLINE( 349)			if (::hx::IsNull( p )) {
HXLINE( 349)				searchRootOffset = 0;
            			}
            			else {
HXLINE( 349)				searchRootOffset = p.length;
            			}
            		}
            		else {
HXLINE( 349)			int searchRootOffset1;
HXDLIN( 349)			if (::hx::IsNull( p )) {
HXLINE( 349)				searchRootOffset1 = 0;
            			}
            			else {
HXLINE( 349)				searchRootOffset1 = p.length;
            			}
HXDLIN( 349)			searchRootOffset = (searchRootOffset1 + 1);
            		}
HXLINE( 351)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(searchRootPath);
HXDLIN( 351)		::hx::files::Dir_obj::of(this1,null())->walk( ::Dynamic(new _hx_Closure_0(onFileMatch,searchRootOffset,filePattern)), ::Dynamic(new _hx_Closure_1(searchRootOffset,filePattern,onDirMatch)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Dir_obj,find,(void))

::Array< ::Dynamic> Dir_obj::findDirs(::String globPattern){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,dirs) HXARGC(1)
            		void _hx_run( ::hx::files::Dir dir){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_384_findDirs)
HXLINE( 384)			dirs->push(dir);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_382_findDirs)
HXLINE( 383)		::Array< ::Dynamic> dirs = ::Array_obj< ::Dynamic>::__new();
HXLINE( 384)		this->find(globPattern,null(), ::Dynamic(new _hx_Closure_0(dirs)));
HXLINE( 385)		return dirs;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dir_obj,findDirs,return )

::Array< ::Dynamic> Dir_obj::findFiles(::String globPattern){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,files) HXARGC(1)
            		void _hx_run( ::hx::files::File file){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_404_findFiles)
HXLINE( 404)			files->push(file);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_402_findFiles)
HXLINE( 403)		::Array< ::Dynamic> files = ::Array_obj< ::Dynamic>::__new();
HXLINE( 404)		this->find(globPattern, ::Dynamic(new _hx_Closure_0(files)),null());
HXLINE( 405)		return files;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dir_obj,findFiles,return )

::Array< ::Dynamic> Dir_obj::list(){
            	HX_GC_STACKFRAME(&_hx_pos_8e0193c5e30200a1_420_list)
HXLINE( 421)		if (!(this->path->exists())) {
HXLINE( 422)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 424)		this->assertValidPath(false);
HXLINE( 426)		::Array< ::String > entries;
HXLINE( 429)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 431)			entries = ::sys::FileSystem_obj::readDirectory(this->path->toString());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 435)				{
HXLINE( 435)					null();
            				}
HXDLIN( 435)				 ::Dynamic ex = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 437)				if (!(this->path->exists())) {
HXLINE( 438)					return ::Array_obj< ::Dynamic>::__new(0);
            				}
HXLINE( 439)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hx::strings::internal::Exception_obj::__alloc( HX_CTX ,ex)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 445)		::haxe::ds::ArraySort_obj::sort(entries,::hx::strings::Strings_obj::compare_dyn());
HXLINE( 446)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 446)		{
HXLINE( 446)			int _g1 = 0;
HXDLIN( 446)			while((_g1 < entries->length)){
HXLINE( 446)				::String entry = entries->__get(_g1);
HXDLIN( 446)				_g1 = (_g1 + 1);
HXDLIN( 446)				_g->push(this->path->newPathForChild(entry));
            			}
            		}
HXDLIN( 446)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,list,return )

::Array< ::Dynamic> Dir_obj::listDirs(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_462_listDirs)
HXDLIN( 462)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 462)		{
HXDLIN( 462)			int _g1 = 0;
HXDLIN( 462)			::Array< ::Dynamic> _g2 = this->list();
HXDLIN( 462)			while((_g1 < _g2->length)){
HXDLIN( 462)				 ::hx::files::Path entry = _g2->__get(_g1).StaticCast<  ::hx::files::Path >();
HXDLIN( 462)				_g1 = (_g1 + 1);
HXDLIN( 462)				if (entry->isDirectory()) {
HXDLIN( 462)					 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(entry);
HXDLIN( 462)					_g->push(::hx::files::Dir_obj::of(this1,null()));
            				}
            			}
            		}
HXDLIN( 462)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,listDirs,return )

::Array< ::Dynamic> Dir_obj::listFiles(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_477_listFiles)
HXDLIN( 477)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 477)		{
HXDLIN( 477)			int _g1 = 0;
HXDLIN( 477)			::Array< ::Dynamic> _g2 = this->list();
HXDLIN( 477)			while((_g1 < _g2->length)){
HXDLIN( 477)				 ::hx::files::Path entry = _g2->__get(_g1).StaticCast<  ::hx::files::Path >();
HXDLIN( 477)				_g1 = (_g1 + 1);
HXDLIN( 477)				if (entry->isFile()) {
HXDLIN( 477)					 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(entry);
HXDLIN( 477)					_g->push(::hx::files::File_obj::of(this1,null()));
            				}
            			}
            		}
HXDLIN( 477)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,listFiles,return )

 ::hx::files::Dir Dir_obj::moveTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_496_moveTo)
HXLINE( 497)		this->assertValidPath(null());
HXLINE( 499)		if (::hx::IsNull( newPath )) {
HXLINE( 500)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be null or empty!",9e,4e,bc,29)));
            		}
HXLINE( 502)		bool trimWhiteSpaces = true;
HXLINE( 503)		bool overwrite = false;
HXLINE( 505)		if (::hx::IsNotNull( options )) {
HXLINE( 505)			int _g = 0;
HXDLIN( 505)			while((_g < options->length)){
HXLINE( 505)				 ::hx::files::DirMoveOption o = options->__get(_g).StaticCast<  ::hx::files::DirMoveOption >();
HXDLIN( 505)				_g = (_g + 1);
HXLINE( 506)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 507)						overwrite = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 508)						trimWhiteSpaces = false;
            					}
            					break;
            				}
            			}
            		}
HXLINE( 512)		 ::hx::files::Path targetPath;
HXDLIN( 512)		 ::hx::strings::internal::_Either2::_Either2 _g = newPath;
HXDLIN( 512)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 513)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE( 512)				targetPath = ::hx::files::Path_obj::of(str,trimWhiteSpaces);
            			}
            			break;
            			case (int)1: {
HXLINE( 514)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXLINE( 512)				targetPath = obj;
            			}
            			break;
            		}
HXLINE( 517)		if ((targetPath->filename == HX_("",00,00,00,00))) {
HXLINE( 518)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be null or empty!",9e,4e,bc,29)));
            		}
HXLINE( 520)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetPath);
HXDLIN( 520)		 ::hx::files::Dir targetDir = ::hx::files::Dir_obj::of(this1,null());
HXLINE( 522)		if (targetPath->exists()) {
HXLINE( 524)			::String _hx_tmp = this->path->getAbsolutePath();
HXDLIN( 524)			if ((_hx_tmp == targetPath->getAbsolutePath())) {
HXLINE( 525)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
HXLINE( 527)			if (!(overwrite)) {
HXLINE( 528)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists!",3f,3e,1c,cf))));
            			}
HXLINE( 530)			if (targetPath->isFile()) {
HXLINE( 531)				 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetPath);
HXDLIN( 531)				::hx::files::File_obj::of(this1,null())->_hx_delete();
            			}
            			else {
HXLINE( 532)				if (targetPath->isDirectory()) {
HXLINE( 533)					targetDir->_hx_delete(null());
            				}
            				else {
HXLINE( 535)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" points to an unknown file system entry!",3f,14,8e,70))));
            				}
            			}
            		}
HXLINE( 539)		::String _hx_tmp = this->path->toString();
HXDLIN( 539)		::sys::FileSystem_obj::rename(_hx_tmp,targetPath->toString());
HXLINE( 547)		return targetDir;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dir_obj,moveTo,return )

 ::hx::files::Dir Dir_obj::renameTo(::String newDirName,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_570_renameTo)
HXLINE( 571)		bool _hx_tmp;
HXDLIN( 571)		if (::hx::IsNotNull( newDirName )) {
HXLINE( 571)			_hx_tmp = (newDirName.length == 0);
            		}
            		else {
HXLINE( 571)			_hx_tmp = true;
            		}
HXDLIN( 571)		if (_hx_tmp) {
HXLINE( 572)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newDirName] must not be null or empty!",c7,f0,63,34)));
            		}
HXLINE( 574)		if (::hx::strings::Strings_obj::containsAny(newDirName,::Array_obj< ::String >::fromData( _hx_array_data_701304d8_30,2))) {
HXLINE( 575)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newDirName] \"",ac,09,5e,8f) + newDirName) + HX_("\" must not contain directory separators!",0e,59,07,e1))));
            		}
HXLINE( 577)		::Array< ::Dynamic> opts = null();
HXLINE( 579)		if (::hx::IsNotNull( options )) {
HXLINE( 579)			int _g = 0;
HXDLIN( 579)			while((_g < options->length)){
HXLINE( 579)				 ::hx::files::DirRenameOption o = options->__get(_g).StaticCast<  ::hx::files::DirRenameOption >();
HXDLIN( 579)				_g = (_g + 1);
HXLINE( 581)				opts = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::files::DirMoveOption_obj::OVERWRITE_dyn());
            			}
            		}
HXLINE( 585)		if (::hx::IsNull( this->path->parent )) {
HXLINE( 586)			 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(newDirName);
HXDLIN( 586)			return this->moveTo(this1,opts);
            		}
HXLINE( 589)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(newDirName);
HXDLIN( 589)		 ::hx::strings::internal::_Either2::_Either2 this2 = ::hx::strings::internal::_Either2::_Either2_obj::b(this->path->parent->join(this1,null()));
HXDLIN( 589)		return this->moveTo(this2,opts);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dir_obj,renameTo,return )

void Dir_obj::setCWD(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_596_setCWD)
HXLINE( 597)		this->assertValidPath(null());
HXLINE( 600)		::Sys_obj::setCwd(this->path->toString());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,setCWD,(void))

int Dir_obj::size(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< int >,size) HXARGC(1)
            		void _hx_run( ::hx::files::File file){
            			HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_622_size)
HXLINE( 622)			::Array< int > size1 = size;
HXDLIN( 622)			int _hx_tmp = 0;
HXDLIN( 622)			int size2 = size1->__get(_hx_tmp);
HXDLIN( 622)			size1[_hx_tmp] = (size2 + file->size());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_617_size)
HXLINE( 618)		if (!(this->path->exists())) {
HXLINE( 619)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" doesn't exists!",e9,8b,9e,7e))));
            		}
HXLINE( 621)		::Array< int > size = ::Array_obj< int >::fromData( _hx_array_data_701304d8_34,1);
HXLINE( 622)		this->walk( ::Dynamic(new _hx_Closure_0(size)),null());
HXLINE( 623)		return size->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,size,return )

void Dir_obj::walk( ::Dynamic onFile, ::Dynamic onDir){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_637_walk)
HXLINE( 638)		::Array< ::Dynamic> nodes = this->list();
HXLINE( 639)		while((nodes->length > 0)){
HXLINE( 641)			 ::hx::files::Path node = nodes->shift().StaticCast<  ::hx::files::Path >();
HXLINE( 642)			if (node->isDirectory()) {
HXLINE( 643)				 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(node);
HXDLIN( 643)				 ::hx::files::Dir dir = ::hx::files::Dir_obj::of(this1,null());
HXLINE( 644)				bool _hx_tmp;
HXDLIN( 644)				if (::hx::IsNotNull( onDir )) {
HXLINE( 644)					_hx_tmp = ( (bool)(onDir(dir)) );
            				}
            				else {
HXLINE( 644)					_hx_tmp = true;
            				}
HXDLIN( 644)				if (_hx_tmp) {
HXLINE( 645)					nodes = nodes->concat(dir->list());
            				}
            			}
            			else {
HXLINE( 647)				if (::hx::IsNotNull( onFile )) {
HXLINE( 648)					 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(node);
HXDLIN( 648)					onFile(::hx::files::File_obj::of(this1,null()));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dir_obj,walk,(void))

::String Dir_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_657_toString)
HXDLIN( 657)		return this->path->toStringWithTrailingSeparator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,toString,return )

 ::hx::files::Dir Dir_obj::getCWD(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_41_getCWD)
HXDLIN(  41)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(::Sys_obj::getCwd());
HXDLIN(  41)		return ::hx::files::Dir_obj::of(this1,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,getCWD,return )

 ::hx::files::Dir Dir_obj::getUserHome(){
            	HX_STACKFRAME(&_hx_pos_8e0193c5e30200a1_58_getUserHome)
HXLINE(  77)		if (::hx::files::internal::OS_obj::isWindows) {
HXLINE(  79)			::String value = ::Sys_obj::getEnv(HX_("HOMEDRIVE",6b,fe,b5,70));
HXDLIN(  79)			 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a((value + ::Sys_obj::getEnv(HX_("HOMEPATH",44,3b,83,a4))));
HXDLIN(  79)			return ::hx::files::Dir_obj::of(this1,null());
            		}
HXLINE(  81)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(::Sys_obj::getEnv(HX_("HOME",1f,92,d3,2f)));
HXDLIN(  81)		return ::hx::files::Dir_obj::of(this1,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Dir_obj,getUserHome,return )

 ::hx::files::Dir Dir_obj::of( ::hx::strings::internal::_Either2::_Either2 path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_8e0193c5e30200a1_98_of)
HXLINE(  99)		if (::hx::IsNull( path )) {
HXLINE( 100)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path] must not be null",03,20,29,72)));
            		}
HXLINE( 102)		 ::hx::strings::internal::_Either2::_Either2 _g = path;
HXDLIN( 102)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 103)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXDLIN( 103)				return  ::hx::files::Dir_obj::__alloc( HX_CTX ,::hx::files::Path_obj::of(str,trimWhiteSpaces));
            			}
            			break;
            			case (int)1: {
HXLINE( 104)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXDLIN( 104)				return  ::hx::files::Dir_obj::__alloc( HX_CTX ,obj);
            			}
            			break;
            		}
HXLINE( 102)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dir_obj,of,return )


::hx::ObjectPtr< Dir_obj > Dir_obj::__new( ::hx::files::Path path) {
	::hx::ObjectPtr< Dir_obj > __this = new Dir_obj();
	__this->__construct(path);
	return __this;
}

::hx::ObjectPtr< Dir_obj > Dir_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path path) {
	Dir_obj *__this = (Dir_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Dir_obj), true, "hx.files.Dir"));
	*(void **)__this = Dir_obj::_hx_vtable;
	__this->__construct(path);
	return __this;
}

Dir_obj::Dir_obj()
{
}

void Dir_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dir);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_END_CLASS();
}

void Dir_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
}

::hx::Val Dir_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"find") ) { return ::hx::Val( find_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size_dyn() ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return ::hx::Val( walk_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"delete") ) { return ::hx::Val( _hx_delete_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCWD") ) { return ::hx::Val( setCWD_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findDirs") ) { return ::hx::Val( findDirs_dyn() ); }
		if (HX_FIELD_EQ(inName,"listDirs") ) { return ::hx::Val( listDirs_dyn() ); }
		if (HX_FIELD_EQ(inName,"renameTo") ) { return ::hx::Val( renameTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findFiles") ) { return ::hx::Val( findFiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"listFiles") ) { return ::hx::Val( listFiles_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"assertValidPath") ) { return ::hx::Val( assertValidPath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Dir_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getCWD") ) { outValue = getCWD_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getUserHome") ) { outValue = getUserHome_dyn(); return true; }
	}
	return false;
}

::hx::Val Dir_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast<  ::hx::files::Path >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dir_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Dir_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::files::Path */ ,(int)offsetof(Dir_obj,path),HX_("path",a5,e5,51,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Dir_obj_sStaticStorageInfo = 0;
#endif

static ::String Dir_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("assertValidPath",1b,45,f7,8a),
	HX_("create",fc,66,0f,7c),
	HX_("copyTo",90,1c,33,c9),
	HX_("isEmpty",43,de,5f,0c),
	HX_("delete",2b,c0,d8,6a),
	HX_("find",39,d0,bb,43),
	HX_("findDirs",5f,73,fd,94),
	HX_("findFiles",7e,0f,90,ef),
	HX_("list",5e,1c,b3,47),
	HX_("listDirs",04,36,5e,22),
	HX_("listFiles",39,9d,d9,16),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("renameTo",99,d0,e7,fd),
	HX_("setCWD",ae,f8,62,6f),
	HX_("size",c1,a0,53,4c),
	HX_("walk",09,5d,f2,4e),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Dir_obj::__mClass;

static ::String Dir_obj_sStaticFields[] = {
	HX_("getCWD",3a,a4,1a,a3),
	HX_("getUserHome",c0,cc,cb,2d),
	HX_("of",17,61,00,00),
	::String(null())
};

void Dir_obj::__register()
{
	Dir_obj _hx_dummy;
	Dir_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.Dir",d8,04,13,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Dir_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Dir_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Dir_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Dir_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dir_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dir_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace files
