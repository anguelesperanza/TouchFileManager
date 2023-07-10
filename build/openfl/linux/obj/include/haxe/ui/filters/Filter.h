#ifndef INCLUDED_haxe_ui_filters_Filter
#define INCLUDED_haxe_ui_filters_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_573f8742f0e2fb65_4_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Filter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter_obj OBJ_;
		Filter_obj();

	public:
		enum { _hx_ClassId = 0x2b166675 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Filter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Filter"); }

		inline static ::hx::ObjectPtr< Filter_obj > __new() {
			::hx::ObjectPtr< Filter_obj > __this = new Filter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Filter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Filter_obj *__this = (Filter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter_obj), false, "haxe.ui.filters.Filter"));
			*(void **)__this = Filter_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_573f8742f0e2fb65_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter",d8,93,c9,b9); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Filter */ 
