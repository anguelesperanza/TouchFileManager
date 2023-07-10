#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hx_concurrent_ConcurrentException
#include <hx/concurrent/ConcurrentException.h>
#endif
#ifndef INCLUDED_hx_files_File
#include <hx/files/File.h>
#endif
#ifndef INCLUDED_hx_files_FileCopyOption
#include <hx/files/FileCopyOption.h>
#endif
#ifndef INCLUDED_hx_files_FileMoveOption
#include <hx/files/FileMoveOption.h>
#endif
#ifndef INCLUDED_hx_files_FileRenameOption
#include <hx/files/FileRenameOption.h>
#endif
#ifndef INCLUDED_hx_files_FileWriteMode
#include <hx/files/FileWriteMode.h>
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
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74290f7c86b9138e_52_new,"hx.files.File","new",0x88095e03,"hx.files.File.new","hx/files/File.hx",52,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_56_assertValidPath,"hx.files.File","assertValidPath",0xbcdc3b3e,"hx.files.File.assertValidPath","hx/files/File.hx",56,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_70_openInput,"hx.files.File","openInput",0xbb4b1dc3,"hx.files.File.openInput","hx/files/File.hx",70,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_74_openOutput,"hx.files.File","openOutput",0x97023728,"hx.files.File.openOutput","hx/files/File.hx",74,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_91_appendString,"hx.files.File","appendString",0x89998448,"hx.files.File.appendString","hx/files/File.hx",91,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_133_delete,"hx.files.File","delete",0x81171a68,"hx.files.File.delete","hx/files/File.hx",133,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_165_readAsBytes,"hx.files.File","readAsBytes",0x6b9df206,"hx.files.File.readAsBytes","hx/files/File.hx",165,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_194_readAsString,"hx.files.File","readAsString",0xa856a6d6,"hx.files.File.readAsString","hx/files/File.hx",194,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_231_copyTo,"hx.files.File","copyTo",0xdf7176cd,"hx.files.File.copyTo","hx/files/File.hx",231,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_300_moveTo,"hx.files.File","moveTo",0xe2eb2d29,"hx.files.File.moveTo","hx/files/File.hx",300,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_371_renameTo,"hx.files.File","renameTo",0xe41ef416,"hx.files.File.renameTo","hx/files/File.hx",371,0x8bfb584b)
static const ::String _hx_array_data_a1e3a091_14[] = {
	HX_("/",2f,00,00,00),HX_("\\",5c,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_397_size,"hx.files.File","size",0x837a01be,"hx.files.File.size","hx/files/File.hx",397,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_422_touch,"hx.files.File","touch",0x1ea19422,"hx.files.File.touch","hx/files/File.hx",422,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_443_writeBytes,"hx.files.File","writeBytes",0x8f3ebfc9,"hx.files.File.writeBytes","hx/files/File.hx",443,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_469_writeString,"hx.files.File","writeString",0xb169e3b3,"hx.files.File.writeString","hx/files/File.hx",469,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_507_toString,"hx.files.File","toString",0x1ea5f429,"hx.files.File.toString","hx/files/File.hx",507,0x8bfb584b)
HX_LOCAL_STACK_FRAME(_hx_pos_74290f7c86b9138e_36_of,"hx.files.File","of",0x901b98d4,"hx.files.File.of","hx/files/File.hx",36,0x8bfb584b)
namespace hx{
namespace files{

void File_obj::__construct( ::hx::files::Path path){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_52_new)
HXDLIN(  52)		this->path = path;
            	}

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f2d4483;
}

void File_obj::assertValidPath(::hx::Null< bool >  __o_mustExist){
            		bool mustExist = __o_mustExist.Default(true);
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_56_assertValidPath)
HXLINE(  57)		::String str = this->path->filename;
HXDLIN(  57)		bool _hx_tmp;
HXDLIN(  57)		if (::hx::IsNotNull( str )) {
HXLINE(  57)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(  57)			_hx_tmp = true;
            		}
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  58)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path.filename] must not be empty!",e5,2f,91,99)));
            		}
