#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_crypto_Crc32
#include <haxe/crypto/Crc32.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_hx_strings_AnsiState
#include <hx/strings/AnsiState.h>
#endif
#ifndef INCLUDED_hx_strings_AnsiToHtmlRenderMethod
#include <hx/strings/AnsiToHtmlRenderMethod.h>
#endif
#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
#ifndef INCLUDED_hx_strings_HashCodeAlgorithm
#include <hx/strings/HashCodeAlgorithm.h>
#endif
#ifndef INCLUDED_hx_strings_Matcher
#include <hx/strings/Matcher.h>
#endif
#ifndef INCLUDED_hx_strings_Pattern
#include <hx/strings/Pattern.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
#endif
#ifndef INCLUDED_hx_strings_StringDiff
#include <hx/strings/StringDiff.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings__Char_CharCaseMapper
#include <hx/strings/_Char/CharCaseMapper.h>
#endif
#ifndef INCLUDED_hx_strings__Char_Char_Impl_
#include <hx/strings/_Char/Char_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_NullCharIterator
#include <hx/strings/_CharIterator/NullCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__CharIterator_StringCharIterator
#include <hx/strings/_CharIterator/StringCharIterator.h>
#endif
#ifndef INCLUDED_hx_strings__Pattern_MatcherImpl
#include <hx/strings/_Pattern/MatcherImpl.h>
#endif
#ifndef INCLUDED_hx_strings_internal_OS
#include <hx/strings/internal/OS.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#include <hx/strings/internal/_Either3/_Either3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_68__length,"hx.strings.Strings","_length",0x4d28f72f,"hx.strings.Strings._length","hx/strings/Strings.hx",68,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_75__getNotFoundDefault,"hx.strings.Strings","_getNotFoundDefault",0x4c2a6c25,"hx.strings.Strings._getNotFoundDefault","hx/strings/Strings.hx",75,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_92__charCodeAt8Unsafe,"hx.strings.Strings","_charCodeAt8Unsafe",0x18a2969f,"hx.strings.Strings._charCodeAt8Unsafe","hx/strings/Strings.hx",92,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_102__splitAsciiWordsUnsafe,"hx.strings.Strings","_splitAsciiWordsUnsafe",0xd72f4d6f,"hx.strings.Strings._splitAsciiWordsUnsafe","hx/strings/Strings.hx",102,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_174_ansiToHtml,"hx.strings.Strings","ansiToHtml",0xa753ed3f,"hx.strings.Strings.ansiToHtml","hx/strings/Strings.hx",174,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_266_appendIfMissing,"hx.strings.Strings","appendIfMissing",0x01226e79,"hx.strings.Strings.appendIfMissing","hx/strings/Strings.hx",266,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_289_base64Encode,"hx.strings.Strings","base64Encode",0x8958801b,"hx.strings.Strings.base64Encode","hx/strings/Strings.hx",289,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_311_base64Decode,"hx.strings.Strings","base64Decode",0xf461eb33,"hx.strings.Strings.base64Decode","hx/strings/Strings.hx",311,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_343_charAt8,"hx.strings.Strings","charAt8",0x0eff1359,"hx.strings.Strings.charAt8","hx/strings/Strings.hx",343,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_379_charCodeAt8,"hx.strings.Strings","charCodeAt8",0xc2261e2c,"hx.strings.Strings.charCodeAt8","hx/strings/Strings.hx",379,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_399_compact,"hx.strings.Strings","compact",0xc3135c4d,"hx.strings.Strings.compact","hx/strings/Strings.hx",399,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_436_contains,"hx.strings.Strings","contains",0xa1d79e35,"hx.strings.Strings.contains","hx/strings/Strings.hx",436,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_460_containsOnly,"hx.strings.Strings","containsOnly",0xe1c70e41,"hx.strings.Strings.containsOnly","hx/strings/Strings.hx",460,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_497_containsAll,"hx.strings.Strings","containsAll",0x717921ec,"hx.strings.Strings.containsAll","hx/strings/Strings.hx",497,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_526_containsAllIgnoreCase,"hx.strings.Strings","containsAllIgnoreCase",0x142b39ee,"hx.strings.Strings.containsAllIgnoreCase","hx/strings/Strings.hx",526,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_558_containsAny,"hx.strings.Strings","containsAny",0x717923b7,"hx.strings.Strings.containsAny","hx/strings/Strings.hx",558,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_587_containsAnyIgnoreCase,"hx.strings.Strings","containsAnyIgnoreCase",0x22f58779,"hx.strings.Strings.containsAnyIgnoreCase","hx/strings/Strings.hx",587,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_620_containsNone,"hx.strings.Strings","containsNone",0xe11e9b8d,"hx.strings.Strings.containsNone","hx/strings/Strings.hx",620,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_642_containsNoneIgnoreCase,"hx.strings.Strings","containsNoneIgnoreCase",0x90a366cf,"hx.strings.Strings.containsNoneIgnoreCase","hx/strings/Strings.hx",642,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_658_containsWhitespaces,"hx.strings.Strings","containsWhitespaces",0x4bd63c21,"hx.strings.Strings.containsWhitespaces","hx/strings/Strings.hx",658,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_687_countMatches,"hx.strings.Strings","countMatches",0x5283eefa,"hx.strings.Strings.countMatches","hx/strings/Strings.hx",687,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_718_countMatchesIgnoreCase,"hx.strings.Strings","countMatchesIgnoreCase",0x8dc2247c,"hx.strings.Strings.countMatchesIgnoreCase","hx/strings/Strings.hx",718,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_754_compare,"hx.strings.Strings","compare",0xc313694f,"hx.strings.Strings.compare","hx/strings/Strings.hx",754,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_787_compareIgnoreCase,"hx.strings.Strings","compareIgnoreCase",0xb007bb11,"hx.strings.Strings.compareIgnoreCase","hx/strings/Strings.hx",787,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_817_diff,"hx.strings.Strings","diff",0x9ee05d1b,"hx.strings.Strings.diff","hx/strings/Strings.hx",817,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_843_diffAt,"hx.strings.Strings","diffAt",0x5d8652ee,"hx.strings.Strings.diffAt","hx/strings/Strings.hx",843,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_876_ellipsizeLeft,"hx.strings.Strings","ellipsizeLeft",0x56bc12de,"hx.strings.Strings.ellipsizeLeft","hx/strings/Strings.hx",876,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_901_ellipsizeMiddle,"hx.strings.Strings","ellipsizeMiddle",0x3ea481ec,"hx.strings.Strings.ellipsizeMiddle","hx/strings/Strings.hx",901,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_931_ellipsizeRight,"hx.strings.Strings","ellipsizeRight",0x04e17d25,"hx.strings.Strings.ellipsizeRight","hx/strings/Strings.hx",931,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_956_endsWith,"hx.strings.Strings","endsWith",0x5112be74,"hx.strings.Strings.endsWith","hx/strings/Strings.hx",956,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_988_endsWithAny,"hx.strings.Strings","endsWithAny",0x099674d8,"hx.strings.Strings.endsWithAny","hx/strings/Strings.hx",988,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1013_endsWithAnyIgnoreCase,"hx.strings.Strings","endsWithAnyIgnoreCase",0xddedebda,"hx.strings.Strings.endsWithAnyIgnoreCase","hx/strings/Strings.hx",1013,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1038_endsWithIgnoreCase,"hx.strings.Strings","endsWithIgnoreCase",0xcc88d076,"hx.strings.Strings.endsWithIgnoreCase","hx/strings/Strings.hx",1038,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1063_equals,"hx.strings.Strings","equals",0x68fce0d5,"hx.strings.Strings.equals","hx/strings/Strings.hx",1063,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1083_equalsIgnoreCase,"hx.strings.Strings","equalsIgnoreCase",0x0b781617,"hx.strings.Strings.equalsIgnoreCase","hx/strings/Strings.hx",1083,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1098_filter,"hx.strings.Strings","filter",0x2e3f124e,"hx.strings.Strings.filter","hx/strings/Strings.hx",1098,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1121_filterChars,"hx.strings.Strings","filterChars",0x4296dfaf,"hx.strings.Strings.filterChars","hx/strings/Strings.hx",1121,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1152_getFuzzyDistance,"hx.strings.Strings","getFuzzyDistance",0xba913cbf,"hx.strings.Strings.getFuzzyDistance","hx/strings/Strings.hx",1152,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1235_getLevenshteinDistance,"hx.strings.Strings","getLevenshteinDistance",0xa874e4a6,"hx.strings.Strings.getLevenshteinDistance","hx/strings/Strings.hx",1235,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1207_getLevenshteinDistance,"hx.strings.Strings","getLevenshteinDistance",0xa874e4a6,"hx.strings.Strings.getLevenshteinDistance","hx/strings/Strings.hx",1207,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1271_getLongestCommonSubstring,"hx.strings.Strings","getLongestCommonSubstring",0xdc9a6adc,"hx.strings.Strings.getLongestCommonSubstring","hx/strings/Strings.hx",1271,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1319_hashCode,"hx.strings.Strings","hashCode",0x7cd15031,"hx.strings.Strings.hashCode","hx/strings/Strings.hx",1319,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1393_htmlDecode,"hx.strings.Strings","htmlDecode",0xeab4be8f,"hx.strings.Strings.htmlDecode","hx/strings/Strings.hx",1393,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1387_htmlDecode,"hx.strings.Strings","htmlDecode",0xeab4be8f,"hx.strings.Strings.htmlDecode","hx/strings/Strings.hx",1387,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1428_htmlEncode,"hx.strings.Strings","htmlEncode",0x7fab5377,"hx.strings.Strings.htmlEncode","hx/strings/Strings.hx",1428,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1495_insertAt,"hx.strings.Strings","insertAt",0x377bc0a2,"hx.strings.Strings.insertAt","hx/strings/Strings.hx",1495,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1530_ifBlank,"hx.strings.Strings","ifBlank",0x5e7e22e1,"hx.strings.Strings.ifBlank","hx/strings/Strings.hx",1530,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1553_ifEmpty,"hx.strings.Strings","ifEmpty",0x19667e1a,"hx.strings.Strings.ifEmpty","hx/strings/Strings.hx",1553,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1572_ifNull,"hx.strings.Strings","ifNull",0x9349cb9a,"hx.strings.Strings.ifNull","hx/strings/Strings.hx",1572,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1589_indentLines,"hx.strings.Strings","indentLines",0x076ca79d,"hx.strings.Strings.indentLines","hx/strings/Strings.hx",1589,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1655_indexOf8,"hx.strings.Strings","indexOf8",0x3bfcab65,"hx.strings.Strings.indexOf8","hx/strings/Strings.hx",1655,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1727_isBlank,"hx.strings.Strings","isBlank",0x9121d3b4,"hx.strings.Strings.isBlank","hx/strings/Strings.hx",1727,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1743_isDigits,"hx.strings.Strings","isDigits",0x82ede9c6,"hx.strings.Strings.isDigits","hx/strings/Strings.hx",1743,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1772_isEmpty,"hx.strings.Strings","isEmpty",0x4c0a2eed,"hx.strings.Strings.isEmpty","hx/strings/Strings.hx",1772,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1789_isNotBlank,"hx.strings.Strings","isNotBlank",0x77b5b8e1,"hx.strings.Strings.isNotBlank","hx/strings/Strings.hx",1789,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1806_isNotEmpty,"hx.strings.Strings","isNotEmpty",0x329e141a,"hx.strings.Strings.isNotEmpty","hx/strings/Strings.hx",1806,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1819_isLowerCase,"hx.strings.Strings","isLowerCase",0x7d307db1,"hx.strings.Strings.isLowerCase","hx/strings/Strings.hx",1819,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1837_isUpperCase,"hx.strings.Strings","isUpperCase",0xfdc96192,"hx.strings.Strings.isUpperCase","hx/strings/Strings.hx",1837,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1848_iterate,"hx.strings.Strings","iterate",0x227acaa4,"hx.strings.Strings.iterate","hx/strings/Strings.hx",1848,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1860_iterateChars,"hx.strings.Strings","iterateChars",0x25912f99,"hx.strings.Strings.iterateChars","hx/strings/Strings.hx",1860,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1917_lastIndexOf8,"hx.strings.Strings","lastIndexOf8",0x65d17adb,"hx.strings.Strings.lastIndexOf8","hx/strings/Strings.hx",1917,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_1992_length8,"hx.strings.Strings","length8",0xc745053c,"hx.strings.Strings.length8","hx/strings/Strings.hx",1992,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2019_left,"hx.strings.Strings","left",0xa427091d,"hx.strings.Strings.left","hx/strings/Strings.hx",2019,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2047_lpad,"hx.strings.Strings","lpad",0xa42f5d7d,"hx.strings.Strings.lpad","hx/strings/Strings.hx",2047,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2081_map,"hx.strings.Strings","map",0x3b493e46,"hx.strings.Strings.map","hx/strings/Strings.hx",2081,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2104_prependIfMissing,"hx.strings.Strings","prependIfMissing",0xa0acb231,"hx.strings.Strings.prependIfMissing","hx/strings/Strings.hx",2104,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2130_quoteDouble,"hx.strings.Strings","quoteDouble",0x4246c517,"hx.strings.Strings.quoteDouble","hx/strings/Strings.hx",2130,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2158_quoteSingle,"hx.strings.Strings","quoteSingle",0xc89d008e,"hx.strings.Strings.quoteSingle","hx/strings/Strings.hx",2158,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2179_removeAfter,"hx.strings.Strings","removeAfter",0x690730e2,"hx.strings.Strings.removeAfter","hx/strings/Strings.hx",2179,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2187_removeAfterLast,"hx.strings.Strings","removeAfterLast",0x87748058,"hx.strings.Strings.removeAfterLast","hx/strings/Strings.hx",2187,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2195_removeAfterIgnoreCase,"hx.strings.Strings","removeAfterIgnoreCase",0x48d1d864,"hx.strings.Strings.removeAfterIgnoreCase","hx/strings/Strings.hx",2195,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2203_removeAfterLastIgnoreCase,"hx.strings.Strings","removeAfterLastIgnoreCase",0x9b1d575a,"hx.strings.Strings.removeAfterLastIgnoreCase","hx/strings/Strings.hx",2203,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2226_removeAt,"hx.strings.Strings","removeAt",0x2277b26d,"hx.strings.Strings.removeAt","hx/strings/Strings.hx",2226,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2248_removeBefore,"hx.strings.Strings","removeBefore",0x46fef6f9,"hx.strings.Strings.removeBefore","hx/strings/Strings.hx",2248,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2256_removeBeforeLast,"hx.strings.Strings","removeBeforeLast",0xc1fe9def,"hx.strings.Strings.removeBeforeLast","hx/strings/Strings.hx",2256,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2264_removeBeforeIgnoreCase,"hx.strings.Strings","removeBeforeIgnoreCase",0x7c78c13b,"hx.strings.Strings.removeBeforeIgnoreCase","hx/strings/Strings.hx",2264,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2272_removeBeforeLastIgnoreCase,"hx.strings.Strings","removeBeforeLastIgnoreCase",0x5b7ef7b1,"hx.strings.Strings.removeBeforeLastIgnoreCase","hx/strings/Strings.hx",2272,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2289_removeAll,"hx.strings.Strings","removeAll",0x06446667,"hx.strings.Strings.removeAll","hx/strings/Strings.hx",2289,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2307_removeFirst,"hx.strings.Strings","removeFirst",0x4c0242f6,"hx.strings.Strings.removeFirst","hx/strings/Strings.hx",2307,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2325_removeFirstIgnoreCase,"hx.strings.Strings","removeFirstIgnoreCase",0x8877cb78,"hx.strings.Strings.removeFirstIgnoreCase","hx/strings/Strings.hx",2325,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2337_removeAnsi,"hx.strings.Strings","removeAnsi",0x7596bebd,"hx.strings.Strings.removeAnsi","hx/strings/Strings.hx",2337,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2361_removeLeading,"hx.strings.Strings","removeLeading",0x8fa2bb0c,"hx.strings.Strings.removeLeading","hx/strings/Strings.hx",2361,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2389_removeTags,"hx.strings.Strings","removeTags",0x821be4d3,"hx.strings.Strings.removeTags","hx/strings/Strings.hx",2389,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2419_removeTrailing,"hx.strings.Strings","removeTrailing",0xe7e44dd6,"hx.strings.Strings.removeTrailing","hx/strings/Strings.hx",2419,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2448_repeat,"hx.strings.Strings","repeat",0xaf8689f1,"hx.strings.Strings.repeat","hx/strings/Strings.hx",2448,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2476_replaceAll,"hx.strings.Strings","replaceAll",0x2fcb76e3,"hx.strings.Strings.replaceAll","hx/strings/Strings.hx",2476,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2500_replaceFirst,"hx.strings.Strings","replaceFirst",0x31cb6a72,"hx.strings.Strings.replaceFirst","hx/strings/Strings.hx",2500,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2533_replaceFirstIgnoreCase,"hx.strings.Strings","replaceFirstIgnoreCase",0x3193a5f4,"hx.strings.Strings.replaceFirstIgnoreCase","hx/strings/Strings.hx",2533,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2563_reverse,"hx.strings.Strings","reverse",0x5aa689cc,"hx.strings.Strings.reverse","hx/strings/Strings.hx",2563,0x74f74a28)
static const ::String _hx_array_data_5da8f718_130[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2586_right,"hx.strings.Strings","right",0x750dfe06,"hx.strings.Strings.right","hx/strings/Strings.hx",2586,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2613_rpad,"hx.strings.Strings","rpad",0xa826a537,"hx.strings.Strings.rpad","hx/strings/Strings.hx",2613,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2660_split8,"hx.strings.Strings","split8",0x68a886b4,"hx.strings.Strings.split8","hx/strings/Strings.hx",2660,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2776_splitAt,"hx.strings.Strings","splitAt",0x2acd5f17,"hx.strings.Strings.splitAt","hx/strings/Strings.hx",2776,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2751_splitAt,"hx.strings.Strings","splitAt",0x2acd5f17,"hx.strings.Strings.splitAt","hx/strings/Strings.hx",2751,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2806_splitEvery,"hx.strings.Strings","splitEvery",0xfd05aff7,"hx.strings.Strings.splitEvery","hx/strings/Strings.hx",2806,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2843_splitLines,"hx.strings.Strings","splitLines",0xfc42c25b,"hx.strings.Strings.splitLines","hx/strings/Strings.hx",2843,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2856_startsWith,"hx.strings.Strings","startsWith",0xb1d5b60d,"hx.strings.Strings.startsWith","hx/strings/Strings.hx",2856,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2891_startsWithAny,"hx.strings.Strings","startsWithAny",0xb6e982df,"hx.strings.Strings.startsWithAny","hx/strings/Strings.hx",2891,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2916_startsWithAnyIgnoreCase,"hx.strings.Strings","startsWithAnyIgnoreCase",0x40f368a1,"hx.strings.Strings.startsWithAnyIgnoreCase","hx/strings/Strings.hx",2916,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2939_startsWithIgnoreCase,"hx.strings.Strings","startsWithIgnoreCase",0x1234a14f,"hx.strings.Strings.startsWithIgnoreCase","hx/strings/Strings.hx",2939,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_2971_substr8,"hx.strings.Strings","substr8",0x6f30ac91,"hx.strings.Strings.substr8","hx/strings/Strings.hx",2971,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3031_substring8,"hx.strings.Strings","substring8",0x60120a5d,"hx.strings.Strings.substring8","hx/strings/Strings.hx",3031,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3068_substringAfter,"hx.strings.Strings","substringAfter",0xd18256a1,"hx.strings.Strings.substringAfter","hx/strings/Strings.hx",3068,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3097_substringAfterIgnoreCase,"hx.strings.Strings","substringAfterIgnoreCase",0x847f42e3,"hx.strings.Strings.substringAfterIgnoreCase","hx/strings/Strings.hx",3097,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3132_substringBetween,"hx.strings.Strings","substringBetween",0xc6d46d8d,"hx.strings.Strings.substringBetween","hx/strings/Strings.hx",3132,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3171_substringBetweenIgnoreCase,"hx.strings.Strings","substringBetweenIgnoreCase",0xfe93b8cf,"hx.strings.Strings.substringBetweenIgnoreCase","hx/strings/Strings.hx",3171,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3211_substringAfterLast,"hx.strings.Strings","substringAfterLast",0x166ef197,"hx.strings.Strings.substringAfterLast","hx/strings/Strings.hx",3211,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3242_substringAfterLastIgnoreCase,"hx.strings.Strings","substringAfterLastIgnoreCase",0x4aab6d59,"hx.strings.Strings.substringAfterLastIgnoreCase","hx/strings/Strings.hx",3242,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3274_substringBefore,"hx.strings.Strings","substringBefore",0x4a44d85a,"hx.strings.Strings.substringBefore","hx/strings/Strings.hx",3274,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3305_substringBeforeIgnoreCase,"hx.strings.Strings","substringBeforeIgnoreCase",0x788885dc,"hx.strings.Strings.substringBeforeIgnoreCase","hx/strings/Strings.hx",3305,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3339_substringBeforeLast,"hx.strings.Strings","substringBeforeLast",0x4e2743d0,"hx.strings.Strings.substringBeforeLast","hx/strings/Strings.hx",3339,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3370_substringBeforeLastIgnoreCase,"hx.strings.Strings","substringBeforeLastIgnoreCase",0x484420d2,"hx.strings.Strings.substringBeforeLastIgnoreCase","hx/strings/Strings.hx",3370,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3404_toBool,"hx.strings.Strings","toBool",0x1fdee1db,"hx.strings.Strings.toBool","hx/strings/Strings.hx",3404,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3425_toBytes,"hx.strings.Strings","toBytes",0xc9c6a59a,"hx.strings.Strings.toBytes","hx/strings/Strings.hx",3425,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3448_toChar,"hx.strings.Strings","toChar",0x2082bc87,"hx.strings.Strings.toChar","hx/strings/Strings.hx",3448,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3462_toCharIterator,"hx.strings.Strings","toCharIterator",0x66392195,"hx.strings.Strings.toCharIterator","hx/strings/Strings.hx",3462,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3475_toChars,"hx.strings.Strings","toChars",0x51e23a0c,"hx.strings.Strings.toChars","hx/strings/Strings.hx",3475,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3498_toPattern,"hx.strings.Strings","toPattern",0x7c6a8d3f,"hx.strings.Strings.toPattern","hx/strings/Strings.hx",3498,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3514_toEReg,"hx.strings.Strings","toEReg",0x21c47ba0,"hx.strings.Strings.toEReg","hx/strings/Strings.hx",3514,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3535_toFloat,"hx.strings.Strings","toFloat",0x0ec562cb,"hx.strings.Strings.toFloat","hx/strings/Strings.hx",3535,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3560_toFloatOrNull,"hx.strings.Strings","toFloatOrNull",0x8f477a75,"hx.strings.Strings.toFloatOrNull","hx/strings/Strings.hx",3560,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3589_toHex,"hx.strings.Strings","toHex",0x9fbae64a,"hx.strings.Strings.toHex","hx/strings/Strings.hx",3589,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3613_toInt,"hx.strings.Strings","toInt",0x9fbbb05e,"hx.strings.Strings.toInt","hx/strings/Strings.hx",3613,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3639_toIntOrNull,"hx.strings.Strings","toIntOrNull",0x1248b848,"hx.strings.Strings.toIntOrNull","hx/strings/Strings.hx",3639,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3664_toLowerCase8,"hx.strings.Strings","toLowerCase8",0xdcfd8638,"hx.strings.Strings.toLowerCase8","hx/strings/Strings.hx",3664,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3694_toLowerCaseFirstChar,"hx.strings.Strings","toLowerCaseFirstChar",0x99544106,"hx.strings.Strings.toLowerCaseFirstChar","hx/strings/Strings.hx",3694,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3728_toLowerCamel,"hx.strings.Strings","toLowerCamel",0xdcf8f8e6,"hx.strings.Strings.toLowerCamel","hx/strings/Strings.hx",3728,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3763_toLowerHyphen,"hx.strings.Strings","toLowerHyphen",0x50456f42,"hx.strings.Strings.toLowerHyphen","hx/strings/Strings.hx",3763,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3789_toLowerUnderscore,"hx.strings.Strings","toLowerUnderscore",0xaf4f628a,"hx.strings.Strings.toLowerUnderscore","hx/strings/Strings.hx",3789,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3813_toTitle,"hx.strings.Strings","toTitle",0x1c69b2c7,"hx.strings.Strings.toTitle","hx/strings/Strings.hx",3813,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3845_toUpperCamel,"hx.strings.Strings","toUpperCamel",0xe22779e5,"hx.strings.Strings.toUpperCamel","hx/strings/Strings.hx",3845,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3876_toUpperUnderscore,"hx.strings.Strings","toUpperUnderscore",0xc691e52b,"hx.strings.Strings.toUpperUnderscore","hx/strings/Strings.hx",3876,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3896_toString,"hx.strings.Strings","toString",0xadcb14c2,"hx.strings.Strings.toString","hx/strings/Strings.hx",3896,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3914_toUpperCase8,"hx.strings.Strings","toUpperCase8",0xe22c0737,"hx.strings.Strings.toUpperCase8","hx/strings/Strings.hx",3914,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3945_toUpperCaseFirstChar,"hx.strings.Strings","toUpperCaseFirstChar",0x4f7a5905,"hx.strings.Strings.toUpperCaseFirstChar","hx/strings/Strings.hx",3945,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_3974_trim,"hx.strings.Strings","trim",0xa97a9df8,"hx.strings.Strings.trim","hx/strings/Strings.hx",3974,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4007_trimRight,"hx.strings.Strings","trimRight",0x68ff3ac4,"hx.strings.Strings.trimRight","hx/strings/Strings.hx",4007,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4049_trimLeft,"hx.strings.Strings","trimLeft",0xd5762e1f,"hx.strings.Strings.trimLeft","hx/strings/Strings.hx",4049,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4088_trimLines,"hx.strings.Strings","trimLines",0xf49d0ce7,"hx.strings.Strings.trimLines","hx/strings/Strings.hx",4088,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4106_trimToNull,"hx.strings.Strings","trimToNull",0xa6f5e5ba,"hx.strings.Strings.trimToNull","hx/strings/Strings.hx",4106,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4129_trimToEmpty,"hx.strings.Strings","trimToEmpty",0x3c513ffa,"hx.strings.Strings.trimToEmpty","hx/strings/Strings.hx",4129,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4156_truncate,"hx.strings.Strings","truncate",0x4456027c,"hx.strings.Strings.truncate","hx/strings/Strings.hx",4156,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4168_urlDecode,"hx.strings.Strings","urlDecode",0x40bb0927,"hx.strings.Strings.urlDecode","hx/strings/Strings.hx",4168,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4190_urlEncode,"hx.strings.Strings","urlEncode",0xd5b19e0f,"hx.strings.Strings.urlEncode","hx/strings/Strings.hx",4190,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_4214_wrap,"hx.strings.Strings","wrap",0xab763ae0,"hx.strings.Strings.wrap","hx/strings/Strings.hx",4214,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_34_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",34,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_35_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",35,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_36_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",36,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_39_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",39,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_42_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",42,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_47_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",47,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_52_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",52,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_fd0a69697a336cdd_57_boot,"hx.strings.Strings","boot",0x9d928548,"hx.strings.Strings.boot","hx/strings/Strings.hx",57,0x74f74a28)
namespace hx{
namespace strings{

void Strings_obj::__construct() { }

Dynamic Strings_obj::__CreateEmpty() { return new Strings_obj; }

void *Strings_obj::_hx_vtable = 0;

Dynamic Strings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Strings_obj > _hx_result = new Strings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Strings_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e5b539c;
}

 ::hx::strings::Pattern Strings_obj::REGEX_ANSI_ESC;

 ::hx::strings::Pattern Strings_obj::REGEX_HTML_UNESCAPE;

 ::hx::strings::Pattern Strings_obj::REGEX_SPLIT_LINES;

 ::hx::strings::Pattern Strings_obj::REGEX_REMOVE_XML_TAGS;

int Strings_obj::POS_NOT_FOUND;

::String Strings_obj::NEW_LINE_NIX;

::String Strings_obj::NEW_LINE_WIN;

::String Strings_obj::NEW_LINE;

int Strings_obj::_length(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_68__length)
HXDLIN(  68)		return str.length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,_length,return )

::String Strings_obj::_getNotFoundDefault(::String str,int notFoundDefault){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_75__getNotFoundDefault)
HXDLIN(  75)		switch((int)(notFoundDefault)){
            			case (int)1: {
HXLINE(  76)				return null();
            			}
            			break;
            			case (int)2: {
HXLINE(  77)				return HX_("",00,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE(  78)				return str;
            			}
            			break;
            		}
HXLINE(  75)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,_getNotFoundDefault,return )

int Strings_obj::_charCodeAt8Unsafe(::String str,int pos){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_92__charCodeAt8Unsafe)
HXDLIN(  92)		return ( (int)(str.charCodeAt(pos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,_charCodeAt8Unsafe,return )

::Array< ::String > Strings_obj::_splitAsciiWordsUnsafe(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_102__splitAsciiWordsUnsafe)
HXLINE( 103)		::Array< ::String > words = ::Array_obj< ::String >::__new();
HXLINE( 104)		 ::hx::strings::StringBuilder currentWord =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 106)		::Array< int > chars = ::hx::strings::Strings_obj::toChars(str);
HXLINE( 108)		int len = chars->length;
HXLINE( 109)		int lastIndex = (len - 1);
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			int _g1 = len;
HXDLIN( 110)			while((_g < _g1)){
HXLINE( 110)				_g = (_g + 1);
HXDLIN( 110)				int i = (_g - 1);
HXLINE( 111)				int ch = chars->__get(i);
HXLINE( 112)				bool _hx_tmp;
HXDLIN( 112)				bool _hx_tmp1;
HXDLIN( 112)				if ((ch > 64)) {
HXLINE( 112)					_hx_tmp1 = (ch < 91);
            				}
            				else {
HXLINE( 112)					_hx_tmp1 = false;
            				}
HXDLIN( 112)				if (!(_hx_tmp1)) {
HXLINE( 112)					if ((ch > 96)) {
HXLINE( 112)						_hx_tmp = (ch < 123);
            					}
            					else {
HXLINE( 112)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 112)					_hx_tmp = true;
            				}
HXDLIN( 112)				if (_hx_tmp) {
HXLINE( 113)					int chNext;
HXDLIN( 113)					if ((i < lastIndex)) {
HXLINE( 113)						chNext = chars->__get((i + 1));
            					}
            					else {
HXLINE( 113)						chNext = -1;
            					}
HXLINE( 114)					currentWord->addChar(ch);
HXLINE( 115)					bool _hx_tmp;
HXDLIN( 115)					if ((chNext > 47)) {
HXLINE( 115)						_hx_tmp = (chNext < 58);
            					}
            					else {
HXLINE( 115)						_hx_tmp = false;
            					}
HXDLIN( 115)					if (_hx_tmp) {
HXLINE( 116)						words->push(currentWord->toString());
HXLINE( 117)						currentWord->clear();
            					}
            					else {
HXLINE( 118)						if (::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->exists(ch)) {
HXLINE( 119)							bool _hx_tmp;
HXDLIN( 119)							if (::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->exists(chNext)) {
HXLINE( 119)								_hx_tmp = (chars->length > (i + 2));
            							}
            							else {
HXLINE( 119)								_hx_tmp = false;
            							}
HXDLIN( 119)							if (_hx_tmp) {
HXLINE( 120)								if (!(::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->exists(chars->__get((i + 2))))) {
HXLINE( 121)									words->push(currentWord->toString());
HXLINE( 122)									currentWord->clear();
            								}
            							}
            						}
            						else {
HXLINE( 126)							if (::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->exists(chNext)) {
HXLINE( 127)								words->push(currentWord->toString());
HXLINE( 128)								currentWord->clear();
            							}
            						}
            					}
            				}
            				else {
HXLINE( 131)					bool _hx_tmp;
HXDLIN( 131)					if ((ch > 47)) {
HXLINE( 131)						_hx_tmp = (ch < 58);
            					}
            					else {
HXLINE( 131)						_hx_tmp = false;
            					}
HXDLIN( 131)					if (_hx_tmp) {
HXLINE( 132)						currentWord->addChar(ch);
HXLINE( 133)						int chNext;
HXDLIN( 133)						if ((i < lastIndex)) {
HXLINE( 133)							chNext = chars->__get((i + 1));
            						}
            						else {
HXLINE( 133)							chNext = -1;
            						}
HXLINE( 134)						bool _hx_tmp;
HXDLIN( 134)						if ((chNext > 47)) {
HXLINE( 134)							_hx_tmp = (chNext < 58);
            						}
            						else {
HXLINE( 134)							_hx_tmp = false;
            						}
HXDLIN( 134)						if (!(_hx_tmp)) {
HXLINE( 135)							words->push(currentWord->toString());
HXLINE( 136)							currentWord->clear();
            						}
            					}
            					else {
HXLINE( 138)						if ((currentWord->len > 0)) {
HXLINE( 139)							words->push(currentWord->toString());
HXLINE( 140)							currentWord->clear();
            						}
            					}
            				}
            			}
            		}
HXLINE( 144)		if ((currentWord->len > 0)) {
HXLINE( 145)			words->push(currentWord->toString());
            		}
HXLINE( 146)		return words;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,_splitAsciiWordsUnsafe,return )

 ::Dynamic Strings_obj::ansiToHtml( ::Dynamic str, ::hx::strings::AnsiToHtmlRenderMethod renderMethod, ::hx::strings::AnsiState initialState){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_174_ansiToHtml)
