#ifndef INCLUDED_hx_strings_Matcher
#define INCLUDED_hx_strings_Matcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,strings,Matcher)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES Matcher_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		void (::hx::Object :: *_hx_iterate)( ::Dynamic onMatch); 
		static inline void iterate( ::Dynamic _hx_, ::Dynamic onMatch) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_iterate)(onMatch);
		}
		::String (::hx::Object :: *_hx_map)( ::Dynamic mapper); 
		static inline ::String map( ::Dynamic _hx_, ::Dynamic mapper) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_map)(mapper);
		}
		::String (::hx::Object :: *_hx_matched)(::hx::Null< int >  n); 
		static inline ::String matched( ::Dynamic _hx_,::hx::Null< int >  n) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_matched)(n);
		}
		 ::Dynamic (::hx::Object :: *_hx_matchedPos)(); 
		static inline  ::Dynamic matchedPos( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_matchedPos)();
		}
		bool (::hx::Object :: *_hx_matches)(); 
		static inline bool matches( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_matches)();
		}
		bool (::hx::Object :: *_hx_matchesInRegion)(int pos,::hx::Null< int >  len); 
		static inline bool matchesInRegion( ::Dynamic _hx_,int pos,::hx::Null< int >  len) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_matchesInRegion)(pos,len);
		}
		::Dynamic (::hx::Object :: *_hx_reset)(::String str); 
		static inline ::Dynamic reset( ::Dynamic _hx_,::String str) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_reset)(str);
		}
		::String (::hx::Object :: *_hx_substringAfterMatch)(); 
		static inline ::String substringAfterMatch( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_substringAfterMatch)();
		}
		::String (::hx::Object :: *_hx_substringBeforeMatch)(); 
		static inline ::String substringBeforeMatch( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hx::strings::Matcher_obj *>(_hx_.mPtr->_hx_getInterface(0xa8cead20)))->_hx_substringBeforeMatch)();
		}
};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_Matcher */ 
