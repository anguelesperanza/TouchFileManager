#ifndef INCLUDED_hx_strings__Pattern_MatcherImpl
#define INCLUDED_hx_strings__Pattern_MatcherImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_strings_Matcher
#include <hx/strings/Matcher.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hx,strings,Matcher)
HX_DECLARE_CLASS3(hx,strings,_Pattern,MatcherImpl)

namespace hx{
namespace strings{
namespace _Pattern{


class HXCPP_CLASS_ATTRIBUTES MatcherImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MatcherImpl_obj OBJ_;
		MatcherImpl_obj();

	public:
		enum { _hx_ClassId = 0x18b13b4f };

		void __construct( ::EReg ereg,::String pattern,::String options,::String str);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings._Pattern.MatcherImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings._Pattern.MatcherImpl"); }
		static ::hx::ObjectPtr< MatcherImpl_obj > __new( ::EReg ereg,::String pattern,::String options,::String str);
		static ::hx::ObjectPtr< MatcherImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::EReg ereg,::String pattern,::String options,::String str);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MatcherImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("MatcherImpl",d2,e0,08,6e); }

		 ::EReg ereg;
		 ::Dynamic isMatch;
		::String str;
		::Dynamic reset(::String str);
		::Dynamic reset_dyn();

		void iterate( ::Dynamic onMatch);
		::Dynamic iterate_dyn();

		::String map( ::Dynamic mapper);
		::Dynamic map_dyn();

		::String matched(::hx::Null< int >  n);
		::Dynamic matched_dyn();

		bool matches();
		::Dynamic matches_dyn();

		bool matchesInRegion(int pos,::hx::Null< int >  len);
		::Dynamic matchesInRegion_dyn();

		 ::Dynamic matchedPos();
		::Dynamic matchedPos_dyn();

		::String substringAfterMatch();
		::Dynamic substringAfterMatch_dyn();

		::String substringBeforeMatch();
		::Dynamic substringBeforeMatch_dyn();

		 ::EReg _cloneEReg( ::EReg from,::String pattern,::String options);
		::Dynamic _cloneEReg_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace _Pattern

#endif /* INCLUDED_hx_strings__Pattern_MatcherImpl */ 
