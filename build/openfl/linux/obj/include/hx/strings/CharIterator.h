#ifndef INCLUDED_hx_strings_CharIterator
#define INCLUDED_hx_strings_CharIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(hx,strings,CharIterator)
HX_DECLARE_CLASS2(hx,strings,CharPos)
HX_DECLARE_CLASS4(hx,strings,internal,_RingBuffer,RingBufferImpl)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES CharIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CharIterator_obj OBJ_;
		CharIterator_obj();

	public:
		enum { _hx_ClassId = 0x59db4936 };

		void __construct(int prevBufferSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.CharIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.CharIterator"); }
		static ::hx::ObjectPtr< CharIterator_obj > __new(int prevBufferSize);
		static ::hx::ObjectPtr< CharIterator_obj > __alloc(::hx::Ctx *_hx_ctx,int prevBufferSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharIterator",04,77,79,c8); }

		static  ::hx::strings::CharIterator fromString(::String chars,::hx::Null< int >  prevBufferSize);
		static ::Dynamic fromString_dyn();

		static  ::hx::strings::CharIterator fromArray(::Array< int > chars,::hx::Null< int >  prevBufferSize);
		static ::Dynamic fromArray_dyn();

		static  ::hx::strings::CharIterator fromInput( ::haxe::io::Input chars,::hx::Null< int >  prevBufferSize);
		static ::Dynamic fromInput_dyn();

		static  ::hx::strings::CharIterator fromIterator( ::Dynamic chars,::hx::Null< int >  prevBufferSize);
		static ::Dynamic fromIterator_dyn();

		int index;
		int line;
		int col;
		int currChar;
		 ::hx::strings::internal::_RingBuffer::RingBufferImpl prevBuffer;
		int prevBufferPrevIdx;
		int prevBufferNextIdx;
		 ::Dynamic get_current();
		::Dynamic get_current_dyn();

		 ::hx::strings::CharPos get_pos();
		::Dynamic get_pos_dyn();

		bool hasPrev();
		::Dynamic hasPrev_dyn();

		int prev();
		::Dynamic prev_dyn();

		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

		virtual int getChar();
		::Dynamic getChar_dyn();

		virtual bool isEOF();
		::Dynamic isEOF_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_CharIterator */ 
