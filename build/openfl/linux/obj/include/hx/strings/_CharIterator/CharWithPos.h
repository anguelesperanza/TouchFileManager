#ifndef INCLUDED_hx_strings__CharIterator_CharWithPos
#define INCLUDED_hx_strings__CharIterator_CharWithPos

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_strings_CharPos
#include <hx/strings/CharPos.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_4c2c1e05a45d1a03_200_new)
HX_DECLARE_CLASS2(hx,strings,CharPos)
HX_DECLARE_CLASS3(hx,strings,_CharIterator,CharWithPos)

namespace hx{
namespace strings{
namespace _CharIterator{


class HXCPP_CLASS_ATTRIBUTES CharWithPos_obj : public  ::hx::strings::CharPos_obj
{
	public:
		typedef  ::hx::strings::CharPos_obj super;
		typedef CharWithPos_obj OBJ_;
		CharWithPos_obj();

	public:
		enum { _hx_ClassId = 0x4f2f0123 };

		void __construct(int _hx_char,int index,int line,int col);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings._CharIterator.CharWithPos")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings._CharIterator.CharWithPos"); }

		inline static ::hx::ObjectPtr< CharWithPos_obj > __new(int _hx_char,int index,int line,int col) {
			::hx::ObjectPtr< CharWithPos_obj > __this = new CharWithPos_obj();
			__this->__construct(_hx_char,index,line,col);
			return __this;
		}

		inline static ::hx::ObjectPtr< CharWithPos_obj > __alloc(::hx::Ctx *_hx_ctx,int _hx_char,int index,int line,int col) {
			CharWithPos_obj *__this = (CharWithPos_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharWithPos_obj), false, "hx.strings._CharIterator.CharWithPos"));
			*(void **)__this = CharWithPos_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4c2c1e05a45d1a03_200_new)
HXLINE( 201)		__this->super::__construct(index,line,col);
HXLINE( 202)		( ( ::hx::strings::_CharIterator::CharWithPos)(__this) )->_hx_char = _hx_char;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharWithPos_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharWithPos",d8,2e,21,6b); }

		int _hx_char;
};

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator

#endif /* INCLUDED_hx_strings__CharIterator_CharWithPos */ 