HXLINE(  60)		if (this->path->exists()) {
HXLINE(  61)			if (!(this->path->isFile())) {
HXLINE(  61)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" exists but is not a file!",28,80,cc,cd))));
            			}
            		}
            		else {
HXLINE(  63)			if (mustExist) {
HXLINE(  63)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" does not exist!",00,75,ac,03))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,assertValidPath,(void))

 ::sys::io::FileInput File_obj::openInput(::hx::Null< bool >  __o_binary){
            		bool binary = __o_binary.Default(true);
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_70_openInput)
HXDLIN(  70)		return ::sys::io::File_obj::read(this->path->toString(),binary);
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,openInput,return )

 ::sys::io::FileOutput File_obj::openOutput( ::hx::files::FileWriteMode mode,::hx::Null< bool >  __o_binary){
            		bool binary = __o_binary.Default(true);
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_74_openOutput)
HXDLIN(  74)		switch((int)(mode->_hx_getIndex())){
            			case (int)0: {
HXLINE(  75)				return ::sys::io::File_obj::write(this->path->toString(),binary);
            			}
            			break;
            			case (int)1: {
HXLINE(  76)				return ::sys::io::File_obj::update(this->path->toString(),binary);
            			}
            			break;
            			case (int)2: {
HXLINE(  77)				return ::sys::io::File_obj::append(this->path->toString(),binary);
            			}
            			break;
            		}
HXLINE(  74)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,openOutput,return )

void File_obj::appendString(::String content){
            	HX_GC_STACKFRAME(&_hx_pos_74290f7c86b9138e_91_appendString)
HXLINE(  93)		this->assertValidPath(false);
HXLINE(  95)		if (::hx::IsNull( content )) {
HXLINE(  96)			return;
            		}
HXLINE(  99)		 ::hx::concurrent::ConcurrentException ex = null();
HXLINE( 100)		 ::sys::io::FileOutput out = ::sys::io::File_obj::append(this->path->toString(),null());
HXLINE( 101)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 102)			out->writeString(content,null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 103)				{
HXLINE( 103)					null();
            				}
HXDLIN( 103)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 104)				ex =  ::hx::concurrent::ConcurrentException_obj::__alloc( HX_CTX ,e);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 106)		out->close();
HXLINE( 107)		if (::hx::IsNotNull( ex )) {
HXLINE( 108)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(ex->toString()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,appendString,(void))

bool File_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_133_delete)
HXLINE( 135)		if (!(this->path->exists())) {
HXLINE( 136)			return false;
            		}
HXLINE( 138)		this->assertValidPath(null());
HXLINE( 141)		::sys::FileSystem_obj::deleteFile(this->path->toString());
HXLINE( 142)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,_hx_delete,return )

 ::haxe::io::Bytes File_obj::readAsBytes(){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_165_readAsBytes)
HXLINE( 166)		if (!(this->path->exists())) {
HXLINE( 167)			return null();
            		}
HXLINE( 169)		this->assertValidPath(null());
HXLINE( 172)		return ::sys::io::File_obj::getBytes(this->path->toString());
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,readAsBytes,return )

::String File_obj::readAsString(::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_194_readAsString)
HXLINE( 195)		if (!(this->path->exists())) {
HXLINE( 196)			return defaultValue;
            		}
HXLINE( 198)		this->assertValidPath(null());
HXLINE( 201)		return ::sys::io::File_obj::getContent(this->path->toString());
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,readAsString,return )

 ::hx::files::File File_obj::copyTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_231_copyTo)
HXLINE( 232)		if (::hx::IsNull( newPath )) {
HXLINE( 233)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be null!",54,a1,d7,21)));
            		}
HXLINE( 235)		this->assertValidPath(null());
HXLINE( 237)		bool trimWhiteSpaces = true;
HXLINE( 238)		bool overwrite = false;
HXLINE( 240)		if (::hx::IsNotNull( options )) {
HXLINE( 240)			int _g = 0;
HXDLIN( 240)			while((_g < options->length)){
HXLINE( 240)				 ::hx::files::FileCopyOption o = options->__get(_g).StaticCast<  ::hx::files::FileCopyOption >();
HXDLIN( 240)				_g = (_g + 1);
HXLINE( 241)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 242)						overwrite = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 243)						trimWhiteSpaces = false;
            					}
            					break;
            				}
            			}
            		}
