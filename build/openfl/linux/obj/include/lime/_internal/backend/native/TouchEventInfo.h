#ifndef INCLUDED_lime__internal_backend_native_TouchEventInfo
#define INCLUDED_lime__internal_backend_native_TouchEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_dc6fd8f0bbdab31a_906_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,TouchEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES TouchEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TouchEventInfo_obj OBJ_;
		TouchEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x5438f135 };

		void __construct( ::Dynamic type,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_pressure,::hx::Null< int >  __o_device);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.TouchEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.TouchEventInfo"); }

		inline static ::hx::ObjectPtr< TouchEventInfo_obj > __new( ::Dynamic type,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_pressure,::hx::Null< int >  __o_device) {
			::hx::ObjectPtr< TouchEventInfo_obj > __this = new TouchEventInfo_obj();
			__this->__construct(type,__o_x,__o_y,__o_id,__o_dx,__o_dy,__o_pressure,__o_device);
			return __this;
		}

		inline static ::hx::ObjectPtr< TouchEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_pressure,::hx::Null< int >  __o_device) {
			TouchEventInfo_obj *__this = (TouchEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TouchEventInfo_obj), false, "lime._internal.backend.native.TouchEventInfo"));
			*(void **)__this = TouchEventInfo_obj::_hx_vtable;
{
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		int id = __o_id.Default(0);
            		Float dx = __o_dx.Default(0);
            		Float dy = __o_dy.Default(0);
            		Float pressure = __o_pressure.Default(0);
            		int device = __o_device.Default(0);
            	HX_STACKFRAME(&_hx_pos_dc6fd8f0bbdab31a_906_new)
HXLINE( 907)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 908)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->x = x;
HXLINE( 909)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->y = y;
HXLINE( 910)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->id = id;
HXLINE( 911)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->dx = dx;
HXLINE( 912)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->dy = dy;
HXLINE( 913)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->pressure = pressure;
HXLINE( 914)		( ( ::lime::_internal::backend::native::TouchEventInfo)(__this) )->device = device;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TouchEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TouchEventInfo",09,2e,b2,b6); }

		int device;
		Float dx;
		Float dy;
		int id;
		Float pressure;
		int type;
		Float x;
		Float y;
		 ::lime::_internal::backend::native::TouchEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_TouchEventInfo */ 