HXLINE( 176)		bool _hx_tmp;
HXDLIN( 176)		if (::hx::IsNotNull( str )) {
HXLINE( 176)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE( 176)			_hx_tmp = true;
            		}
HXDLIN( 176)		if (_hx_tmp) {
HXLINE( 177)			return str;
            		}
HXLINE( 181)		if (::hx::IsNull( renderMethod )) {
HXLINE( 181)			renderMethod = ::hx::strings::AnsiToHtmlRenderMethod_obj::StyleAttributes_dyn();
            		}
HXLINE( 182)		::String styleOrClassAttribute;
HXDLIN( 182)		switch((int)(renderMethod->_hx_getIndex())){
            			case (int)0: {
HXLINE( 182)				styleOrClassAttribute = HX_("style",31,a5,1d,84);
            			}
            			break;
            			case (int)1: {
HXLINE( 182)				styleOrClassAttribute = HX_("class",38,78,58,48);
            			}
            			break;
            			case (int)2: {
HXLINE( 185)				 ::Dynamic cb = renderMethod->_hx_getObject(0);
HXLINE( 182)				styleOrClassAttribute = HX_("class",38,78,58,48);
            			}
            			break;
            		}
HXLINE( 188)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 190)		bool _hx_tmp1;
HXDLIN( 190)		if (::hx::IsNotNull( initialState )) {
HXLINE( 190)			bool _hx_tmp;
HXDLIN( 190)			bool _hx_tmp2;
HXDLIN( 190)			bool _hx_tmp3;
HXDLIN( 190)			if (::hx::IsNull( initialState->fgcolor )) {
HXLINE( 190)				_hx_tmp3 = ::hx::IsNotNull( initialState->bgcolor );
            			}
            			else {
HXLINE( 190)				_hx_tmp3 = true;
            			}
HXDLIN( 190)			if (!(_hx_tmp3)) {
HXLINE( 190)				_hx_tmp2 = initialState->bold;
            			}
            			else {
HXLINE( 190)				_hx_tmp2 = true;
            			}
HXDLIN( 190)			if (!(_hx_tmp2)) {
HXLINE( 190)				_hx_tmp = initialState->underline;
            			}
            			else {
HXLINE( 190)				_hx_tmp = true;
            			}
HXDLIN( 190)			if (!(_hx_tmp)) {
HXLINE( 190)				_hx_tmp1 = initialState->blink;
            			}
            			else {
HXLINE( 190)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 190)			_hx_tmp1 = false;
            		}
HXDLIN( 190)		if (_hx_tmp1) {
HXLINE( 191)			 ::hx::strings::StringBuilder _hx_tmp = sb->add(((HX_("<span ",5a,3c,d0,7e) + styleOrClassAttribute) + HX_("=\"",45,35,00,00)));
HXDLIN( 191)			_hx_tmp->add(initialState->toCSS(renderMethod))->add(HX_("\">",dc,1d,00,00));
            		}
HXLINE( 193)		 ::hx::strings::AnsiState effectiveState =  ::hx::strings::AnsiState_obj::__alloc( HX_CTX ,initialState);
HXLINE( 194)		int strLenMinus1;
HXDLIN( 194)		if (::hx::IsNull( str )) {
HXLINE( 194)			strLenMinus1 = 0;
            		}
            		else {
HXLINE( 194)			strLenMinus1 = ( (::String)(str) ).length;
            		}
HXDLIN( 194)		int strLenMinus11 = (strLenMinus1 - 1);
HXLINE( 195)		int i = -1;
HXLINE( 196)		 ::hx::strings::StringBuilder lookAhead =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 197)		while((i < strLenMinus11)){
HXLINE( 198)			i = (i + 1);
HXLINE( 199)			int ch = ( (int)(( (::String)(str) ).charCodeAt(i)) );
HXLINE( 200)			bool _hx_tmp;
HXDLIN( 200)			bool _hx_tmp1;
HXDLIN( 200)			if ((ch == 27)) {
HXLINE( 200)				_hx_tmp1 = (i < strLenMinus11);
            			}
            			else {
HXLINE( 200)				_hx_tmp1 = false;
            			}
HXDLIN( 200)			if (_hx_tmp1) {
HXLINE( 200)				_hx_tmp = (( (int)(( (::String)(str) ).charCodeAt((i + 1))) ) == 91);
            			}
            			else {
HXLINE( 200)				_hx_tmp = false;
            			}
HXDLIN( 200)			if (_hx_tmp) {
HXLINE( 201)				lookAhead->clear();
HXLINE( 202)				 ::hx::strings::AnsiState currentState =  ::hx::strings::AnsiState_obj::__alloc( HX_CTX ,effectiveState);
HXLINE( 203)				int currentGraphicModeParam = 0;
HXLINE( 204)				bool isValidEscapeSequence = false;
HXLINE( 205)				i = (i + 1);
HXLINE( 206)				while((i < strLenMinus11)){
HXLINE( 207)					i = (i + 1);
HXLINE( 208)					int ch2 = ( (int)(( (::String)(str) ).charCodeAt(i)) );
HXLINE( 209)					lookAhead->addChar(ch2);
HXLINE( 210)					switch((int)(ch2)){
            						case (int)48: {
HXLINE( 211)							currentGraphicModeParam = (currentGraphicModeParam * 10);
            						}
            						break;
            						case (int)49: {
HXLINE( 212)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 1);
            						}
            						break;
            						case (int)50: {
HXLINE( 213)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 2);
            						}
            						break;
            						case (int)51: {
HXLINE( 214)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 3);
            						}
            						break;
            						case (int)52: {
HXLINE( 215)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 4);
            						}
            						break;
            						case (int)53: {
HXLINE( 216)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 5);
            						}
            						break;
            						case (int)54: {
HXLINE( 217)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 6);
            						}
            						break;
            						case (int)55: {
HXLINE( 218)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 7);
            						}
            						break;
            						case (int)56: {
HXLINE( 219)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 8);
            						}
            						break;
            						case (int)57: {
HXLINE( 220)							currentGraphicModeParam = ((currentGraphicModeParam * 10) + 9);
            						}
            						break;
            						case (int)59: {
HXLINE( 222)							currentState->setGraphicModeParameter(currentGraphicModeParam);
HXLINE( 223)							currentGraphicModeParam = 0;
            						}
            						break;
            						case (int)109: {
HXLINE( 225)							currentState->setGraphicModeParameter(currentGraphicModeParam);
HXLINE( 226)							bool _hx_tmp;
HXDLIN( 226)							bool _hx_tmp1;
HXDLIN( 226)							bool _hx_tmp2;
HXDLIN( 226)							bool _hx_tmp3;
HXDLIN( 226)							if (::hx::IsNull( effectiveState->fgcolor )) {
HXLINE( 226)								_hx_tmp3 = ::hx::IsNotNull( effectiveState->bgcolor );
            							}
            							else {
HXLINE( 226)								_hx_tmp3 = true;
            							}
HXDLIN( 226)							if (!(_hx_tmp3)) {
HXLINE( 226)								_hx_tmp2 = effectiveState->bold;
            							}
            							else {
HXLINE( 226)								_hx_tmp2 = true;
            							}
HXDLIN( 226)							if (!(_hx_tmp2)) {
HXLINE( 226)								_hx_tmp1 = effectiveState->underline;
            							}
            							else {
HXLINE( 226)								_hx_tmp1 = true;
            							}
HXDLIN( 226)							if (!(_hx_tmp1)) {
HXLINE( 226)								_hx_tmp = effectiveState->blink;
            							}
            							else {
HXLINE( 226)								_hx_tmp = true;
            							}
HXDLIN( 226)							if (_hx_tmp) {
HXLINE( 227)								sb->add(HX_("</span>",e1,60,34,0b));
            							}
HXLINE( 228)							bool _hx_tmp4;
HXDLIN( 228)							bool _hx_tmp5;
HXDLIN( 228)							bool _hx_tmp6;
HXDLIN( 228)							bool _hx_tmp7;
HXDLIN( 228)							if (::hx::IsNull( currentState->fgcolor )) {
HXLINE( 228)								_hx_tmp7 = ::hx::IsNotNull( currentState->bgcolor );
            							}
            							else {
HXLINE( 228)								_hx_tmp7 = true;
            							}
HXDLIN( 228)							if (!(_hx_tmp7)) {
HXLINE( 228)								_hx_tmp6 = currentState->bold;
            							}
            							else {
HXLINE( 228)								_hx_tmp6 = true;
            							}
HXDLIN( 228)							if (!(_hx_tmp6)) {
HXLINE( 228)								_hx_tmp5 = currentState->underline;
            							}
            							else {
HXLINE( 228)								_hx_tmp5 = true;
            							}
HXDLIN( 228)							if (!(_hx_tmp5)) {
HXLINE( 228)								_hx_tmp4 = currentState->blink;
            							}
            							else {
HXLINE( 228)								_hx_tmp4 = true;
            							}
HXDLIN( 228)							if (_hx_tmp4) {
HXLINE( 229)								 ::hx::strings::StringBuilder _hx_tmp = sb->add(((HX_("<span ",5a,3c,d0,7e) + styleOrClassAttribute) + HX_("=\"",45,35,00,00)));
HXDLIN( 229)								_hx_tmp->add(currentState->toCSS(renderMethod))->add(HX_("\">",dc,1d,00,00));
            							}
HXLINE( 230)							effectiveState = currentState;
HXLINE( 231)							isValidEscapeSequence = true;
HXLINE( 232)							goto _hx_goto_6;
            						}
            						break;
            						default:{
HXLINE( 235)							goto _hx_goto_6;
            						}
            					}
            				}
            				_hx_goto_6:;
HXLINE( 238)				if (!(isValidEscapeSequence)) {
HXLINE( 240)					 ::hx::strings::StringBuilder _hx_tmp = sb->addChar(27)->add(HX_("[",5b,00,00,00));
HXDLIN( 240)					_hx_tmp->add(::Std_obj::string(lookAhead));
            				}
            			}
            			else {
HXLINE( 243)				sb->addChar(ch);
            			}
            		}
HXLINE( 246)		bool _hx_tmp2;
HXDLIN( 246)		bool _hx_tmp3;
HXDLIN( 246)		bool _hx_tmp4;
HXDLIN( 246)		bool _hx_tmp5;
HXDLIN( 246)		if (::hx::IsNull( effectiveState->fgcolor )) {
HXLINE( 246)			_hx_tmp5 = ::hx::IsNotNull( effectiveState->bgcolor );
            		}
            		else {
HXLINE( 246)			_hx_tmp5 = true;
            		}
HXDLIN( 246)		if (!(_hx_tmp5)) {
HXLINE( 246)			_hx_tmp4 = effectiveState->bold;
            		}
            		else {
HXLINE( 246)			_hx_tmp4 = true;
            		}
HXDLIN( 246)		if (!(_hx_tmp4)) {
HXLINE( 246)			_hx_tmp3 = effectiveState->underline;
            		}
            		else {
HXLINE( 246)			_hx_tmp3 = true;
            		}
HXDLIN( 246)		if (!(_hx_tmp3)) {
HXLINE( 246)			_hx_tmp2 = effectiveState->blink;
            		}
            		else {
HXLINE( 246)			_hx_tmp2 = true;
            		}
HXDLIN( 246)		if (_hx_tmp2) {
HXLINE( 247)			sb->add(HX_("</span>",e1,60,34,0b));
            		}
HXLINE( 249)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,ansiToHtml,return )

 ::Dynamic Strings_obj::appendIfMissing( ::Dynamic str, ::Dynamic suffix){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_266_appendIfMissing)
HXLINE( 267)		if (::hx::IsNull( str )) {
HXLINE( 268)			return null();
            		}
HXLINE( 270)		if ((( (::String)(str) ).length == 0)) {
HXLINE( 271)			::String _hx_tmp = ::Std_obj::string(str);
HXDLIN( 271)			return (_hx_tmp + ::Std_obj::string(suffix));
            		}
HXLINE( 273)		if (::hx::strings::Strings_obj::endsWith(( (::String)(str) ),( (::String)(suffix) ))) {
HXLINE( 274)			return str;
            		}
HXLINE( 276)		::String _hx_tmp = ::Std_obj::string(str);
HXDLIN( 276)		return (_hx_tmp + ::Std_obj::string(suffix));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,appendIfMissing,return )

 ::Dynamic Strings_obj::base64Encode( ::Dynamic plain){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_289_base64Encode)
HXLINE( 290)		if (::hx::IsNull( plain )) {
HXLINE( 291)			return null();
            		}
HXLINE( 297)		 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 297)		if (::hx::IsNull( plain )) {
HXLINE( 297)			_hx_tmp = null();
            		}
            		else {
HXLINE( 297)			_hx_tmp = ::haxe::io::Bytes_obj::ofString(( (::String)(plain) ),null());
            		}
HXDLIN( 297)		return ::haxe::crypto::Base64_obj::encode(_hx_tmp,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,base64Encode,return )

 ::Dynamic Strings_obj::base64Decode( ::Dynamic encoded){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_311_base64Decode)
HXLINE( 312)		if (::hx::IsNull( encoded )) {
HXLINE( 313)			return null();
            		}
HXLINE( 318)		return ::haxe::crypto::Base64_obj::decode(( (::String)(encoded) ),null())->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,base64Decode,return )

 ::Dynamic Strings_obj::charAt8( ::Dynamic str,int pos,::String __o_resultIfOutOfBound){
            		::String resultIfOutOfBound = __o_resultIfOutOfBound;
            		if (::hx::IsNull(__o_resultIfOutOfBound)) resultIfOutOfBound = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_343_charAt8)
HXLINE( 344)		bool _hx_tmp;
HXDLIN( 344)		bool _hx_tmp1;
HXDLIN( 344)		bool _hx_tmp2;
HXDLIN( 344)		if (::hx::IsNotNull( str )) {
HXLINE( 344)			_hx_tmp2 = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE( 344)			_hx_tmp2 = true;
            		}
HXDLIN( 344)		if (!(_hx_tmp2)) {
HXLINE( 344)			_hx_tmp1 = (pos < 0);
            		}
            		else {
HXLINE( 344)			_hx_tmp1 = true;
            		}
HXDLIN( 344)		if (!(_hx_tmp1)) {
HXLINE( 344)			int _hx_tmp1;
HXDLIN( 344)			if (::hx::IsNull( str )) {
HXLINE( 344)				_hx_tmp1 = 0;
            			}
            			else {
HXLINE( 344)				_hx_tmp1 = ( (::String)(str) ).length;
            			}
HXDLIN( 344)			_hx_tmp = (pos >= _hx_tmp1);
            		}
            		else {
HXLINE( 344)			_hx_tmp = true;
            		}
HXDLIN( 344)		if (_hx_tmp) {
HXLINE( 345)			return resultIfOutOfBound;
            		}
HXLINE( 347)		return ( (::String)(str) ).charAt(pos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,charAt8,return )

int Strings_obj::charCodeAt8(::String str,int pos,::hx::Null< int >  __o_resultIfOutOfBound){
            		int resultIfOutOfBound = __o_resultIfOutOfBound.Default(-1);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_379_charCodeAt8)
HXLINE( 380)		int strLen;
HXDLIN( 380)		if (::hx::IsNull( str )) {
HXLINE( 380)			strLen = 0;
            		}
            		else {
HXLINE( 380)			strLen = str.length;
            		}
HXLINE( 381)		bool _hx_tmp;
HXDLIN( 381)		bool _hx_tmp1;
HXDLIN( 381)		if ((strLen != 0)) {
HXLINE( 381)			_hx_tmp1 = (pos < 0);
            		}
            		else {
HXLINE( 381)			_hx_tmp1 = true;
            		}
HXDLIN( 381)		if (!(_hx_tmp1)) {
HXLINE( 381)			_hx_tmp = (pos >= strLen);
            		}
            		else {
HXLINE( 381)			_hx_tmp = true;
            		}
HXDLIN( 381)		if (_hx_tmp) {
HXLINE( 382)			return resultIfOutOfBound;
            		}
HXLINE( 384)		return ( (int)(str.charCodeAt(pos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,charCodeAt8,return )

 ::Dynamic Strings_obj::compact( ::Dynamic str){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_399_compact)
HXLINE( 400)		bool _hx_tmp;
HXDLIN( 400)		if (::hx::IsNotNull( str )) {
HXLINE( 400)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE( 400)			_hx_tmp = true;
            		}
HXDLIN( 400)		if (_hx_tmp) {
HXLINE( 401)			return str;
            		}
HXLINE( 403)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE( 404)		bool needWhiteSpace = false;
HXLINE( 405)		{
HXLINE( 405)			int _g = 0;
HXDLIN( 405)			::Array< int > _g1 = ::hx::strings::Strings_obj::toChars(( (::String)(str) ));
HXDLIN( 405)			while((_g < _g1->length)){
HXLINE( 405)				int _hx_char = _g1->__get(_g);
HXDLIN( 405)				_g = (_g + 1);
HXLINE( 406)				bool _hx_tmp;
HXDLIN( 406)				bool _hx_tmp1;
HXDLIN( 406)				if ((_hx_char > 8)) {
HXLINE( 406)					_hx_tmp1 = (_hx_char < 14);
            				}
            				else {
HXLINE( 406)					_hx_tmp1 = false;
            				}
HXDLIN( 406)				if (!(_hx_tmp1)) {
HXLINE( 406)					_hx_tmp = (_hx_char == 32);
            				}
            				else {
HXLINE( 406)					_hx_tmp = true;
            				}
HXDLIN( 406)				if (_hx_tmp) {
HXLINE( 407)					if ((sb->len != 0)) {
HXLINE( 408)						needWhiteSpace = true;
            					}
HXLINE( 409)					continue;
            				}
            				else {
HXLINE( 410)					if (needWhiteSpace) {
HXLINE( 411)						sb->addChar(32);
HXLINE( 412)						needWhiteSpace = false;
            					}
            				}
HXLINE( 414)				sb->addChar(_hx_char);
            			}
            		}
HXLINE( 416)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,compact,return )

bool Strings_obj::contains(::String searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_436_contains)
HXLINE( 437)		bool _hx_tmp;
HXDLIN( 437)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 437)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 437)			_hx_tmp = true;
            		}
HXDLIN( 437)		if (_hx_tmp) {
HXLINE( 438)			return false;
            		}
HXLINE( 439)		if ((searchFor == HX_("",00,00,00,00))) {
HXLINE( 440)			return true;
            		}
HXLINE( 442)		return (searchIn.indexOf(searchFor,null()) > -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,contains,return )

bool Strings_obj::containsOnly(::String searchIn, ::hx::strings::internal::_Either2::_Either2 allowedChars){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_460_containsOnly)
HXLINE( 461)		bool _hx_tmp;
HXDLIN( 461)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 461)			_hx_tmp = (searchIn.length == 0);
            		}
            		else {
HXLINE( 461)			_hx_tmp = true;
            		}
HXDLIN( 461)		if (_hx_tmp) {
HXLINE( 462)			return true;
            		}
HXLINE( 464)		if (::hx::IsNull( allowedChars )) {
HXLINE( 465)			return false;
            		}
HXLINE( 467)		::Array< int > allowedCharsArray;
HXDLIN( 467)		 ::hx::strings::internal::_Either2::_Either2 _g = allowedChars;
HXDLIN( 467)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 468)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE( 467)				allowedCharsArray = ::hx::strings::Strings_obj::toChars(str);
            			}
            			break;
            			case (int)1: {
HXLINE( 469)				::Array< int > chars = ( (::Array< int >)(_g->_hx_getObject(0)) );
HXLINE( 467)				allowedCharsArray = chars;
            			}
            			break;
            		}
HXLINE( 472)		{
HXLINE( 472)			int _g1 = 0;
HXDLIN( 472)			::Array< int > _g2 = ::hx::strings::Strings_obj::toChars(searchIn);
HXDLIN( 472)			while((_g1 < _g2->length)){
HXLINE( 472)				int ch = _g2->__get(_g1);
HXDLIN( 472)				_g1 = (_g1 + 1);
HXLINE( 473)				if ((allowedCharsArray->indexOf(ch,null()) < 0)) {
HXLINE( 474)					return false;
            				}
            			}
            		}
HXLINE( 476)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsOnly,return )

bool Strings_obj::containsAll(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_497_containsAll)
HXLINE( 498)		bool _hx_tmp;
HXDLIN( 498)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 498)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 498)			_hx_tmp = true;
            		}
HXDLIN( 498)		if (_hx_tmp) {
HXLINE( 499)			return false;
            		}
HXLINE( 501)		{
HXLINE( 501)			int _g = 0;
HXDLIN( 501)			while((_g < searchFor->length)){
HXLINE( 501)				::String candidate = searchFor->__get(_g);
HXDLIN( 501)				_g = (_g + 1);
HXLINE( 502)				bool _hx_tmp;
HXDLIN( 502)				bool _hx_tmp1;
HXDLIN( 502)				if (::hx::IsNotNull( searchIn )) {
HXLINE( 502)					_hx_tmp1 = ::hx::IsNull( candidate );
            				}
            				else {
HXLINE( 502)					_hx_tmp1 = true;
            				}
HXDLIN( 502)				if (_hx_tmp1) {
HXLINE( 502)					_hx_tmp = false;
            				}
            				else {
HXLINE( 502)					if ((candidate == HX_("",00,00,00,00))) {
HXLINE( 502)						_hx_tmp = true;
            					}
            					else {
HXLINE( 502)						_hx_tmp = (searchIn.indexOf(candidate,null()) > -1);
            					}
            				}
HXDLIN( 502)				if (!(_hx_tmp)) {
HXLINE( 503)					return false;
            				}
            			}
            		}
HXLINE( 505)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsAll,return )

bool Strings_obj::containsAllIgnoreCase(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_526_containsAllIgnoreCase)
HXLINE( 527)		bool _hx_tmp;
HXDLIN( 527)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 527)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 527)			_hx_tmp = true;
            		}
HXDLIN( 527)		if (_hx_tmp) {
HXLINE( 528)			return false;
            		}
HXLINE( 530)		searchIn = searchIn.toLowerCase();
HXLINE( 532)		{
HXLINE( 532)			int _g = 0;
HXDLIN( 532)			while((_g < searchFor->length)){
HXLINE( 532)				::String candidate = searchFor->__get(_g);
HXDLIN( 532)				_g = (_g + 1);
HXLINE( 533)				::String searchFor1 = candidate.toLowerCase();
HXDLIN( 533)				bool _hx_tmp;
HXDLIN( 533)				bool _hx_tmp1;
HXDLIN( 533)				if (::hx::IsNotNull( searchIn )) {
HXLINE( 533)					_hx_tmp1 = ::hx::IsNull( searchFor1 );
            				}
            				else {
HXLINE( 533)					_hx_tmp1 = true;
            				}
HXDLIN( 533)				if (_hx_tmp1) {
HXLINE( 533)					_hx_tmp = false;
            				}
            				else {
HXLINE( 533)					if ((searchFor1 == HX_("",00,00,00,00))) {
HXLINE( 533)						_hx_tmp = true;
            					}
            					else {
HXLINE( 533)						_hx_tmp = (searchIn.indexOf(searchFor1,null()) > -1);
            					}
            				}
HXDLIN( 533)				if (!(_hx_tmp)) {
HXLINE( 534)					return false;
            				}
            			}
            		}
HXLINE( 536)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsAllIgnoreCase,return )

bool Strings_obj::containsAny(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_558_containsAny)
HXLINE( 559)		bool _hx_tmp;
HXDLIN( 559)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 559)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 559)			_hx_tmp = true;
            		}
HXDLIN( 559)		if (_hx_tmp) {
HXLINE( 560)			return false;
            		}
HXLINE( 562)		{
HXLINE( 562)			int _g = 0;
HXDLIN( 562)			while((_g < searchFor->length)){
HXLINE( 562)				::String candidate = searchFor->__get(_g);
HXDLIN( 562)				_g = (_g + 1);
HXLINE( 563)				bool _hx_tmp;
HXDLIN( 563)				bool _hx_tmp1;
HXDLIN( 563)				if (::hx::IsNotNull( searchIn )) {
HXLINE( 563)					_hx_tmp1 = ::hx::IsNull( candidate );
            				}
            				else {
HXLINE( 563)					_hx_tmp1 = true;
            				}
HXDLIN( 563)				if (_hx_tmp1) {
HXLINE( 563)					_hx_tmp = false;
            				}
            				else {
HXLINE( 563)					if ((candidate == HX_("",00,00,00,00))) {
HXLINE( 563)						_hx_tmp = true;
            					}
            					else {
HXLINE( 563)						_hx_tmp = (searchIn.indexOf(candidate,null()) > -1);
            					}
            				}
HXDLIN( 563)				if (_hx_tmp) {
HXLINE( 564)					return true;
            				}
            			}
            		}
HXLINE( 566)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsAny,return )

bool Strings_obj::containsAnyIgnoreCase(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_587_containsAnyIgnoreCase)
HXLINE( 588)		bool _hx_tmp;
HXDLIN( 588)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 588)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 588)			_hx_tmp = true;
            		}
HXDLIN( 588)		if (_hx_tmp) {
HXLINE( 589)			return false;
            		}
HXLINE( 591)		searchIn = searchIn.toLowerCase();
HXLINE( 593)		{
HXLINE( 593)			int _g = 0;
HXDLIN( 593)			while((_g < searchFor->length)){
HXLINE( 593)				::String candidate = searchFor->__get(_g);
HXDLIN( 593)				_g = (_g + 1);
HXLINE( 594)				::String searchFor1 = candidate.toLowerCase();
HXDLIN( 594)				bool _hx_tmp;
HXDLIN( 594)				bool _hx_tmp1;
HXDLIN( 594)				if (::hx::IsNotNull( searchIn )) {
HXLINE( 594)					_hx_tmp1 = ::hx::IsNull( searchFor1 );
            				}
            				else {
HXLINE( 594)					_hx_tmp1 = true;
            				}
HXDLIN( 594)				if (_hx_tmp1) {
HXLINE( 594)					_hx_tmp = false;
            				}
            				else {
HXLINE( 594)					if ((searchFor1 == HX_("",00,00,00,00))) {
HXLINE( 594)						_hx_tmp = true;
            					}
            					else {
HXLINE( 594)						_hx_tmp = (searchIn.indexOf(searchFor1,null()) > -1);
            					}
            				}
HXDLIN( 594)				if (_hx_tmp) {
HXLINE( 595)					return true;
            				}
            			}
            		}
