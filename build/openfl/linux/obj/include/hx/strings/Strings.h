#ifndef INCLUDED_hx_strings_Strings
#define INCLUDED_hx_strings_Strings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hx,strings,AnsiState)
HX_DECLARE_CLASS2(hx,strings,AnsiToHtmlRenderMethod)
HX_DECLARE_CLASS2(hx,strings,CharIterator)
HX_DECLARE_CLASS2(hx,strings,HashCodeAlgorithm)
HX_DECLARE_CLASS2(hx,strings,Pattern)
HX_DECLARE_CLASS2(hx,strings,StringDiff)
HX_DECLARE_CLASS2(hx,strings,Strings)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)
HX_DECLARE_CLASS4(hx,strings,internal,_Either3,_Either3)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES Strings_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Strings_obj OBJ_;
		Strings_obj();

	public:
		enum { _hx_ClassId = 0x0e5b539c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.Strings")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.Strings"); }

		inline static ::hx::ObjectPtr< Strings_obj > __new() {
			::hx::ObjectPtr< Strings_obj > __this = new Strings_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Strings_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Strings_obj *__this = (Strings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Strings_obj), false, "hx.strings.Strings"));
			*(void **)__this = Strings_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Strings_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Strings",62,b6,44,c6); }

		static void __boot();
		static  ::hx::strings::Pattern REGEX_ANSI_ESC;
		static  ::hx::strings::Pattern REGEX_HTML_UNESCAPE;
		static  ::hx::strings::Pattern REGEX_SPLIT_LINES;
		static  ::hx::strings::Pattern REGEX_REMOVE_XML_TAGS;
		static int POS_NOT_FOUND;
		static ::String NEW_LINE_NIX;
		static ::String NEW_LINE_WIN;
		static ::String NEW_LINE;
		static int _length(::String str);
		static ::Dynamic _length_dyn();

		static ::String _getNotFoundDefault(::String str,int notFoundDefault);
		static ::Dynamic _getNotFoundDefault_dyn();

		static int _charCodeAt8Unsafe(::String str,int pos);
		static ::Dynamic _charCodeAt8Unsafe_dyn();

		static ::Array< ::String > _splitAsciiWordsUnsafe(::String str);
		static ::Dynamic _splitAsciiWordsUnsafe_dyn();

		static  ::Dynamic ansiToHtml( ::Dynamic str, ::hx::strings::AnsiToHtmlRenderMethod renderMethod, ::hx::strings::AnsiState initialState);
		static ::Dynamic ansiToHtml_dyn();

		static  ::Dynamic appendIfMissing( ::Dynamic str, ::Dynamic suffix);
		static ::Dynamic appendIfMissing_dyn();

		static  ::Dynamic base64Encode( ::Dynamic plain);
		static ::Dynamic base64Encode_dyn();

		static  ::Dynamic base64Decode( ::Dynamic encoded);
		static ::Dynamic base64Decode_dyn();

		static  ::Dynamic charAt8( ::Dynamic str,int pos,::String resultIfOutOfBound);
		static ::Dynamic charAt8_dyn();

		static int charCodeAt8(::String str,int pos,::hx::Null< int >  resultIfOutOfBound);
		static ::Dynamic charCodeAt8_dyn();

		static  ::Dynamic compact( ::Dynamic str);
		static ::Dynamic compact_dyn();

		static bool contains(::String searchIn,::String searchFor);
		static ::Dynamic contains_dyn();

		static bool containsOnly(::String searchIn, ::hx::strings::internal::_Either2::_Either2 allowedChars);
		static ::Dynamic containsOnly_dyn();

		static bool containsAll(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic containsAll_dyn();

		static bool containsAllIgnoreCase(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic containsAllIgnoreCase_dyn();

		static bool containsAny(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic containsAny_dyn();

		static bool containsAnyIgnoreCase(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic containsAnyIgnoreCase_dyn();

		static bool containsNone(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic containsNone_dyn();

		static bool containsNoneIgnoreCase(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic containsNoneIgnoreCase_dyn();

		static bool containsWhitespaces(::String searchIn);
		static ::Dynamic containsWhitespaces_dyn();

		static int countMatches(::String searchIn,::String searchFor,::hx::Null< int >  startAt);
		static ::Dynamic countMatches_dyn();

		static int countMatchesIgnoreCase(::String searchIn,::String searchFor,::hx::Null< int >  startAt);
		static ::Dynamic countMatchesIgnoreCase_dyn();

		static int compare(::String str,::String other);
		static ::Dynamic compare_dyn();

		static int compareIgnoreCase(::String str,::String other);
		static ::Dynamic compareIgnoreCase_dyn();

		static  ::hx::strings::StringDiff diff(::String left,::String right);
		static ::Dynamic diff_dyn();

		static int diffAt(::String str,::String other);
		static ::Dynamic diffAt_dyn();

		static  ::Dynamic ellipsizeLeft( ::Dynamic str,int maxLength,::String ellipsis);
		static ::Dynamic ellipsizeLeft_dyn();

		static  ::Dynamic ellipsizeMiddle( ::Dynamic str,int maxLength,::String ellipsis);
		static ::Dynamic ellipsizeMiddle_dyn();

		static  ::Dynamic ellipsizeRight( ::Dynamic str,int maxLength,::String ellipsis);
		static ::Dynamic ellipsizeRight_dyn();

		static bool endsWith(::String searchIn,::String searchFor);
		static ::Dynamic endsWith_dyn();

		static bool endsWithAny(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic endsWithAny_dyn();

		static bool endsWithAnyIgnoreCase(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic endsWithAnyIgnoreCase_dyn();

		static bool endsWithIgnoreCase(::String searchIn,::String searchFor);
		static ::Dynamic endsWithIgnoreCase_dyn();

		static bool equals(::String str,::String other);
		static ::Dynamic equals_dyn();

		static bool equalsIgnoreCase(::String str,::String other);
		static ::Dynamic equalsIgnoreCase_dyn();

		static  ::Dynamic filter( ::Dynamic str, ::Dynamic filter,::String separator);
		static ::Dynamic filter_dyn();

		static  ::Dynamic filterChars( ::Dynamic str, ::Dynamic filter);
		static ::Dynamic filterChars_dyn();

		static int getFuzzyDistance(::String left,::String right);
		static ::Dynamic getFuzzyDistance_dyn();

		static int getLevenshteinDistance(::String left,::String right);
		static ::Dynamic getLevenshteinDistance_dyn();

		static  ::Dynamic getLongestCommonSubstring( ::Dynamic left, ::Dynamic right);
		static ::Dynamic getLongestCommonSubstring_dyn();

		static int hashCode(::String str, ::hx::strings::HashCodeAlgorithm algo);
		static ::Dynamic hashCode_dyn();

		static  ::Dynamic htmlDecode( ::Dynamic str);
		static ::Dynamic htmlDecode_dyn();

		static  ::Dynamic htmlEncode( ::Dynamic str,::hx::Null< bool >  escapeQuotes);
		static ::Dynamic htmlEncode_dyn();

		static  ::Dynamic insertAt( ::Dynamic str,int pos,::String insertion);
		static ::Dynamic insertAt_dyn();

		static  ::Dynamic ifBlank( ::Dynamic str, ::Dynamic fallback);
		static ::Dynamic ifBlank_dyn();

		static  ::Dynamic ifEmpty( ::Dynamic str, ::Dynamic fallback);
		static ::Dynamic ifEmpty_dyn();

		static  ::Dynamic ifNull( ::Dynamic str, ::Dynamic fallback);
		static ::Dynamic ifNull_dyn();

		static  ::Dynamic indentLines( ::Dynamic str,::String indentWith);
		static ::Dynamic indentLines_dyn();

		static int indexOf8(::String str,::String searchFor,::hx::Null< int >  startAt);
		static ::Dynamic indexOf8_dyn();

		static bool isBlank(::String str);
		static ::Dynamic isBlank_dyn();

		static bool isDigits(::String str);
		static ::Dynamic isDigits_dyn();

		static bool isEmpty(::String str);
		static ::Dynamic isEmpty_dyn();

		static bool isNotBlank(::String str);
		static ::Dynamic isNotBlank_dyn();

		static bool isNotEmpty(::String str);
		static ::Dynamic isNotEmpty_dyn();

		static bool isLowerCase(::String str);
		static ::Dynamic isLowerCase_dyn();

		static bool isUpperCase(::String str);
		static ::Dynamic isUpperCase_dyn();

		static void iterate(::String str, ::Dynamic callback,::String separator);
		static ::Dynamic iterate_dyn();

		static void iterateChars(::String str, ::Dynamic callback);
		static ::Dynamic iterateChars_dyn();

		static int lastIndexOf8(::String str,::String searchFor, ::Dynamic startAt);
		static ::Dynamic lastIndexOf8_dyn();

		static int length8(::String str);
		static ::Dynamic length8_dyn();

		static  ::Dynamic left( ::Dynamic str,int len);
		static ::Dynamic left_dyn();

		static  ::Dynamic lpad( ::Dynamic str,int targetLength,::String padStr,::hx::Null< bool >  canOverflow);
		static ::Dynamic lpad_dyn();

		static ::cpp::VirtualArray map(::String str, ::Dynamic mapper,::String separator);
		static ::Dynamic map_dyn();

		static  ::Dynamic prependIfMissing( ::Dynamic str,::String suffix);
		static ::Dynamic prependIfMissing_dyn();

		static  ::Dynamic quoteDouble( ::Dynamic str);
		static ::Dynamic quoteDouble_dyn();

		static  ::Dynamic quoteSingle( ::Dynamic str);
		static ::Dynamic quoteSingle_dyn();

		static  ::Dynamic removeAfter( ::Dynamic str,::String searchFor);
		static ::Dynamic removeAfter_dyn();

		static  ::Dynamic removeAfterLast( ::Dynamic str,::String searchFor);
		static ::Dynamic removeAfterLast_dyn();

		static  ::Dynamic removeAfterIgnoreCase( ::Dynamic str,::String searchFor);
		static ::Dynamic removeAfterIgnoreCase_dyn();

		static  ::Dynamic removeAfterLastIgnoreCase( ::Dynamic str,::String searchFor);
		static ::Dynamic removeAfterLastIgnoreCase_dyn();

		static  ::Dynamic removeAt( ::Dynamic str,int pos,int length);
		static ::Dynamic removeAt_dyn();

		static  ::Dynamic removeBefore( ::Dynamic str,::String searchFor);
		static ::Dynamic removeBefore_dyn();

		static  ::Dynamic removeBeforeLast( ::Dynamic str,::String searchFor);
		static ::Dynamic removeBeforeLast_dyn();

		static  ::Dynamic removeBeforeIgnoreCase( ::Dynamic str,::String searchFor);
		static ::Dynamic removeBeforeIgnoreCase_dyn();

		static  ::Dynamic removeBeforeLastIgnoreCase( ::Dynamic str,::String searchFor);
		static ::Dynamic removeBeforeLastIgnoreCase_dyn();

		static  ::Dynamic removeAll( ::Dynamic searchIn,::String searchFor);
		static ::Dynamic removeAll_dyn();

		static  ::Dynamic removeFirst( ::Dynamic searchIn,::String searchFor);
		static ::Dynamic removeFirst_dyn();

		static  ::Dynamic removeFirstIgnoreCase( ::Dynamic searchIn,::String searchFor);
		static ::Dynamic removeFirstIgnoreCase_dyn();

		static  ::Dynamic removeAnsi( ::Dynamic str);
		static ::Dynamic removeAnsi_dyn();

		static  ::Dynamic removeLeading( ::Dynamic searchIn,::String searchFor);
		static ::Dynamic removeLeading_dyn();

		static  ::Dynamic removeTags( ::Dynamic xml);
		static ::Dynamic removeTags_dyn();

		static  ::Dynamic removeTrailing( ::Dynamic searchIn,::String searchFor);
		static ::Dynamic removeTrailing_dyn();

		static  ::Dynamic repeat( ::Dynamic str,int count,::String separator);
		static ::Dynamic repeat_dyn();

		static  ::Dynamic replaceAll( ::Dynamic searchIn,::String searchFor,::String replaceWith);
		static ::Dynamic replaceAll_dyn();

		static  ::Dynamic replaceFirst( ::Dynamic searchIn,::String searchFor,::String replaceWith);
		static ::Dynamic replaceFirst_dyn();

		static  ::Dynamic replaceFirstIgnoreCase( ::Dynamic searchIn,::String searchFor,::String replaceWith);
		static ::Dynamic replaceFirstIgnoreCase_dyn();

		static  ::Dynamic reverse( ::Dynamic str);
		static ::Dynamic reverse_dyn();

		static  ::Dynamic right( ::Dynamic str,int len);
		static ::Dynamic right_dyn();

		static  ::Dynamic rpad( ::Dynamic str,int targetLength,::String padStr,::hx::Null< bool >  canOverflow);
		static ::Dynamic rpad_dyn();

		static ::Array< ::String > split8(::String str,::Array< ::String > separator,::hx::Null< int >  maxParts);
		static ::Dynamic split8_dyn();

		static ::Array< ::String > splitAt(::String str,::Array< int > splitPos);
		static ::Dynamic splitAt_dyn();

		static ::Array< ::String > splitEvery(::String str,int count);
		static ::Dynamic splitEvery_dyn();

		static ::Array< ::String > splitLines(::String str);
		static ::Dynamic splitLines_dyn();

		static bool startsWith(::String searchIn,::String searchFor);
		static ::Dynamic startsWith_dyn();

		static bool startsWithAny(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic startsWithAny_dyn();

		static bool startsWithAnyIgnoreCase(::String searchIn,::Array< ::String > searchFor);
		static ::Dynamic startsWithAnyIgnoreCase_dyn();

		static bool startsWithIgnoreCase(::String searchIn,::String searchFor);
		static ::Dynamic startsWithIgnoreCase_dyn();

		static  ::Dynamic substr8( ::Dynamic str,int startAt, ::Dynamic len);
		static ::Dynamic substr8_dyn();

		static  ::Dynamic substring8( ::Dynamic str,int startAt, ::Dynamic endAt);
		static ::Dynamic substring8_dyn();

		static  ::Dynamic substringAfter( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringAfter_dyn();

		static  ::Dynamic substringAfterIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringAfterIgnoreCase_dyn();

		static  ::Dynamic substringBetween( ::Dynamic str,::String after,::String before,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringBetween_dyn();

		static  ::Dynamic substringBetweenIgnoreCase( ::Dynamic str,::String after,::String before,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringBetweenIgnoreCase_dyn();

		static  ::Dynamic substringAfterLast( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringAfterLast_dyn();

		static  ::Dynamic substringAfterLastIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringAfterLastIgnoreCase_dyn();

		static  ::Dynamic substringBefore( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringBefore_dyn();

		static  ::Dynamic substringBeforeIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringBeforeIgnoreCase_dyn();

		static  ::Dynamic substringBeforeLast( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringBeforeLast_dyn();

		static  ::Dynamic substringBeforeLastIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  notFoundDefault);
		static ::Dynamic substringBeforeLastIgnoreCase_dyn();

		static bool toBool(::String str);
		static ::Dynamic toBool_dyn();

		static  ::haxe::io::Bytes toBytes(::String str);
		static ::Dynamic toBytes_dyn();

		static int toChar(int charCode);
		static ::Dynamic toChar_dyn();

		static  ::hx::strings::CharIterator toCharIterator(::String str);
		static ::Dynamic toCharIterator_dyn();

		static ::Array< int > toChars(::String str);
		static ::Dynamic toChars_dyn();

		static  ::hx::strings::Pattern toPattern(::String str, ::hx::strings::internal::_Either3::_Either3 options);
		static ::Dynamic toPattern_dyn();

		static  ::EReg toEReg(::String str,::String opt);
		static ::Dynamic toEReg_dyn();

		static Float toFloat(::String str,Float ifUnparseable);
		static ::Dynamic toFloat_dyn();

		static  ::Dynamic toFloatOrNull(::String str, ::Dynamic ifUnparseable);
		static ::Dynamic toFloatOrNull_dyn();

		static ::String toHex(int num,::hx::Null< int >  minDigits,::hx::Null< bool >  upperCase);
		static ::Dynamic toHex_dyn();

		static int toInt(::String str,int ifUnparseable);
		static ::Dynamic toInt_dyn();

		static  ::Dynamic toIntOrNull(::String str, ::Dynamic ifUnparseable);
		static ::Dynamic toIntOrNull_dyn();

		static  ::Dynamic toLowerCase8( ::Dynamic str);
		static ::Dynamic toLowerCase8_dyn();

		static  ::Dynamic toLowerCaseFirstChar( ::Dynamic str);
		static ::Dynamic toLowerCaseFirstChar_dyn();

		static  ::Dynamic toLowerCamel( ::Dynamic str,::hx::Null< bool >  keepUppercasedWords);
		static ::Dynamic toLowerCamel_dyn();

		static  ::Dynamic toLowerHyphen( ::Dynamic str);
		static ::Dynamic toLowerHyphen_dyn();

		static  ::Dynamic toLowerUnderscore( ::Dynamic str);
		static ::Dynamic toLowerUnderscore_dyn();

		static  ::Dynamic toTitle( ::Dynamic str,::hx::Null< bool >  keepUppercasedWords);
		static ::Dynamic toTitle_dyn();

		static  ::Dynamic toUpperCamel( ::Dynamic str,::hx::Null< bool >  keepUppercasedWords);
		static ::Dynamic toUpperCamel_dyn();

		static  ::Dynamic toUpperUnderscore( ::Dynamic str);
		static ::Dynamic toUpperUnderscore_dyn();

		static ::String toString(::String str);
		static ::Dynamic toString_dyn();

		static  ::Dynamic toUpperCase8( ::Dynamic str);
		static ::Dynamic toUpperCase8_dyn();

		static  ::Dynamic toUpperCaseFirstChar( ::Dynamic str);
		static ::Dynamic toUpperCaseFirstChar_dyn();

		static  ::Dynamic trim( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove);
		static ::Dynamic trim_dyn();

		static  ::Dynamic trimRight( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove);
		static ::Dynamic trimRight_dyn();

		static  ::Dynamic trimLeft( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove);
		static ::Dynamic trimLeft_dyn();

		static  ::Dynamic trimLines( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove);
		static ::Dynamic trimLines_dyn();

		static ::String trimToNull(::String str);
		static ::Dynamic trimToNull_dyn();

		static  ::Dynamic trimToEmpty( ::Dynamic str);
		static ::Dynamic trimToEmpty_dyn();

		static  ::Dynamic truncate( ::Dynamic str,int maxLength);
		static ::Dynamic truncate_dyn();

		static  ::Dynamic urlDecode( ::Dynamic str);
		static ::Dynamic urlDecode_dyn();

		static  ::Dynamic urlEncode( ::Dynamic str);
		static ::Dynamic urlEncode_dyn();

		static  ::Dynamic wrap( ::Dynamic str,int maxLineLength,::hx::Null< bool >  splitLongWords,::String newLineSeparator);
		static ::Dynamic wrap_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_Strings */ 
