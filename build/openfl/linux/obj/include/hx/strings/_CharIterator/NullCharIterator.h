#ifndef INCLUDED_hx_strings__CharIterator_NullCharIterator
#define INCLUDED_hx_strings__CharIterator_NullCharIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
HX_DECLARE_CLASS2(hx,strings,CharIterator)
HX_DECLARE_CLASS3(hx,strings,_CharIterator,NullCharIterator)

namespace hx{
namespace strings{
namespace _CharIterator{


class HXCPP_CLASS_ATTRIBUTES NullCharIterator_obj : public  ::hx::strings::CharIterator_obj
{
	public:
		typedef  ::hx::strings::CharIterator_obj super;
		typedef NullCharIterator_obj OBJ_;
		NullCharIterator_obj();

	public:
		enum { _hx_ClassId = 0x6784a69c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings._CharIterator.NullCharIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings._CharIterator.NullCharIterator"); }
		static ::hx::ObjectPtr< NullCharIterator_obj > __new();
		static ::hx::ObjectPtr< NullCharIterator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NullCharIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NullCharIterator",2b,20,7a,1e); }

		static void __boot();
		static  ::hx::strings::_CharIterator::NullCharIterator INSTANCE;
		bool isEOF();

};

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator

#endif /* INCLUDED_hx_strings__CharIterator_NullCharIterator */ 