HXLINE( 597)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsAnyIgnoreCase,return )

bool Strings_obj::containsNone(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_620_containsNone)
HXDLIN( 620)		return !(::hx::strings::Strings_obj::containsAny(searchIn,searchFor));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsNone,return )

bool Strings_obj::containsNoneIgnoreCase(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_642_containsNoneIgnoreCase)
HXDLIN( 642)		return !(::hx::strings::Strings_obj::containsAnyIgnoreCase(searchIn,searchFor));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,containsNoneIgnoreCase,return )

bool Strings_obj::containsWhitespaces(::String searchIn){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_658_containsWhitespaces)
HXLINE( 659)		if (::hx::IsNull( searchIn )) {
HXLINE( 660)			return false;
            		}
HXLINE( 662)		{
HXLINE( 662)			int _g = 0;
HXDLIN( 662)			::Array< int > _g1 = ::hx::strings::Strings_obj::toChars(searchIn);
HXDLIN( 662)			while((_g < _g1->length)){
HXLINE( 662)				int ch = _g1->__get(_g);
HXDLIN( 662)				_g = (_g + 1);
HXLINE( 663)				bool _hx_tmp;
HXDLIN( 663)				bool _hx_tmp1;
HXDLIN( 663)				if ((ch > 8)) {
HXLINE( 663)					_hx_tmp1 = (ch < 14);
            				}
            				else {
HXLINE( 663)					_hx_tmp1 = false;
            				}
HXDLIN( 663)				if (!(_hx_tmp1)) {
HXLINE( 663)					_hx_tmp = (ch == 32);
            				}
            				else {
HXLINE( 663)					_hx_tmp = true;
            				}
HXDLIN( 663)				if (_hx_tmp) {
HXLINE( 664)					return true;
            				}
            			}
            		}
HXLINE( 667)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,containsWhitespaces,return )

int Strings_obj::countMatches(::String searchIn,::String searchFor,::hx::Null< int >  __o_startAt){
            		int startAt = __o_startAt.Default(0);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_687_countMatches)
HXLINE( 688)		bool _hx_tmp;
HXDLIN( 688)		bool _hx_tmp1;
HXDLIN( 688)		bool _hx_tmp2;
HXDLIN( 688)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 688)			_hx_tmp2 = (searchIn.length == 0);
            		}
            		else {
HXLINE( 688)			_hx_tmp2 = true;
            		}
HXDLIN( 688)		if (!(_hx_tmp2)) {
HXLINE( 688)			if (::hx::IsNotNull( searchFor )) {
HXLINE( 688)				_hx_tmp1 = (searchFor.length == 0);
            			}
            			else {
HXLINE( 688)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 688)			_hx_tmp1 = true;
            		}
HXDLIN( 688)		if (!(_hx_tmp1)) {
HXLINE( 688)			_hx_tmp = (startAt >= searchIn.length);
            		}
            		else {
HXLINE( 688)			_hx_tmp = true;
            		}
HXDLIN( 688)		if (_hx_tmp) {
HXLINE( 689)			return 0;
            		}
HXLINE( 691)		if ((startAt < 0)) {
HXLINE( 692)			startAt = 0;
            		}
HXLINE( 694)		int count = 0;
HXLINE( 695)		int foundAt;
HXDLIN( 695)		if ((startAt > -1)) {
HXLINE( 695)			foundAt = (startAt - 1);
            		}
            		else {
HXLINE( 695)			foundAt = 0;
            		}
HXLINE( 696)		while(true){
HXLINE( 696)			foundAt = searchIn.indexOf(searchFor,(foundAt + 1));
HXDLIN( 696)			if (!((foundAt > -1))) {
HXLINE( 696)				goto _hx_goto_30;
            			}
HXLINE( 697)			count = (count + 1);
            		}
            		_hx_goto_30:;
HXLINE( 698)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,countMatches,return )

int Strings_obj::countMatchesIgnoreCase(::String searchIn,::String searchFor,::hx::Null< int >  __o_startAt){
            		int startAt = __o_startAt.Default(0);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_718_countMatchesIgnoreCase)
HXLINE( 719)		bool _hx_tmp;
HXDLIN( 719)		bool _hx_tmp1;
HXDLIN( 719)		bool _hx_tmp2;
HXDLIN( 719)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 719)			_hx_tmp2 = (searchIn.length == 0);
            		}
            		else {
HXLINE( 719)			_hx_tmp2 = true;
            		}
HXDLIN( 719)		if (!(_hx_tmp2)) {
HXLINE( 719)			if (::hx::IsNotNull( searchFor )) {
HXLINE( 719)				_hx_tmp1 = (searchFor.length == 0);
            			}
            			else {
HXLINE( 719)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 719)			_hx_tmp1 = true;
            		}
HXDLIN( 719)		if (!(_hx_tmp1)) {
HXLINE( 719)			_hx_tmp = (startAt >= searchIn.length);
            		}
            		else {
HXLINE( 719)			_hx_tmp = true;
            		}
HXDLIN( 719)		if (_hx_tmp) {
HXLINE( 720)			return 0;
            		}
HXLINE( 722)		if ((startAt < 0)) {
HXLINE( 723)			startAt = 0;
            		}
HXLINE( 725)		searchIn = searchIn.toLowerCase();
HXLINE( 726)		searchFor = searchFor.toLowerCase();
HXLINE( 728)		int count = 0;
HXLINE( 729)		int foundAt;
HXDLIN( 729)		if ((startAt > -1)) {
HXLINE( 729)			foundAt = (startAt - 1);
            		}
            		else {
HXLINE( 729)			foundAt = 0;
            		}
HXLINE( 730)		while(true){
HXLINE( 730)			foundAt = searchIn.indexOf(searchFor,(foundAt + 1));
HXDLIN( 730)			if (!((foundAt > -1))) {
HXLINE( 730)				goto _hx_goto_32;
            			}
HXLINE( 731)			count = (count + 1);
            		}
            		_hx_goto_32:;
HXLINE( 732)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,countMatchesIgnoreCase,return )

int Strings_obj::compare(::String str,::String other){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_754_compare)
HXLINE( 755)		if (::hx::IsNull( str )) {
HXLINE( 756)			if (::hx::IsNull( other )) {
HXLINE( 756)				return 0;
            			}
            			else {
HXLINE( 756)				return -1;
            			}
            		}
HXLINE( 758)		if (::hx::IsNull( other )) {
HXLINE( 759)			if (::hx::IsNull( str )) {
HXLINE( 759)				return 0;
            			}
            			else {
HXLINE( 759)				return 1;
            			}
            		}
HXLINE( 762)		if ((str > other)) {
HXLINE( 762)			return 1;
            		}
            		else {
HXLINE( 762)			if ((str == other)) {
HXLINE( 762)				return 0;
            			}
            			else {
HXLINE( 762)				return -1;
            			}
            		}
HXDLIN( 762)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,compare,return )

int Strings_obj::compareIgnoreCase(::String str,::String other){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_787_compareIgnoreCase)
HXLINE( 788)		if (::hx::IsNull( str )) {
HXLINE( 789)			if (::hx::IsNull( other )) {
HXLINE( 789)				return 0;
            			}
            			else {
HXLINE( 789)				return -1;
            			}
            		}
HXLINE( 791)		if (::hx::IsNull( other )) {
HXLINE( 792)			if (::hx::IsNull( str )) {
HXLINE( 792)				return 0;
            			}
            			else {
HXLINE( 792)				return 1;
            			}
            		}
HXLINE( 794)		::String str1 = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(str)) );
HXLINE( 795)		::String other1 = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(other)) );
HXLINE( 798)		if ((str1 > other1)) {
HXLINE( 798)			return 1;
            		}
            		else {
HXLINE( 798)			if ((str1 == other1)) {
HXLINE( 798)				return 0;
            			}
            			else {
HXLINE( 798)				return -1;
            			}
            		}
HXDLIN( 798)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,compareIgnoreCase,return )

 ::hx::strings::StringDiff Strings_obj::diff(::String left,::String right){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_817_diff)
HXLINE( 818)		 ::hx::strings::StringDiff diff =  ::hx::strings::StringDiff_obj::__alloc( HX_CTX );
HXLINE( 819)		diff->at = ::hx::strings::Strings_obj::diffAt(left,right);
HXLINE( 820)		diff->left = ( (::String)(::hx::strings::Strings_obj::substr8(left,diff->at,null())) );
HXLINE( 821)		diff->right = ( (::String)(::hx::strings::Strings_obj::substr8(right,diff->at,null())) );
HXLINE( 822)		return diff;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,diff,return )

int Strings_obj::diffAt(::String str,::String other){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_843_diffAt)
HXLINE( 844)		if ((str == other)) {
HXLINE( 845)			return -1;
            		}
HXLINE( 847)		int strLen;
HXDLIN( 847)		if (::hx::IsNull( str )) {
HXLINE( 847)			strLen = 0;
            		}
            		else {
HXLINE( 847)			strLen = str.length;
            		}
HXLINE( 848)		int otherLen;
HXDLIN( 848)		if (::hx::IsNull( other )) {
HXLINE( 848)			otherLen = 0;
            		}
            		else {
HXLINE( 848)			otherLen = other.length;
            		}
HXLINE( 850)		bool _hx_tmp;
HXDLIN( 850)		if ((strLen != 0)) {
HXLINE( 850)			_hx_tmp = (otherLen == 0);
            		}
            		else {
HXLINE( 850)			_hx_tmp = true;
            		}
HXDLIN( 850)		if (_hx_tmp) {
HXLINE( 851)			return 0;
            		}
HXLINE( 853)		int checkLen;
HXDLIN( 853)		if ((strLen > otherLen)) {
HXLINE( 853)			checkLen = otherLen;
            		}
            		else {
HXLINE( 853)			checkLen = strLen;
            		}
HXLINE( 855)		{
HXLINE( 855)			int _g = 0;
HXDLIN( 855)			int _g1 = checkLen;
HXDLIN( 855)			while((_g < _g1)){
HXLINE( 855)				_g = (_g + 1);
HXDLIN( 855)				int i = (_g - 1);
HXLINE( 856)				int _hx_tmp = ( (int)(str.charCodeAt(i)) );
HXDLIN( 856)				if ((_hx_tmp != ( (int)(other.charCodeAt(i)) ))) {
HXLINE( 857)					return i;
            				}
            			}
            		}
HXLINE( 858)		return checkLen;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,diffAt,return )

 ::Dynamic Strings_obj::ellipsizeLeft( ::Dynamic str,int maxLength,::String __o_ellipsis){
            		::String ellipsis = __o_ellipsis;
            		if (::hx::IsNull(__o_ellipsis)) ellipsis = HX_("...",ee,0f,23,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_876_ellipsizeLeft)
HXLINE( 877)		int _hx_tmp;
HXDLIN( 877)		if (::hx::IsNull( str )) {
HXLINE( 877)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 877)			_hx_tmp = ( (::String)(str) ).length;
            		}
HXDLIN( 877)		if ((_hx_tmp <= maxLength)) {
HXLINE( 878)			return str;
            		}
HXLINE( 880)		int ellipsisLen;
HXDLIN( 880)		if (::hx::IsNull( ellipsis )) {
HXLINE( 880)			ellipsisLen = 0;
            		}
            		else {
HXLINE( 880)			ellipsisLen = ellipsis.length;
            		}
HXLINE( 881)		if ((maxLength < ellipsisLen)) {
HXLINE( 881)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("[maxLength] must not be smaller than ",68,6f,69,ad) + ellipsisLen)));
            		}
HXLINE( 883)		return (ellipsis + ::Std_obj::string(::hx::strings::Strings_obj::right(str,(maxLength - ellipsisLen))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,ellipsizeLeft,return )

 ::Dynamic Strings_obj::ellipsizeMiddle( ::Dynamic str,int maxLength,::String __o_ellipsis){
            		::String ellipsis = __o_ellipsis;
            		if (::hx::IsNull(__o_ellipsis)) ellipsis = HX_("...",ee,0f,23,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_901_ellipsizeMiddle)
HXLINE( 902)		int strLen;
HXDLIN( 902)		if (::hx::IsNull( str )) {
HXLINE( 902)			strLen = 0;
            		}
            		else {
HXLINE( 902)			strLen = ( (::String)(str) ).length;
            		}
HXLINE( 903)		if ((strLen <= maxLength)) {
HXLINE( 904)			return str;
            		}
HXLINE( 906)		int ellipsisLen;
HXDLIN( 906)		if (::hx::IsNull( ellipsis )) {
HXLINE( 906)			ellipsisLen = 0;
            		}
            		else {
HXLINE( 906)			ellipsisLen = ellipsis.length;
            		}
HXLINE( 907)		if ((maxLength < ellipsisLen)) {
HXLINE( 907)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("[maxLength] must not be smaller than ",68,6f,69,ad) + ellipsisLen)));
            		}
HXLINE( 909)		int maxStrLen = (maxLength - ellipsisLen);
HXLINE( 910)		int leftLen = ::Math_obj::round((( (Float)(maxStrLen) ) / ( (Float)(2) )));
HXLINE( 911)		int rightLen = (maxStrLen - leftLen);
HXLINE( 913)		 ::Dynamic _hx_tmp;
HXDLIN( 913)		int _hx_tmp1;
HXDLIN( 913)		if (::hx::IsNull( str )) {
HXLINE( 913)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 913)			_hx_tmp1 = ( (::String)(str) ).length;
            		}
HXDLIN( 913)		if ((_hx_tmp1 <= leftLen)) {
HXLINE( 913)			_hx_tmp = str;
            		}
            		else {
HXLINE( 913)			_hx_tmp = ::hx::strings::Strings_obj::substring8(str,0,leftLen);
            		}
HXDLIN( 913)		::String _hx_tmp2 = (::Std_obj::string(_hx_tmp) + ellipsis);
HXDLIN( 913)		return (_hx_tmp2 + ::Std_obj::string(::hx::strings::Strings_obj::right(str,rightLen)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,ellipsizeMiddle,return )

 ::Dynamic Strings_obj::ellipsizeRight( ::Dynamic str,int maxLength,::String __o_ellipsis){
            		::String ellipsis = __o_ellipsis;
            		if (::hx::IsNull(__o_ellipsis)) ellipsis = HX_("...",ee,0f,23,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_931_ellipsizeRight)
HXLINE( 932)		int _hx_tmp;
HXDLIN( 932)		if (::hx::IsNull( str )) {
HXLINE( 932)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 932)			_hx_tmp = ( (::String)(str) ).length;
            		}
HXDLIN( 932)		if ((_hx_tmp <= maxLength)) {
HXLINE( 933)			return str;
            		}
HXLINE( 935)		int ellipsisLen;
HXDLIN( 935)		if (::hx::IsNull( ellipsis )) {
HXLINE( 935)			ellipsisLen = 0;
            		}
            		else {
HXLINE( 935)			ellipsisLen = ellipsis.length;
            		}
HXLINE( 936)		if ((maxLength < ellipsisLen)) {
HXLINE( 936)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("[maxLength] must not be smaller than ",68,6f,69,ad) + ellipsisLen)));
            		}
HXLINE( 938)		int len = (maxLength - ellipsisLen);
HXDLIN( 938)		 ::Dynamic _hx_tmp1;
HXDLIN( 938)		int _hx_tmp2;
HXDLIN( 938)		if (::hx::IsNull( str )) {
HXLINE( 938)			_hx_tmp2 = 0;
            		}
            		else {
HXLINE( 938)			_hx_tmp2 = ( (::String)(str) ).length;
            		}
HXDLIN( 938)		if ((_hx_tmp2 <= len)) {
HXLINE( 938)			_hx_tmp1 = str;
            		}
            		else {
HXLINE( 938)			_hx_tmp1 = ::hx::strings::Strings_obj::substring8(str,0,len);
            		}
HXDLIN( 938)		return (::Std_obj::string(_hx_tmp1) + ellipsis);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,ellipsizeRight,return )

bool Strings_obj::endsWith(::String searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_956_endsWith)
HXLINE( 957)		bool _hx_tmp;
HXDLIN( 957)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 957)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 957)			_hx_tmp = true;
            		}
HXDLIN( 957)		if (_hx_tmp) {
HXLINE( 958)			return false;
            		}
HXLINE( 965)		int searchInLen = searchIn.length;
HXLINE( 966)		int searchForLen = searchFor.length;
HXLINE( 967)		if ((searchInLen >= searchForLen)) {
HXLINE( 967)			return (searchIn.indexOf(searchFor,(searchInLen - searchForLen)) > -1);
            		}
            		else {
HXLINE( 967)			return false;
            		}
HXDLIN( 967)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,endsWith,return )

bool Strings_obj::endsWithAny(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_988_endsWithAny)
HXLINE( 989)		bool _hx_tmp;
HXDLIN( 989)		if (::hx::IsNotNull( searchIn )) {
HXLINE( 989)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE( 989)			_hx_tmp = true;
            		}
HXDLIN( 989)		if (_hx_tmp) {
HXLINE( 990)			return false;
            		}
HXLINE( 992)		{
HXLINE( 992)			int _g = 0;
HXDLIN( 992)			while((_g < searchFor->length)){
HXLINE( 992)				::String candidate = searchFor->__get(_g);
HXDLIN( 992)				_g = (_g + 1);
HXLINE( 993)				bool _hx_tmp;
HXDLIN( 993)				if (::hx::IsNotNull( candidate )) {
HXLINE( 993)					_hx_tmp = ::hx::strings::Strings_obj::endsWith(searchIn,candidate);
            				}
            				else {
HXLINE( 993)					_hx_tmp = false;
            				}
HXDLIN( 993)				if (_hx_tmp) {
HXLINE( 994)					return true;
            				}
            			}
            		}
HXLINE( 995)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,endsWithAny,return )

bool Strings_obj::endsWithAnyIgnoreCase(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1013_endsWithAnyIgnoreCase)
HXLINE(1014)		bool _hx_tmp;
HXDLIN(1014)		if (::hx::IsNotNull( searchIn )) {
HXLINE(1014)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(1014)			_hx_tmp = true;
            		}
HXDLIN(1014)		if (_hx_tmp) {
HXLINE(1015)			return false;
            		}
HXLINE(1017)		searchIn = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(searchIn)) );
HXLINE(1018)		{
HXLINE(1018)			int _g = 0;
HXDLIN(1018)			while((_g < searchFor->length)){
HXLINE(1018)				::String candidate = searchFor->__get(_g);
HXDLIN(1018)				_g = (_g + 1);
HXLINE(1019)				bool _hx_tmp;
HXDLIN(1019)				if (::hx::IsNotNull( candidate )) {
HXLINE(1019)					_hx_tmp = ::hx::strings::Strings_obj::endsWith(searchIn,( (::String)(::hx::strings::Strings_obj::toLowerCase8(candidate)) ));
            				}
            				else {
HXLINE(1019)					_hx_tmp = false;
            				}
HXDLIN(1019)				if (_hx_tmp) {
HXLINE(1020)					return true;
            				}
            			}
            		}
HXLINE(1021)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,endsWithAnyIgnoreCase,return )

bool Strings_obj::endsWithIgnoreCase(::String searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1038_endsWithIgnoreCase)
HXLINE(1039)		bool _hx_tmp;
HXDLIN(1039)		if (::hx::IsNotNull( searchIn )) {
HXLINE(1039)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(1039)			_hx_tmp = true;
            		}
HXDLIN(1039)		if (_hx_tmp) {
HXLINE(1040)			return false;
            		}
HXLINE(1042)		::String _hx_tmp1 = searchIn.toLowerCase();
HXDLIN(1042)		return ::hx::strings::Strings_obj::endsWith(_hx_tmp1,searchFor.toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,endsWithIgnoreCase,return )

bool Strings_obj::equals(::String str,::String other){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1063_equals)
HXDLIN(1063)		return (str == other);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,equals,return )

bool Strings_obj::equalsIgnoreCase(::String str,::String other){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1083_equalsIgnoreCase)
HXDLIN(1083)		::String _hx_tmp = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(str)) );
HXDLIN(1083)		return ::hx::IsEq( _hx_tmp,::hx::strings::Strings_obj::toLowerCase8(other) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,equalsIgnoreCase,return )

 ::Dynamic Strings_obj::filter( ::Dynamic str, ::Dynamic filter,::String __o_separator){
            		::String separator = __o_separator;
            		if (::hx::IsNull(__o_separator)) separator = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1098_filter)
HXLINE(1101)		bool _hx_tmp;
HXDLIN(1101)		if (::hx::IsNotNull( str )) {
HXLINE(1101)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(1101)			_hx_tmp = true;
            		}
HXDLIN(1101)		if (_hx_tmp) {
HXLINE(1102)			return str;
            		}
HXLINE(1104)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(1104)		{
HXLINE(1104)			int _g1 = 0;
HXDLIN(1104)			::Array< ::String > _g2 = ::hx::strings::Strings_obj::split8(( (::String)(str) ),::Array_obj< ::String >::__new(1)->init(0,separator),null());
HXDLIN(1104)			while((_g1 < _g2->length)){
HXLINE(1104)				::String v = _g2->__get(_g1);
HXDLIN(1104)				_g1 = (_g1 + 1);
HXDLIN(1104)				if (( (bool)(filter(v)) )) {
HXLINE(1104)					_g->push(v);
            				}
            			}
            		}
HXDLIN(1104)		return _g->join(separator);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,filter,return )

 ::Dynamic Strings_obj::filterChars( ::Dynamic str, ::Dynamic filter){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1121_filterChars)
HXLINE(1124)		bool _hx_tmp;
HXDLIN(1124)		if (::hx::IsNotNull( str )) {
HXLINE(1124)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(1124)			_hx_tmp = true;
            		}
HXDLIN(1124)		if (_hx_tmp) {
HXLINE(1125)			return str;
            		}
HXLINE(1127)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(1127)		{
HXLINE(1127)			int _g1 = 0;
HXDLIN(1127)			::Array< int > _g2 = ::hx::strings::Strings_obj::toChars(( (::String)(str) ));
HXDLIN(1127)			while((_g1 < _g2->length)){
HXLINE(1127)				int v = _g2->__get(_g1);
HXDLIN(1127)				_g1 = (_g1 + 1);
HXDLIN(1127)				if (( (bool)(filter(v)) )) {
HXLINE(1127)					_g->push(v);
            				}
            			}
            		}
HXDLIN(1127)		::Array< int > _this = _g;
HXDLIN(1127)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(1127)		{
HXLINE(1127)			int _g3 = 0;
HXDLIN(1127)			int _g4 = _this->length;
HXDLIN(1127)			while((_g3 < _g4)){
HXLINE(1127)				_g3 = (_g3 + 1);
HXDLIN(1127)				int i = (_g3 - 1);
HXDLIN(1127)				{
HXLINE(1127)					::String inValue = ::String::fromCharCode(( (int)(_hx_array_unsafe_get(_this,i)) ));
HXDLIN(1127)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(1127)		return result->join(HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,filterChars,return )

int Strings_obj::getFuzzyDistance(::String left,::String right){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1152_getFuzzyDistance)
HXLINE(1153)		bool _hx_tmp;
HXDLIN(1153)		bool _hx_tmp1;
HXDLIN(1153)		if (::hx::IsNotNull( left )) {
HXLINE(1153)			_hx_tmp1 = (left.length == 0);
            		}
            		else {
HXLINE(1153)			_hx_tmp1 = true;
            		}
HXDLIN(1153)		if (!(_hx_tmp1)) {
HXLINE(1153)			if (::hx::IsNotNull( right )) {
HXLINE(1153)				_hx_tmp = (right.length == 0);
            			}
            			else {
HXLINE(1153)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1153)			_hx_tmp = true;
            		}
HXDLIN(1153)		if (_hx_tmp) {
HXLINE(1154)			return 0;
            		}
HXLINE(1156)		left = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(left)) );
HXLINE(1157)		right = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(right)) );
HXLINE(1159)		::Array< int > leftChars = ::hx::strings::Strings_obj::toChars(left);
HXLINE(1160)		::Array< int > rightChars = ::hx::strings::Strings_obj::toChars(right);
HXLINE(1161)		int leftLastMatchAt = -100;
HXLINE(1162)		int rightLastMatchAt = -100;
HXLINE(1164)		int score = 0;
HXLINE(1166)		{
HXLINE(1166)			int _g = 0;
HXDLIN(1166)			int _g1 = leftChars->length;
HXDLIN(1166)			while((_g < _g1)){
HXLINE(1166)				_g = (_g + 1);
HXDLIN(1166)				int leftIdx = (_g - 1);
HXLINE(1167)				int leftChar = leftChars->__get(leftIdx);
HXLINE(1168)				{
HXLINE(1168)					int _g1;
HXDLIN(1168)					if ((rightLastMatchAt > -1)) {
HXLINE(1168)						_g1 = (rightLastMatchAt + 1);
            					}
            					else {
HXLINE(1168)						_g1 = 0;
            					}
HXDLIN(1168)					int _g2 = rightChars->length;
HXDLIN(1168)					while((_g1 < _g2)){
HXLINE(1168)						_g1 = (_g1 + 1);
HXDLIN(1168)						int rightIdx = (_g1 - 1);
HXLINE(1169)						int rightChar = rightChars->__get(rightIdx);
HXLINE(1170)						if ((leftChar == rightChar)) {
HXLINE(1171)							score = (score + 1);
HXLINE(1172)							bool _hx_tmp;
HXDLIN(1172)							if ((leftLastMatchAt == (leftIdx - 1))) {
HXLINE(1172)								_hx_tmp = (rightLastMatchAt == (rightIdx - 1));
            							}
            							else {
HXLINE(1172)								_hx_tmp = false;
            							}
HXDLIN(1172)							if (_hx_tmp) {
HXLINE(1173)								score = (score + 2);
            							}
HXLINE(1174)							leftLastMatchAt = leftIdx;
HXLINE(1175)							rightLastMatchAt = rightIdx;
HXLINE(1176)							goto _hx_goto_56;
            						}
            					}
            					_hx_goto_56:;
            				}
            			}
            		}
HXLINE(1181)		return score;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,getFuzzyDistance,return )

int Strings_obj::getLevenshteinDistance(::String left,::String right){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(int a,int b){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1235_getLevenshteinDistance)
HXLINE(1235)			if ((a > b)) {
HXLINE(1235)				return b;
            			}
            			else {
HXLINE(1235)				return a;
            			}
HXDLIN(1235)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1207_getLevenshteinDistance)
HXLINE(1208)		int leftLen;
HXDLIN(1208)		if (::hx::IsNull( left )) {
HXLINE(1208)			leftLen = 0;
            		}
            		else {
HXLINE(1208)			leftLen = left.length;
            		}
HXLINE(1209)		int rightLen;
HXDLIN(1209)		if (::hx::IsNull( right )) {
HXLINE(1209)			rightLen = 0;
            		}
            		else {
HXLINE(1209)			rightLen = right.length;
            		}
HXLINE(1211)		if ((leftLen == 0)) {
HXLINE(1211)			return rightLen;
            		}
HXLINE(1212)		if ((rightLen == 0)) {
HXLINE(1212)			return leftLen;
            		}
HXLINE(1214)		if ((leftLen > rightLen)) {
HXLINE(1216)			::String tmp = left;
HXLINE(1217)			left = right;
HXLINE(1218)			right = tmp;
HXLINE(1219)			int tmpLen = leftLen;
HXLINE(1220)			leftLen = rightLen;
HXLINE(1221)			rightLen = tmpLen;
            		}
HXLINE(1224)		::Array< int > prevCosts = ::Array_obj< int >::__new();
HXLINE(1225)		::Array< int > costs = ::Array_obj< int >::__new();
HXLINE(1227)		{
HXLINE(1227)			int _g = 0;
HXDLIN(1227)			int _g1 = (leftLen + 1);
HXDLIN(1227)			while((_g < _g1)){
HXLINE(1227)				_g = (_g + 1);
HXDLIN(1227)				int leftIdx = (_g - 1);
HXLINE(1228)				prevCosts->push(leftIdx);
HXLINE(1229)				costs->push(0);
            			}
            		}
HXLINE(1232)		::Array< int > leftChars = ::hx::strings::Strings_obj::toChars(left);
HXLINE(1233)		::Array< int > rightChars = ::hx::strings::Strings_obj::toChars(right);
HXLINE(1235)		 ::Dynamic min =  ::Dynamic(new _hx_Closure_0());
HXLINE(1237)		{
HXLINE(1237)			int _g2 = 1;
HXDLIN(1237)			int _g3 = (rightLen + 1);
HXDLIN(1237)			while((_g2 < _g3)){
HXLINE(1237)				_g2 = (_g2 + 1);
HXDLIN(1237)				int rightIdx = (_g2 - 1);
HXLINE(1238)				int rightChar = rightChars->__get((rightIdx - 1));
HXLINE(1239)				costs[0] = rightIdx;
HXLINE(1241)				{
HXLINE(1241)					int _g = 1;
HXDLIN(1241)					int _g1 = (leftLen + 1);
HXDLIN(1241)					while((_g < _g1)){
HXLINE(1241)						_g = (_g + 1);
HXDLIN(1241)						int leftIdx = (_g - 1);
HXLINE(1242)						int leftIdxMinus1 = (leftIdx - 1);
HXLINE(1243)						int cost;
HXDLIN(1243)						if ((leftChars->__get(leftIdxMinus1) == rightChar)) {
HXLINE(1243)							cost = 0;
            						}
            						else {
HXLINE(1243)							cost = 1;
            						}
HXLINE(1244)						int _hx_tmp = ( (int)(min((costs->__get(leftIdxMinus1) + 1),(prevCosts->__get(leftIdx) + 1))) );
HXDLIN(1244)						costs[leftIdx] = ( (int)(min(_hx_tmp,(prevCosts->__get(leftIdxMinus1) + cost))) );
            					}
            				}
HXLINE(1247)				::Array< int > tmp = prevCosts;
HXLINE(1248)				prevCosts = costs;
HXLINE(1249)				costs = tmp;
            			}
            		}
