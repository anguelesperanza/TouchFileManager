#ifndef INCLUDED_haxe_ui_core_TextInputData
#define INCLUDED_haxe_ui_core_TextInputData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c2179f2e0a918c8b_8_new)
HX_DECLARE_CLASS3(haxe,ui,core,TextInputData)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TextInputData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextInputData_obj OBJ_;
		TextInputData_obj();

	public:
		enum { _hx_ClassId = 0x59281f8e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.TextInputData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.TextInputData"); }

		inline static ::hx::ObjectPtr< TextInputData_obj > __new() {
			::hx::ObjectPtr< TextInputData_obj > __this = new TextInputData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextInputData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextInputData_obj *__this = (TextInputData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextInputData_obj), true, "haxe.ui.core.TextInputData"));
			*(void **)__this = TextInputData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c2179f2e0a918c8b_8_new)
HXLINE(  22)		( ( ::haxe::ui::core::TextInputData)(__this) )->onChangedCallback = null();
HXLINE(  21)		( ( ::haxe::ui::core::TextInputData)(__this) )->onScrollCallback = null();
HXLINE(  19)		( ( ::haxe::ui::core::TextInputData)(__this) )->vscrollNativeWheel = false;
HXLINE(  18)		( ( ::haxe::ui::core::TextInputData)(__this) )->vscrollPageStep = null();
HXLINE(  17)		( ( ::haxe::ui::core::TextInputData)(__this) )->vscrollPageSize = ((Float)0);
HXLINE(  16)		( ( ::haxe::ui::core::TextInputData)(__this) )->vscrollMax = ((Float)0);
HXLINE(  15)		( ( ::haxe::ui::core::TextInputData)(__this) )->vscrollPos = ((Float)0);
HXLINE(  13)		( ( ::haxe::ui::core::TextInputData)(__this) )->hscrollPageSize = ((Float)0);
HXLINE(  12)		( ( ::haxe::ui::core::TextInputData)(__this) )->hscrollMax = ((Float)0);
HXLINE(  11)		( ( ::haxe::ui::core::TextInputData)(__this) )->hscrollPos = ((Float)0);
HXLINE(   9)		( ( ::haxe::ui::core::TextInputData)(__this) )->password = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextInputData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextInputData",c7,f8,10,09); }

		bool password;
		Float hscrollPos;
		Float hscrollMax;
		Float hscrollPageSize;
		Float vscrollPos;
		Float vscrollMax;
		Float vscrollPageSize;
		 ::Dynamic vscrollPageStep;
		bool vscrollNativeWheel;
		 ::Dynamic onScrollCallback;
		Dynamic onScrollCallback_dyn() { return onScrollCallback;}
		 ::Dynamic onChangedCallback;
		Dynamic onChangedCallback_dyn() { return onChangedCallback;}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_TextInputData */ 