HXLINE( 247)		 ::hx::files::Path targetPath;
HXDLIN( 247)		 ::hx::strings::internal::_Either2::_Either2 _g = newPath;
HXDLIN( 247)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 248)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE( 247)				targetPath = ::hx::files::Path_obj::of(str,trimWhiteSpaces);
            			}
            			break;
            			case (int)1: {
HXLINE( 249)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXLINE( 247)				targetPath = obj;
            			}
            			break;
            		}
HXLINE( 252)		if ((targetPath->filename == HX_("",00,00,00,00))) {
HXLINE( 253)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be empty!",1a,de,15,49)));
            		}
HXLINE( 255)		::String _hx_tmp = this->path->getAbsolutePath();
HXDLIN( 255)		if ((_hx_tmp == targetPath->getAbsolutePath())) {
HXLINE( 256)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 258)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetPath);
HXDLIN( 258)		 ::hx::files::File targetFile = ::hx::files::File_obj::of(this1,null());
HXLINE( 260)		if (targetPath->exists()) {
HXLINE( 261)			if (!(overwrite)) {
HXLINE( 262)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists!",3f,3e,1c,cf))));
            			}
HXLINE( 264)			if (!(targetPath->isFile())) {
HXLINE( 265)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists and is not a file!",ca,04,c6,44))));
            			}
HXLINE( 267)			targetFile->_hx_delete();
            		}
HXLINE( 271)		::String _hx_tmp1 = this->path->toString();
HXDLIN( 271)		::sys::io::File_obj::copy(_hx_tmp1,targetPath->toString());
HXLINE( 278)		return targetFile;
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,copyTo,return )

 ::hx::files::File File_obj::moveTo( ::hx::strings::internal::_Either2::_Either2 newPath,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_300_moveTo)
HXLINE( 301)		if (::hx::IsNull( newPath )) {
HXLINE( 302)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be null!",54,a1,d7,21)));
            		}
HXLINE( 304)		this->assertValidPath(null());
HXLINE( 306)		bool trimWhiteSpaces = true;
HXLINE( 307)		bool overwrite = false;
HXLINE( 309)		if (::hx::IsNotNull( options )) {
HXLINE( 309)			int _g = 0;
HXDLIN( 309)			while((_g < options->length)){
HXLINE( 309)				 ::hx::files::FileMoveOption o = options->__get(_g).StaticCast<  ::hx::files::FileMoveOption >();
HXDLIN( 309)				_g = (_g + 1);
HXLINE( 310)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 311)						overwrite = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 312)						trimWhiteSpaces = false;
            					}
            					break;
            				}
            			}
            		}
HXLINE( 316)		 ::hx::files::Path targetPath;
HXDLIN( 316)		 ::hx::strings::internal::_Either2::_Either2 _g = newPath;
HXDLIN( 316)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 317)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE( 316)				targetPath = ::hx::files::Path_obj::of(str,trimWhiteSpaces);
            			}
            			break;
            			case (int)1: {
HXLINE( 318)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXLINE( 316)				targetPath = obj;
            			}
            			break;
            		}
HXLINE( 321)		if ((targetPath->filename == HX_("",00,00,00,00))) {
HXLINE( 322)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newPath] must not be empty!",1a,de,15,49)));
            		}
HXLINE( 324)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(targetPath);
HXDLIN( 324)		 ::hx::files::File targetFile = ::hx::files::File_obj::of(this1,null());
HXLINE( 326)		if (targetPath->exists()) {
HXLINE( 328)			::String _hx_tmp = this->path->getAbsolutePath();
HXDLIN( 328)			if ((_hx_tmp == targetPath->getAbsolutePath())) {
HXLINE( 329)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
HXLINE( 331)			if (!(overwrite)) {
HXLINE( 332)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists!",3f,3e,1c,cf))));
            			}
HXLINE( 334)			if (targetPath->isDirectory()) {
HXLINE( 335)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newPath] \"",b5,60,94,15) + ::Std_obj::string(targetPath)) + HX_("\" already exists and is a directory!",a2,a5,50,15))));
            			}
HXLINE( 337)			targetFile->_hx_delete();
            		}
