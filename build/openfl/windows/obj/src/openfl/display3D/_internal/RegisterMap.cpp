// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_RegisterMap
#include <openfl/display3D/_internal/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_DestRegister
#include <openfl/display3D/_internal/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterMapEntry
#include <openfl/display3D/_internal/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage
#include <openfl/display3D/_internal/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister
#include <openfl/display3D/_internal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister
#include <openfl/display3D/_internal/_AGALConverter/SourceRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_598_new,"openfl.display3D._internal.RegisterMap","new",0xf04350e0,"openfl.display3D._internal.RegisterMap.new","openfl/display3D/_internal/AGALConverter.hx",598,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_606_add,"openfl.display3D._internal.RegisterMap","add",0xf03972a1,"openfl.display3D._internal.RegisterMap.add","openfl/display3D/_internal/AGALConverter.hx",606,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_630_addDR,"openfl.display3D._internal.RegisterMap","addDR",0x8774586f,"openfl.display3D._internal.RegisterMap.addDR","openfl/display3D/_internal/AGALConverter.hx",630,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_635_addSaR,"openfl.display3D._internal.RegisterMap","addSaR",0xfe6477e3,"openfl.display3D._internal.RegisterMap.addSaR","openfl/display3D/_internal/AGALConverter.hx",635,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_639_addSR,"openfl.display3D._internal.RegisterMap","addSR",0x87746580,"openfl.display3D._internal.RegisterMap.addSR","openfl/display3D/_internal/AGALConverter.hx",639,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_651_getRegisterUsage,"openfl.display3D._internal.RegisterMap","getRegisterUsage",0x90c2f8c8,"openfl.display3D._internal.RegisterMap.getRegisterUsage","openfl/display3D/_internal/AGALConverter.hx",651,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_661_getUsage,"openfl.display3D._internal.RegisterMap","getUsage",0xd3951c2b,"openfl.display3D._internal.RegisterMap.getUsage","openfl/display3D/_internal/AGALConverter.hx",661,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_677_toGLSL,"openfl.display3D._internal.RegisterMap","toGLSL",0xd9642879,"openfl.display3D._internal.RegisterMap.toGLSL","openfl/display3D/_internal/AGALConverter.hx",677,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_684_toGLSL,"openfl.display3D._internal.RegisterMap","toGLSL",0xd9642879,"openfl.display3D._internal.RegisterMap.toGLSL","openfl/display3D/_internal/AGALConverter.hx",684,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_674_toGLSL,"openfl.display3D._internal.RegisterMap","toGLSL",0xd9642879,"openfl.display3D._internal.RegisterMap.toGLSL","openfl/display3D/_internal/AGALConverter.hx",674,0x4de1651d)
static const ::String _hx_array_data_cad9a0ee_13[] = {
	HX_("attribute ",84,a8,71,97),
};
static const ::String _hx_array_data_cad9a0ee_14[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_15[] = {
	HX_("\t",09,00,00,00),
};
static const ::String _hx_array_data_cad9a0ee_16[] = {
	HX_("varying ",b0,25,c9,a4),
};
static const ::String _hx_array_data_cad9a0ee_17[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_18[] = {
	HX_("vec4 ",c0,4c,56,34),
};
static const ::String _hx_array_data_cad9a0ee_19[] = {
	HX_("mat4 ",0c,20,23,03),
};
static const ::String _hx_array_data_cad9a0ee_20[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_cad9a0ee_21[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_cad9a0ee_22[] = {
	HX_("vec4 ",c0,4c,56,34),
};
static const ::String _hx_array_data_cad9a0ee_23[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_cad9a0ee_24[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_25[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_26[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_cad9a0ee_27[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_28[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_29[] = {
	HX_("bool ",b6,20,f8,b6),
};
static const ::String _hx_array_data_cad9a0ee_30[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_31[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_cad9a0ee_32[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_33[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_34[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_cad9a0ee_35[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_36[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_37[] = {
	HX_("bool ",b6,20,f8,b6),
};
static const ::String _hx_array_data_cad9a0ee_38[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_39[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_40[] = {
	HX_(";\n",6f,33,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_596_boot,"openfl.display3D._internal.RegisterMap","boot",0x42bc73b2,"openfl.display3D._internal.RegisterMap.boot","openfl/display3D/_internal/AGALConverter.hx",596,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{

void RegisterMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_598_new)
HXDLIN( 598)		this->mEntries = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic RegisterMap_obj::__CreateEmpty() { return new RegisterMap_obj; }

void *RegisterMap_obj::_hx_vtable = 0;

Dynamic RegisterMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RegisterMap_obj > _hx_result = new RegisterMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RegisterMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x326c9b3c;
}

void RegisterMap_obj::add(int type,::String name,int number, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage){
            	HX_GC_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_606_add)
HXLINE( 607)		{
HXLINE( 607)			int _g = 0;
HXDLIN( 607)			::Array< ::Dynamic> _g1 = this->mEntries;
HXDLIN( 607)			while((_g < _g1->length)){
HXLINE( 607)				 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry = _g1->__get(_g).StaticCast<  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry >();
HXDLIN( 607)				_g = (_g + 1);
HXLINE( 609)				bool _hx_tmp;
HXDLIN( 609)				bool _hx_tmp1;
HXDLIN( 609)				if ((entry->type == type)) {
HXLINE( 609)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 609)					_hx_tmp1 = false;
            				}
HXDLIN( 609)				if (_hx_tmp1) {
HXLINE( 609)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 609)					_hx_tmp = false;
            				}
HXDLIN( 609)				if (_hx_tmp) {
HXLINE( 611)					if (::hx::IsPointerNotEq( entry->usage,usage )) {
HXLINE( 613)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot use register in multiple ways yet (mat4/vec4)",5e,30,e0,74)));
            					}
HXLINE( 616)					return;
            				}
            			}
            		}
HXLINE( 620)		 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry1 =  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry_obj::__alloc( HX_CTX );
HXLINE( 621)		entry1->type = type;
HXLINE( 622)		entry1->name = name;
HXLINE( 623)		entry1->number = number;
HXLINE( 624)		entry1->usage = usage;
HXLINE( 625)		this->mEntries->push(entry1);
            	}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,add,(void))

void RegisterMap_obj::addDR( ::openfl::display3D::_internal::_AGALConverter::DestRegister dr, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_630_addDR)
HXDLIN( 630)		int dr1 = dr->type;
HXDLIN( 630)		::String _hx_tmp = dr->toGLSL(false);
HXDLIN( 630)		this->add(dr1,_hx_tmp,dr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addDR,(void))

void RegisterMap_obj::addSaR( ::openfl::display3D::_internal::_AGALConverter::SamplerRegister sr, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_635_addSaR)
HXDLIN( 635)		int sr1 = sr->type;
HXDLIN( 635)		::String _hx_tmp = sr->toGLSL();
HXDLIN( 635)		this->add(sr1,_hx_tmp,sr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addSaR,(void))

void RegisterMap_obj::addSR( ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_639_addSR)
HXLINE( 640)		if ((sr->d != 0)) {
HXLINE( 642)			int sr1 = sr->itype;
HXDLIN( 642)			::String _hx_tmp = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(sr->itype,sr->programType);
HXDLIN( 642)			this->add(sr1,(_hx_tmp + sr->n),sr->n,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 643)			int sr2 = sr->type;
HXDLIN( 643)			::String _hx_tmp1 = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(sr->type,sr->programType);
HXDLIN( 643)			this->add(sr2,(_hx_tmp1 + sr->o),sr->o,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn());
HXLINE( 644)			return;
            		}
HXLINE( 647)		int sr3 = sr->type;
HXDLIN( 647)		::String _hx_tmp2 = sr->toGLSL(false,offset);
HXDLIN( 647)		this->add(sr3,_hx_tmp2,(sr->n + offset),usage);
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,addSR,(void))

 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterMap_obj::getRegisterUsage( ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_651_getRegisterUsage)
HXLINE( 652)		if ((sr->d != 0)) {
HXLINE( 654)			return ::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn();
            		}
HXLINE( 657)		int sr1 = sr->type;
HXDLIN( 657)		::String _hx_tmp = sr->toGLSL(false,null());
HXDLIN( 657)		return this->getUsage(sr1,_hx_tmp,sr->n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,getRegisterUsage,return )

 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterMap_obj::getUsage(int type,::String name,int number){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_661_getUsage)
HXLINE( 662)		{
HXLINE( 662)			int _g = 0;
HXDLIN( 662)			::Array< ::Dynamic> _g1 = this->mEntries;
HXDLIN( 662)			while((_g < _g1->length)){
HXLINE( 662)				 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry = _g1->__get(_g).StaticCast<  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry >();
HXDLIN( 662)				_g = (_g + 1);
HXLINE( 664)				bool _hx_tmp;
HXDLIN( 664)				bool _hx_tmp1;
HXDLIN( 664)				if ((entry->type == type)) {
HXLINE( 664)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 664)					_hx_tmp1 = false;
            				}
HXDLIN( 664)				if (_hx_tmp1) {
HXLINE( 664)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 664)					_hx_tmp = false;
            				}
HXDLIN( 664)				if (_hx_tmp) {
HXLINE( 666)					return entry->usage;
            				}
            			}
            		}
HXLINE( 670)		return ::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::UNUSED_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,getUsage,return )

::String RegisterMap_obj::toGLSL(bool tempRegistersOnly){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry a, ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry b){
            			HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_677_toGLSL)
HXLINE( 677)			return (a->number - b->number);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		int _hx_run( ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry a, ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry b){
            			HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_684_toGLSL)
HXLINE( 684)			return (a->type - b->type);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_674_toGLSL)
HXLINE( 675)		this->mEntries->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 680)		 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry;
HXLINE( 682)		this->mEntries->sort( ::Dynamic(new _hx_Closure_1()));
HXLINE( 687)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 689)		{
HXLINE( 689)			int _g = 0;
HXDLIN( 689)			int _g1 = this->mEntries->length;
HXDLIN( 689)			while((_g < _g1)){
HXLINE( 689)				_g = (_g + 1);
HXDLIN( 689)				int i = (_g - 1);
HXLINE( 691)				entry = this->mEntries->__get(i).StaticCast<  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry >();
HXLINE( 695)				bool _hx_tmp;
HXDLIN( 695)				bool _hx_tmp1;
HXDLIN( 695)				if (tempRegistersOnly) {
HXLINE( 695)					_hx_tmp1 = (entry->type != 2);
            				}
            				else {
HXLINE( 695)					_hx_tmp1 = false;
            				}
HXDLIN( 695)				if (!(_hx_tmp1)) {
HXLINE( 696)					if (!(tempRegistersOnly)) {
HXLINE( 695)						_hx_tmp = (entry->type == 2);
            					}
            					else {
HXLINE( 695)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 695)					_hx_tmp = true;
            				}
HXDLIN( 695)				if (_hx_tmp) {
HXLINE( 698)					continue;
            				}
HXLINE( 702)				if ((entry->type == 3)) {
HXLINE( 704)					continue;
            				}
HXLINE( 707)				switch((int)(entry->type)){
            					case (int)0: {
HXLINE( 711)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 711)							sb->flush();
            						}
HXDLIN( 711)						if (::hx::IsNull( sb->b )) {
HXLINE( 711)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_13,1);
            						}
            						else {
HXLINE( 711)							sb->b->push(HX_("attribute ",84,a8,71,97));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 715)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 715)							sb->flush();
            						}
HXDLIN( 715)						if (::hx::IsNull( sb->b )) {
HXLINE( 715)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_14,1);
            						}
            						else {
HXLINE( 715)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 718)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 718)							sb->flush();
            						}
HXDLIN( 718)						if (::hx::IsNull( sb->b )) {
HXLINE( 718)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_15,1);
            						}
            						else {
HXLINE( 718)							sb->b->push(HX_("\t",09,00,00,00));
            						}
            					}
            					break;
            					case (int)3: {
            					}
            					break;
            					case (int)4: {
HXLINE( 723)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 723)							sb->flush();
            						}
HXDLIN( 723)						if (::hx::IsNull( sb->b )) {
HXLINE( 723)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_16,1);
            						}
            						else {
HXLINE( 723)							sb->b->push(HX_("varying ",b0,25,c9,a4));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 726)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 726)							sb->flush();
            						}
