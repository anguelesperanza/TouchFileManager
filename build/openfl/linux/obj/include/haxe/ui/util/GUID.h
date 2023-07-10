#ifndef INCLUDED_haxe_ui_util_GUID
#define INCLUDED_haxe_ui_util_GUID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,GUID)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES GUID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GUID_obj OBJ_;
		GUID_obj();

	public:
		enum { _hx_ClassId = 0x52976a85 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.GUID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.GUID"); }

		inline static ::hx::ObjectPtr< GUID_obj > __new() {
			::hx::ObjectPtr< GUID_obj > __this = new GUID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GUID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GUID_obj *__this = (GUID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GUID_obj), false, "haxe.ui.util.GUID"));
			*(void **)__this = GUID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GUID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GUID",89,e5,2e,2f); }

		static int randomIntegerWithinRange(int min,int max);
		static ::Dynamic randomIntegerWithinRange_dyn();

		static ::String createRandomIdentifier(int length,::hx::Null< int >  radix);
		static ::Dynamic createRandomIdentifier_dyn();

		static ::String uuid();
		static ::Dynamic uuid_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_GUID */ 
