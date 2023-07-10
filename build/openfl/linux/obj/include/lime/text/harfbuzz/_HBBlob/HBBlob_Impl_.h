#ifndef INCLUDED_lime_text_harfbuzz__HBBlob_HBBlob_Impl_
#define INCLUDED_lime_text_harfbuzz__HBBlob_HBBlob_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,text,harfbuzz,_HBBlob,HBBlob_Impl_)

namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBBlob{


class HXCPP_CLASS_ATTRIBUTES HBBlob_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBBlob_Impl__obj OBJ_;
		HBBlob_Impl__obj();

	public:
		enum { _hx_ClassId = 0x243fba2b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz._HBBlob.HBBlob_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_"); }

		inline static ::hx::ObjectPtr< HBBlob_Impl__obj > __new() {
			::hx::ObjectPtr< HBBlob_Impl__obj > __this = new HBBlob_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBBlob_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBBlob_Impl__obj *__this = (HBBlob_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBBlob_Impl__obj), false, "lime.text.harfbuzz._HBBlob.HBBlob_Impl_"));
			*(void **)__this = HBBlob_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBBlob_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBBlob_Impl_",57,dd,d9,4c); }

		static  ::Dynamic _new(Float data,int length,int memoryMode);
		static ::Dynamic _new_dyn();

		static  ::Dynamic createSubBlob( ::Dynamic this1,int offset,int length);
		static ::Dynamic createSubBlob_dyn();

		static void makeImmutable( ::Dynamic this1);
		static ::Dynamic makeImmutable_dyn();

		static Float get_data( ::Dynamic this1);
		static ::Dynamic get_data_dyn();

		static Float get_dataWritable( ::Dynamic this1);
		static ::Dynamic get_dataWritable_dyn();

		static  ::Dynamic get_empty();
		static ::Dynamic get_empty_dyn();

		static bool get_immutable( ::Dynamic this1);
		static ::Dynamic get_immutable_dyn();

		static int get_length( ::Dynamic this1);
		static ::Dynamic get_length_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBBlob

#endif /* INCLUDED_lime_text_harfbuzz__HBBlob_HBBlob_Impl_ */ 
