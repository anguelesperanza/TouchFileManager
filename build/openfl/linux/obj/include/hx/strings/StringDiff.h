#ifndef INCLUDED_hx_strings_StringDiff
#define INCLUDED_hx_strings_StringDiff

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a5f1d75d03ddc847_4316_new)
HX_DECLARE_CLASS2(hx,strings,StringDiff)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES StringDiff_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringDiff_obj OBJ_;
		StringDiff_obj();

	public:
		enum { _hx_ClassId = 0x5de73e64 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.StringDiff")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.StringDiff"); }

		inline static ::hx::ObjectPtr< StringDiff_obj > __new() {
			::hx::ObjectPtr< StringDiff_obj > __this = new StringDiff_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StringDiff_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StringDiff_obj *__this = (StringDiff_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringDiff_obj), true, "hx.strings.StringDiff"));
			*(void **)__this = StringDiff_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a5f1d75d03ddc847_4316_new)
HXDLIN(4316)		( ( ::hx::strings::StringDiff)(__this) )->at = -1;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringDiff_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringDiff",96,f1,16,eb); }

		int at;
		::String left;
		::String right;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_StringDiff */ 
