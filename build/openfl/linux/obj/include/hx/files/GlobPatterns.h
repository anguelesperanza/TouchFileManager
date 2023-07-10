#ifndef INCLUDED_hx_files_GlobPatterns
#define INCLUDED_hx_files_GlobPatterns

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hx,files,GlobPatterns)
HX_DECLARE_CLASS2(hx,strings,Pattern)
HX_DECLARE_CLASS4(hx,strings,internal,_Either3,_Either3)

namespace hx{
namespace files{


class HXCPP_CLASS_ATTRIBUTES GlobPatterns_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlobPatterns_obj OBJ_;
		GlobPatterns_obj();

	public:
		enum { _hx_ClassId = 0x1437e2de };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.files.GlobPatterns")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.files.GlobPatterns"); }

		inline static ::hx::ObjectPtr< GlobPatterns_obj > __new() {
			::hx::ObjectPtr< GlobPatterns_obj > __this = new GlobPatterns_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GlobPatterns_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GlobPatterns_obj *__this = (GlobPatterns_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlobPatterns_obj), false, "hx.files.GlobPatterns"));
			*(void **)__this = GlobPatterns_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlobPatterns_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlobPatterns",db,0e,01,cb); }

		static  ::EReg toEReg(::String globPattern,::String regexOptions);
		static ::Dynamic toEReg_dyn();

		static  ::hx::strings::Pattern toPattern(::String globPattern, ::hx::strings::internal::_Either3::_Either3 options);
		static ::Dynamic toPattern_dyn();

		static ::String toRegEx(::String globPattern);
		static ::Dynamic toRegEx_dyn();

};

} // end namespace hx
} // end namespace files

#endif /* INCLUDED_hx_files_GlobPatterns */ 