HXLINE(1252)		return prevCosts->__get(leftLen);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,getLevenshteinDistance,return )

 ::Dynamic Strings_obj::getLongestCommonSubstring( ::Dynamic left, ::Dynamic right){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1271_getLongestCommonSubstring)
HXLINE(1272)		bool _hx_tmp;
HXDLIN(1272)		if (::hx::IsNotNull( left )) {
HXLINE(1272)			_hx_tmp = ::hx::IsNull( right );
            		}
            		else {
HXLINE(1272)			_hx_tmp = true;
            		}
HXDLIN(1272)		if (_hx_tmp) {
HXLINE(1273)			return null();
            		}
HXLINE(1275)		int leftLen;
HXDLIN(1275)		if (::hx::IsNull( left )) {
HXLINE(1275)			leftLen = 0;
            		}
            		else {
HXLINE(1275)			leftLen = ( (::String)(left) ).length;
            		}
HXLINE(1276)		int rightLen;
HXDLIN(1276)		if (::hx::IsNull( right )) {
HXLINE(1276)			rightLen = 0;
            		}
            		else {
HXLINE(1276)			rightLen = ( (::String)(right) ).length;
            		}
HXLINE(1278)		bool _hx_tmp1;
HXDLIN(1278)		if ((leftLen != 0)) {
HXLINE(1278)			_hx_tmp1 = (rightLen == 0);
            		}
            		else {
HXLINE(1278)			_hx_tmp1 = true;
            		}
HXDLIN(1278)		if (_hx_tmp1) {
HXLINE(1279)			return HX_("",00,00,00,00);
            		}
HXLINE(1281)		::Array< int > leftChars = ::hx::strings::Strings_obj::toChars(( (::String)(left) ));
HXLINE(1282)		::Array< int > rightChars = ::hx::strings::Strings_obj::toChars(( (::String)(right) ));
HXLINE(1284)		int leftSubStartAt = 0;
HXLINE(1285)		int leftSubLen = 0;
HXLINE(1287)		{
HXLINE(1287)			int _g = 0;
HXDLIN(1287)			int _g1 = leftLen;
HXDLIN(1287)			while((_g < _g1)){
HXLINE(1287)				_g = (_g + 1);
HXDLIN(1287)				int leftIdx = (_g - 1);
HXLINE(1288)				{
HXLINE(1288)					int _g1 = 0;
HXDLIN(1288)					int _g2 = rightLen;
HXDLIN(1288)					while((_g1 < _g2)){
HXLINE(1288)						_g1 = (_g1 + 1);
HXDLIN(1288)						int rightIdx = (_g1 - 1);
HXLINE(1289)						int currLen = 0;
HXLINE(1290)						while((leftChars->__get((leftIdx + currLen)) == rightChars->__get((rightIdx + currLen)))){
HXLINE(1291)							currLen = (currLen + 1);
HXLINE(1292)							bool _hx_tmp;
HXDLIN(1292)							if (((leftIdx + currLen) < leftLen)) {
HXLINE(1292)								_hx_tmp = ((rightIdx + currLen) >= rightLen);
            							}
            							else {
HXLINE(1292)								_hx_tmp = true;
            							}
HXDLIN(1292)							if (_hx_tmp) {
HXLINE(1293)								goto _hx_goto_65;
            							}
            						}
            						_hx_goto_65:;
HXLINE(1295)						if ((currLen > leftSubLen)) {
HXLINE(1296)							leftSubLen = currLen;
HXLINE(1297)							leftSubStartAt = leftIdx;
            						}
            					}
            				}
            			}
            		}
HXLINE(1301)		return ::hx::strings::Strings_obj::substr8(left,leftSubStartAt,leftSubLen);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,getLongestCommonSubstring,return )

int Strings_obj::hashCode(::String str, ::hx::strings::HashCodeAlgorithm algo){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1319_hashCode)
HXLINE(1320)		bool _hx_tmp;
HXDLIN(1320)		if (::hx::IsNotNull( str )) {
HXLINE(1320)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(1320)			_hx_tmp = true;
            		}
HXDLIN(1320)		if (_hx_tmp) {
HXLINE(1321)			return 0;
            		}
HXLINE(1323)		if (::hx::IsNull( algo )) {
HXLINE(1323)			algo = ::hx::strings::HashCodeAlgorithm_obj::PLATFORM_SPECIFIC_dyn();
            		}
HXLINE(1326)		if (::hx::IsNull( algo )) {
HXLINE(1363)			 ::haxe::io::Bytes _hx_tmp;
HXDLIN(1363)			if (::hx::IsNull( str )) {
HXLINE(1363)				_hx_tmp = null();
            			}
            			else {
HXLINE(1363)				_hx_tmp = ::haxe::io::Bytes_obj::ofString(str,null());
            			}
HXDLIN(1363)			return ::haxe::crypto::Crc32_obj::make(_hx_tmp);
            		}
            		else {
HXLINE(1326)			switch((int)(algo->_hx_getIndex())){
            				case (int)1: {
HXLINE(1328)					 ::haxe::io::Bytes _hx_tmp;
HXDLIN(1328)					if (::hx::IsNull( str )) {
HXLINE(1328)						_hx_tmp = null();
            					}
            					else {
HXLINE(1328)						_hx_tmp = ::haxe::io::Bytes_obj::ofString(str,null());
            					}
HXDLIN(1328)					return ::haxe::crypto::Adler32_obj::make(_hx_tmp);
            				}
            				break;
            				case (int)2: {
HXLINE(1331)					 ::haxe::io::Bytes _hx_tmp;
HXDLIN(1331)					if (::hx::IsNull( str )) {
HXLINE(1331)						_hx_tmp = null();
            					}
            					else {
HXLINE(1331)						_hx_tmp = ::haxe::io::Bytes_obj::ofString(str,null());
            					}
HXDLIN(1331)					return ::haxe::crypto::Crc32_obj::make(_hx_tmp);
            				}
            				break;
            				case (int)3: {
HXLINE(1334)					int hc = 5381;
HXLINE(1335)					{
HXLINE(1335)						int _g = 0;
HXDLIN(1335)						::Array< int > _g1 = ::hx::strings::Strings_obj::toChars(str);
HXDLIN(1335)						while((_g < _g1->length)){
HXLINE(1335)							int ch = _g1->__get(_g);
HXDLIN(1335)							_g = (_g + 1);
HXLINE(1336)							hc = (((hc << 5) + hc) ^ ch);
            						}
            					}
HXLINE(1337)					return hc;
            				}
            				break;
            				case (int)4: {
HXLINE(1340)					int hc = 0;
HXLINE(1341)					{
HXLINE(1341)						int _g = 0;
HXDLIN(1341)						::Array< int > _g1 = ::hx::strings::Strings_obj::toChars(str);
HXDLIN(1341)						while((_g < _g1->length)){
HXLINE(1341)							int ch = _g1->__get(_g);
HXDLIN(1341)							_g = (_g + 1);
HXLINE(1342)							hc = (((hc << 5) - hc) + ch);
            						}
            					}
HXLINE(1343)					return hc;
            				}
            				break;
            				case (int)5: {
HXLINE(1346)					int hc = 0;
HXLINE(1347)					{
HXLINE(1347)						int _g = 0;
HXDLIN(1347)						::Array< int > _g1 = ::hx::strings::Strings_obj::toChars(str);
HXDLIN(1347)						while((_g < _g1->length)){
HXLINE(1347)							int ch = _g1->__get(_g);
HXDLIN(1347)							_g = (_g + 1);
HXLINE(1348)							hc = ((((hc << 6) + (hc << 16)) - hc) + ch);
            						}
            					}
HXLINE(1349)					return hc;
            				}
            				break;
            				default:{
HXLINE(1363)					 ::haxe::io::Bytes _hx_tmp;
HXDLIN(1363)					if (::hx::IsNull( str )) {
HXLINE(1363)						_hx_tmp = null();
            					}
            					else {
HXLINE(1363)						_hx_tmp = ::haxe::io::Bytes_obj::ofString(str,null());
            					}
HXDLIN(1363)					return ::haxe::crypto::Crc32_obj::make(_hx_tmp);
            				}
            			}
            		}
HXLINE(1326)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,hashCode,return )

 ::Dynamic Strings_obj::htmlDecode( ::Dynamic str){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run(::Dynamic m){
            			HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1393_htmlDecode)
HXLINE(1394)			::String match = ::hx::strings::Matcher_obj::matched(m,null());
HXLINE(1395)			::String _hx_switch_0 = match;
            			if (  (_hx_switch_0==HX_("&amp;",dd,d4,aa,21)) ){
HXLINE(1396)				return HX_("&",26,00,00,00);
HXDLIN(1396)				goto _hx_goto_71;
            			}
            			if (  (_hx_switch_0==HX_("&apos;",22,7f,ca,55)) ){
HXLINE(1397)				return HX_("'",27,00,00,00);
HXDLIN(1397)				goto _hx_goto_71;
            			}
            			if (  (_hx_switch_0==HX_("&gt;",08,a9,6c,19)) ){
HXLINE(1398)				return HX_(">",3e,00,00,00);
HXDLIN(1398)				goto _hx_goto_71;
            			}
            			if (  (_hx_switch_0==HX_("&lt;",4d,74,70,19)) ){
HXLINE(1399)				return HX_("<",3c,00,00,00);
HXDLIN(1399)				goto _hx_goto_71;
            			}
            			if (  (_hx_switch_0==HX_("&nbsp;",64,13,c2,c8)) ){
HXLINE(1400)				return HX_(" ",20,00,00,00);
HXDLIN(1400)				goto _hx_goto_71;
            			}
            			if (  (_hx_switch_0==HX_("&quot;",2c,d9,81,8f)) ){
HXLINE(1401)				return HX_("\"",22,00,00,00);
HXDLIN(1401)				goto _hx_goto_71;
            			}
            			/* default */{
HXLINE(1403)				int number;
HXDLIN(1403)				if (::hx::IsNull( match )) {
HXLINE(1403)					number = 0;
            				}
            				else {
HXLINE(1403)					number = match.length;
            				}
HXDLIN(1403)				 ::Dynamic number1 = ::Std_obj::parseInt(( (::String)(::hx::strings::Strings_obj::substr8(match,2,(number - 3))) ));
HXLINE(1404)				if (::hx::IsNull( number1 )) {
HXLINE(1404)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid HTML value ",db,ee,a4,9e) + match)));
            				}
HXLINE(1402)				return ::String::fromCharCode(( (int)(number1) ));
            			}
            			_hx_goto_71:;
HXLINE(1395)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1387_htmlDecode)
HXLINE(1390)		bool _hx_tmp;
HXDLIN(1390)		if (::hx::IsNotNull( str )) {
HXLINE(1390)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(1390)			_hx_tmp = true;
            		}
HXDLIN(1390)		if (_hx_tmp) {
HXLINE(1391)			return str;
            		}
HXLINE(1393)		 ::hx::strings::Pattern _this = ::hx::strings::Strings_obj::REGEX_HTML_UNESCAPE;
HXDLIN(1393)		return ::hx::strings::Matcher_obj::map( ::hx::strings::_Pattern::MatcherImpl_obj::__alloc( HX_CTX ,_this->ereg,_this->pattern,_this->options,( (::String)(str) )), ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,htmlDecode,return )

 ::Dynamic Strings_obj::htmlEncode( ::Dynamic str,::hx::Null< bool >  __o_escapeQuotes){
            		bool escapeQuotes = __o_escapeQuotes.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1428_htmlEncode)
HXLINE(1429)		bool _hx_tmp;
HXDLIN(1429)		if (::hx::IsNotNull( str )) {
HXLINE(1429)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(1429)			_hx_tmp = true;
            		}
HXDLIN(1429)		if (_hx_tmp) {
HXLINE(1430)			return str;
            		}
HXLINE(1434)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(1435)		bool isFirstSpace = true;
HXLINE(1436)		{
HXLINE(1436)			int _g = 0;
HXDLIN(1436)			int _g1;
HXDLIN(1436)			if (::hx::IsNull( str )) {
HXLINE(1436)				_g1 = 0;
            			}
            			else {
HXLINE(1436)				_g1 = ( (::String)(str) ).length;
            			}
HXDLIN(1436)			while((_g < _g1)){
HXLINE(1436)				_g = (_g + 1);
HXDLIN(1436)				int i = (_g - 1);
HXLINE(1437)				int ch = ( (int)(( (::String)(str) ).charCodeAt(i)) );
HXLINE(1438)				switch((int)(ch)){
            					case (int)32: {
HXLINE(1440)						if (isFirstSpace) {
HXLINE(1441)							sb->add(HX_(" ",20,00,00,00));
HXLINE(1442)							isFirstSpace = false;
            						}
            						else {
HXLINE(1444)							sb->add(HX_("&nbsp;",64,13,c2,c8));
            						}
            					}
            					break;
            					case (int)34: {
HXLINE(1450)						::String _hx_tmp;
HXDLIN(1450)						if (escapeQuotes) {
HXLINE(1450)							_hx_tmp = HX_("&quot;",2c,d9,81,8f);
            						}
            						else {
HXLINE(1450)							_hx_tmp = HX_("\"",22,00,00,00);
            						}
HXDLIN(1450)						sb->add(_hx_tmp);
            					}
            					break;
            					case (int)38: {
HXLINE(1447)						sb->add(HX_("&amp;",dd,d4,aa,21));
            					}
            					break;
            					case (int)39: {
HXLINE(1454)						::String _hx_tmp;
HXDLIN(1454)						if (escapeQuotes) {
HXLINE(1454)							_hx_tmp = HX_("&#039;",62,26,77,78);
            						}
            						else {
HXLINE(1454)							_hx_tmp = HX_("'",27,00,00,00);
            						}
HXDLIN(1454)						sb->add(_hx_tmp);
            					}
            					break;
            					case (int)60: {
HXLINE(1457)						sb->add(HX_("&lt;",4d,74,70,19));
            					}
            					break;
            					case (int)62: {
HXLINE(1460)						sb->add(HX_("&gt;",08,a9,6c,19));
            					}
            					break;
            					default:{
HXLINE(1463)						if ((ch > 127)) {
HXLINE(1464)							 ::hx::strings::StringBuilder _hx_tmp = sb->add(HX_("&#",3d,21,00,00));
HXDLIN(1464)							_hx_tmp->add(::Std_obj::string(ch))->add(HX_(";",3b,00,00,00));
            						}
            						else {
HXLINE(1466)							sb->addChar(ch);
            						}
            					}
            				}
HXLINE(1469)				if ((ch != 32)) {
HXLINE(1470)					isFirstSpace = true;
            				}
            			}
            		}
HXLINE(1473)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,htmlEncode,return )

 ::Dynamic Strings_obj::insertAt( ::Dynamic str,int pos,::String insertion){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1495_insertAt)
HXLINE(1496)		if (::hx::IsNull( str )) {
HXLINE(1497)			return null();
            		}
HXLINE(1499)		int strLen;
HXDLIN(1499)		if (::hx::IsNull( str )) {
HXLINE(1499)			strLen = 0;
            		}
            		else {
HXLINE(1499)			strLen = ( (::String)(str) ).length;
            		}
HXLINE(1500)		if ((pos < 0)) {
HXLINE(1500)			pos = (strLen + pos);
            		}
HXLINE(1502)		bool _hx_tmp;
HXDLIN(1502)		if ((pos >= 0)) {
HXLINE(1502)			_hx_tmp = (pos > strLen);
            		}
            		else {
HXLINE(1502)			_hx_tmp = true;
            		}
HXDLIN(1502)		if (_hx_tmp) {
HXLINE(1503)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Absolute value of [pos] must be <= str.length",8f,67,7d,63)));
            		}
HXLINE(1505)		bool _hx_tmp1;
HXDLIN(1505)		if (::hx::IsNotNull( insertion )) {
HXLINE(1505)			_hx_tmp1 = (insertion.length == 0);
            		}
            		else {
HXLINE(1505)			_hx_tmp1 = true;
            		}
HXDLIN(1505)		if (_hx_tmp1) {
HXLINE(1506)			return str;
            		}
HXLINE(1508)		::String _hx_tmp2 = (::Std_obj::string(::hx::strings::Strings_obj::substring8(str,0,pos)) + insertion);
HXDLIN(1508)		return (_hx_tmp2 + ::Std_obj::string(::hx::strings::Strings_obj::substring8(str,pos,null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,insertAt,return )

 ::Dynamic Strings_obj::ifBlank( ::Dynamic str, ::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1530_ifBlank)
HXDLIN(1530)		bool _hx_tmp;
HXDLIN(1530)		if (::hx::IsNull( str )) {
HXDLIN(1530)			_hx_tmp = true;
            		}
            		else {
HXDLIN(1530)			_hx_tmp = (::StringTools_obj::trim(( (::String)(str) )).length == 0);
            		}
HXDLIN(1530)		if (_hx_tmp) {
HXDLIN(1530)			return fallback;
            		}
            		else {
HXDLIN(1530)			return str;
            		}
HXDLIN(1530)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,ifBlank,return )

 ::Dynamic Strings_obj::ifEmpty( ::Dynamic str, ::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1553_ifEmpty)
HXDLIN(1553)		bool _hx_tmp;
HXDLIN(1553)		if (::hx::IsNotNull( str )) {
HXDLIN(1553)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXDLIN(1553)			_hx_tmp = true;
            		}
HXDLIN(1553)		if (_hx_tmp) {
HXDLIN(1553)			return fallback;
            		}
            		else {
HXDLIN(1553)			return str;
            		}
HXDLIN(1553)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,ifEmpty,return )

 ::Dynamic Strings_obj::ifNull( ::Dynamic str, ::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1572_ifNull)
HXDLIN(1572)		if (::hx::IsNull( str )) {
HXDLIN(1572)			return fallback;
            		}
            		else {
HXDLIN(1572)			return str;
            		}
HXDLIN(1572)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,ifNull,return )

 ::Dynamic Strings_obj::indentLines( ::Dynamic str,::String indentWith){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1589_indentLines)
HXLINE(1590)		if (::hx::IsNull( str )) {
HXLINE(1591)			return null();
            		}
HXLINE(1593)		bool _hx_tmp;
HXDLIN(1593)		if ((( (::String)(str) ).length != 0)) {
HXLINE(1593)			if (::hx::IsNotNull( indentWith )) {
HXLINE(1593)				_hx_tmp = (indentWith.length == 0);
            			}
            			else {
HXLINE(1593)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1593)			_hx_tmp = true;
            		}
HXDLIN(1593)		if (_hx_tmp) {
HXLINE(1594)			return str;
            		}
HXLINE(1596)		bool isFirstLine = true;
HXLINE(1597)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(1598)		{
HXLINE(1598)			int _g = 0;
HXDLIN(1598)			::Array< ::String > _g1 = ::hx::strings::Strings_obj::REGEX_SPLIT_LINES->ereg->split(( (::String)(str) ));
HXDLIN(1598)			while((_g < _g1->length)){
HXLINE(1598)				::String line = _g1->__get(_g);
HXDLIN(1598)				_g = (_g + 1);
HXLINE(1599)				if (isFirstLine) {
HXLINE(1600)					isFirstLine = false;
            				}
            				else {
HXLINE(1602)					sb->newLine();
            				}
HXLINE(1603)				sb->add(indentWith);
HXLINE(1604)				sb->add(line);
            			}
            		}
HXLINE(1606)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,indentLines,return )

int Strings_obj::indexOf8(::String str,::String searchFor,::hx::Null< int >  __o_startAt){
            		int startAt = __o_startAt.Default(0);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1655_indexOf8)
HXLINE(1656)		bool _hx_tmp;
HXDLIN(1656)		if (::hx::IsNotNull( str )) {
HXLINE(1656)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(1656)			_hx_tmp = true;
            		}
HXDLIN(1656)		if (_hx_tmp) {
HXLINE(1657)			return -1;
            		}
HXLINE(1659)		int strLen;
HXDLIN(1659)		if (::hx::IsNull( str )) {
HXLINE(1659)			strLen = 0;
            		}
            		else {
HXLINE(1659)			strLen = str.length;
            		}
HXLINE(1660)		int searchForLen;
HXDLIN(1660)		if (::hx::IsNull( searchFor )) {
HXLINE(1660)			searchForLen = 0;
            		}
            		else {
HXLINE(1660)			searchForLen = searchFor.length;
            		}
HXLINE(1663)		if ((startAt < 0)) {
HXLINE(1664)			startAt = 0;
            		}
HXLINE(1667)		if ((searchForLen == 0)) {
HXLINE(1668)			if ((startAt == 0)) {
HXLINE(1669)				return 0;
            			}
HXLINE(1670)			bool _hx_tmp;
HXDLIN(1670)			if ((startAt > 0)) {
HXLINE(1670)				_hx_tmp = (startAt < strLen);
            			}
            			else {
HXLINE(1670)				_hx_tmp = false;
            			}
HXDLIN(1670)			if (_hx_tmp) {
HXLINE(1671)				return startAt;
            			}
HXLINE(1673)			return strLen;
            		}
HXLINE(1677)		if ((startAt >= strLen)) {
HXLINE(1678)			return -1;
            		}
HXLINE(1681)		return str.indexOf(searchFor,startAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,indexOf8,return )

bool Strings_obj::isBlank(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1727_isBlank)
HXDLIN(1727)		if (::hx::IsNull( str )) {
HXDLIN(1727)			return true;
            		}
            		else {
HXDLIN(1727)			return (::StringTools_obj::trim(str).length == 0);
            		}
HXDLIN(1727)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isBlank,return )

bool Strings_obj::isDigits(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1743_isDigits)
HXLINE(1744)		bool _hx_tmp;
HXDLIN(1744)		if (::hx::IsNotNull( str )) {
HXLINE(1744)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(1744)			_hx_tmp = true;
            		}
HXDLIN(1744)		if (_hx_tmp) {
HXLINE(1745)			return false;
            		}
HXLINE(1749)		{
HXLINE(1749)			int _g = 0;
HXDLIN(1749)			int _g1;
HXDLIN(1749)			if (::hx::IsNull( str )) {
HXLINE(1749)				_g1 = 0;
            			}
            			else {
HXLINE(1749)				_g1 = str.length;
            			}
HXDLIN(1749)			while((_g < _g1)){
HXLINE(1749)				_g = (_g + 1);
HXDLIN(1749)				int i = (_g - 1);
HXLINE(1750)				int this1 = ( (int)(str.charCodeAt(i)) );
HXDLIN(1750)				bool _hx_tmp;
HXDLIN(1750)				if ((this1 > 47)) {
HXLINE(1750)					_hx_tmp = (this1 < 58);
            				}
            				else {
HXLINE(1750)					_hx_tmp = false;
            				}
HXDLIN(1750)				if (!(_hx_tmp)) {
HXLINE(1751)					return false;
            				}
            			}
            		}
HXLINE(1753)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isDigits,return )

bool Strings_obj::isEmpty(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1772_isEmpty)
HXDLIN(1772)		if (::hx::IsNotNull( str )) {
HXDLIN(1772)			return (str.length == 0);
            		}
            		else {
HXDLIN(1772)			return true;
            		}
HXDLIN(1772)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isEmpty,return )

bool Strings_obj::isNotBlank(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1789_isNotBlank)
HXDLIN(1789)		if (::hx::IsNotNull( str )) {
HXDLIN(1789)			return (::StringTools_obj::trim(str).length > 0);
            		}
            		else {
HXDLIN(1789)			return false;
            		}
HXDLIN(1789)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isNotBlank,return )

bool Strings_obj::isNotEmpty(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1806_isNotEmpty)
HXDLIN(1806)		if (::hx::IsNotNull( str )) {
HXDLIN(1806)			return (str.length > 0);
            		}
            		else {
HXDLIN(1806)			return false;
            		}
HXDLIN(1806)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isNotEmpty,return )

bool Strings_obj::isLowerCase(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1819_isLowerCase)
HXLINE(1820)		bool _hx_tmp;
HXDLIN(1820)		if (::hx::IsNotNull( str )) {
HXLINE(1820)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(1820)			_hx_tmp = true;
            		}
HXDLIN(1820)		if (_hx_tmp) {
HXLINE(1821)			return false;
            		}
HXLINE(1823)		return ::hx::IsEq( str,::hx::strings::Strings_obj::toLowerCase8(str) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isLowerCase,return )

bool Strings_obj::isUpperCase(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1837_isUpperCase)
HXLINE(1838)		bool _hx_tmp;
HXDLIN(1838)		if (::hx::IsNotNull( str )) {
HXLINE(1838)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(1838)			_hx_tmp = true;
            		}
HXDLIN(1838)		if (_hx_tmp) {
HXLINE(1839)			return false;
            		}
HXLINE(1841)		return ::hx::IsEq( str,::hx::strings::Strings_obj::toUpperCase8(str) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,isUpperCase,return )

void Strings_obj::iterate(::String str, ::Dynamic callback,::String __o_separator){
            		::String separator = __o_separator;
            		if (::hx::IsNull(__o_separator)) separator = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1848_iterate)
HXLINE(1849)		bool _hx_tmp;
HXDLIN(1849)		if (::hx::IsNotNull( str )) {
HXLINE(1849)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(1849)			_hx_tmp = true;
            		}
HXDLIN(1849)		if (_hx_tmp) {
HXLINE(1850)			return;
            		}
HXLINE(1852)		{
HXLINE(1852)			int _g = 0;
HXDLIN(1852)			::Array< ::String > _g1 = ::hx::strings::Strings_obj::split8(str,::Array_obj< ::String >::__new(1)->init(0,separator),null());
HXDLIN(1852)			while((_g < _g1->length)){
HXLINE(1852)				::String sub = _g1->__get(_g);
HXDLIN(1852)				_g = (_g + 1);
HXLINE(1853)				callback(sub);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,iterate,(void))

void Strings_obj::iterateChars(::String str, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1860_iterateChars)
HXLINE(1861)		bool _hx_tmp;
HXDLIN(1861)		if (::hx::IsNotNull( str )) {
HXLINE(1861)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(1861)			_hx_tmp = true;
            		}
HXDLIN(1861)		if (_hx_tmp) {
HXLINE(1862)			return;
            		}
HXLINE(1864)		{
HXLINE(1864)			int _g = 0;
HXDLIN(1864)			int _g1;
HXDLIN(1864)			if (::hx::IsNull( str )) {
HXLINE(1864)				_g1 = 0;
            			}
            			else {
HXLINE(1864)				_g1 = str.length;
            			}
HXDLIN(1864)			while((_g < _g1)){
HXLINE(1864)				_g = (_g + 1);
HXDLIN(1864)				int i = (_g - 1);
HXLINE(1865)				callback(( (int)(str.charCodeAt(i)) ));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,iterateChars,(void))

int Strings_obj::lastIndexOf8(::String str,::String searchFor, ::Dynamic startAt){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1917_lastIndexOf8)
HXLINE(1918)		bool _hx_tmp;
HXDLIN(1918)		if (::hx::IsNotNull( str )) {
HXLINE(1918)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(1918)			_hx_tmp = true;
            		}
HXDLIN(1918)		if (_hx_tmp) {
HXLINE(1919)			return -1;
            		}
HXLINE(1921)		int strLen;
HXDLIN(1921)		if (::hx::IsNull( str )) {
HXLINE(1921)			strLen = 0;
            		}
            		else {
HXLINE(1921)			strLen = str.length;
            		}
HXLINE(1922)		int searchForLen;
HXDLIN(1922)		if (::hx::IsNull( searchFor )) {
HXLINE(1922)			searchForLen = 0;
            		}
            		else {
HXLINE(1922)			searchForLen = searchFor.length;
            		}
HXLINE(1924)		if (::hx::IsNull( startAt )) {
HXLINE(1925)			startAt = strLen;
            		}
HXLINE(1928)		if ((searchForLen == 0)) {
HXLINE(1929)			if (::hx::IsLess( startAt,0 )) {
HXLINE(1930)				return 0;
            			}
HXLINE(1931)			if (::hx::IsGreater( startAt,strLen )) {
HXLINE(1932)				return strLen;
            			}
HXLINE(1933)			return ( (int)(startAt) );
            		}
HXLINE(1937)		if (::hx::IsLess( startAt,0 )) {
HXLINE(1938)			return -1;
            		}
            		else {
HXLINE(1940)			if (::hx::IsGreaterEq( startAt,strLen )) {
HXLINE(1941)				startAt = (strLen - 1);
            			}
            		}
HXLINE(1947)		bool strNeedsUTF8Workaround = (str.length != strLen);
HXLINE(1948)		bool searchForNeedsUTF8Workaround = (searchFor.length != searchForLen);
HXLINE(1952)		bool _hx_tmp1;
HXDLIN(1952)		if (!(strNeedsUTF8Workaround)) {
HXLINE(1952)			_hx_tmp1 = !(searchForNeedsUTF8Workaround);
            		}
            		else {
HXLINE(1952)			_hx_tmp1 = false;
            		}
HXDLIN(1952)		if (_hx_tmp1) {
HXLINE(1953)			return str.lastIndexOf(searchFor,startAt);
            		}
HXLINE(1956)		bool _hx_tmp2;
HXDLIN(1956)		if (searchForNeedsUTF8Workaround) {
HXLINE(1956)			_hx_tmp2 = !(strNeedsUTF8Workaround);
            		}
            		else {
HXLINE(1956)			_hx_tmp2 = false;
            		}
HXDLIN(1956)		if (_hx_tmp2) {
HXLINE(1958)			return -1;
            		}
HXLINE(1960)		::Array< int > searchForChars = ::hx::strings::Strings_obj::toChars(searchFor);
HXLINE(1961)		startAt = (startAt + (searchForLen - 1));
HXLINE(1963)		int searchForPosToCheck = (searchForLen - 1);
HXLINE(1964)		int strPos = strLen;
HXLINE(1965)		while(true){
HXLINE(1965)			strPos = (strPos - 1);
HXDLIN(1965)			if (!(((strPos + 1) > 0))) {
HXLINE(1965)				goto _hx_goto_95;
            			}
HXLINE(1966)			if (::hx::IsGreater( strPos,startAt )) {
HXLINE(1966)				continue;
            			}
HXLINE(1967)			int strCh = ( (int)(str.charCodeAt(strPos)) );
HXLINE(1969)			if ((strCh == searchForChars->__get(searchForPosToCheck))) {
HXLINE(1970)				if ((searchForPosToCheck == 0)) {
HXLINE(1971)					return strPos;
            				}
HXLINE(1972)				searchForPosToCheck = (searchForPosToCheck - 1);
            			}
            			else {
HXLINE(1974)				searchForPosToCheck = (searchForLen - 1);
            			}
            		}
            		_hx_goto_95:;
HXLINE(1976)		return -1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,lastIndexOf8,return )

int Strings_obj::length8(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_1992_length8)
HXLINE(1993)		if (::hx::IsNull( str )) {
HXLINE(1994)			return 0;
            		}
HXLINE(1997)		return str.length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,length8,return )

 ::Dynamic Strings_obj::left( ::Dynamic str,int len){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2019_left)