HXLINE( 341)		::String _hx_tmp = this->path->toString();
HXDLIN( 341)		::sys::FileSystem_obj::rename(_hx_tmp,targetPath->toString());
HXLINE( 348)		return targetFile;
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,moveTo,return )

 ::hx::files::File File_obj::renameTo(::String newFileName,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_371_renameTo)
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		if (::hx::IsNotNull( newFileName )) {
HXLINE( 372)			_hx_tmp = (newFileName.length == 0);
            		}
            		else {
HXLINE( 372)			_hx_tmp = true;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 373)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[newFileName] must not be null or empty!",60,29,88,c4)));
            		}
HXLINE( 375)		if (::hx::strings::Strings_obj::containsAny(newFileName,::Array_obj< ::String >::fromData( _hx_array_data_a1e3a091_14,2))) {
HXLINE( 376)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[newFileName] \"",33,8a,d3,d4) + newFileName) + HX_("\" must not contain directory separators!",0e,59,07,e1))));
            		}
HXLINE( 378)		::Array< ::Dynamic> opts = null();
HXLINE( 380)		if (::hx::IsNotNull( options )) {
HXLINE( 380)			int _g = 0;
HXDLIN( 380)			while((_g < options->length)){
HXLINE( 380)				 ::hx::files::FileRenameOption o = options->__get(_g).StaticCast<  ::hx::files::FileRenameOption >();
HXDLIN( 380)				_g = (_g + 1);
HXLINE( 382)				opts = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::files::FileMoveOption_obj::OVERWRITE_dyn());
            			}
            		}
HXLINE( 386)		if (::hx::IsNull( this->path->parent )) {
HXLINE( 387)			 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(newFileName);
HXDLIN( 387)			return this->moveTo(this1,opts);
            		}
HXLINE( 390)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(newFileName);
HXDLIN( 390)		 ::hx::strings::internal::_Either2::_Either2 this2 = ::hx::strings::internal::_Either2::_Either2_obj::b(this->path->parent->join(this1,null()));
HXDLIN( 390)		return this->moveTo(this2,opts);
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,renameTo,return )

int File_obj::size(){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_397_size)
HXLINE( 398)		if (!(this->path->exists())) {
HXLINE( 399)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" doesn't exists!",e9,8b,9e,7e))));
            		}
HXLINE( 402)		 ::Dynamic stat = ::sys::FileSystem_obj::stat(this->path->toString());
HXLINE( 403)		return ( (int)(stat->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,size,return )

void File_obj::touch(){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_422_touch)
HXLINE( 423)		this->assertValidPath(false);
HXLINE( 426)		if (this->path->exists()) {
HXLINE( 427)			if (::hx::files::internal::OS_obj::isWindows) {
HXLINE( 428)				::Sys_obj::command(((HX_("copy /b \"",60,c4,fb,7e) + this->path->toString()) + HX_("\"+,,",89,08,9a,16)),null());
            			}
            			else {
HXLINE( 430)				::Sys_obj::command(((HX_("touch \"",81,e1,f7,d8) + this->path->toString()) + HX_("\"",22,00,00,00)),null());
            			}
            		}
            		else {
HXLINE( 433)			this->writeString(HX_("",00,00,00,00),false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,touch,(void))

void File_obj::writeBytes( ::haxe::io::Bytes content,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_443_writeBytes)
HXLINE( 445)		this->assertValidPath(false);
HXLINE( 447)		bool _hx_tmp;
HXDLIN( 447)		if (this->path->exists()) {
HXLINE( 447)			_hx_tmp = !(overwrite);
            		}
            		else {
HXLINE( 447)			_hx_tmp = false;
            		}
HXDLIN( 447)		if (_hx_tmp) {
HXLINE( 448)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" already exists!",3f,3e,1c,cf))));
            		}
HXLINE( 451)		::sys::io::File_obj::saveBytes(this->path->toString(),content);
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,writeBytes,(void))

void File_obj::writeString(::String content,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_469_writeString)
HXLINE( 471)		this->assertValidPath(false);
HXLINE( 473)		bool _hx_tmp;
HXDLIN( 473)		if (this->path->exists()) {
HXLINE( 473)			_hx_tmp = !(overwrite);
            		}
            		else {
HXLINE( 473)			_hx_tmp = false;
            		}
