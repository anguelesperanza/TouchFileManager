#ifndef INCLUDED_hx_strings__Char_CharCaseMapper
#define INCLUDED_hx_strings__Char_CharCaseMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(hx,strings,_Char,CharCaseMapper)

namespace hx{
namespace strings{
namespace _Char{


class HXCPP_CLASS_ATTRIBUTES CharCaseMapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CharCaseMapper_obj OBJ_;
		CharCaseMapper_obj();

	public:
		enum { _hx_ClassId = 0x293c0912 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings._Char.CharCaseMapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings._Char.CharCaseMapper"); }
		static ::hx::ObjectPtr< CharCaseMapper_obj > __new();
		static ::hx::ObjectPtr< CharCaseMapper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharCaseMapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharCaseMapper",27,a9,71,de); }

		 ::haxe::ds::IntMap mapU2L;
		 ::haxe::ds::IntMap mapL2U;
		void _addCaseMapping(int lowerChar,int upperChar);
		::Dynamic _addCaseMapping_dyn();

		bool isLowerCase(int ch);
		::Dynamic isLowerCase_dyn();

		bool isUpperCase(int ch);
		::Dynamic isUpperCase_dyn();

		int toLowerCase(int ch);
		::Dynamic toLowerCase_dyn();

		int toUpperCase(int ch);
		::Dynamic toUpperCase_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace _Char

#endif /* INCLUDED_hx_strings__Char_CharCaseMapper */ 