HXLINE(2022)		int _hx_tmp;
HXDLIN(2022)		if (::hx::IsNull( str )) {
HXLINE(2022)			_hx_tmp = 0;
            		}
            		else {
HXLINE(2022)			_hx_tmp = ( (::String)(str) ).length;
            		}
HXDLIN(2022)		if ((_hx_tmp <= len)) {
HXLINE(2023)			return str;
            		}
HXLINE(2025)		return ::hx::strings::Strings_obj::substring8(str,0,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,left,return )

 ::Dynamic Strings_obj::lpad( ::Dynamic str,int targetLength,::String __o_padStr,::hx::Null< bool >  __o_canOverflow){
            		::String padStr = __o_padStr;
            		if (::hx::IsNull(__o_padStr)) padStr = HX_(" ",20,00,00,00);
            		bool canOverflow = __o_canOverflow.Default(true);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2047_lpad)
HXLINE(2048)		int strLen;
HXDLIN(2048)		if (::hx::IsNull( str )) {
HXLINE(2048)			strLen = 0;
            		}
            		else {
HXLINE(2048)			strLen = ( (::String)(str) ).length;
            		}
HXLINE(2049)		bool _hx_tmp;
HXDLIN(2049)		if (::hx::IsNotNull( str )) {
HXLINE(2049)			_hx_tmp = (strLen > targetLength);
            		}
            		else {
HXLINE(2049)			_hx_tmp = true;
            		}
HXDLIN(2049)		if (_hx_tmp) {
HXLINE(2050)			return str;
            		}
HXLINE(2052)		bool _hx_tmp1;
HXDLIN(2052)		if (::hx::IsNotNull( padStr )) {
HXLINE(2052)			_hx_tmp1 = (padStr.length == 0);
            		}
            		else {
HXLINE(2052)			_hx_tmp1 = true;
            		}
HXDLIN(2052)		if (_hx_tmp1) {
HXLINE(2053)			padStr = HX_(" ",20,00,00,00);
            		}
HXLINE(2055)		::cpp::VirtualArray sb = ::cpp::VirtualArray_obj::__new(1)->init(0,str);
HXLINE(2056)		int padLen;
HXDLIN(2056)		if (::hx::IsNull( padStr )) {
HXLINE(2056)			padLen = 0;
            		}
            		else {
HXLINE(2056)			padLen = padStr.length;
            		}
HXLINE(2057)		while((strLen < targetLength)){
HXLINE(2058)			sb->unshift(padStr);
HXLINE(2059)			strLen = (strLen + padLen);
            		}
HXLINE(2062)		if (canOverflow) {
HXLINE(2063)			return sb->join(HX_("",00,00,00,00));
            		}
HXLINE(2065)		return ::hx::strings::Strings_obj::right(sb->join(HX_("",00,00,00,00)),targetLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Strings_obj,lpad,return )

::cpp::VirtualArray Strings_obj::map(::String str, ::Dynamic mapper,::String __o_separator){
            		::String separator = __o_separator;
            		if (::hx::IsNull(__o_separator)) separator = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2081_map)
HXLINE(2082)		if (::hx::IsNull( str )) {
HXLINE(2083)			return null();
            		}
HXLINE(2085)		if (::hx::IsNull( separator )) {
HXLINE(2086)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[separator] must not be null",ad,ff,54,c9)));
            		}
HXLINE(2088)		::Array< ::String > _this = ::hx::strings::Strings_obj::split8(str,::Array_obj< ::String >::__new(1)->init(0,separator),null());
HXDLIN(2088)		::cpp::VirtualArray result = ::cpp::VirtualArray_obj::__new(_this->length);
HXDLIN(2088)		{
HXLINE(2088)			int _g = 0;
HXDLIN(2088)			int _g1 = _this->length;
HXDLIN(2088)			while((_g < _g1)){
HXLINE(2088)				_g = (_g + 1);
HXDLIN(2088)				int i = (_g - 1);
HXDLIN(2088)				{
HXLINE(2088)					 ::Dynamic inValue = mapper(_hx_array_unsafe_get(_this,i));
HXDLIN(2088)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(2088)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,map,return )

 ::Dynamic Strings_obj::prependIfMissing( ::Dynamic str,::String suffix){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2104_prependIfMissing)
HXLINE(2105)		if (::hx::IsNull( str )) {
HXLINE(2106)			return null();
            		}
HXLINE(2108)		if ((( (::String)(str) ).length == 0)) {
HXLINE(2109)			return (suffix + ::Std_obj::string(str));
            		}
HXLINE(2111)		if (::hx::strings::Strings_obj::startsWith(( (::String)(str) ),suffix)) {
HXLINE(2112)			return str;
            		}
HXLINE(2114)		return (suffix + ::Std_obj::string(str));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,prependIfMissing,return )

 ::Dynamic Strings_obj::quoteDouble( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2130_quoteDouble)
HXLINE(2131)		if (::hx::IsNull( str )) {
HXLINE(2132)			return null();
            		}
HXLINE(2136)		if ((( (::String)(str) ).length == 0)) {
HXLINE(2137)			return HX_("\"\"",c0,1d,00,00);
            		}
HXLINE(2139)		bool _hx_tmp;
HXDLIN(2139)		if (::hx::IsNull( str )) {
HXLINE(2139)			_hx_tmp = false;
            		}
            		else {
HXLINE(2139)			_hx_tmp = (( (::String)(str) ).indexOf(HX_("\"",22,00,00,00),null()) > -1);
            		}
HXDLIN(2139)		if (!(_hx_tmp)) {
HXLINE(2140)			return ((HX_("\"",22,00,00,00) + ::Std_obj::string(str)) + HX_("\"",22,00,00,00));
            		}
HXLINE(2142)		return ((HX_("\"",22,00,00,00) + ::Std_obj::string(::hx::strings::Strings_obj::replaceAll(str,HX_("\"",22,00,00,00),HX_("\\\"",46,50,00,00)))) + HX_("\"",22,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,quoteDouble,return )

 ::Dynamic Strings_obj::quoteSingle( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2158_quoteSingle)
HXLINE(2159)		if (::hx::IsNull( str )) {
HXLINE(2160)			return null();
            		}
HXLINE(2164)		if ((( (::String)(str) ).length == 0)) {
HXLINE(2165)			return HX_("''",20,22,00,00);
            		}
HXLINE(2167)		bool _hx_tmp;
HXDLIN(2167)		if (::hx::IsNull( str )) {
HXLINE(2167)			_hx_tmp = false;
            		}
            		else {
HXLINE(2167)			_hx_tmp = (( (::String)(str) ).indexOf(HX_("'",27,00,00,00),null()) > -1);
            		}
HXDLIN(2167)		if (!(_hx_tmp)) {
HXLINE(2168)			return ((HX_("'",27,00,00,00) + ::Std_obj::string(str)) + HX_("'",27,00,00,00));
            		}
HXLINE(2170)		return ((HX_("'",27,00,00,00) + ::Std_obj::string(::hx::strings::Strings_obj::replaceAll(str,HX_("'",27,00,00,00),HX_("\\'",4b,50,00,00)))) + HX_("'",27,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,quoteSingle,return )

 ::Dynamic Strings_obj::removeAfter( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2179_removeAfter)
HXDLIN(2179)		return ::hx::strings::Strings_obj::substringBefore(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeAfter,return )

 ::Dynamic Strings_obj::removeAfterLast( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2187_removeAfterLast)
HXDLIN(2187)		return ::hx::strings::Strings_obj::substringBeforeLast(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeAfterLast,return )

 ::Dynamic Strings_obj::removeAfterIgnoreCase( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2195_removeAfterIgnoreCase)
HXDLIN(2195)		return ::hx::strings::Strings_obj::substringBeforeIgnoreCase(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeAfterIgnoreCase,return )

 ::Dynamic Strings_obj::removeAfterLastIgnoreCase( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2203_removeAfterLastIgnoreCase)
HXDLIN(2203)		return ::hx::strings::Strings_obj::substringBeforeLastIgnoreCase(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeAfterLastIgnoreCase,return )

 ::Dynamic Strings_obj::removeAt( ::Dynamic str,int pos,int length){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2226_removeAt)
HXLINE(2227)		bool _hx_tmp;
HXDLIN(2227)		bool _hx_tmp1;
HXDLIN(2227)		if (::hx::IsNotNull( str )) {
HXLINE(2227)			_hx_tmp1 = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(2227)			_hx_tmp1 = true;
            		}
HXDLIN(2227)		if (!(_hx_tmp1)) {
HXLINE(2227)			_hx_tmp = (length < 1);
            		}
            		else {
HXLINE(2227)			_hx_tmp = true;
            		}
HXDLIN(2227)		if (_hx_tmp) {
HXLINE(2228)			return str;
            		}
HXLINE(2230)		int strLen;
HXDLIN(2230)		if (::hx::IsNull( str )) {
HXLINE(2230)			strLen = 0;
            		}
            		else {
HXLINE(2230)			strLen = ( (::String)(str) ).length;
            		}
HXLINE(2231)		if ((pos < 0)) {
HXLINE(2231)			pos = (strLen + pos);
            		}
HXLINE(2233)		if ((pos < 0)) {
HXLINE(2234)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[pos] must be smaller than -1 * str.length",44,b5,28,65)));
            		}
HXLINE(2236)		if (((pos + length) >= strLen)) {
HXLINE(2237)			return ::hx::strings::Strings_obj::substring8(str,0,pos);
            		}
HXLINE(2239)		::String _hx_tmp2 = ::Std_obj::string(::hx::strings::Strings_obj::substring8(str,0,pos));
HXDLIN(2239)		return (_hx_tmp2 + ::Std_obj::string(::hx::strings::Strings_obj::substring8(str,(pos + length),null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,removeAt,return )

 ::Dynamic Strings_obj::removeBefore( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2248_removeBefore)
HXDLIN(2248)		return ::hx::strings::Strings_obj::substringAfter(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeBefore,return )

 ::Dynamic Strings_obj::removeBeforeLast( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2256_removeBeforeLast)
HXDLIN(2256)		return ::hx::strings::Strings_obj::substringAfterLast(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeBeforeLast,return )

 ::Dynamic Strings_obj::removeBeforeIgnoreCase( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2264_removeBeforeIgnoreCase)
HXDLIN(2264)		return ::hx::strings::Strings_obj::substringAfterIgnoreCase(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeBeforeIgnoreCase,return )

 ::Dynamic Strings_obj::removeBeforeLastIgnoreCase( ::Dynamic str,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2272_removeBeforeLastIgnoreCase)
HXDLIN(2272)		return ::hx::strings::Strings_obj::substringAfterLastIgnoreCase(str,searchFor,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeBeforeLastIgnoreCase,return )

 ::Dynamic Strings_obj::removeAll( ::Dynamic searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2289_removeAll)
HXDLIN(2289)		return ::hx::strings::Strings_obj::replaceAll(searchIn,searchFor,HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeAll,return )

 ::Dynamic Strings_obj::removeFirst( ::Dynamic searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2307_removeFirst)
HXDLIN(2307)		return ::hx::strings::Strings_obj::replaceFirst(searchIn,searchFor,HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeFirst,return )

 ::Dynamic Strings_obj::removeFirstIgnoreCase( ::Dynamic searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2325_removeFirstIgnoreCase)
HXDLIN(2325)		return ::hx::strings::Strings_obj::replaceFirstIgnoreCase(searchIn,searchFor,HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeFirstIgnoreCase,return )

 ::Dynamic Strings_obj::removeAnsi( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2337_removeAnsi)
HXLINE(2338)		bool _hx_tmp;
HXDLIN(2338)		if (::hx::IsNotNull( str )) {
HXLINE(2338)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(2338)			_hx_tmp = true;
            		}
HXDLIN(2338)		if (_hx_tmp) {
HXLINE(2339)			return str;
            		}
HXLINE(2341)		return ::hx::strings::Strings_obj::REGEX_ANSI_ESC->ereg->replace(( (::String)(str) ),HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,removeAnsi,return )

 ::Dynamic Strings_obj::removeLeading( ::Dynamic searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2361_removeLeading)
HXLINE(2362)		bool _hx_tmp;
HXDLIN(2362)		bool _hx_tmp1;
HXDLIN(2362)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2362)			_hx_tmp1 = (( (::String)(searchIn) ).length == 0);
            		}
            		else {
HXLINE(2362)			_hx_tmp1 = true;
            		}
HXDLIN(2362)		if (!(_hx_tmp1)) {
HXLINE(2362)			if (::hx::IsNotNull( searchFor )) {
HXLINE(2362)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(2362)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(2362)			_hx_tmp = true;
            		}
HXDLIN(2362)		if (_hx_tmp) {
HXLINE(2363)			return searchIn;
            		}
HXLINE(2367)		while(::hx::strings::Strings_obj::startsWith(( (::String)(searchIn) ),searchFor)){
HXLINE(2368)			searchIn = ( (::String)(searchIn) ).substring(searchFor.length,( (::String)(searchIn) ).length);
            		}
HXLINE(2370)		return searchIn;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeLeading,return )

 ::Dynamic Strings_obj::removeTags( ::Dynamic xml){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2389_removeTags)
HXLINE(2392)		bool _hx_tmp;
HXDLIN(2392)		if (::hx::IsNotNull( xml )) {
HXLINE(2392)			_hx_tmp = (( (::String)(xml) ).length == 0);
            		}
            		else {
HXLINE(2392)			_hx_tmp = true;
            		}
HXDLIN(2392)		if (_hx_tmp) {
HXLINE(2393)			return xml;
            		}
HXLINE(2398)		return ::hx::strings::Strings_obj::REGEX_REMOVE_XML_TAGS->ereg->replace(( (::String)(xml) ),HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,removeTags,return )

 ::Dynamic Strings_obj::removeTrailing( ::Dynamic searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2419_removeTrailing)
HXLINE(2420)		bool _hx_tmp;
HXDLIN(2420)		bool _hx_tmp1;
HXDLIN(2420)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2420)			_hx_tmp1 = (( (::String)(searchIn) ).length == 0);
            		}
            		else {
HXLINE(2420)			_hx_tmp1 = true;
            		}
HXDLIN(2420)		if (!(_hx_tmp1)) {
HXLINE(2420)			if (::hx::IsNotNull( searchFor )) {
HXLINE(2420)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(2420)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(2420)			_hx_tmp = true;
            		}
HXDLIN(2420)		if (_hx_tmp) {
HXLINE(2421)			return searchIn;
            		}
HXLINE(2425)		while(::hx::strings::Strings_obj::endsWith(( (::String)(searchIn) ),searchFor)){
HXLINE(2426)			searchIn = ( (::String)(searchIn) ).substring(0,(( (::String)(searchIn) ).length - searchFor.length));
            		}
HXLINE(2428)		return searchIn;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,removeTrailing,return )

 ::Dynamic Strings_obj::repeat( ::Dynamic str,int count,::String __o_separator){
            		::String separator = __o_separator;
            		if (::hx::IsNull(__o_separator)) separator = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2448_repeat)
HXLINE(2449)		if (::hx::IsNull( str )) {
HXLINE(2450)			return null();
            		}
HXLINE(2452)		if ((count < 1)) {
HXLINE(2453)			return HX_("",00,00,00,00);
            		}
HXLINE(2455)		if ((count == 1)) {
HXLINE(2456)			return str;
            		}
HXLINE(2458)		::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(2458)		{
HXLINE(2458)			int _g1 = 0;
HXDLIN(2458)			int _g2 = count;
HXDLIN(2458)			while((_g1 < _g2)){
HXLINE(2458)				_g1 = (_g1 + 1);
HXDLIN(2458)				int i = (_g1 - 1);
HXDLIN(2458)				_g->push(str);
            			}
            		}
HXDLIN(2458)		return _g->join(separator);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,repeat,return )

 ::Dynamic Strings_obj::replaceAll( ::Dynamic searchIn,::String searchFor,::String replaceWith){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2476_replaceAll)
HXLINE(2477)		bool _hx_tmp;
HXDLIN(2477)		bool _hx_tmp1;
HXDLIN(2477)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2477)			if (::hx::IsNotNull( searchIn )) {
HXLINE(2477)				_hx_tmp1 = (( (::String)(searchIn) ).length == 0);
            			}
            			else {
HXLINE(2477)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(2477)			_hx_tmp1 = true;
            		}
HXDLIN(2477)		if (!(_hx_tmp1)) {
HXLINE(2477)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2477)			_hx_tmp = true;
            		}
HXDLIN(2477)		if (_hx_tmp) {
HXLINE(2478)			return searchIn;
            		}
HXLINE(2480)		if (::hx::IsNull( replaceWith )) {
HXLINE(2480)			replaceWith = HX_("null",87,9e,0e,49);
            		}
HXLINE(2482)		return ::StringTools_obj::replace(( (::String)(searchIn) ),searchFor,replaceWith);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,replaceAll,return )

 ::Dynamic Strings_obj::replaceFirst( ::Dynamic searchIn,::String searchFor,::String replaceWith){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2500_replaceFirst)
HXLINE(2501)		bool _hx_tmp;
HXDLIN(2501)		bool _hx_tmp1;
HXDLIN(2501)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2501)			if (::hx::IsNotNull( searchIn )) {
HXLINE(2501)				_hx_tmp1 = (( (::String)(searchIn) ).length == 0);
            			}
            			else {
HXLINE(2501)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(2501)			_hx_tmp1 = true;
            		}
HXDLIN(2501)		if (!(_hx_tmp1)) {
HXLINE(2501)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2501)			_hx_tmp = true;
            		}
HXDLIN(2501)		if (_hx_tmp) {
HXLINE(2502)			return searchIn;
            		}
HXLINE(2504)		if (::hx::IsNull( replaceWith )) {
HXLINE(2504)			replaceWith = HX_("null",87,9e,0e,49);
            		}
HXLINE(2506)		int foundAt;
HXLINE(2507)		if ((searchFor.length == 0)) {
HXLINE(2508)			int _hx_tmp;
HXDLIN(2508)			if (::hx::IsNull( searchIn )) {
HXLINE(2508)				_hx_tmp = 0;
            			}
            			else {
HXLINE(2508)				_hx_tmp = ( (::String)(searchIn) ).length;
            			}
HXDLIN(2508)			if ((_hx_tmp > 1)) {
HXLINE(2509)				foundAt = 1;
            			}
            			else {
HXLINE(2511)				return searchIn;
            			}
            		}
            		else {
HXLINE(2513)			foundAt = ::hx::strings::Strings_obj::indexOf8(( (::String)(searchIn) ),searchFor,null());
            		}
HXLINE(2515)		::String _hx_tmp2 = (::Std_obj::string(::hx::strings::Strings_obj::substr8(searchIn,0,foundAt)) + replaceWith);
HXDLIN(2515)		int _hx_tmp3;
HXDLIN(2515)		if (::hx::IsNull( searchFor )) {
HXLINE(2515)			_hx_tmp3 = 0;
            		}
            		else {
HXLINE(2515)			_hx_tmp3 = searchFor.length;
            		}
HXDLIN(2515)		return (_hx_tmp2 + ::Std_obj::string(::hx::strings::Strings_obj::substr8(searchIn,(foundAt + _hx_tmp3),null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,replaceFirst,return )

 ::Dynamic Strings_obj::replaceFirstIgnoreCase( ::Dynamic searchIn,::String searchFor,::String replaceWith){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2533_replaceFirstIgnoreCase)
HXLINE(2534)		bool _hx_tmp;
HXDLIN(2534)		bool _hx_tmp1;
HXDLIN(2534)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2534)			if (::hx::IsNotNull( searchIn )) {
HXLINE(2534)				_hx_tmp1 = (( (::String)(searchIn) ).length == 0);
            			}
            			else {
HXLINE(2534)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(2534)			_hx_tmp1 = true;
            		}
HXDLIN(2534)		if (!(_hx_tmp1)) {
HXLINE(2534)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2534)			_hx_tmp = true;
            		}
HXDLIN(2534)		if (_hx_tmp) {
HXLINE(2535)			return searchIn;
            		}
HXLINE(2537)		if (::hx::IsNull( replaceWith )) {
HXLINE(2537)			replaceWith = HX_("null",87,9e,0e,49);
            		}
HXLINE(2539)		searchFor = searchFor.toLowerCase();
HXLINE(2541)		int foundAt;
HXLINE(2542)		if ((searchFor.length == 0)) {
HXLINE(2543)			int _hx_tmp;
HXDLIN(2543)			if (::hx::IsNull( searchIn )) {
HXLINE(2543)				_hx_tmp = 0;
            			}
            			else {
HXLINE(2543)				_hx_tmp = ( (::String)(searchIn) ).length;
            			}
HXDLIN(2543)			if ((_hx_tmp > 1)) {
HXLINE(2544)				foundAt = 1;
            			}
            			else {
HXLINE(2546)				return searchIn;
            			}
            		}
            		else {
HXLINE(2548)			foundAt = ::hx::strings::Strings_obj::indexOf8(( (::String)(searchIn) ).toLowerCase(),searchFor,null());
            		}
HXLINE(2550)		::String _hx_tmp2 = (::Std_obj::string(::hx::strings::Strings_obj::substr8(searchIn,0,foundAt)) + replaceWith);
HXDLIN(2550)		int _hx_tmp3;
HXDLIN(2550)		if (::hx::IsNull( searchFor )) {
HXLINE(2550)			_hx_tmp3 = 0;
            		}
            		else {
HXLINE(2550)			_hx_tmp3 = searchFor.length;
            		}
HXDLIN(2550)		return (_hx_tmp2 + ::Std_obj::string(::hx::strings::Strings_obj::substr8(searchIn,(foundAt + _hx_tmp3),null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,replaceFirstIgnoreCase,return )

 ::Dynamic Strings_obj::reverse( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2563_reverse)
HXLINE(2564)		bool _hx_tmp;
HXDLIN(2564)		if (::hx::IsNotNull( str )) {
HXLINE(2564)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(2564)			_hx_tmp = true;
            		}
HXDLIN(2564)		if (_hx_tmp) {
HXLINE(2565)			return str;
            		}
HXLINE(2567)		::Array< ::String > chars = ::hx::strings::Strings_obj::split8(( (::String)(str) ),::Array_obj< ::String >::fromData( _hx_array_data_5da8f718_130,1),null());
HXLINE(2568)		chars->reverse();
HXLINE(2569)		return chars->join(HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,reverse,return )

 ::Dynamic Strings_obj::right( ::Dynamic str,int len){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2586_right)
HXLINE(2587)		bool _hx_tmp;
HXDLIN(2587)		if (::hx::IsNotNull( str )) {
HXLINE(2587)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(2587)			_hx_tmp = true;
            		}
HXDLIN(2587)		if (_hx_tmp) {
HXLINE(2588)			return str;
            		}
HXLINE(2590)		int _hx_tmp1;
HXDLIN(2590)		if (::hx::IsNull( str )) {
HXLINE(2590)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE(2590)			_hx_tmp1 = ( (::String)(str) ).length;
            		}
HXDLIN(2590)		return ::hx::strings::Strings_obj::substring8(str,(_hx_tmp1 - len),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,right,return )

 ::Dynamic Strings_obj::rpad( ::Dynamic str,int targetLength,::String __o_padStr,::hx::Null< bool >  __o_canOverflow){
            		::String padStr = __o_padStr;
            		if (::hx::IsNull(__o_padStr)) padStr = HX_(" ",20,00,00,00);
            		bool canOverflow = __o_canOverflow.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2613_rpad)
HXLINE(2614)		int strLen;
HXDLIN(2614)		if (::hx::IsNull( str )) {
HXLINE(2614)			strLen = 0;
            		}
            		else {
HXLINE(2614)			strLen = ( (::String)(str) ).length;
            		}
HXLINE(2615)		bool _hx_tmp;
HXDLIN(2615)		if (::hx::IsNotNull( str )) {
HXLINE(2615)			_hx_tmp = (strLen > targetLength);
            		}
            		else {
HXLINE(2615)			_hx_tmp = true;
            		}
HXDLIN(2615)		if (_hx_tmp) {
HXLINE(2616)			return str;
            		}
HXLINE(2618)		bool _hx_tmp1;
HXDLIN(2618)		if (::hx::IsNotNull( padStr )) {
HXLINE(2618)			_hx_tmp1 = (padStr.length == 0);
            		}
            		else {
HXLINE(2618)			_hx_tmp1 = true;
            		}
HXDLIN(2618)		if (_hx_tmp1) {
HXLINE(2619)			padStr = HX_(" ",20,00,00,00);
            		}
HXLINE(2621)		int padLen;
HXDLIN(2621)		if (::hx::IsNull( padStr )) {
HXLINE(2621)			padLen = 0;
            		}
            		else {
HXLINE(2621)			padLen = padStr.length;
            		}
HXLINE(2622)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,( (::String)(str) ));
HXLINE(2623)		while((strLen < targetLength)){
HXLINE(2624)			sb->add(padStr);
HXLINE(2625)			strLen = (strLen + padLen);
            		}
HXLINE(2628)		if (canOverflow) {
HXLINE(2629)			return sb->toString();
            		}
HXLINE(2631)		::String str1 = sb->toString();
HXDLIN(2631)		::String _hx_tmp2;
HXDLIN(2631)		int _hx_tmp3;
HXDLIN(2631)		if (::hx::IsNull( str1 )) {
HXLINE(2631)			_hx_tmp3 = 0;
            		}
            		else {
HXLINE(2631)			_hx_tmp3 = str1.length;
            		}
HXDLIN(2631)		if ((_hx_tmp3 <= targetLength)) {
HXLINE(2631)			_hx_tmp2 = str1;
            		}
            		else {
HXLINE(2631)			_hx_tmp2 = ( (::String)(::hx::strings::Strings_obj::substring8(str1,0,targetLength)) );
            		}
HXDLIN(2631)		return _hx_tmp2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Strings_obj,rpad,return )

::Array< ::String > Strings_obj::split8(::String str,::Array< ::String > separator,::hx::Null< int >  __o_maxParts){
            		int maxParts = __o_maxParts.Default(0);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2660_split8)
HXLINE(2661)		bool _hx_tmp;
HXDLIN(2661)		if (::hx::IsNotNull( str )) {
HXLINE(2661)			_hx_tmp = ::hx::IsNull( separator );
            		}
            		else {
HXLINE(2661)			_hx_tmp = true;
            		}
HXDLIN(2661)		if (_hx_tmp) {
HXLINE(2663)			return null();
            		}
HXLINE(2665)		int strLen;
HXDLIN(2665)		if (::hx::IsNull( str )) {
HXLINE(2665)			strLen = 0;
            		}
            		else {
HXLINE(2665)			strLen = str.length;
            		}
HXLINE(2667)		if ((strLen == 0)) {
HXLINE(2668)			return ::Array_obj< ::String >::__new(0);
            		}
HXLINE(2670)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(2670)		{
HXLINE(2670)			int _g1 = 0;
HXDLIN(2670)			::Array< ::String > _g2 = separator;
HXDLIN(2670)			while((_g1 < _g2->length)){
HXLINE(2670)				::String v = _g2->__get(_g1);
HXDLIN(2670)				_g1 = (_g1 + 1);
HXDLIN(2670)				if (::hx::IsNotNull( v )) {
HXLINE(2670)					_g->push(v);
            				}
            			}
            		}
HXDLIN(2670)		::Array< ::String > separators = _g;
HXLINE(2671)		if ((separators->length == 0)) {
HXLINE(2673)			return null();
            		}
HXLINE(2676)		bool _hx_tmp1;
HXDLIN(2676)		if ((maxParts <= 0)) {
HXLINE(2676)			_hx_tmp1 = (separators->length == 1);
            		}
            		else {
HXLINE(2676)			_hx_tmp1 = false;
            		}
HXDLIN(2676)		if (_hx_tmp1) {
HXLINE(2678)			return str.split(separators->__get(0));
            		}