HXDLIN( 473)		if (_hx_tmp) {
HXLINE( 474)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("[path] \"",1f,ae,70,5e) + ::Std_obj::string(this->path)) + HX_("\" already exists!",3f,3e,1c,cf))));
            		}
HXLINE( 476)		if (::hx::IsNull( content )) {
HXLINE( 477)			return;
            		}
HXLINE( 483)		::String dir = ::haxe::io::Path_obj::directory(this->path->toString());
HXLINE( 484)		if (!(::sys::FileSystem_obj::exists(dir))) {
HXLINE( 485)			::sys::FileSystem_obj::createDirectory(dir);
            		}
HXLINE( 486)		 ::sys::io::FileOutput output = ::sys::io::File_obj::write(this->path->toString(),false);
HXLINE( 487)		output->writeString(content,null());
HXLINE( 488)		output->close();
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,writeString,(void))

::String File_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_74290f7c86b9138e_507_toString)
HXDLIN( 507)		return this->path->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,toString,return )

 ::hx::files::File File_obj::of( ::hx::strings::internal::_Either2::_Either2 path,::hx::Null< bool >  __o_trimWhiteSpaces){
            		bool trimWhiteSpaces = __o_trimWhiteSpaces.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_74290f7c86b9138e_36_of)
HXLINE(  37)		if (::hx::IsNull( path )) {
HXLINE(  38)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[path] must not be null",03,20,29,72)));
            		}
HXLINE(  40)		 ::hx::strings::internal::_Either2::_Either2 _g = path;
HXDLIN(  40)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  41)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXDLIN(  41)				return  ::hx::files::File_obj::__alloc( HX_CTX ,::hx::files::Path_obj::of(str,trimWhiteSpaces));
            			}
            			break;
            			case (int)1: {
HXLINE(  42)				 ::hx::files::Path obj = ( ( ::hx::files::Path)(_g->_hx_getObject(0)) );
HXDLIN(  42)				return  ::hx::files::File_obj::__alloc( HX_CTX ,obj);
            			}
            			break;
            		}
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,of,return )


::hx::ObjectPtr< File_obj > File_obj::__new( ::hx::files::Path path) {
	::hx::ObjectPtr< File_obj > __this = new File_obj();
	__this->__construct(path);
	return __this;
}

::hx::ObjectPtr< File_obj > File_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::files::Path path) {
	File_obj *__this = (File_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(File_obj), true, "hx.files.File"));
	*(void **)__this = File_obj::_hx_vtable;
	__this->__construct(path);
	return __this;
}

File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
}

::hx::Val File_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"touch") ) { return ::hx::Val( touch_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return ::hx::Val( _hx_delete_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renameTo") ) { return ::hx::Val( renameTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"openInput") ) { return ::hx::Val( openInput_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"openOutput") ) { return ::hx::Val( openOutput_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readAsBytes") ) { return ::hx::Val( readAsBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appendString") ) { return ::hx::Val( appendString_dyn() ); }
		if (HX_FIELD_EQ(inName,"readAsString") ) { return ::hx::Val( readAsString_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"assertValidPath") ) { return ::hx::Val( assertValidPath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
	}
	return false;
}

::hx::Val File_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast<  ::hx::files::Path >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo File_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::files::Path */ ,(int)offsetof(File_obj,path),HX_("path",a5,e5,51,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *File_obj_sStaticStorageInfo = 0;
#endif

static ::String File_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("assertValidPath",1b,45,f7,8a),
	HX_("openInput",e0,33,43,31),
	HX_("openOutput",6b,7a,1d,5a),
	HX_("appendString",4b,5e,7e,bc),
	HX_("delete",2b,c0,d8,6a),
	HX_("readAsBytes",63,89,5d,60),
	HX_("readAsString",d9,80,3b,db),
	HX_("copyTo",90,1c,33,c9),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("renameTo",99,d0,e7,fd),
	HX_("size",c1,a0,53,4c),
	HX_("touch",bf,17,33,14),
	HX_("writeBytes",0c,03,5a,52),
	HX_("writeString",10,7b,29,a6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_("of",17,61,00,00),
	::String(null())
};

void File_obj::__register()
{
	File_obj _hx_dummy;
	File_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.File",91,a0,e3,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(File_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< File_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace files
