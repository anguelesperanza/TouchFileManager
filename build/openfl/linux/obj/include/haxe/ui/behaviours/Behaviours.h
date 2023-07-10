#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#define INCLUDED_haxe_ui_behaviours_Behaviours

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviours)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
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
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES Behaviours_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Behaviours_obj OBJ_;
		Behaviours_obj();

	public:
		enum { _hx_ClassId = 0x2733e6f2 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.behaviours.Behaviours")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.behaviours.Behaviours"); }
		static ::hx::ObjectPtr< Behaviours_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< Behaviours_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Behaviours_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Behaviours",b6,07,79,b7); }

		 ::haxe::ui::core::Component _component;
		 ::haxe::ds::StringMap _registry;
		 ::haxe::ds::StringMap _instances;
		void _hx_register(::String id,::hx::Class cls, ::haxe::ui::util::VariantType defaultValue);
		::Dynamic _hx_register_dyn();

		bool isRegistered(::String id);
		::Dynamic isRegistered_dyn();

		void replaceNative();
		::Dynamic replaceNative_dyn();

		void validateData();
		::Dynamic validateData_dyn();

		::Array< ::String > _updateOrder;
		::Array< ::String > get_updateOrder();
		::Dynamic get_updateOrder_dyn();

		::Array< ::String > set_updateOrder(::Array< ::String > value);
		::Dynamic set_updateOrder_dyn();

		::Array< ::String > _actualUpdateOrder;
		::Array< ::String > actualUpdateOrder;
		::Array< ::String > get_actualUpdateOrder();
		::Dynamic get_actualUpdateOrder_dyn();

		void update();
		::Dynamic update_dyn();

		 ::haxe::ui::behaviours::Behaviour find(::String id,::hx::Null< bool >  create);
		::Dynamic find_dyn();

		 ::haxe::ds::StringMap _cache;
		void cache();
		::Dynamic cache_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void detatch();
		::Dynamic detatch_dyn();

		void restore();
		::Dynamic restore_dyn();

		void lock();
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		void setDynamic(::String id, ::Dynamic value);
		::Dynamic setDynamic_dyn();

		void set(::String id, ::haxe::ui::util::VariantType value);
		::Dynamic set_dyn();

		void softSet(::String id, ::haxe::ui::util::VariantType value);
		::Dynamic softSet_dyn();

		void ready();
		::Dynamic ready_dyn();

		 ::haxe::ds::ObjectMap _autoDispatch;
		void performAutoDispatch( ::haxe::ui::behaviours::Behaviour b, ::Dynamic changed);
		::Dynamic performAutoDispatch_dyn();

		 ::haxe::ui::util::VariantType get(::String id);
		::Dynamic get_dyn();

		 ::Dynamic getDynamic(::String id);
		::Dynamic getDynamic_dyn();

		 ::haxe::ui::util::VariantType call(::String id, ::Dynamic param);
		::Dynamic call_dyn();

		void applyDefaults();
		::Dynamic applyDefaults_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_behaviours_Behaviours */ 
