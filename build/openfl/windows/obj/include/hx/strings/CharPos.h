// Generated by Haxe 4.3.1
#ifndef INCLUDED_hx_strings_CharPos
#define INCLUDED_hx_strings_CharPos

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_343c8e38fe80fc32_4272_new)
HX_DECLARE_CLASS2(hx,strings,CharPos)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES CharPos_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CharPos_obj OBJ_;
		CharPos_obj();

	public:
		enum { _hx_ClassId = 0x0c74bc40 };

		void __construct(int index,int line,int col);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.CharPos")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.CharPos"); }

		inline static ::hx::ObjectPtr< CharPos_obj > __new(int index,int line,int col) {
			::hx::ObjectPtr< CharPos_obj > __this = new CharPos_obj();
			__this->__construct(index,line,col);
			return __this;
		}

		inline static ::hx::ObjectPtr< CharPos_obj > __alloc(::hx::Ctx *_hx_ctx,int index,int line,int col) {
			CharPos_obj *__this = (CharPos_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharPos_obj), false, "hx.strings.CharPos"));
			*(void **)__this = CharPos_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_343c8e38fe80fc32_4272_new)
HXLINE(4273)		( ( ::hx::strings::CharPos)(__this) )->index = index;
HXLINE(4274)		( ( ::hx::strings::CharPos)(__this) )->line = line;
HXLINE(4275)		( ( ::hx::strings::CharPos)(__this) )->col = col;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharPos_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharPos",3e,48,b1,9c); }

		int index;
		int line;
		int col;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_CharPos */ 