HXLINE(2690)		if ((separators->indexOf(HX_("",00,00,00,00),null()) > -1)) {
HXLINE(2691)			if ((maxParts <= 0)) {
HXLINE(2693)				::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(2693)				{
HXLINE(2693)					int _g1 = 0;
HXDLIN(2693)					int _g2 = strLen;
HXDLIN(2693)					while((_g1 < _g2)){
HXLINE(2693)						_g1 = (_g1 + 1);
HXDLIN(2693)						int i = (_g1 - 1);
HXDLIN(2693)						_g->push(str.substr(i,1));
            					}
            				}
HXDLIN(2693)				return _g;
            			}
HXLINE(2695)			if ((maxParts > strLen)) {
HXLINE(2696)				maxParts = strLen;
            			}
HXLINE(2697)			maxParts = (maxParts - 1);
HXLINE(2699)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(2699)			{
HXLINE(2699)				int _g1 = 0;
HXDLIN(2699)				int _g2 = maxParts;
HXDLIN(2699)				while((_g1 < _g2)){
HXLINE(2699)					_g1 = (_g1 + 1);
HXDLIN(2699)					int i = (_g1 - 1);
HXDLIN(2699)					_g->push(str.substr(i,1));
            				}
            			}
HXDLIN(2699)			::Array< ::String > result = _g;
HXLINE(2701)			result->push(str.substr(maxParts,(strLen - maxParts)));
HXLINE(2702)			return result;
            		}
HXLINE(2705)		::Array< int > _g3 = ::Array_obj< int >::__new(0);
HXDLIN(2705)		{
HXLINE(2705)			int _g4 = 0;
HXDLIN(2705)			while((_g4 < separators->length)){
HXLINE(2705)				::String sep = separators->__get(_g4);
HXDLIN(2705)				_g4 = (_g4 + 1);
HXDLIN(2705)				int _hx_tmp;
HXDLIN(2705)				if (::hx::IsNull( sep )) {
HXLINE(2705)					_hx_tmp = 0;
            				}
            				else {
HXLINE(2705)					_hx_tmp = sep.length;
            				}
HXDLIN(2705)				_g3->push(_hx_tmp);
            			}
            		}
HXDLIN(2705)		::Array< int > separatorsLengths = _g3;
HXLINE(2706)		int lastFoundAt = 0;
HXLINE(2707)		::Array< ::String > result = ::Array_obj< ::String >::__new(0);
HXLINE(2708)		int resultCount = 0;
HXLINE(2709)		while(true){
HXLINE(2710)			int separatorLen = 0;
HXLINE(2711)			int foundAt = -1;
HXLINE(2712)			{
HXLINE(2712)				int _g = 0;
HXDLIN(2712)				int _g1 = separators->length;
HXDLIN(2712)				while((_g < _g1)){
HXLINE(2712)					_g = (_g + 1);
HXDLIN(2712)					int i = (_g - 1);
HXLINE(2713)					int sepFoundAt = ::hx::strings::Strings_obj::indexOf8(str,separators->__get(i),lastFoundAt);
HXLINE(2714)					if ((sepFoundAt != -1)) {
HXLINE(2715)						bool _hx_tmp;
HXDLIN(2715)						if ((foundAt != -1)) {
HXLINE(2715)							_hx_tmp = (sepFoundAt < foundAt);
            						}
            						else {
HXLINE(2715)							_hx_tmp = true;
            						}
HXDLIN(2715)						if (_hx_tmp) {
HXLINE(2716)							foundAt = sepFoundAt;
HXLINE(2717)							separatorLen = separatorsLengths->__get(i);
            						}
            					}
            				}
            			}
HXLINE(2721)			resultCount = (resultCount + 1);
HXLINE(2722)			bool _hx_tmp;
HXDLIN(2722)			if ((foundAt != -1)) {
HXLINE(2722)				_hx_tmp = (resultCount == maxParts);
            			}
            			else {
HXLINE(2722)				_hx_tmp = true;
            			}
HXDLIN(2722)			if (_hx_tmp) {
HXLINE(2724)				result->push(str.substr(lastFoundAt,(strLen - lastFoundAt)));
HXLINE(2725)				goto _hx_goto_138;
            			}
HXLINE(2728)			result->push(str.substr(lastFoundAt,(foundAt - lastFoundAt)));
HXLINE(2729)			lastFoundAt = (foundAt + separatorLen);
            		}
            		_hx_goto_138:;
HXLINE(2731)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,split8,return )

::Array< ::String > Strings_obj::splitAt(::String str,::Array< int > splitPos){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(int a,int b){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2776_splitAt)
HXLINE(2776)			if ((a < b)) {
HXLINE(2776)				return -1;
            			}
            			else {
HXLINE(2776)				if ((a > b)) {
HXLINE(2776)					return 1;
            				}
            				else {
HXLINE(2776)					return 0;
            				}
            			}
HXDLIN(2776)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2751_splitAt)
HXLINE(2752)		if (::hx::IsNull( str )) {
HXLINE(2753)			return null();
            		}
HXLINE(2755)		bool _hx_tmp;
HXDLIN(2755)		if (::hx::IsNotNull( splitPos )) {
HXLINE(2755)			_hx_tmp = (splitPos->length == 0);
            		}
            		else {
HXLINE(2755)			_hx_tmp = true;
            		}
HXDLIN(2755)		if (_hx_tmp) {
HXLINE(2756)			return ::Array_obj< ::String >::__new(1)->init(0,str);
            		}
HXLINE(2760)		int strLen;
HXDLIN(2760)		if (::hx::IsNull( str )) {
HXLINE(2760)			strLen = 0;
            		}
            		else {
HXLINE(2760)			strLen = str.length;
            		}
HXLINE(2761)		if ((strLen == 0)) {
HXLINE(2762)			return ::Array_obj< ::String >::__new(1)->init(0,str);
            		}
HXLINE(2765)		::Array< int > pos = ::Array_obj< int >::__new();
HXLINE(2766)		{
HXLINE(2766)			int _g = 0;
HXDLIN(2766)			::Array< int > _g1 = splitPos;
HXDLIN(2766)			while((_g < _g1->length)){
HXLINE(2766)				int p = _g1->__get(_g);
HXDLIN(2766)				_g = (_g + 1);
HXLINE(2767)				if ((p < 0)) {
HXLINE(2768)					p = (strLen + p);
            				}
HXLINE(2769)				bool _hx_tmp;
HXDLIN(2769)				if ((p >= 0)) {
HXLINE(2769)					_hx_tmp = (p >= strLen);
            				}
            				else {
HXLINE(2769)					_hx_tmp = true;
            				}
HXDLIN(2769)				if (_hx_tmp) {
HXLINE(2770)					continue;
            				}
HXLINE(2771)				if ((pos->indexOf(p,null()) > -1)) {
HXLINE(2772)					continue;
            				}
HXLINE(2773)				pos->push(p);
            			}
            		}
HXLINE(2776)		pos->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE(2778)		::Array< ::String > result = ::Array_obj< ::String >::__new();
HXLINE(2780)		int lastPos = 0;
HXLINE(2781)		{
HXLINE(2781)			int _g2 = 0;
HXDLIN(2781)			while((_g2 < pos->length)){
HXLINE(2781)				int p = pos->__get(_g2);
HXDLIN(2781)				_g2 = (_g2 + 1);
HXLINE(2782)				::String chunk = ( (::String)(::hx::strings::Strings_obj::substring8(str,lastPos,p)) );
HXLINE(2783)				bool _hx_tmp;
HXDLIN(2783)				if (::hx::IsNotNull( chunk )) {
HXLINE(2783)					_hx_tmp = (chunk.length > 0);
            				}
            				else {
HXLINE(2783)					_hx_tmp = false;
            				}
HXDLIN(2783)				if (_hx_tmp) {
HXLINE(2784)					result->push(chunk);
            				}
HXLINE(2785)				lastPos = p;
            			}
            		}
HXLINE(2787)		::String chunk = ( (::String)(::hx::strings::Strings_obj::substring8(str,lastPos,null())) );
HXLINE(2788)		bool _hx_tmp1;
HXDLIN(2788)		if (::hx::IsNotNull( chunk )) {
HXLINE(2788)			_hx_tmp1 = (chunk.length > 0);
            		}
            		else {
HXLINE(2788)			_hx_tmp1 = false;
            		}
HXDLIN(2788)		if (_hx_tmp1) {
HXLINE(2789)			result->push(chunk);
            		}
HXLINE(2790)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,splitAt,return )

::Array< ::String > Strings_obj::splitEvery(::String str,int count){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2806_splitEvery)
HXLINE(2807)		if (::hx::IsNull( str )) {
HXLINE(2808)			return null();
            		}
HXLINE(2810)		if ((count < 1)) {
HXLINE(2811)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[count] must be greater than 0",f4,ff,7d,8f)));
            		}
HXLINE(2813)		int strLen;
HXDLIN(2813)		if (::hx::IsNull( str )) {
HXLINE(2813)			strLen = 0;
            		}
            		else {
HXLINE(2813)			strLen = str.length;
            		}
HXLINE(2814)		bool _hx_tmp;
HXDLIN(2814)		if ((strLen != 0)) {
HXLINE(2814)			_hx_tmp = (count >= strLen);
            		}
            		else {
HXLINE(2814)			_hx_tmp = true;
            		}
HXDLIN(2814)		if (_hx_tmp) {
HXLINE(2815)			return ::Array_obj< ::String >::__new(1)->init(0,str);
            		}
HXLINE(2817)		::Array< ::String > result = ::Array_obj< ::String >::__new();
HXLINE(2818)		int pos = 0;
HXLINE(2819)		while(true){
HXLINE(2820)			::String chunk = ( (::String)(::hx::strings::Strings_obj::substr8(str,pos,count)) );
HXLINE(2821)			pos = (pos + count);
HXLINE(2822)			bool _hx_tmp;
HXDLIN(2822)			if (::hx::IsNotNull( chunk )) {
HXLINE(2822)				_hx_tmp = (chunk.length == 0);
            			}
            			else {
HXLINE(2822)				_hx_tmp = true;
            			}
HXDLIN(2822)			if (_hx_tmp) {
HXLINE(2823)				goto _hx_goto_145;
            			}
HXLINE(2824)			result->push(chunk);
            		}
            		_hx_goto_145:;
HXLINE(2826)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,splitEvery,return )

::Array< ::String > Strings_obj::splitLines(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2843_splitLines)
HXDLIN(2843)		bool _hx_tmp;
HXDLIN(2843)		if (::hx::IsNotNull( str )) {
HXDLIN(2843)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXDLIN(2843)			_hx_tmp = true;
            		}
HXDLIN(2843)		if (_hx_tmp) {
HXDLIN(2843)			return ::Array_obj< ::String >::__new(0);
            		}
            		else {
HXDLIN(2843)			return ::hx::strings::Strings_obj::REGEX_SPLIT_LINES->ereg->split(str);
            		}
HXDLIN(2843)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,splitLines,return )

bool Strings_obj::startsWith(::String searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2856_startsWith)
HXLINE(2857)		bool _hx_tmp;
HXDLIN(2857)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2857)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2857)			_hx_tmp = true;
            		}
HXDLIN(2857)		if (_hx_tmp) {
HXLINE(2858)			return false;
            		}
HXLINE(2864)		bool _hx_tmp1;
HXDLIN(2864)		bool _hx_tmp2;
HXDLIN(2864)		if (::hx::IsNotNull( searchFor )) {
HXLINE(2864)			_hx_tmp2 = (searchFor.length == 0);
            		}
            		else {
HXLINE(2864)			_hx_tmp2 = true;
            		}
HXDLIN(2864)		if (!(_hx_tmp2)) {
HXLINE(2864)			_hx_tmp1 = (searchIn == searchFor);
            		}
            		else {
HXLINE(2864)			_hx_tmp1 = true;
            		}
HXDLIN(2864)		if (_hx_tmp1) {
HXLINE(2865)			return true;
            		}
HXLINE(2869)		if ((searchIn.length >= searchFor.length)) {
HXLINE(2869)			return (searchIn.lastIndexOf(searchFor,0) == 0);
            		}
            		else {
HXLINE(2869)			return false;
            		}
HXDLIN(2869)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,startsWith,return )

bool Strings_obj::startsWithAny(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2891_startsWithAny)
HXLINE(2892)		bool _hx_tmp;
HXDLIN(2892)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2892)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2892)			_hx_tmp = true;
            		}
HXDLIN(2892)		if (_hx_tmp) {
HXLINE(2893)			return false;
            		}
HXLINE(2895)		{
HXLINE(2895)			int _g = 0;
HXDLIN(2895)			while((_g < searchFor->length)){
HXLINE(2895)				::String candidate = searchFor->__get(_g);
HXDLIN(2895)				_g = (_g + 1);
HXLINE(2896)				bool _hx_tmp;
HXDLIN(2896)				if (::hx::IsNotNull( candidate )) {
HXLINE(2896)					_hx_tmp = ::hx::strings::Strings_obj::startsWith(searchIn,candidate);
            				}
            				else {
HXLINE(2896)					_hx_tmp = false;
            				}
HXDLIN(2896)				if (_hx_tmp) {
HXLINE(2897)					return true;
            				}
            			}
            		}
HXLINE(2898)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,startsWithAny,return )

bool Strings_obj::startsWithAnyIgnoreCase(::String searchIn,::Array< ::String > searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2916_startsWithAnyIgnoreCase)
HXLINE(2917)		bool _hx_tmp;
HXDLIN(2917)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2917)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2917)			_hx_tmp = true;
            		}
HXDLIN(2917)		if (_hx_tmp) {
HXLINE(2918)			return false;
            		}
HXLINE(2920)		searchIn = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(searchIn)) );
HXLINE(2921)		{
HXLINE(2921)			int _g = 0;
HXDLIN(2921)			while((_g < searchFor->length)){
HXLINE(2921)				::String candidate = searchFor->__get(_g);
HXDLIN(2921)				_g = (_g + 1);
HXLINE(2922)				bool _hx_tmp;
HXDLIN(2922)				if (::hx::IsNotNull( candidate )) {
HXLINE(2922)					_hx_tmp = ::hx::strings::Strings_obj::startsWith(searchIn,( (::String)(::hx::strings::Strings_obj::toLowerCase8(candidate)) ));
            				}
            				else {
HXLINE(2922)					_hx_tmp = false;
            				}
HXDLIN(2922)				if (_hx_tmp) {
HXLINE(2923)					return true;
            				}
            			}
            		}
HXLINE(2925)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,startsWithAnyIgnoreCase,return )

bool Strings_obj::startsWithIgnoreCase(::String searchIn,::String searchFor){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2939_startsWithIgnoreCase)
HXLINE(2940)		bool _hx_tmp;
HXDLIN(2940)		if (::hx::IsNotNull( searchIn )) {
HXLINE(2940)			_hx_tmp = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(2940)			_hx_tmp = true;
            		}
HXDLIN(2940)		if (_hx_tmp) {
HXLINE(2941)			return false;
            		}
HXLINE(2943)		bool _hx_tmp1;
HXDLIN(2943)		if (::hx::IsNotNull( searchFor )) {
HXLINE(2943)			_hx_tmp1 = (searchFor.length == 0);
            		}
            		else {
HXLINE(2943)			_hx_tmp1 = true;
            		}
HXDLIN(2943)		if (_hx_tmp1) {
HXLINE(2944)			return true;
            		}
HXLINE(2946)		::String _hx_tmp2 = searchIn.toLowerCase();
HXDLIN(2946)		return ::hx::strings::Strings_obj::startsWith(_hx_tmp2,searchFor.toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,startsWithIgnoreCase,return )

 ::Dynamic Strings_obj::substr8( ::Dynamic str,int startAt, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_2971_substr8)
HXLINE(2972)		bool _hx_tmp;
HXDLIN(2972)		if (::hx::IsNotNull( str )) {
HXLINE(2972)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(2972)			_hx_tmp = true;
            		}
HXDLIN(2972)		if (_hx_tmp) {
HXLINE(2973)			return str;
            		}
HXLINE(2975)		if (::hx::IsNull( len )) {
HXLINE(2976)			if (::hx::IsNull( str )) {
HXLINE(2976)				len = 0;
            			}
            			else {
HXLINE(2976)				len = ( (::String)(str) ).length;
            			}
            		}
HXLINE(2978)		if (::hx::IsLessEq( len,0 )) {
HXLINE(2979)			return HX_("",00,00,00,00);
            		}
HXLINE(2981)		if ((startAt < 0)) {
HXLINE(2982)			int startAt1;
HXDLIN(2982)			if (::hx::IsNull( str )) {
HXLINE(2982)				startAt1 = 0;
            			}
            			else {
HXLINE(2982)				startAt1 = ( (::String)(str) ).length;
            			}
HXDLIN(2982)			startAt = (startAt + startAt1);
HXLINE(2983)			if ((startAt < 0)) {
HXLINE(2983)				startAt = 0;
            			}
            		}
HXLINE(2990)		return ( (::String)(str) ).substr(startAt,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substr8,return )

 ::Dynamic Strings_obj::substring8( ::Dynamic str,int startAt, ::Dynamic endAt){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3031_substring8)
HXLINE(3032)		bool _hx_tmp;
HXDLIN(3032)		if (::hx::IsNotNull( str )) {
HXLINE(3032)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3032)			_hx_tmp = true;
            		}
HXDLIN(3032)		if (_hx_tmp) {
HXLINE(3033)			return str;
            		}
HXLINE(3035)		if (::hx::IsNull( endAt )) {
HXLINE(3036)			if (::hx::IsNull( str )) {
HXLINE(3036)				endAt = 0;
            			}
            			else {
HXLINE(3036)				endAt = ( (::String)(str) ).length;
            			}
            		}
HXLINE(3041)		return ( (::String)(str) ).substring(startAt,endAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substring8,return )

 ::Dynamic Strings_obj::substringAfter( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3068_substringAfter)
HXLINE(3069)		if (::hx::IsNull( str )) {
HXLINE(3070)			return str;
            		}
HXLINE(3074)		bool _hx_tmp;
HXDLIN(3074)		bool _hx_tmp1;
HXDLIN(3074)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3074)			_hx_tmp1 = ::hx::IsNull( searchFor );
            		}
            		else {
HXLINE(3074)			_hx_tmp1 = true;
            		}
HXDLIN(3074)		if (!(_hx_tmp1)) {
HXLINE(3074)			_hx_tmp = (searchFor == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(3074)			_hx_tmp = true;
            		}
HXDLIN(3074)		if (_hx_tmp) {
HXLINE(3075)			::String _hx_tmp;
HXDLIN(3075)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3075)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3075)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3075)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3075)			return _hx_tmp;
            		}
HXLINE(3077)		int foundAt = ( (::String)(str) ).indexOf(searchFor,null());
HXLINE(3078)		if ((foundAt == -1)) {
HXLINE(3079)			::String _hx_tmp;
HXDLIN(3079)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3079)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3079)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3079)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3079)			return _hx_tmp;
            		}
HXLINE(3081)		return ( (::String)(str) ).substring((foundAt + searchFor.length),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringAfter,return )

 ::Dynamic Strings_obj::substringAfterIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3097_substringAfterIgnoreCase)
HXLINE(3098)		if (::hx::IsNull( str )) {
HXLINE(3099)			return null();
            		}
HXLINE(3103)		bool _hx_tmp;
HXDLIN(3103)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3103)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3103)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3103)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3103)			_hx_tmp = true;
            		}
HXDLIN(3103)		if (_hx_tmp) {
HXLINE(3104)			::String _hx_tmp;
HXDLIN(3104)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3104)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3104)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3104)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3104)			return _hx_tmp;
            		}
HXLINE(3106)		searchFor = searchFor.toLowerCase();
HXLINE(3108)		int foundAt = ( (::String)(str) ).toLowerCase().indexOf(searchFor,null());
HXLINE(3109)		if ((foundAt == -1)) {
HXLINE(3110)			::String _hx_tmp;
HXDLIN(3110)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3110)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3110)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3110)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3110)			return _hx_tmp;
            		}
HXLINE(3112)		return ( (::String)(str) ).substring((foundAt + searchFor.length),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringAfterIgnoreCase,return )

 ::Dynamic Strings_obj::substringBetween( ::Dynamic str,::String after,::String before,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3132_substringBetween)
HXLINE(3133)		if (::hx::IsNull( str )) {
HXLINE(3134)			return null();
            		}
HXLINE(3136)		if (::hx::IsNull( before )) {
HXLINE(3136)			before = after;
            		}
HXLINE(3140)		bool _hx_tmp;
HXDLIN(3140)		bool _hx_tmp1;
HXDLIN(3140)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3140)			if (::hx::IsNotNull( after )) {
HXLINE(3140)				_hx_tmp1 = (after.length == 0);
            			}
            			else {
HXLINE(3140)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(3140)			_hx_tmp1 = true;
            		}
HXDLIN(3140)		if (!(_hx_tmp1)) {
HXLINE(3140)			if (::hx::IsNotNull( before )) {
HXLINE(3140)				_hx_tmp = (before.length == 0);
            			}
            			else {
HXLINE(3140)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3140)			_hx_tmp = true;
            		}
HXDLIN(3140)		if (_hx_tmp) {
HXLINE(3141)			::String _hx_tmp;
HXDLIN(3141)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3141)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3141)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3141)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3141)			return _hx_tmp;
            		}
HXLINE(3143)		int foundAfterAt = ( (::String)(str) ).indexOf(after,null());
HXLINE(3144)		if ((foundAfterAt == -1)) {
HXLINE(3145)			::String _hx_tmp;
HXDLIN(3145)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3145)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3145)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3145)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3145)			return _hx_tmp;
            		}
HXLINE(3147)		int foundBeforeAt = ( (::String)(str) ).indexOf(before,(foundAfterAt + after.length));
HXLINE(3148)		if ((foundBeforeAt == -1)) {
HXLINE(3149)			::String _hx_tmp;
HXDLIN(3149)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3149)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3149)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3149)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3149)			return _hx_tmp;
            		}
HXLINE(3151)		return ( (::String)(str) ).substring((foundAfterAt + after.length),foundBeforeAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Strings_obj,substringBetween,return )

 ::Dynamic Strings_obj::substringBetweenIgnoreCase( ::Dynamic str,::String after,::String before,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3171_substringBetweenIgnoreCase)
HXLINE(3172)		if (::hx::IsNull( str )) {
HXLINE(3173)			return null();
            		}
HXLINE(3175)		if (::hx::IsNull( before )) {
HXLINE(3175)			before = after;
            		}
HXLINE(3179)		bool _hx_tmp;
HXDLIN(3179)		bool _hx_tmp1;
HXDLIN(3179)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3179)			if (::hx::IsNotNull( after )) {
HXLINE(3179)				_hx_tmp1 = (after.length == 0);
            			}
            			else {
HXLINE(3179)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(3179)			_hx_tmp1 = true;
            		}
HXDLIN(3179)		if (!(_hx_tmp1)) {
HXLINE(3179)			if (::hx::IsNotNull( before )) {
HXLINE(3179)				_hx_tmp = (before.length == 0);
            			}
            			else {
HXLINE(3179)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3179)			_hx_tmp = true;
            		}
HXDLIN(3179)		if (_hx_tmp) {
HXLINE(3180)			::String _hx_tmp;
HXDLIN(3180)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3180)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3180)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3180)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3180)			return _hx_tmp;
            		}
HXLINE(3182)		 ::Dynamic strLower = ::hx::strings::Strings_obj::toLowerCase8(str);
HXLINE(3183)		::String after1 = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(after)) );
HXLINE(3184)		::String before1 = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(before)) );
HXLINE(3186)		int foundAfterAt = ( (::String)(strLower) ).indexOf(after1,null());
HXLINE(3187)		if ((foundAfterAt == -1)) {
HXLINE(3188)			::String _hx_tmp;
HXDLIN(3188)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3188)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3188)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3188)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3188)			return _hx_tmp;
            		}
HXLINE(3190)		int foundBeforeAt = ( (::String)(strLower) ).indexOf(before1,(foundAfterAt + after1.length));
HXLINE(3191)		if ((foundBeforeAt == -1)) {
HXLINE(3192)			::String _hx_tmp;
HXDLIN(3192)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3192)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3192)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3192)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3192)			return _hx_tmp;
            		}
HXLINE(3194)		return ( (::String)(str) ).substring((foundAfterAt + after1.length),foundBeforeAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Strings_obj,substringBetweenIgnoreCase,return )

 ::Dynamic Strings_obj::substringAfterLast( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3211_substringAfterLast)
HXLINE(3212)		if (::hx::IsNull( str )) {
HXLINE(3213)			return null();
            		}
HXLINE(3217)		bool _hx_tmp;
HXDLIN(3217)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3217)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3217)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3217)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3217)			_hx_tmp = true;
            		}
HXDLIN(3217)		if (_hx_tmp) {
HXLINE(3218)			::String _hx_tmp;
HXDLIN(3218)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3218)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3218)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3218)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3218)			return _hx_tmp;
            		}
HXLINE(3220)		int foundAt = ( (::String)(str) ).lastIndexOf(searchFor,null());
HXLINE(3221)		if ((foundAt == -1)) {
HXLINE(3222)			::String _hx_tmp;
HXDLIN(3222)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3222)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3222)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3222)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3222)			return _hx_tmp;
            		}
HXLINE(3224)		return ( (::String)(str) ).substring((foundAt + searchFor.length),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringAfterLast,return )

 ::Dynamic Strings_obj::substringAfterLastIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3242_substringAfterLastIgnoreCase)
HXLINE(3243)		if (::hx::IsNull( str )) {
HXLINE(3244)			return null();
            		}
HXLINE(3248)		bool _hx_tmp;
HXDLIN(3248)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3248)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3248)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3248)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3248)			_hx_tmp = true;
            		}
HXDLIN(3248)		if (_hx_tmp) {
HXLINE(3249)			::String _hx_tmp;
HXDLIN(3249)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3249)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3249)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3249)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3249)			return _hx_tmp;
            		}
HXLINE(3251)		searchFor = searchFor.toLowerCase();
HXLINE(3253)		int foundAt = ( (::String)(str) ).toLowerCase().lastIndexOf(searchFor,null());
HXLINE(3254)		if ((foundAt == -1)) {
HXLINE(3255)			::String _hx_tmp;
HXDLIN(3255)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3255)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3255)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3255)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3255)			return _hx_tmp;
            		}
HXLINE(3257)		return ( (::String)(str) ).substring((foundAt + searchFor.length),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringAfterLastIgnoreCase,return )

 ::Dynamic Strings_obj::substringBefore( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3274_substringBefore)
HXLINE(3275)		if (::hx::IsNull( str )) {
HXLINE(3276)			return null();
            		}
HXLINE(3280)		bool _hx_tmp;
HXDLIN(3280)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3280)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3280)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3280)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3280)			_hx_tmp = true;
            		}
HXDLIN(3280)		if (_hx_tmp) {
HXLINE(3281)			::String _hx_tmp;
HXDLIN(3281)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3281)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3281)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3281)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3281)			return _hx_tmp;
            		}
HXLINE(3283)		int foundAt = ( (::String)(str) ).indexOf(searchFor,null());
HXLINE(3284)		if ((foundAt == -1)) {
HXLINE(3285)			::String _hx_tmp;
HXDLIN(3285)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3285)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3285)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3285)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3285)			return _hx_tmp;
            		}
HXLINE(3287)		return ( (::String)(str) ).substring(0,foundAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringBefore,return )

 ::Dynamic Strings_obj::substringBeforeIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3305_substringBeforeIgnoreCase)
HXLINE(3306)		if (::hx::IsNull( str )) {
HXLINE(3307)			return null();
            		}
HXLINE(3311)		bool _hx_tmp;
HXDLIN(3311)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3311)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3311)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3311)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3311)			_hx_tmp = true;
            		}
HXDLIN(3311)		if (_hx_tmp) {
HXLINE(3312)			::String _hx_tmp;
HXDLIN(3312)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3312)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3312)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3312)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3312)			return _hx_tmp;
            		}
HXLINE(3314)		searchFor = searchFor.toLowerCase();
HXLINE(3316)		int foundAt = ( (::String)(str) ).toLowerCase().indexOf(searchFor,null());
HXLINE(3317)		if ((foundAt == -1)) {
HXLINE(3318)			::String _hx_tmp;
HXDLIN(3318)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3318)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3318)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3318)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3318)			return _hx_tmp;
            		}
HXLINE(3320)		return ( (::String)(str) ).substring(0,foundAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringBeforeIgnoreCase,return )

 ::Dynamic Strings_obj::substringBeforeLast( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3339_substringBeforeLast)
HXLINE(3340)		if (::hx::IsNull( str )) {
HXLINE(3341)			return null();
            		}
HXLINE(3345)		bool _hx_tmp;
HXDLIN(3345)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3345)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3345)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3345)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3345)			_hx_tmp = true;
            		}
HXDLIN(3345)		if (_hx_tmp) {
HXLINE(3346)			::String _hx_tmp;
HXDLIN(3346)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3346)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3346)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3346)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3346)			return _hx_tmp;
            		}
HXLINE(3348)		int foundAt = ( (::String)(str) ).lastIndexOf(searchFor,null());
HXLINE(3349)		if ((foundAt == -1)) {
HXLINE(3350)			::String _hx_tmp;
HXDLIN(3350)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3350)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3350)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3350)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3350)			return _hx_tmp;
            		}
HXLINE(3352)		return ( (::String)(str) ).substring(0,foundAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringBeforeLast,return )

 ::Dynamic Strings_obj::substringBeforeLastIgnoreCase( ::Dynamic str,::String searchFor,::hx::Null< int >  __o_notFoundDefault){
            		int notFoundDefault = __o_notFoundDefault.Default(2);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3370_substringBeforeLastIgnoreCase)
HXLINE(3371)		if (::hx::IsNull( str )) {
HXLINE(3372)			return null();
            		}