HXDLIN( 726)						if (::hx::IsNull( sb->b )) {
HXLINE( 726)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_17,1);
            						}
            						else {
HXLINE( 726)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
            					break;
            					default:{
HXLINE( 729)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            					}
            				}
HXLINE( 732)				switch((int)(entry->usage->_hx_getIndex())){
            					case (int)0: {
HXLINE( 750)						::lime::utils::Log_obj::info(HX_("Missing switch patten: RegisterUsage.UNUSED",38,09,f6,02),::hx::SourceInfo(HX_("openfl/display3D/_internal/AGALConverter.hx",1d,65,e1,4d),750,HX_("openfl.display3D._internal.RegisterMap",ee,a0,d9,ca),HX_("toGLSL",f9,58,08,7a)));
            					}
            					break;
            					case (int)1: {
HXLINE( 735)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 735)							sb->flush();
            						}
HXDLIN( 735)						if (::hx::IsNull( sb->b )) {
HXLINE( 735)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_18,1);
            						}
            						else {
HXLINE( 735)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 741)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 741)							sb->flush();
            						}
HXDLIN( 741)						if (::hx::IsNull( sb->b )) {
HXLINE( 741)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_19,1);
            						}
            						else {
HXLINE( 741)							sb->b->push(HX_("mat4 ",0c,20,23,03));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 744)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 744)							sb->flush();
            						}
