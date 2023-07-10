#ifndef INCLUDED_DocumentClass
#define INCLUDED_DocumentClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Main
#include <Main.h>
#endif
HX_DECLARE_CLASS0(DocumentClass)
HX_DECLARE_CLASS0(Main)



class HXCPP_CLASS_ATTRIBUTES DocumentClass_obj : public  ::Main_obj
{
	public:
		typedef  ::Main_obj super;
		typedef DocumentClass_obj OBJ_;
		DocumentClass_obj();

	public:
		enum { _hx_ClassId = 0x1a4abc3d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="DocumentClass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"DocumentClass"); }

		inline static ::hx::ObjectPtr< DocumentClass_obj > __new() {
			::hx::ObjectPtr< DocumentClass_obj > __this = new DocumentClass_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DocumentClass_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DocumentClass_obj *__this = (DocumentClass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DocumentClass_obj), false, "DocumentClass"));
			*(void **)__this = DocumentClass_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DocumentClass_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DocumentClass",fd,a6,03,3e); }

};


#endif /* INCLUDED_DocumentClass */ 
