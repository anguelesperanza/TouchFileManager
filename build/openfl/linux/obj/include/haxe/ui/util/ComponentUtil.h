#ifndef INCLUDED_haxe_ui_util_ComponentUtil
#define INCLUDED_haxe_ui_util_ComponentUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,ComponentUtil)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ComponentUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ComponentUtil_obj OBJ_;
		ComponentUtil_obj();

	public:
		enum { _hx_ClassId = 0x11f462c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.ComponentUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.ComponentUtil"); }

		inline static ::hx::ObjectPtr< ComponentUtil_obj > __new() {
			::hx::ObjectPtr< ComponentUtil_obj > __this = new ComponentUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ComponentUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ComponentUtil_obj *__this = (ComponentUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentUtil_obj), false, "haxe.ui.util.ComponentUtil"));
			*(void **)__this = ComponentUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentUtil",3f,67,3f,33); }

		static int getDepth( ::haxe::ui::core::Component target);
		static ::Dynamic getDepth_dyn();

		static void dumpComponentTree( ::haxe::ui::core::Component from,::hx::Null< bool >  verbose);
		static ::Dynamic dumpComponentTree_dyn();

		static void walkComponentTree( ::haxe::ui::core::Component from, ::Dynamic cb);
		static ::Dynamic walkComponentTree_dyn();

		static void recurseTree(int depth, ::haxe::ui::core::Component c, ::Dynamic cb);
		static ::Dynamic recurseTree_dyn();

		static void recurseTreeTrace( ::haxe::ui::core::Component c,int level,bool verbose);
		static ::Dynamic recurseTreeTrace_dyn();

		static void recurseTreeGrouped( ::haxe::ui::core::Component c,bool verbose);
		static ::Dynamic recurseTreeGrouped_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_ComponentUtil */ 