HXDLIN( 744)						if (::hx::IsNull( sb->b )) {
HXLINE( 744)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_20,1);
            						}
            						else {
HXLINE( 744)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
            					break;
            					case (int)4: {
            					}
            					break;
            					case (int)5: {
HXLINE( 747)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 747)							sb->flush();
            						}
HXDLIN( 747)						if (::hx::IsNull( sb->b )) {
HXLINE( 747)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_21,1);
            						}
            						else {
HXLINE( 747)							sb->b->push(HX_("samplerCube ",63,87,00,86));
            						}
            					}
            					break;
            					case (int)6: {
            					}
            					break;
            					case (int)7: {
HXLINE( 738)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 738)							sb->flush();
            						}
HXDLIN( 738)						if (::hx::IsNull( sb->b )) {
HXLINE( 738)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_22,1);
            						}
            						else {
HXLINE( 738)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            					}
            					break;
            				}
HXLINE( 759)				if (::hx::IsPointerEq( entry->usage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA_dyn() )) {
HXLINE( 761)					{
HXLINE( 761)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 761)							sb->flush();
            						}
HXDLIN( 761)						if (::hx::IsNull( sb->b )) {
HXLINE( 761)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_23,1);
            						}
            						else {
HXLINE( 761)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
HXLINE( 762)					{
HXLINE( 762)						::String x = entry->name;
HXDLIN( 762)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 762)							sb->flush();
            						}
