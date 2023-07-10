#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#define INCLUDED_haxe_ui_backend_CallLaterImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,CallLaterImpl)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES CallLaterImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CallLaterImpl_obj OBJ_;
		CallLaterImpl_obj();

	public:
		enum { _hx_ClassId = 0x1b00791c };

		void __construct( ::Dynamic fn);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.CallLaterImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.CallLaterImpl"); }
		static ::hx::ObjectPtr< CallLaterImpl_obj > __new( ::Dynamic fn);
		static ::hx::ObjectPtr< CallLaterImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic fn);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallLaterImpl_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallLaterImpl",ee,aa,f8,01); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_CallLaterImpl */ 
