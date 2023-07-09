// Generated by Haxe 4.3.1
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawTrianglesView_Impl_
#define INCLUDED_openfl_display__internal__DrawCommandReader_DrawTrianglesView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,display,_internal,_DrawCommandReader,DrawTrianglesView_Impl_)

namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES DrawTrianglesView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DrawTrianglesView_Impl__obj OBJ_;
		DrawTrianglesView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x775a1b97 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_"); }

		inline static ::hx::ObjectPtr< DrawTrianglesView_Impl__obj > __new() {
			::hx::ObjectPtr< DrawTrianglesView_Impl__obj > __this = new DrawTrianglesView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DrawTrianglesView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DrawTrianglesView_Impl__obj *__this = (DrawTrianglesView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawTrianglesView_Impl__obj), false, "openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_"));
			*(void **)__this = DrawTrianglesView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DrawTrianglesView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrawTrianglesView_Impl_",8c,e7,93,d4); }

		static  ::openfl::display::_internal::DrawCommandReader _new( ::openfl::display::_internal::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::_Vector::FloatVector get_vertices( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_vertices_dyn();

		static  ::openfl::_Vector::IntVector get_indices( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_indices_dyn();

		static  ::openfl::_Vector::FloatVector get_uvtData( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_uvtData_dyn();

		static  ::Dynamic get_culling( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_culling_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl_display__internal__DrawCommandReader_DrawTrianglesView_Impl_ */ 