HXDLIN( 762)						if (::hx::IsNull( sb->b )) {
HXLINE( 762)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 762)							::Array< ::String > sb1 = sb->b;
HXDLIN( 762)							sb1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 763)					{
HXLINE( 763)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 763)							sb->flush();
            						}
HXDLIN( 763)						if (::hx::IsNull( sb->b )) {
HXLINE( 763)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_24,1);
            						}
            						else {
HXLINE( 763)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
HXLINE( 765)					{
HXLINE( 765)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 765)							sb->flush();
            						}
HXDLIN( 765)						if (::hx::IsNull( sb->b )) {
HXLINE( 765)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_25,1);
            						}
            						else {
HXLINE( 765)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
HXLINE( 766)					{
HXLINE( 766)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 766)							sb->flush();
            						}
HXDLIN( 766)						if (::hx::IsNull( sb->b )) {
HXLINE( 766)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_26,1);
            						}
            						else {
HXLINE( 766)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
HXLINE( 767)					{
HXLINE( 767)						::String x1 = (entry->name + HX_("_alpha",9f,ee,7d,1d));
HXDLIN( 767)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 767)							sb->flush();
            						}
HXDLIN( 767)						if (::hx::IsNull( sb->b )) {
HXLINE( 767)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 767)							::Array< ::String > sb2 = sb->b;
HXDLIN( 767)							sb2->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 768)					{
HXLINE( 768)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 768)							sb->flush();
            						}
HXDLIN( 768)						if (::hx::IsNull( sb->b )) {
HXLINE( 768)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_27,1);
            						}
            						else {
HXLINE( 768)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
HXLINE( 770)					{
HXLINE( 770)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 770)							sb->flush();
            						}
HXDLIN( 770)						if (::hx::IsNull( sb->b )) {
HXLINE( 770)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_28,1);
            						}
            						else {
HXLINE( 770)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
HXLINE( 771)					{
HXLINE( 771)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 771)							sb->flush();
            						}