HXLINE(3376)		bool _hx_tmp;
HXDLIN(3376)		if (::hx::IsNotEq( str,HX_("",00,00,00,00) )) {
HXLINE(3376)			if (::hx::IsNotNull( searchFor )) {
HXLINE(3376)				_hx_tmp = (searchFor.length == 0);
            			}
            			else {
HXLINE(3376)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(3376)			_hx_tmp = true;
            		}
HXDLIN(3376)		if (_hx_tmp) {
HXLINE(3377)			::String _hx_tmp;
HXDLIN(3377)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3377)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3377)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3377)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3377)			return _hx_tmp;
            		}
HXLINE(3379)		searchFor = searchFor.toLowerCase();
HXLINE(3381)		int foundAt = ( (::String)(str) ).toLowerCase().lastIndexOf(searchFor,null());
HXLINE(3382)		if ((foundAt == -1)) {
HXLINE(3383)			::String _hx_tmp;
HXDLIN(3383)			switch((int)(notFoundDefault)){
            				case (int)1: {
HXLINE(3383)					_hx_tmp = null();
            				}
            				break;
            				case (int)2: {
HXLINE(3383)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(3383)					_hx_tmp = ( (::String)(str) );
            				}
            				break;
            			}
HXDLIN(3383)			return _hx_tmp;
            		}
HXLINE(3385)		return ( (::String)(str) ).substring(0,foundAt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,substringBeforeLastIgnoreCase,return )

bool Strings_obj::toBool(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3404_toBool)
HXLINE(3405)		bool _hx_tmp;
HXDLIN(3405)		if (::hx::IsNotNull( str )) {
HXLINE(3405)			_hx_tmp = (str.length == 0);
            		}
            		else {
HXLINE(3405)			_hx_tmp = true;
            		}
HXDLIN(3405)		if (_hx_tmp) {
HXLINE(3406)			return false;
            		}
HXLINE(3408)		::String _hx_switch_0 = str.toLowerCase();
            		if (  (_hx_switch_0==HX_("0",30,00,00,00)) ||  (_hx_switch_0==HX_("false",a3,35,4f,fb)) ||  (_hx_switch_0==HX_("no",41,60,00,00)) ){
HXLINE(3409)			return false;
HXDLIN(3409)			goto _hx_goto_166;
            		}
            		/* default */{
HXLINE(3410)			return true;
            		}
            		_hx_goto_166:;
HXLINE(3408)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toBool,return )

 ::haxe::io::Bytes Strings_obj::toBytes(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3425_toBytes)
HXLINE(3428)		if (::hx::IsNull( str )) {
HXLINE(3430)			return null();
            		}
HXLINE(3432)		return ::haxe::io::Bytes_obj::ofString(str,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toBytes,return )

int Strings_obj::toChar(int charCode){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3448_toChar)
HXDLIN(3448)		return charCode;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toChar,return )

 ::hx::strings::CharIterator Strings_obj::toCharIterator(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3462_toCharIterator)
HXDLIN(3462)		if (::hx::IsNull( str )) {
HXDLIN(3462)			return ::hx::strings::_CharIterator::NullCharIterator_obj::INSTANCE;
            		}
            		else {
HXDLIN(3462)			return  ::hx::strings::_CharIterator::StringCharIterator_obj::__alloc( HX_CTX ,str,0);
            		}
HXDLIN(3462)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toCharIterator,return )

::Array< int > Strings_obj::toChars(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3475_toChars)
HXLINE(3476)		if (::hx::IsNull( str )) {
HXLINE(3478)			return null();
            		}
HXLINE(3480)		int strLen;
HXDLIN(3480)		if (::hx::IsNull( str )) {
HXLINE(3480)			strLen = 0;
            		}
            		else {
HXLINE(3480)			strLen = str.length;
            		}
HXLINE(3482)		if ((strLen == 0)) {
HXLINE(3483)			return ::Array_obj< int >::__new(0);
            		}
HXLINE(3485)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(3485)		{
HXLINE(3485)			int _g1 = 0;
HXDLIN(3485)			int _g2 = strLen;
HXDLIN(3485)			while((_g1 < _g2)){
HXLINE(3485)				_g1 = (_g1 + 1);
HXDLIN(3485)				int i = (_g1 - 1);
HXDLIN(3485)				_g->push(( (int)(str.charCodeAt(i)) ));
            			}
            		}
HXDLIN(3485)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toChars,return )

 ::hx::strings::Pattern Strings_obj::toPattern(::String str, ::hx::strings::internal::_Either3::_Either3 options){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3498_toPattern)
HXLINE(3499)		if (::hx::IsNull( str )) {
HXLINE(3500)			return null();
            		}
HXLINE(3501)		return ::hx::strings::Pattern_obj::compile(str,options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toPattern,return )

 ::EReg Strings_obj::toEReg(::String str,::String __o_opt){
            		::String opt = __o_opt;
            		if (::hx::IsNull(__o_opt)) opt = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3514_toEReg)
HXLINE(3515)		if (::hx::IsNull( str )) {
HXLINE(3516)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("[str] must not be null",39,a9,3f,f6)));
            		}
HXLINE(3517)		return  ::EReg_obj::__alloc( HX_CTX ,str,opt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toEReg,return )

Float Strings_obj::toFloat(::String str,Float ifUnparseable){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3535_toFloat)
HXLINE(3536)		if (::hx::IsNull( str )) {
HXLINE(3537)			return ifUnparseable;
            		}
HXLINE(3539)		Float result = ::Std_obj::parseFloat(str);
HXLINE(3540)		if (::Math_obj::isNaN(result)) {
HXLINE(3541)			return ifUnparseable;
            		}
            		else {
HXLINE(3542)			return result;
            		}
HXLINE(3540)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toFloat,return )

 ::Dynamic Strings_obj::toFloatOrNull(::String str, ::Dynamic ifUnparseable){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3560_toFloatOrNull)
HXLINE(3561)		if (::hx::IsNull( str )) {
HXLINE(3562)			return ifUnparseable;
            		}
HXLINE(3564)		Float result = ::Std_obj::parseFloat(str);
HXLINE(3565)		if (::Math_obj::isNaN(result)) {
HXLINE(3566)			return ifUnparseable;
            		}
            		else {
HXLINE(3567)			return result;
            		}
HXLINE(3565)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toFloatOrNull,return )

::String Strings_obj::toHex(int num,::hx::Null< int >  __o_minDigits,::hx::Null< bool >  __o_upperCase){
            		int minDigits = __o_minDigits.Default(0);
            		bool upperCase = __o_upperCase.Default(true);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3589_toHex)
HXLINE(3590)		::String hexed = ::StringTools_obj::hex(num,0);
HXLINE(3591)		if (!(upperCase)) {
HXLINE(3592)			return hexed.toLowerCase();
            		}
HXLINE(3593)		if ((hexed.length >= minDigits)) {
HXLINE(3594)			return hexed;
            		}
HXLINE(3595)		return ( (::String)(::hx::strings::Strings_obj::lpad(hexed,minDigits,HX_("0",30,00,00,00),null())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,toHex,return )

int Strings_obj::toInt(::String str,int ifUnparseable){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3613_toInt)
HXLINE(3614)		if (::hx::IsNull( str )) {
HXLINE(3615)			return ifUnparseable;
            		}
HXLINE(3617)		 ::Dynamic result = ::Std_obj::parseInt(str);
HXLINE(3618)		if (::hx::IsNull( result )) {
HXLINE(3619)			return ifUnparseable;
            		}
            		else {
HXLINE(3620)			return ( (int)(result) );
            		}
HXLINE(3618)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toInt,return )

 ::Dynamic Strings_obj::toIntOrNull(::String str, ::Dynamic ifUnparseable){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3639_toIntOrNull)
HXLINE(3640)		if (::hx::IsNull( str )) {
HXLINE(3641)			return ifUnparseable;
            		}
HXLINE(3643)		 ::Dynamic result = ::Std_obj::parseInt(str);
HXLINE(3644)		if (::hx::IsNull( result )) {
HXLINE(3645)			return ifUnparseable;
            		}
            		else {
HXLINE(3646)			return result;
            		}
HXLINE(3644)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toIntOrNull,return )

 ::Dynamic Strings_obj::toLowerCase8( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3664_toLowerCase8)
HXLINE(3665)		bool _hx_tmp;
HXDLIN(3665)		if (::hx::IsNotNull( str )) {
HXLINE(3665)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3665)			_hx_tmp = true;
            		}
HXDLIN(3665)		if (_hx_tmp) {
HXLINE(3666)			return str;
            		}
HXLINE(3671)		return ( (::String)(str) ).toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toLowerCase8,return )

 ::Dynamic Strings_obj::toLowerCaseFirstChar( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3694_toLowerCaseFirstChar)
HXLINE(3695)		bool _hx_tmp;
HXDLIN(3695)		if (::hx::IsNotNull( str )) {
HXLINE(3695)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3695)			_hx_tmp = true;
            		}
HXDLIN(3695)		if (_hx_tmp) {
HXLINE(3696)			return str;
            		}
HXLINE(3700)		int this1 = ( (int)(( (::String)(str) ).charCodeAt(0)) );
HXDLIN(3700)		 ::Dynamic lowerChar = ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->get(this1);
HXDLIN(3700)		int firstChar;
HXDLIN(3700)		if (::hx::IsNull( lowerChar )) {
HXLINE(3700)			firstChar = this1;
            		}
            		else {
HXLINE(3700)			firstChar = ( (int)(lowerChar) );
            		}
HXLINE(3702)		if ((( (::String)(str) ).length == 1)) {
HXLINE(3703)			return ::String::fromCharCode(firstChar);
            		}
HXLINE(3705)		::String other = ( (::String)(::hx::strings::Strings_obj::substr8(str,1,null())) );
HXDLIN(3705)		return (::String::fromCharCode(firstChar) + other);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toLowerCaseFirstChar,return )

 ::Dynamic Strings_obj::toLowerCamel( ::Dynamic str,::hx::Null< bool >  __o_keepUppercasedWords){
            		bool keepUppercasedWords = __o_keepUppercasedWords.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3728_toLowerCamel)
HXLINE(3729)		bool _hx_tmp;
HXDLIN(3729)		if (::hx::IsNotNull( str )) {
HXLINE(3729)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3729)			_hx_tmp = true;
            		}
HXDLIN(3729)		if (_hx_tmp) {
HXLINE(3730)			return str;
            		}
HXLINE(3734)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(3735)		if (keepUppercasedWords) {
HXLINE(3736)			int _g = 0;
HXDLIN(3736)			::Array< ::String > _g1 = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3736)			while((_g < _g1->length)){
HXLINE(3736)				::String word = _g1->__get(_g);
HXDLIN(3736)				_g = (_g + 1);
HXLINE(3737)				sb->add(( (::String)(::hx::strings::Strings_obj::toUpperCaseFirstChar(word)) ));
            			}
            		}
            		else {
HXLINE(3739)			int _g = 0;
HXDLIN(3739)			::Array< ::String > _g1 = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3739)			while((_g < _g1->length)){
HXLINE(3739)				::String word = _g1->__get(_g);
HXDLIN(3739)				_g = (_g + 1);
HXLINE(3740)				sb->add(( (::String)(::hx::strings::Strings_obj::toUpperCaseFirstChar(::hx::strings::Strings_obj::toLowerCase8(word))) ));
            			}
            		}
HXLINE(3741)		return ::hx::strings::Strings_obj::toLowerCaseFirstChar(sb->toString());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toLowerCamel,return )

 ::Dynamic Strings_obj::toLowerHyphen( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3763_toLowerHyphen)
HXLINE(3764)		bool _hx_tmp;
HXDLIN(3764)		if (::hx::IsNotNull( str )) {
HXLINE(3764)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3764)			_hx_tmp = true;
            		}
HXDLIN(3764)		if (_hx_tmp) {
HXLINE(3765)			return str;
            		}
HXLINE(3767)		::Array< ::String > _this = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3767)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(3767)		{
HXLINE(3767)			int _g = 0;
HXDLIN(3767)			int _g1 = _this->length;
HXDLIN(3767)			while((_g < _g1)){
HXLINE(3767)				_g = (_g + 1);
HXDLIN(3767)				int i = (_g - 1);
HXDLIN(3767)				{
HXLINE(3767)					::String inValue = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(_hx_array_unsafe_get(_this,i))) );
HXDLIN(3767)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(3767)		return result->join(HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toLowerHyphen,return )

 ::Dynamic Strings_obj::toLowerUnderscore( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3789_toLowerUnderscore)
HXLINE(3790)		bool _hx_tmp;
HXDLIN(3790)		if (::hx::IsNotNull( str )) {
HXLINE(3790)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3790)			_hx_tmp = true;
            		}
HXDLIN(3790)		if (_hx_tmp) {
HXLINE(3791)			return str;
            		}
HXLINE(3793)		::Array< ::String > _this = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3793)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(3793)		{
HXLINE(3793)			int _g = 0;
HXDLIN(3793)			int _g1 = _this->length;
HXDLIN(3793)			while((_g < _g1)){
HXLINE(3793)				_g = (_g + 1);
HXDLIN(3793)				int i = (_g - 1);
HXDLIN(3793)				{
HXLINE(3793)					::String inValue = ( (::String)(::hx::strings::Strings_obj::toLowerCase8(_hx_array_unsafe_get(_this,i))) );
HXDLIN(3793)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(3793)		return result->join(HX_("_",5f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toLowerUnderscore,return )

 ::Dynamic Strings_obj::toTitle( ::Dynamic str,::hx::Null< bool >  __o_keepUppercasedWords){
            		bool keepUppercasedWords = __o_keepUppercasedWords.Default(true);
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3813_toTitle)
HXLINE(3814)		bool _hx_tmp;
HXDLIN(3814)		if (::hx::IsNotNull( str )) {
HXLINE(3814)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3814)			_hx_tmp = true;
            		}
HXDLIN(3814)		if (_hx_tmp) {
HXLINE(3815)			return str;
            		}
HXLINE(3819)		if (keepUppercasedWords) {
HXLINE(3820)			::Array< ::String > _this = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3820)			::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(3820)			{
HXLINE(3820)				int _g = 0;
HXDLIN(3820)				int _g1 = _this->length;
HXDLIN(3820)				while((_g < _g1)){
HXLINE(3820)					_g = (_g + 1);
HXDLIN(3820)					int i = (_g - 1);
HXDLIN(3820)					{
HXLINE(3821)						::String s = ( (::String)(_hx_array_unsafe_get(_this,i)) );
HXLINE(3820)						::String inValue;
HXLINE(3821)						if (::hx::IsEq( ::hx::strings::Strings_obj::toUpperCase8(s),s )) {
HXLINE(3820)							inValue = s;
            						}
            						else {
HXLINE(3820)							inValue = ( (::String)(::hx::strings::Strings_obj::toUpperCaseFirstChar(::hx::strings::Strings_obj::toLowerCase8(s))) );
            						}
HXDLIN(3820)						result->__unsafe_set(i,inValue);
            					}
            				}
            			}
HXDLIN(3820)			return result->join(HX_(" ",20,00,00,00));
            		}
HXLINE(3824)		::Array< ::String > _this = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3824)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(3824)		{
HXLINE(3824)			int _g = 0;
HXDLIN(3824)			int _g1 = _this->length;
HXDLIN(3824)			while((_g < _g1)){
HXLINE(3824)				_g = (_g + 1);
HXDLIN(3824)				int i = (_g - 1);
HXDLIN(3824)				{
HXLINE(3824)					::String inValue = ( (::String)(::hx::strings::Strings_obj::toUpperCaseFirstChar(::hx::strings::Strings_obj::toLowerCase8(_hx_array_unsafe_get(_this,i)))) );
HXDLIN(3824)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(3824)		return result->join(HX_(" ",20,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toTitle,return )

 ::Dynamic Strings_obj::toUpperCamel( ::Dynamic str,::hx::Null< bool >  __o_keepUppercasedWords){
            		bool keepUppercasedWords = __o_keepUppercasedWords.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3845_toUpperCamel)
HXLINE(3846)		bool _hx_tmp;
HXDLIN(3846)		if (::hx::IsNotNull( str )) {
HXLINE(3846)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3846)			_hx_tmp = true;
            		}
HXDLIN(3846)		if (_hx_tmp) {
HXLINE(3847)			return str;
            		}
HXLINE(3851)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(3852)		if (keepUppercasedWords) {
HXLINE(3853)			int _g = 0;
HXDLIN(3853)			::Array< ::String > _g1 = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3853)			while((_g < _g1->length)){
HXLINE(3853)				::String word = _g1->__get(_g);
HXDLIN(3853)				_g = (_g + 1);
HXLINE(3854)				sb->add(( (::String)(::hx::strings::Strings_obj::toUpperCaseFirstChar(word)) ));
            			}
            		}
            		else {
HXLINE(3856)			int _g = 0;
HXDLIN(3856)			::Array< ::String > _g1 = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3856)			while((_g < _g1->length)){
HXLINE(3856)				::String word = _g1->__get(_g);
HXDLIN(3856)				_g = (_g + 1);
HXLINE(3857)				sb->add(( (::String)(::hx::strings::Strings_obj::toUpperCaseFirstChar(::hx::strings::Strings_obj::toLowerCase8(word))) ));
            			}
            		}
HXLINE(3858)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,toUpperCamel,return )

 ::Dynamic Strings_obj::toUpperUnderscore( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3876_toUpperUnderscore)
HXLINE(3877)		bool _hx_tmp;
HXDLIN(3877)		if (::hx::IsNotNull( str )) {
HXLINE(3877)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3877)			_hx_tmp = true;
            		}
HXDLIN(3877)		if (_hx_tmp) {
HXLINE(3878)			return str;
            		}
HXLINE(3880)		::Array< ::String > _this = ::hx::strings::Strings_obj::_splitAsciiWordsUnsafe(( (::String)(str) ));
HXDLIN(3880)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(3880)		{
HXLINE(3880)			int _g = 0;
HXDLIN(3880)			int _g1 = _this->length;
HXDLIN(3880)			while((_g < _g1)){
HXLINE(3880)				_g = (_g + 1);
HXDLIN(3880)				int i = (_g - 1);
HXDLIN(3880)				{
HXLINE(3880)					::String inValue = ( (::String)(::hx::strings::Strings_obj::toUpperCase8(_hx_array_unsafe_get(_this,i))) );
HXDLIN(3880)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(3880)		return result->join(HX_("_",5f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toUpperUnderscore,return )

::String Strings_obj::toString(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3896_toString)
HXDLIN(3896)		if (::hx::IsNull( str )) {
HXDLIN(3896)			return HX_("null",87,9e,0e,49);
            		}
            		else {
HXDLIN(3896)			return str;
            		}
HXDLIN(3896)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toString,return )

 ::Dynamic Strings_obj::toUpperCase8( ::Dynamic str){
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3914_toUpperCase8)
HXLINE(3915)		bool _hx_tmp;
HXDLIN(3915)		if (::hx::IsNotNull( str )) {
HXLINE(3915)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3915)			_hx_tmp = true;
            		}
HXDLIN(3915)		if (_hx_tmp) {
HXLINE(3916)			return str;
            		}
HXLINE(3923)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(3924)		{
HXLINE(3924)			int _g = 0;
HXDLIN(3924)			int _g1;
HXDLIN(3924)			if (::hx::IsNull( str )) {
HXLINE(3924)				_g1 = 0;
            			}
            			else {
HXLINE(3924)				_g1 = ( (::String)(str) ).length;
            			}
HXDLIN(3924)			while((_g < _g1)){
HXLINE(3924)				_g = (_g + 1);
HXDLIN(3924)				int i = (_g - 1);
HXLINE(3925)				int this1 = ( (int)(( (::String)(str) ).charCodeAt(i)) );
HXDLIN(3925)				 ::Dynamic upperChar = ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapL2U->get(this1);
HXDLIN(3925)				int _hx_tmp;
HXDLIN(3925)				if (::hx::IsNull( upperChar )) {
HXLINE(3925)					_hx_tmp = this1;
            				}
            				else {
HXLINE(3925)					_hx_tmp = ( (int)(upperChar) );
            				}
HXDLIN(3925)				sb->addChar(_hx_tmp);
            			}
            		}
HXLINE(3926)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toUpperCase8,return )

 ::Dynamic Strings_obj::toUpperCaseFirstChar( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3945_toUpperCaseFirstChar)
HXLINE(3946)		bool _hx_tmp;
HXDLIN(3946)		if (::hx::IsNotNull( str )) {
HXLINE(3946)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3946)			_hx_tmp = true;
            		}
HXDLIN(3946)		if (_hx_tmp) {
HXLINE(3947)			return str;
            		}
HXLINE(3951)		int this1 = ( (int)(( (::String)(str) ).charCodeAt(0)) );
HXDLIN(3951)		 ::Dynamic upperChar = ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapL2U->get(this1);
HXDLIN(3951)		int firstChar;
HXDLIN(3951)		if (::hx::IsNull( upperChar )) {
HXLINE(3951)			firstChar = this1;
            		}
            		else {
HXLINE(3951)			firstChar = ( (int)(upperChar) );
            		}
HXLINE(3953)		if ((( (::String)(str) ).length == 1)) {
HXLINE(3954)			return ::String::fromCharCode(firstChar);
            		}
HXLINE(3955)		::String other = ( (::String)(::hx::strings::Strings_obj::substr8(str,1,null())) );
HXDLIN(3955)		return (::String::fromCharCode(firstChar) + other);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,toUpperCaseFirstChar,return )

 ::Dynamic Strings_obj::trim( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_3974_trim)
HXLINE(3975)		bool _hx_tmp;
HXDLIN(3975)		if (::hx::IsNotNull( str )) {
HXLINE(3975)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(3975)			_hx_tmp = true;
            		}
HXDLIN(3975)		if (_hx_tmp) {
HXLINE(3976)			return str;
            		}
HXLINE(3978)		if (::hx::IsNull( charsToRemove )) {
HXLINE(3979)			return ::StringTools_obj::trim(( (::String)(str) ));
            		}
HXLINE(3981)		::Array< int > removableChars;
HXDLIN(3981)		 ::hx::strings::internal::_Either2::_Either2 _g = charsToRemove;
HXDLIN(3981)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(3982)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE(3981)				removableChars = ::hx::strings::Strings_obj::toChars(str);
            			}
            			break;
            			case (int)1: {
HXLINE(3983)				::Array< int > chars = ( (::Array< int >)(_g->_hx_getObject(0)) );
HXLINE(3981)				removableChars = chars;
            			}
            			break;
            		}
HXLINE(3986)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(removableChars);
HXDLIN(3986)		 ::hx::strings::internal::_Either2::_Either2 this2 = ::hx::strings::internal::_Either2::_Either2_obj::b(removableChars);
HXDLIN(3986)		return ::hx::strings::Strings_obj::trimLeft(::hx::strings::Strings_obj::trimRight(str,this1),this2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,trim,return )

 ::Dynamic Strings_obj::trimRight( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4007_trimRight)
HXLINE(4008)		bool _hx_tmp;
HXDLIN(4008)		if (::hx::IsNotNull( str )) {
HXLINE(4008)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(4008)			_hx_tmp = true;
            		}
HXDLIN(4008)		if (_hx_tmp) {
HXLINE(4009)			return str;
            		}
HXLINE(4011)		if (::hx::IsNull( charsToRemove )) {
HXLINE(4012)			return ::StringTools_obj::rtrim(( (::String)(str) ));
            		}
HXLINE(4014)		::Array< int > removableChars;
HXDLIN(4014)		 ::hx::strings::internal::_Either2::_Either2 _g = charsToRemove;
HXDLIN(4014)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(4015)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE(4014)				removableChars = ::hx::strings::Strings_obj::toChars(str);
            			}
            			break;
            			case (int)1: {
HXLINE(4016)				::Array< int > chars = ( (::Array< int >)(_g->_hx_getObject(0)) );
HXLINE(4014)				removableChars = chars;
            			}
            			break;
            		}
HXLINE(4019)		if ((removableChars->length == 0)) {
HXLINE(4020)			return str;
            		}
HXLINE(4022)		int len;
HXDLIN(4022)		if (::hx::IsNull( str )) {
HXLINE(4022)			len = 0;
            		}
            		else {
HXLINE(4022)			len = ( (::String)(str) ).length;
            		}
HXLINE(4023)		int i = (len - 1);
HXLINE(4024)		while(true){
HXLINE(4024)			bool _hx_tmp;
HXDLIN(4024)			if ((i > -1)) {
HXLINE(4024)				_hx_tmp = (removableChars->indexOf(::hx::strings::Strings_obj::charCodeAt8(( (::String)(::hx::strings::Strings_obj::charAt8(str,i,null())) ),0,null()),null()) > -1);
            			}
            			else {
HXLINE(4024)				_hx_tmp = false;
            			}
HXDLIN(4024)			if (!(_hx_tmp)) {
HXLINE(4024)				goto _hx_goto_202;
            			}
HXLINE(4025)			i = (i - 1);
            		}
            		_hx_goto_202:;
HXLINE(4026)		if ((i < (len - 1))) {
HXLINE(4027)			return ::hx::strings::Strings_obj::substring8(str,0,(i + 1));
            		}
HXLINE(4028)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,trimRight,return )

 ::Dynamic Strings_obj::trimLeft( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4049_trimLeft)
HXLINE(4050)		if (::hx::IsNull( str )) {
HXLINE(4051)			return str;
            		}
HXLINE(4053)		if (::hx::IsNull( charsToRemove )) {
HXLINE(4054)			return ::StringTools_obj::ltrim(( (::String)(str) ));
            		}
HXLINE(4056)		::Array< int > removableChars;
HXDLIN(4056)		 ::hx::strings::internal::_Either2::_Either2 _g = charsToRemove;
HXDLIN(4056)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(4057)				::String str = ( (::String)(_g->_hx_getObject(0)) );
HXLINE(4056)				removableChars = ::hx::strings::Strings_obj::toChars(str);
            			}
            			break;
            			case (int)1: {
HXLINE(4058)				::Array< int > chars = ( (::Array< int >)(_g->_hx_getObject(0)) );
HXLINE(4056)				removableChars = chars;
            			}
            			break;
            		}
HXLINE(4061)		if ((removableChars->length == 0)) {
HXLINE(4062)			return str;
            		}
HXLINE(4064)		int len;
HXDLIN(4064)		if (::hx::IsNull( str )) {
HXLINE(4064)			len = 0;
            		}
            		else {
HXLINE(4064)			len = ( (::String)(str) ).length;
            		}
HXLINE(4065)		int i = 0;
HXLINE(4066)		while(true){
HXLINE(4066)			bool _hx_tmp;
HXDLIN(4066)			if ((i < len)) {
HXLINE(4066)				_hx_tmp = (removableChars->indexOf(::hx::strings::Strings_obj::charCodeAt8(( (::String)(::hx::strings::Strings_obj::charAt8(str,i,null())) ),0,null()),null()) > -1);
            			}
            			else {
HXLINE(4066)				_hx_tmp = false;
            			}
HXDLIN(4066)			if (!(_hx_tmp)) {
HXLINE(4066)				goto _hx_goto_204;
            			}
HXLINE(4067)			i = (i + 1);
            		}
            		_hx_goto_204:;
HXLINE(4069)		if ((i > 0)) {
HXLINE(4070)			return ::hx::strings::Strings_obj::substring8(str,i,len);
            		}
HXLINE(4071)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,trimLeft,return )

 ::Dynamic Strings_obj::trimLines( ::Dynamic str, ::hx::strings::internal::_Either2::_Either2 charsToRemove){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4088_trimLines)
HXLINE(4089)		bool _hx_tmp;
HXDLIN(4089)		if (::hx::IsNotNull( str )) {
HXLINE(4089)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(4089)			_hx_tmp = true;
            		}
HXDLIN(4089)		if (_hx_tmp) {
HXLINE(4090)			return str;
            		}