HXDLIN( 771)						if (::hx::IsNull( sb->b )) {
HXLINE( 771)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_29,1);
            						}
            						else {
HXLINE( 771)							sb->b->push(HX_("bool ",b6,20,f8,b6));
            						}
            					}
HXLINE( 772)					{
HXLINE( 772)						::String x2 = (entry->name + HX_("_alphaEnabled",a2,df,12,f4));
HXDLIN( 772)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 772)							sb->flush();
            						}
HXDLIN( 772)						if (::hx::IsNull( sb->b )) {
HXLINE( 772)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 772)							::Array< ::String > sb3 = sb->b;
HXDLIN( 772)							sb3->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 773)					{
HXLINE( 773)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 773)							sb->flush();
            						}
HXDLIN( 773)						if (::hx::IsNull( sb->b )) {
HXLINE( 773)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_30,1);
            						}
            						else {
HXLINE( 773)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
            				}
            				else {
HXLINE( 775)					if (::hx::IsPointerEq( entry->usage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_ALPHA_dyn() )) {
HXLINE( 777)						{
HXLINE( 777)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 777)								sb->flush();
            							}
HXDLIN( 777)							if (::hx::IsNull( sb->b )) {
HXLINE( 777)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_31,1);
            							}
            							else {
HXLINE( 777)								sb->b->push(HX_("samplerCube ",63,87,00,86));
            							}
            						}
HXLINE( 778)						{
HXLINE( 778)							::String x3 = entry->name;
HXDLIN( 778)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 778)								sb->flush();
            							}
HXDLIN( 778)							if (::hx::IsNull( sb->b )) {
HXLINE( 778)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            							}
            							else {
HXLINE( 778)								::Array< ::String > sb4 = sb->b;
HXDLIN( 778)								sb4->push(::Std_obj::string(x3));
            							}
            						}
HXLINE( 779)						{
HXLINE( 779)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 779)								sb->flush();
            							}
HXDLIN( 779)							if (::hx::IsNull( sb->b )) {
HXLINE( 779)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_32,1);
            							}
            							else {
HXLINE( 779)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
HXLINE( 781)						{
HXLINE( 781)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 781)								sb->flush();
            							}
HXDLIN( 781)							if (::hx::IsNull( sb->b )) {
HXLINE( 781)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_33,1);
            							}
            							else {
HXLINE( 781)								sb->b->push(HX_("uniform ",6c,cc,54,02));
            							}
            						}
HXLINE( 782)						{
HXLINE( 782)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 782)								sb->flush();
            							}
HXDLIN( 782)							if (::hx::IsNull( sb->b )) {
HXLINE( 782)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_34,1);
            							}
            							else {
HXLINE( 782)								sb->b->push(HX_("samplerCube ",63,87,00,86));
            							}
            						}
HXLINE( 783)						{
HXLINE( 783)							::String x4 = (entry->name + HX_("_alpha",9f,ee,7d,1d));
HXDLIN( 783)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 783)								sb->flush();
            							}
HXDLIN( 783)							if (::hx::IsNull( sb->b )) {
HXLINE( 783)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            							}
            							else {
HXLINE( 783)								::Array< ::String > sb5 = sb->b;
HXDLIN( 783)								sb5->push(::Std_obj::string(x4));
            							}
            						}
HXLINE( 784)						{
HXLINE( 784)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 784)								sb->flush();
            							}
HXDLIN( 784)							if (::hx::IsNull( sb->b )) {
HXLINE( 784)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_35,1);
            							}
            							else {
HXLINE( 784)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
HXLINE( 786)						{
HXLINE( 786)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 786)								sb->flush();
            							}
HXDLIN( 786)							if (::hx::IsNull( sb->b )) {
HXLINE( 786)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_36,1);
            							}
            							else {
HXLINE( 786)								sb->b->push(HX_("uniform ",6c,cc,54,02));
            							}
            						}
HXLINE( 787)						{
HXLINE( 787)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 787)								sb->flush();
            							}
HXDLIN( 787)							if (::hx::IsNull( sb->b )) {
HXLINE( 787)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_37,1);
            							}
            							else {
HXLINE( 787)								sb->b->push(HX_("bool ",b6,20,f8,b6));
            							}
            						}