HXLINE(4092)		::Array< ::String > _this = ::hx::strings::Strings_obj::REGEX_SPLIT_LINES->ereg->split(( (::String)(str) ));
HXDLIN(4092)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN(4092)		{
HXLINE(4092)			int _g = 0;
HXDLIN(4092)			int _g1 = _this->length;
HXDLIN(4092)			while((_g < _g1)){
HXLINE(4092)				_g = (_g + 1);
HXDLIN(4092)				int i = (_g - 1);
HXDLIN(4092)				{
HXLINE(4092)					::String inValue = ( (::String)(::hx::strings::Strings_obj::trim(_hx_array_unsafe_get(_this,i),charsToRemove)) );
HXDLIN(4092)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(4092)		return result->join(HX_("\n",0a,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,trimLines,return )

::String Strings_obj::trimToNull(::String str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4106_trimToNull)
HXLINE(4107)		if (::hx::IsNull( str )) {
HXLINE(4108)			return null();
            		}
HXLINE(4110)		::String trimmed = ( (::String)(::hx::strings::Strings_obj::trim(str,null())) );
HXLINE(4112)		bool _hx_tmp;
HXDLIN(4112)		if (::hx::IsNotNull( trimmed )) {
HXLINE(4112)			_hx_tmp = (trimmed.length == 0);
            		}
            		else {
HXLINE(4112)			_hx_tmp = true;
            		}
HXDLIN(4112)		if (_hx_tmp) {
HXLINE(4113)			return null();
            		}
HXLINE(4115)		return trimmed;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,trimToNull,return )

 ::Dynamic Strings_obj::trimToEmpty( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4129_trimToEmpty)
HXLINE(4132)		 ::Dynamic trimmed = ::hx::strings::Strings_obj::trim(str,null());
HXLINE(4134)		bool _hx_tmp;
HXDLIN(4134)		if (::hx::IsNotNull( trimmed )) {
HXLINE(4134)			_hx_tmp = (( (::String)(trimmed) ).length == 0);
            		}
            		else {
HXLINE(4134)			_hx_tmp = true;
            		}
HXDLIN(4134)		if (_hx_tmp) {
HXLINE(4135)			return HX_("",00,00,00,00);
            		}
HXLINE(4137)		return trimmed;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,trimToEmpty,return )

 ::Dynamic Strings_obj::truncate( ::Dynamic str,int maxLength){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4156_truncate)
HXDLIN(4156)		 ::Dynamic _hx_tmp;
HXDLIN(4156)		int _hx_tmp1;
HXDLIN(4156)		if (::hx::IsNull( str )) {
HXDLIN(4156)			_hx_tmp1 = 0;
            		}
            		else {
HXDLIN(4156)			_hx_tmp1 = ( (::String)(str) ).length;
            		}
HXDLIN(4156)		if ((_hx_tmp1 <= maxLength)) {
HXDLIN(4156)			_hx_tmp = str;
            		}
            		else {
HXDLIN(4156)			_hx_tmp = ::hx::strings::Strings_obj::substring8(str,0,maxLength);
            		}
HXDLIN(4156)		return _hx_tmp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Strings_obj,truncate,return )

 ::Dynamic Strings_obj::urlDecode( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4168_urlDecode)
HXLINE(4169)		bool _hx_tmp;
HXDLIN(4169)		if (::hx::IsNotNull( str )) {
HXLINE(4169)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(4169)			_hx_tmp = true;
            		}
HXDLIN(4169)		if (_hx_tmp) {
HXLINE(4170)			return str;
            		}
HXLINE(4175)		return ::StringTools_obj::urlDecode(( (::String)(str) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,urlDecode,return )

 ::Dynamic Strings_obj::urlEncode( ::Dynamic str){
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4190_urlEncode)
HXLINE(4191)		bool _hx_tmp;
HXDLIN(4191)		if (::hx::IsNotNull( str )) {
HXLINE(4191)			_hx_tmp = (( (::String)(str) ).length == 0);
            		}
            		else {
HXLINE(4191)			_hx_tmp = true;
            		}
HXDLIN(4191)		if (_hx_tmp) {
HXLINE(4192)			return str;
            		}
HXLINE(4197)		return ::StringTools_obj::urlEncode(( (::String)(str) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,urlEncode,return )

 ::Dynamic Strings_obj::wrap( ::Dynamic str,int maxLineLength,::hx::Null< bool >  __o_splitLongWords,::String __o_newLineSeparator){
            		bool splitLongWords = __o_splitLongWords.Default(true);
            		::String newLineSeparator = __o_newLineSeparator;
            		if (::hx::IsNull(__o_newLineSeparator)) newLineSeparator = HX_("\n",0a,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_fd0a69697a336cdd_4214_wrap)
HXLINE(4215)		bool _hx_tmp;
HXDLIN(4215)		int _hx_tmp1;
HXDLIN(4215)		if (::hx::IsNull( str )) {
HXLINE(4215)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE(4215)			_hx_tmp1 = ( (::String)(str) ).length;
            		}
HXDLIN(4215)		if ((_hx_tmp1 > maxLineLength)) {
HXLINE(4215)			_hx_tmp = (maxLineLength < 1);
            		}
            		else {
HXLINE(4215)			_hx_tmp = true;
            		}
HXDLIN(4215)		if (_hx_tmp) {
HXLINE(4216)			return str;
            		}
HXLINE(4218)		 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(4219)		::Array< int > wordChars = ::Array_obj< int >::__new(0);
HXLINE(4220)		int currLineLength = 0;
HXLINE(4221)		{
HXLINE(4221)			int _g = 0;
HXDLIN(4221)			::Array< int > _g1 = ::hx::strings::Strings_obj::toChars(( (::String)(str) ));
HXDLIN(4221)			while((_g < _g1->length)){
HXLINE(4221)				int ch = _g1->__get(_g);
HXDLIN(4221)				_g = (_g + 1);
HXLINE(4222)				bool _hx_tmp;
HXDLIN(4222)				bool _hx_tmp1;
HXDLIN(4222)				if ((ch > 8)) {
HXLINE(4222)					_hx_tmp1 = (ch < 14);
            				}
            				else {
HXLINE(4222)					_hx_tmp1 = false;
            				}
HXDLIN(4222)				if (!(_hx_tmp1)) {
HXLINE(4222)					_hx_tmp = (ch == 32);
            				}
            				else {
HXLINE(4222)					_hx_tmp = true;
            				}
HXDLIN(4222)				if (_hx_tmp) {
HXLINE(4223)					if ((wordChars->length > 0)) {
HXLINE(4224)						{
HXLINE(4224)							int _g = 0;
HXDLIN(4224)							while((_g < wordChars->length)){
HXLINE(4224)								int wordCh = wordChars->__get(_g);
HXDLIN(4224)								_g = (_g + 1);
HXLINE(4225)								bool _hx_tmp;
HXDLIN(4225)								if ((currLineLength == maxLineLength)) {
HXLINE(4225)									_hx_tmp = splitLongWords;
            								}
            								else {
HXLINE(4225)									_hx_tmp = false;
            								}
HXDLIN(4225)								if (_hx_tmp) {
HXLINE(4226)									sb->add(newLineSeparator);
HXLINE(4227)									currLineLength = 0;
            								}
HXLINE(4229)								currLineLength = (currLineLength + 1);
HXLINE(4230)								sb->addChar(wordCh);
            							}
            						}
HXLINE(4232)						wordChars = ::Array_obj< int >::__new(0);
            					}
HXLINE(4234)					if ((currLineLength >= maxLineLength)) {
HXLINE(4235)						sb->add(newLineSeparator);
HXLINE(4236)						currLineLength = 0;
            					}
HXLINE(4238)					sb->addChar(ch);
HXLINE(4239)					currLineLength = (currLineLength + 1);
            				}
            				else {
HXLINE(4241)					wordChars->push(ch);
            				}
            			}
            		}
HXLINE(4243)		if ((wordChars->length > 0)) {
HXLINE(4244)			int _g = 0;
HXDLIN(4244)			while((_g < wordChars->length)){
HXLINE(4244)				int wordCh = wordChars->__get(_g);
HXDLIN(4244)				_g = (_g + 1);
HXLINE(4245)				bool _hx_tmp;
HXDLIN(4245)				if ((currLineLength == maxLineLength)) {
HXLINE(4245)					_hx_tmp = splitLongWords;
            				}
            				else {
HXLINE(4245)					_hx_tmp = false;
            				}
HXDLIN(4245)				if (_hx_tmp) {
HXLINE(4246)					sb->add(newLineSeparator);
HXLINE(4247)					currLineLength = 0;
            				}
HXLINE(4249)				currLineLength = (currLineLength + 1);
HXLINE(4250)				sb->addChar(wordCh);
            			}
            		}
HXLINE(4253)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Strings_obj,wrap,return )


Strings_obj::Strings_obj()
{
}

bool Strings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { outValue = diff_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"left") ) { outValue = left_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rpad") ) { outValue = rpad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"wrap") ) { outValue = wrap_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { outValue = right_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHex") ) { outValue = toHex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"diffAt") ) { outValue = diffAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ifNull") ) { outValue = ifNull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"repeat") ) { outValue = repeat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"split8") ) { outValue = split8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBool") ) { outValue = toBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toChar") ) { outValue = toChar_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toEReg") ) { outValue = toEReg_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { outValue = _length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"charAt8") ) { outValue = charAt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"compact") ) { outValue = compact_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ifBlank") ) { outValue = ifBlank_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ifEmpty") ) { outValue = ifEmpty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isBlank") ) { outValue = isBlank_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { outValue = isEmpty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"iterate") ) { outValue = iterate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"length8") ) { outValue = length8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"splitAt") ) { outValue = splitAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substr8") ) { outValue = substr8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toChars") ) { outValue = toChars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toTitle") ) { outValue = toTitle_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NEW_LINE") ) { outValue = ( NEW_LINE ); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hashCode") ) { outValue = hashCode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"insertAt") ) { outValue = insertAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"indexOf8") ) { outValue = indexOf8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDigits") ) { outValue = isDigits_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeAt") ) { outValue = removeAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trimLeft") ) { outValue = trimLeft_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"truncate") ) { outValue = truncate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { outValue = removeAll_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toPattern") ) { outValue = toPattern_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trimRight") ) { outValue = trimRight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trimLines") ) { outValue = trimLines_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ansiToHtml") ) { outValue = ansiToHtml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"htmlDecode") ) { outValue = htmlDecode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"htmlEncode") ) { outValue = htmlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNotBlank") ) { outValue = isNotBlank_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNotEmpty") ) { outValue = isNotEmpty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeAnsi") ) { outValue = removeAnsi_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeTags") ) { outValue = removeTags_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replaceAll") ) { outValue = replaceAll_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"splitEvery") ) { outValue = splitEvery_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"splitLines") ) { outValue = splitLines_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substring8") ) { outValue = substring8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trimToNull") ) { outValue = trimToNull_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charCodeAt8") ) { outValue = charCodeAt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsAll") ) { outValue = containsAll_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsAny") ) { outValue = containsAny_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endsWithAny") ) { outValue = endsWithAny_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filterChars") ) { outValue = filterChars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"indentLines") ) { outValue = indentLines_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isLowerCase") ) { outValue = isLowerCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isUpperCase") ) { outValue = isUpperCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quoteDouble") ) { outValue = quoteDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quoteSingle") ) { outValue = quoteSingle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeAfter") ) { outValue = removeAfter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeFirst") ) { outValue = removeFirst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toIntOrNull") ) { outValue = toIntOrNull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trimToEmpty") ) { outValue = trimToEmpty_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"base64Encode") ) { outValue = base64Encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"base64Decode") ) { outValue = base64Decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsOnly") ) { outValue = containsOnly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsNone") ) { outValue = containsNone_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"countMatches") ) { outValue = countMatches_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"iterateChars") ) { outValue = iterateChars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lastIndexOf8") ) { outValue = lastIndexOf8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeBefore") ) { outValue = removeBefore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replaceFirst") ) { outValue = replaceFirst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerCase8") ) { outValue = toLowerCase8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerCamel") ) { outValue = toLowerCamel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUpperCamel") ) { outValue = toUpperCamel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUpperCase8") ) { outValue = toUpperCase8_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ellipsizeLeft") ) { outValue = ellipsizeLeft_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeLeading") ) { outValue = removeLeading_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"startsWithAny") ) { outValue = startsWithAny_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloatOrNull") ) { outValue = toFloatOrNull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerHyphen") ) { outValue = toLowerHyphen_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"REGEX_ANSI_ESC") ) { outValue = ( REGEX_ANSI_ESC ); return true; }
		if (HX_FIELD_EQ(inName,"ellipsizeRight") ) { outValue = ellipsizeRight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeTrailing") ) { outValue = removeTrailing_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringAfter") ) { outValue = substringAfter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCharIterator") ) { outValue = toCharIterator_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"appendIfMissing") ) { outValue = appendIfMissing_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ellipsizeMiddle") ) { outValue = ellipsizeMiddle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeAfterLast") ) { outValue = removeAfterLast_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringBefore") ) { outValue = substringBefore_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"equalsIgnoreCase") ) { outValue = equalsIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFuzzyDistance") ) { outValue = getFuzzyDistance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"prependIfMissing") ) { outValue = prependIfMissing_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeBeforeLast") ) { outValue = removeBeforeLast_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringBetween") ) { outValue = substringBetween_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"REGEX_SPLIT_LINES") ) { outValue = ( REGEX_SPLIT_LINES ); return true; }
		if (HX_FIELD_EQ(inName,"compareIgnoreCase") ) { outValue = compareIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerUnderscore") ) { outValue = toLowerUnderscore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUpperUnderscore") ) { outValue = toUpperUnderscore_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_charCodeAt8Unsafe") ) { outValue = _charCodeAt8Unsafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endsWithIgnoreCase") ) { outValue = endsWithIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringAfterLast") ) { outValue = substringAfterLast_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"REGEX_HTML_UNESCAPE") ) { outValue = ( REGEX_HTML_UNESCAPE ); return true; }
		if (HX_FIELD_EQ(inName,"_getNotFoundDefault") ) { outValue = _getNotFoundDefault_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsWhitespaces") ) { outValue = containsWhitespaces_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringBeforeLast") ) { outValue = substringBeforeLast_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"startsWithIgnoreCase") ) { outValue = startsWithIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerCaseFirstChar") ) { outValue = toLowerCaseFirstChar_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUpperCaseFirstChar") ) { outValue = toUpperCaseFirstChar_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"REGEX_REMOVE_XML_TAGS") ) { outValue = ( REGEX_REMOVE_XML_TAGS ); return true; }
		if (HX_FIELD_EQ(inName,"containsAllIgnoreCase") ) { outValue = containsAllIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsAnyIgnoreCase") ) { outValue = containsAnyIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endsWithAnyIgnoreCase") ) { outValue = endsWithAnyIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeAfterIgnoreCase") ) { outValue = removeAfterIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeFirstIgnoreCase") ) { outValue = removeFirstIgnoreCase_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_splitAsciiWordsUnsafe") ) { outValue = _splitAsciiWordsUnsafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"containsNoneIgnoreCase") ) { outValue = containsNoneIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"countMatchesIgnoreCase") ) { outValue = countMatchesIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getLevenshteinDistance") ) { outValue = getLevenshteinDistance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeBeforeIgnoreCase") ) { outValue = removeBeforeIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replaceFirstIgnoreCase") ) { outValue = replaceFirstIgnoreCase_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"startsWithAnyIgnoreCase") ) { outValue = startsWithAnyIgnoreCase_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"substringAfterIgnoreCase") ) { outValue = substringAfterIgnoreCase_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getLongestCommonSubstring") ) { outValue = getLongestCommonSubstring_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeAfterLastIgnoreCase") ) { outValue = removeAfterLastIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringBeforeIgnoreCase") ) { outValue = substringBeforeIgnoreCase_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"removeBeforeLastIgnoreCase") ) { outValue = removeBeforeLastIgnoreCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substringBetweenIgnoreCase") ) { outValue = substringBetweenIgnoreCase_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"substringAfterLastIgnoreCase") ) { outValue = substringAfterLastIgnoreCase_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"substringBeforeLastIgnoreCase") ) { outValue = substringBeforeLastIgnoreCase_dyn(); return true; }
	}
	return false;
}

bool Strings_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"NEW_LINE") ) { NEW_LINE=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"REGEX_ANSI_ESC") ) { REGEX_ANSI_ESC=ioValue.Cast<  ::hx::strings::Pattern >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"REGEX_SPLIT_LINES") ) { REGEX_SPLIT_LINES=ioValue.Cast<  ::hx::strings::Pattern >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"REGEX_HTML_UNESCAPE") ) { REGEX_HTML_UNESCAPE=ioValue.Cast<  ::hx::strings::Pattern >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"REGEX_REMOVE_XML_TAGS") ) { REGEX_REMOVE_XML_TAGS=ioValue.Cast<  ::hx::strings::Pattern >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Strings_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Strings_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hx::strings::Pattern */ ,(void *) &Strings_obj::REGEX_ANSI_ESC,HX_("REGEX_ANSI_ESC",31,61,d8,29)},
	{::hx::fsObject /*  ::hx::strings::Pattern */ ,(void *) &Strings_obj::REGEX_HTML_UNESCAPE,HX_("REGEX_HTML_UNESCAPE",56,24,bd,91)},
	{::hx::fsObject /*  ::hx::strings::Pattern */ ,(void *) &Strings_obj::REGEX_SPLIT_LINES,HX_("REGEX_SPLIT_LINES",82,3a,1c,2f)},
	{::hx::fsObject /*  ::hx::strings::Pattern */ ,(void *) &Strings_obj::REGEX_REMOVE_XML_TAGS,HX_("REGEX_REMOVE_XML_TAGS",64,25,24,22)},
	{::hx::fsInt,(void *) &Strings_obj::POS_NOT_FOUND,HX_("POS_NOT_FOUND",cb,fc,8f,49)},
	{::hx::fsString,(void *) &Strings_obj::NEW_LINE_NIX,HX_("NEW_LINE_NIX",d1,a1,46,65)},
	{::hx::fsString,(void *) &Strings_obj::NEW_LINE_WIN,HX_("NEW_LINE_WIN",10,76,4d,65)},
	{::hx::fsString,(void *) &Strings_obj::NEW_LINE,HX_("NEW_LINE",93,27,39,51)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Strings_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Strings_obj::REGEX_ANSI_ESC,"REGEX_ANSI_ESC");
	HX_MARK_MEMBER_NAME(Strings_obj::REGEX_HTML_UNESCAPE,"REGEX_HTML_UNESCAPE");
	HX_MARK_MEMBER_NAME(Strings_obj::REGEX_SPLIT_LINES,"REGEX_SPLIT_LINES");
	HX_MARK_MEMBER_NAME(Strings_obj::REGEX_REMOVE_XML_TAGS,"REGEX_REMOVE_XML_TAGS");
	HX_MARK_MEMBER_NAME(Strings_obj::POS_NOT_FOUND,"POS_NOT_FOUND");
	HX_MARK_MEMBER_NAME(Strings_obj::NEW_LINE_NIX,"NEW_LINE_NIX");
	HX_MARK_MEMBER_NAME(Strings_obj::NEW_LINE_WIN,"NEW_LINE_WIN");
	HX_MARK_MEMBER_NAME(Strings_obj::NEW_LINE,"NEW_LINE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Strings_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Strings_obj::REGEX_ANSI_ESC,"REGEX_ANSI_ESC");
	HX_VISIT_MEMBER_NAME(Strings_obj::REGEX_HTML_UNESCAPE,"REGEX_HTML_UNESCAPE");
	HX_VISIT_MEMBER_NAME(Strings_obj::REGEX_SPLIT_LINES,"REGEX_SPLIT_LINES");
	HX_VISIT_MEMBER_NAME(Strings_obj::REGEX_REMOVE_XML_TAGS,"REGEX_REMOVE_XML_TAGS");
	HX_VISIT_MEMBER_NAME(Strings_obj::POS_NOT_FOUND,"POS_NOT_FOUND");
	HX_VISIT_MEMBER_NAME(Strings_obj::NEW_LINE_NIX,"NEW_LINE_NIX");
	HX_VISIT_MEMBER_NAME(Strings_obj::NEW_LINE_WIN,"NEW_LINE_WIN");
	HX_VISIT_MEMBER_NAME(Strings_obj::NEW_LINE,"NEW_LINE");
};

#endif

::hx::Class Strings_obj::__mClass;

static ::String Strings_obj_sStaticFields[] = {
	HX_("REGEX_ANSI_ESC",31,61,d8,29),
	HX_("REGEX_HTML_UNESCAPE",56,24,bd,91),
	HX_("REGEX_SPLIT_LINES",82,3a,1c,2f),
	HX_("REGEX_REMOVE_XML_TAGS",64,25,24,22),
	HX_("POS_NOT_FOUND",cb,fc,8f,49),
	HX_("NEW_LINE_NIX",d1,a1,46,65),
	HX_("NEW_LINE_WIN",10,76,4d,65),
	HX_("NEW_LINE",93,27,39,51),
	HX_("_length",85,a6,7e,0d),
	HX_("_getNotFoundDefault",7b,c4,74,bc),
	HX_("_charCodeAt8Unsafe",09,1b,ac,b0),
	HX_("_splitAsciiWordsUnsafe",d9,4e,c4,94),
	HX_("ansiToHtml",a9,f7,4d,ef),
	HX_("appendIfMissing",cf,63,58,82),
	HX_("base64Encode",05,79,b9,4b),
	HX_("base64Decode",1d,e4,c2,b6),
	HX_("charAt8",af,c2,54,cf),
	HX_("charCodeAt8",82,30,f5,74),
	HX_("compact",a3,0b,69,83),
	HX_("contains",1f,5a,7b,2c),
	HX_("containsOnly",2b,07,28,a4),
	HX_("containsAll",42,34,48,24),
	HX_("containsAllIgnoreCase",c4,d3,fc,ed),
	HX_("containsAny",0d,36,48,24),
	HX_("containsAnyIgnoreCase",4f,21,c7,fc),
	HX_("containsNone",77,94,7f,a3),
	HX_("containsNoneIgnoreCase",39,68,38,4e),
	HX_("containsWhitespaces",77,94,20,bc),
	HX_("countMatches",e4,e7,e4,14),
	HX_("countMatchesIgnoreCase",e6,25,57,4b),
	HX_("compare",a5,18,69,83),
	HX_("compareIgnoreCase",e7,31,a6,62),
	HX_("diff",05,5c,69,42),
	HX_("diffAt",58,60,7c,b4),
	HX_("ellipsizeLeft",b4,e6,34,a9),
	HX_("ellipsizeMiddle",42,77,da,bf),
	HX_("ellipsizeRight",8f,04,22,dc),
	HX_("endsWith",5e,7a,b6,db),
	HX_("endsWithAny",2e,87,65,bc),
	HX_("endsWithAnyIgnoreCase",b0,85,bf,b7),
	HX_("endsWithIgnoreCase",e0,54,92,64),
	HX_("equals",3f,ee,f2,bf),
	HX_("equalsIgnoreCase",01,cc,78,99),
	HX_("filter",b8,1f,35,85),
	HX_("filterChars",05,f2,65,f5),
	HX_("getFuzzyDistance",a9,f2,91,48),
	HX_("getLevenshteinDistance",10,e6,09,66),
	HX_("getLongestCommonSubstring",b2,a7,6c,f9),
	HX_("hashCode",1b,0c,75,07),
	HX_("htmlDecode",f9,c8,ae,32),
	HX_("htmlEncode",e1,5d,a5,c7),
	HX_("insertAt",8c,7c,1f,c2),
	HX_("ifBlank",37,d2,d3,1e),
	HX_("ifEmpty",70,2d,bc,d9),
	HX_("ifNull",04,d9,3f,ea),
	HX_("indentLines",f3,b9,3b,ba),
	HX_("indexOf8",4f,67,a0,c6),
	HX_("isBlank",0a,83,77,51),
	HX_("isDigits",b0,a5,91,0d),
	HX_("isEmpty",43,de,5f,0c),
	HX_("isNotBlank",4b,c3,af,bf),
	HX_("isNotEmpty",84,1e,98,7a),
	HX_("isLowerCase",07,90,ff,2f),
	HX_("isUpperCase",e8,73,98,b0),
	HX_("iterate",fa,79,d0,e2),
	HX_("iterateChars",83,28,f2,e7),
	HX_("lastIndexOf8",c5,73,32,28),
	HX_("length8",92,b4,9a,87),
	HX_("left",07,08,b0,47),
	HX_("lpad",67,5c,b8,47),
	HX_("map",9c,0a,53,00),
	HX_("prependIfMissing",1b,68,ad,2e),
	HX_("quoteDouble",6d,d7,15,f5),
	HX_("quoteSingle",e4,12,6c,7b),
	HX_("removeAfter",38,43,d6,1b),
	HX_("removeAfterLast",ae,75,aa,08),
	HX_("removeAfterIgnoreCase",3a,72,a3,22),
	HX_("removeAfterLastIgnoreCase",30,94,ef,b7),
	HX_("removeAt",57,6e,1b,ad),
	HX_("removeBefore",e3,ef,5f,09),
	HX_("removeBeforeLast",d9,53,ff,4f),
	HX_("removeBeforeIgnoreCase",a5,c2,0d,3a),
	HX_("removeBeforeLastIgnoreCase",1b,f6,a1,76),
	HX_("removeAll",3d,17,e5,ca),
	HX_("removeFirst",4c,55,d1,fe),
	HX_("removeFirstIgnoreCase",4e,65,49,62),
	HX_("removeAnsi",27,c9,90,bd),
	HX_("removeLeading",e2,8e,1b,e2),
	HX_("removeTags",3d,ef,15,ca),
	HX_("removeTrailing",40,d5,24,bf),
	HX_("repeat",5b,97,7c,06),
	HX_("replaceAll",4d,81,c5,77),
	HX_("replaceFirst",5c,63,2c,f4),
	HX_("replaceFirstIgnoreCase",5e,a7,28,ef),
	HX_("reverse",22,39,fc,1a),
	HX_("right",dc,0b,64,e9),
	HX_("rpad",21,a4,af,4b),
	HX_("split8",1e,94,9e,bf),
	HX_("splitAt",6d,0e,23,eb),
	HX_("splitEvery",61,ba,ff,44),
	HX_("splitLines",c5,cc,3c,44),
	HX_("startsWith",77,c0,cf,f9),
	HX_("startsWithAny",b5,56,62,09),
	HX_("startsWithAnyIgnoreCase",f7,a3,bf,65),
	HX_("startsWithIgnoreCase",39,94,f7,e2),
	HX_("substr8",e7,5b,86,2f),
	HX_("substring8",c7,14,0c,a8),
	HX_("substringAfter",0b,de,c2,a8),
	HX_("substringAfterIgnoreCase",cd,f2,66,92),
	HX_("substringBetween",77,23,d5,54),
	HX_("substringBetweenIgnoreCase",39,b7,b6,19),
	HX_("substringAfterLast",01,76,78,ae),
	HX_("substringAfterLastIgnoreCase",43,5a,5a,b3),
	HX_("substringBefore",b0,cd,7a,cb),
	HX_("substringBeforeIgnoreCase",b2,c2,5a,95),
	HX_("substringBeforeLast",26,9c,71,be),
	HX_("substringBeforeLastIgnoreCase",a8,80,a4,78),
	HX_("toBool",45,ef,d4,76),
	HX_("toBytes",f0,54,1c,8a),
	HX_("toChar",f1,c9,78,77),
	HX_("toCharIterator",ff,a8,79,3d),
	HX_("toChars",62,e9,37,12),
	HX_("toPattern",15,3e,0b,41),
	HX_("toEReg",0a,89,ba,78),
	HX_("toFloat",21,12,1b,cf),
	HX_("toFloatOrNull",4b,4e,c0,e1),
	HX_("toHex",20,f4,10,14),
	HX_("toInt",34,be,11,14),
	HX_("toIntOrNull",9e,ca,17,c5),
	HX_("toLowerCase8",22,7f,5e,9f),
	HX_("toLowerCaseFirstChar",f0,33,17,6a),
	HX_("toLowerCamel",d0,f1,59,9f),
	HX_("toLowerHyphen",18,43,be,a2),
	HX_("toLowerUnderscore",60,d9,ed,61),
	HX_("toTitle",1d,62,bf,dc),
	HX_("toUpperCamel",cf,72,88,a4),
	HX_("toUpperUnderscore",01,5c,30,79),
	HX_("toString",ac,d0,6e,38),
	HX_("toUpperCase8",21,00,8d,a4),
	HX_("toUpperCaseFirstChar",ef,4b,3d,20),
	HX_("trim",e2,9c,03,4d),
	HX_("trimRight",9a,eb,9f,2d),
	HX_("trimLeft",09,ea,19,60),
	HX_("trimLines",bd,bd,3d,b9),
	HX_("trimToNull",24,f0,ef,ee),
	HX_("trimToEmpty",50,52,20,ef),
	HX_("truncate",66,be,f9,ce),
	HX_("urlDecode",fd,b9,5b,05),
	HX_("urlEncode",e5,4e,52,9a),
	HX_("wrap",ca,39,ff,4e),
	::String(null())
};

void Strings_obj::__register()
{
	Strings_obj _hx_dummy;
	Strings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.Strings",18,f7,a8,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Strings_obj::__GetStatic;
	__mClass->mSetStaticField = &Strings_obj::__SetStatic;
	__mClass->mMarkFunc = Strings_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Strings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Strings_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Strings_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Strings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Strings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Strings_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::strings::Pattern _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_34_boot)
HXDLIN(  34)			 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::b(HX_("g",67,00,00,00));
HXDLIN(  34)			return ::hx::strings::Pattern_obj::compile((::String::fromCharCode(27) + HX_("\\[[;\\d]*m",f9,38,1d,be)),this1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_34_boot)
HXDLIN(  34)		REGEX_ANSI_ESC = ( ( ::hx::strings::Pattern)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::strings::Pattern _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_35_boot)
HXDLIN(  35)			 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::b(HX_("g",67,00,00,00));
HXDLIN(  35)			return ::hx::strings::Pattern_obj::compile(HX_("&(#\\d+|amp|nbsp|apos|lt|gt|quot);",a6,cb,61,46),this1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_35_boot)
HXDLIN(  35)		REGEX_HTML_UNESCAPE = ( ( ::hx::strings::Pattern)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::strings::Pattern _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_36_boot)
HXDLIN(  36)			 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::b(HX_("g",67,00,00,00));
HXDLIN(  36)			return ::hx::strings::Pattern_obj::compile(HX_("\\r?\\n",bb,cf,67,44),this1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_36_boot)
HXDLIN(  36)		REGEX_SPLIT_LINES = ( ( ::hx::strings::Pattern)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::strings::Pattern _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_39_boot)
HXDLIN(  39)			 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::b(HX_("g",67,00,00,00));
HXDLIN(  39)			return ::hx::strings::Pattern_obj::compile(HX_("<[!a-zA-Z\\/][^>]*>",5e,e5,70,7b),this1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_39_boot)
HXDLIN(  39)		REGEX_REMOVE_XML_TAGS = ( ( ::hx::strings::Pattern)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_42_boot)
HXDLIN(  42)		POS_NOT_FOUND = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_47_boot)
HXDLIN(  47)		NEW_LINE_NIX = HX_("\n",0a,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_52_boot)
HXDLIN(  52)		NEW_LINE_WIN = HX_("\r\n",5d,0b,00,00);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::String _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_57_boot)
HXDLIN(  57)			if (::hx::strings::internal::OS_obj::isWindows) {
HXDLIN(  57)				return HX_("\r\n",5d,0b,00,00);
            			}
            			else {
HXDLIN(  57)				return HX_("\n",0a,00,00,00);
            			}
HXDLIN(  57)			return null();
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fd0a69697a336cdd_57_boot)
HXDLIN(  57)		NEW_LINE = ( (::String)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace hx
} // end namespace strings