HXLINE( 788)						{
HXLINE( 788)							::String x5 = (entry->name + HX_("_alphaEnabled",a2,df,12,f4));
HXDLIN( 788)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 788)								sb->flush();
            							}
HXDLIN( 788)							if (::hx::IsNull( sb->b )) {
HXLINE( 788)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            							}
            							else {
HXLINE( 788)								::Array< ::String > sb6 = sb->b;
HXDLIN( 788)								sb6->push(::Std_obj::string(x5));
            							}
            						}
HXLINE( 789)						{
HXLINE( 789)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 789)								sb->flush();
            							}
HXDLIN( 789)							if (::hx::IsNull( sb->b )) {
HXLINE( 789)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_38,1);
            							}
            							else {
HXLINE( 789)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
            					}
            					else {
HXLINE( 791)						if (::hx::IsPointerEq( entry->usage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() )) {
HXLINE( 793)							{
HXLINE( 793)								::String x6 = (entry->name + HX_("[128]",21,60,00,86));
HXDLIN( 793)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 793)									sb->flush();
            								}
HXDLIN( 793)								if (::hx::IsNull( sb->b )) {
HXLINE( 793)									sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            								}
            								else {
HXLINE( 793)									::Array< ::String > sb7 = sb->b;
HXDLIN( 793)									sb7->push(::Std_obj::string(x6));
            								}
            							}
HXLINE( 794)							{
HXLINE( 794)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 794)									sb->flush();
            								}
HXDLIN( 794)								if (::hx::IsNull( sb->b )) {
HXLINE( 794)									sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_39,1);
            								}
            								else {
HXLINE( 794)									sb->b->push(HX_(";\n",6f,33,00,00));
            								}
            							}
            						}
            						else {
HXLINE( 798)							{
HXLINE( 798)								::String x7 = entry->name;
HXDLIN( 798)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 798)									sb->flush();
            								}
HXDLIN( 798)								if (::hx::IsNull( sb->b )) {
HXLINE( 798)									sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x7));
            								}
            								else {
HXLINE( 798)									::Array< ::String > sb8 = sb->b;
HXDLIN( 798)									sb8->push(::Std_obj::string(x7));
            								}
            							}
HXLINE( 799)							{
HXLINE( 799)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 799)									sb->flush();
            								}
HXDLIN( 799)								if (::hx::IsNull( sb->b )) {
HXLINE( 799)									sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_40,1);
            								}
            								else {
HXLINE( 799)									sb->b->push(HX_(";\n",6f,33,00,00));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 803)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,toGLSL,return )


::hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new() {
	::hx::ObjectPtr< RegisterMap_obj > __this = new RegisterMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RegisterMap_obj *__this = (RegisterMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RegisterMap_obj), true, "openfl.display3D._internal.RegisterMap"));
	*(void **)__this = RegisterMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

::hx::Val RegisterMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addDR") ) { return ::hx::Val( addDR_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSR") ) { return ::hx::Val( addSR_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSaR") ) { return ::hx::Val( addSaR_dyn() ); }
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return ::hx::Val( toGLSL_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { return ::hx::Val( mEntries ); }
		if (HX_FIELD_EQ(inName,"getUsage") ) { return ::hx::Val( getUsage_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRegisterUsage") ) { return ::hx::Val( getRegisterUsage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RegisterMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mEntries",63,ec,2a,a1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RegisterMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RegisterMap_obj,mEntries),HX_("mEntries",63,ec,2a,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RegisterMap_obj_sStaticStorageInfo = 0;
#endif

static ::String RegisterMap_obj_sMemberFields[] = {
	HX_("mEntries",63,ec,2a,a1),
	HX_("add",21,f2,49,00),
	HX_("addDR",ef,b7,43,1c),
	HX_("addSaR",63,a8,08,9f),
	HX_("addSR",00,c5,43,1c),
	HX_("getRegisterUsage",48,c9,b8,09),
	HX_("getUsage",ab,6c,06,0a),
	HX_("toGLSL",f9,58,08,7a),
	::String(null()) };

::hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	RegisterMap_obj _hx_dummy;
	RegisterMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.RegisterMap",ee,a0,d9,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RegisterMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RegisterMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegisterMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegisterMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RegisterMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_596_boot)
HXDLIN( 596)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
