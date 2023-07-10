#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hx_strings__Char_CharCaseMapper
#include <hx/strings/_Char/CharCaseMapper.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36ca7503084d1cd9_644_new,"hx.strings._Char.CharCaseMapper","new",0x2802b21c,"hx.strings._Char.CharCaseMapper.new","hx/strings/Char.hx",644,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_36ca7503084d1cd9_649__addCaseMapping,"hx.strings._Char.CharCaseMapper","_addCaseMapping",0x52ef95f8,"hx.strings._Char.CharCaseMapper._addCaseMapping","hx/strings/Char.hx",649,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_36ca7503084d1cd9_659_isLowerCase,"hx.strings._Char.CharCaseMapper","isLowerCase",0xcc408dc3,"hx.strings._Char.CharCaseMapper.isLowerCase","hx/strings/Char.hx",659,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_36ca7503084d1cd9_664_isUpperCase,"hx.strings._Char.CharCaseMapper","isUpperCase",0x4cd971a4,"hx.strings._Char.CharCaseMapper.isUpperCase","hx/strings/Char.hx",664,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_36ca7503084d1cd9_668_toLowerCase,"hx.strings._Char.CharCaseMapper","toLowerCase",0x54a54a12,"hx.strings._Char.CharCaseMapper.toLowerCase","hx/strings/Char.hx",668,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_36ca7503084d1cd9_675_toUpperCase,"hx.strings._Char.CharCaseMapper","toUpperCase",0xd53e2df3,"hx.strings._Char.CharCaseMapper.toUpperCase","hx/strings/Char.hx",675,0x345e517c)
namespace hx{
namespace strings{
namespace _Char{

void CharCaseMapper_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_36ca7503084d1cd9_644_new)
HXLINE( 646)		this->mapL2U =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 645)		this->mapU2L =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 684)		this->_addCaseMapping(97,65);
HXLINE( 685)		this->_addCaseMapping(98,66);
HXLINE( 686)		this->_addCaseMapping(99,67);
HXLINE( 687)		this->_addCaseMapping(100,68);
HXLINE( 688)		this->_addCaseMapping(101,69);
HXLINE( 689)		this->_addCaseMapping(102,70);
HXLINE( 690)		this->_addCaseMapping(103,71);
HXLINE( 691)		this->_addCaseMapping(104,72);
HXLINE( 692)		this->_addCaseMapping(105,73);
HXLINE( 693)		this->_addCaseMapping(106,74);
HXLINE( 694)		this->_addCaseMapping(107,75);
HXLINE( 695)		this->_addCaseMapping(108,76);
HXLINE( 696)		this->_addCaseMapping(109,77);
HXLINE( 697)		this->_addCaseMapping(110,78);
HXLINE( 698)		this->_addCaseMapping(111,79);
HXLINE( 699)		this->_addCaseMapping(112,80);
HXLINE( 700)		this->_addCaseMapping(113,81);
HXLINE( 701)		this->_addCaseMapping(114,82);
HXLINE( 702)		this->_addCaseMapping(115,83);
HXLINE( 703)		this->_addCaseMapping(116,84);
HXLINE( 704)		this->_addCaseMapping(117,85);
HXLINE( 705)		this->_addCaseMapping(118,86);
HXLINE( 706)		this->_addCaseMapping(119,87);
HXLINE( 707)		this->_addCaseMapping(120,88);
HXLINE( 708)		this->_addCaseMapping(121,89);
HXLINE( 709)		this->_addCaseMapping(122,90);
HXLINE( 710)		this->_addCaseMapping(224,192);
HXLINE( 711)		this->_addCaseMapping(225,193);
HXLINE( 712)		this->_addCaseMapping(226,194);
HXLINE( 713)		this->_addCaseMapping(227,195);
HXLINE( 714)		this->_addCaseMapping(228,196);
HXLINE( 715)		this->_addCaseMapping(229,197);
HXLINE( 716)		this->_addCaseMapping(230,198);
HXLINE( 717)		this->_addCaseMapping(231,199);
HXLINE( 718)		this->_addCaseMapping(232,200);
HXLINE( 719)		this->_addCaseMapping(233,201);
HXLINE( 720)		this->_addCaseMapping(234,202);
HXLINE( 721)		this->_addCaseMapping(235,203);
HXLINE( 722)		this->_addCaseMapping(236,204);
HXLINE( 723)		this->_addCaseMapping(237,205);
HXLINE( 724)		this->_addCaseMapping(238,206);
HXLINE( 725)		this->_addCaseMapping(239,207);
HXLINE( 726)		this->_addCaseMapping(240,208);
HXLINE( 727)		this->_addCaseMapping(241,209);
HXLINE( 728)		this->_addCaseMapping(242,210);
HXLINE( 729)		this->_addCaseMapping(243,211);
HXLINE( 730)		this->_addCaseMapping(244,212);
HXLINE( 731)		this->_addCaseMapping(245,213);
HXLINE( 732)		this->_addCaseMapping(246,214);
HXLINE( 733)		this->_addCaseMapping(248,216);
HXLINE( 734)		this->_addCaseMapping(249,217);
HXLINE( 735)		this->_addCaseMapping(250,218);
HXLINE( 736)		this->_addCaseMapping(251,219);
HXLINE( 737)		this->_addCaseMapping(252,220);
HXLINE( 738)		this->_addCaseMapping(253,221);
HXLINE( 739)		this->_addCaseMapping(254,222);
HXLINE( 740)		this->_addCaseMapping(255,376);
HXLINE( 741)		this->_addCaseMapping(257,256);
HXLINE( 742)		this->_addCaseMapping(259,258);
HXLINE( 743)		this->_addCaseMapping(261,260);
HXLINE( 744)		this->_addCaseMapping(263,262);
HXLINE( 745)		this->_addCaseMapping(265,264);
HXLINE( 746)		this->_addCaseMapping(267,266);
HXLINE( 747)		this->_addCaseMapping(269,268);
HXLINE( 748)		this->_addCaseMapping(271,270);
HXLINE( 749)		this->_addCaseMapping(273,272);
HXLINE( 750)		this->_addCaseMapping(275,274);
HXLINE( 751)		this->_addCaseMapping(277,276);
HXLINE( 752)		this->_addCaseMapping(279,278);
HXLINE( 753)		this->_addCaseMapping(281,280);
HXLINE( 754)		this->_addCaseMapping(283,282);
HXLINE( 755)		this->_addCaseMapping(285,284);
HXLINE( 756)		this->_addCaseMapping(287,286);
HXLINE( 757)		this->_addCaseMapping(289,288);
HXLINE( 758)		this->_addCaseMapping(291,290);
HXLINE( 759)		this->_addCaseMapping(293,292);
HXLINE( 760)		this->_addCaseMapping(295,294);
HXLINE( 761)		this->_addCaseMapping(297,296);
HXLINE( 762)		this->_addCaseMapping(299,298);
HXLINE( 763)		this->_addCaseMapping(301,300);
HXLINE( 764)		this->_addCaseMapping(303,302);
HXLINE( 765)		this->_addCaseMapping(305,73);
HXLINE( 766)		this->_addCaseMapping(307,306);
HXLINE( 767)		this->_addCaseMapping(309,308);
HXLINE( 768)		this->_addCaseMapping(311,310);
HXLINE( 769)		this->_addCaseMapping(314,313);
HXLINE( 770)		this->_addCaseMapping(316,315);
HXLINE( 771)		this->_addCaseMapping(318,317);
HXLINE( 772)		this->_addCaseMapping(320,319);
HXLINE( 773)		this->_addCaseMapping(322,321);
HXLINE( 774)		this->_addCaseMapping(324,323);
HXLINE( 775)		this->_addCaseMapping(326,325);
HXLINE( 776)		this->_addCaseMapping(328,327);
HXLINE( 777)		this->_addCaseMapping(331,330);
HXLINE( 778)		this->_addCaseMapping(333,332);
HXLINE( 779)		this->_addCaseMapping(335,334);
HXLINE( 780)		this->_addCaseMapping(337,336);
HXLINE( 781)		this->_addCaseMapping(339,338);
HXLINE( 782)		this->_addCaseMapping(341,340);
HXLINE( 783)		this->_addCaseMapping(343,342);
HXLINE( 784)		this->_addCaseMapping(345,344);
HXLINE( 785)		this->_addCaseMapping(347,346);
HXLINE( 786)		this->_addCaseMapping(349,348);
HXLINE( 787)		this->_addCaseMapping(351,350);
HXLINE( 788)		this->_addCaseMapping(353,352);
HXLINE( 789)		this->_addCaseMapping(355,354);
HXLINE( 790)		this->_addCaseMapping(357,356);
HXLINE( 791)		this->_addCaseMapping(359,358);
HXLINE( 792)		this->_addCaseMapping(361,360);
HXLINE( 793)		this->_addCaseMapping(363,362);
HXLINE( 794)		this->_addCaseMapping(365,364);
HXLINE( 795)		this->_addCaseMapping(367,366);
HXLINE( 796)		this->_addCaseMapping(369,368);
HXLINE( 797)		this->_addCaseMapping(371,370);
HXLINE( 798)		this->_addCaseMapping(373,372);
HXLINE( 799)		this->_addCaseMapping(375,374);
HXLINE( 800)		this->_addCaseMapping(378,377);
HXLINE( 801)		this->_addCaseMapping(380,379);
HXLINE( 802)		this->_addCaseMapping(382,381);
HXLINE( 803)		this->_addCaseMapping(387,386);
HXLINE( 804)		this->_addCaseMapping(389,388);
HXLINE( 805)		this->_addCaseMapping(392,391);
HXLINE( 806)		this->_addCaseMapping(396,395);
HXLINE( 807)		this->_addCaseMapping(402,401);
HXLINE( 808)		this->_addCaseMapping(409,408);
HXLINE( 809)		this->_addCaseMapping(417,416);
HXLINE( 810)		this->_addCaseMapping(419,418);
HXLINE( 811)		this->_addCaseMapping(421,420);
HXLINE( 812)		this->_addCaseMapping(424,423);
HXLINE( 813)		this->_addCaseMapping(429,428);
HXLINE( 814)		this->_addCaseMapping(432,431);
HXLINE( 815)		this->_addCaseMapping(436,435);
HXLINE( 816)		this->_addCaseMapping(438,437);
HXLINE( 817)		this->_addCaseMapping(441,440);
HXLINE( 818)		this->_addCaseMapping(445,444);
HXLINE( 819)		this->_addCaseMapping(454,452);
HXLINE( 820)		this->_addCaseMapping(457,455);
HXLINE( 821)		this->_addCaseMapping(460,458);
HXLINE( 822)		this->_addCaseMapping(462,461);
HXLINE( 823)		this->_addCaseMapping(464,463);
HXLINE( 824)		this->_addCaseMapping(466,465);
HXLINE( 825)		this->_addCaseMapping(468,467);
HXLINE( 826)		this->_addCaseMapping(470,469);
HXLINE( 827)		this->_addCaseMapping(472,471);
HXLINE( 828)		this->_addCaseMapping(474,473);
HXLINE( 829)		this->_addCaseMapping(476,475);
HXLINE( 830)		this->_addCaseMapping(479,478);
HXLINE( 831)		this->_addCaseMapping(481,480);
HXLINE( 832)		this->_addCaseMapping(483,482);
HXLINE( 833)		this->_addCaseMapping(485,484);
HXLINE( 834)		this->_addCaseMapping(487,486);
HXLINE( 835)		this->_addCaseMapping(489,488);
HXLINE( 836)		this->_addCaseMapping(491,490);
HXLINE( 837)		this->_addCaseMapping(493,492);
HXLINE( 838)		this->_addCaseMapping(495,494);
HXLINE( 839)		this->_addCaseMapping(499,497);
HXLINE( 840)		this->_addCaseMapping(501,500);
HXLINE( 841)		this->_addCaseMapping(507,506);
HXLINE( 842)		this->_addCaseMapping(509,508);
HXLINE( 843)		this->_addCaseMapping(511,510);
HXLINE( 844)		this->_addCaseMapping(513,512);
HXLINE( 845)		this->_addCaseMapping(515,514);
HXLINE( 846)		this->_addCaseMapping(517,516);
HXLINE( 847)		this->_addCaseMapping(519,518);
HXLINE( 848)		this->_addCaseMapping(521,520);
HXLINE( 849)		this->_addCaseMapping(523,522);
HXLINE( 850)		this->_addCaseMapping(525,524);
HXLINE( 851)		this->_addCaseMapping(527,526);
HXLINE( 852)		this->_addCaseMapping(529,528);
HXLINE( 853)		this->_addCaseMapping(531,530);
HXLINE( 854)		this->_addCaseMapping(533,532);
HXLINE( 855)		this->_addCaseMapping(535,534);
HXLINE( 856)		this->_addCaseMapping(595,385);
HXLINE( 857)		this->_addCaseMapping(596,390);
HXLINE( 858)		this->_addCaseMapping(599,394);
HXLINE( 859)		this->_addCaseMapping(600,398);
HXLINE( 860)		this->_addCaseMapping(601,399);
HXLINE( 861)		this->_addCaseMapping(603,400);
HXLINE( 862)		this->_addCaseMapping(608,403);
HXLINE( 863)		this->_addCaseMapping(611,404);
HXLINE( 864)		this->_addCaseMapping(616,407);
HXLINE( 865)		this->_addCaseMapping(617,406);
HXLINE( 866)		this->_addCaseMapping(623,412);
HXLINE( 867)		this->_addCaseMapping(626,413);
HXLINE( 868)		this->_addCaseMapping(629,415);
HXLINE( 869)		this->_addCaseMapping(643,425);
HXLINE( 870)		this->_addCaseMapping(648,430);
HXLINE( 871)		this->_addCaseMapping(650,433);
HXLINE( 872)		this->_addCaseMapping(651,434);
HXLINE( 873)		this->_addCaseMapping(658,439);
HXLINE( 874)		this->_addCaseMapping(924,181);
HXLINE( 875)		this->_addCaseMapping(940,902);
HXLINE( 876)		this->_addCaseMapping(941,904);
HXLINE( 877)		this->_addCaseMapping(942,905);
HXLINE( 878)		this->_addCaseMapping(943,906);
HXLINE( 879)		this->_addCaseMapping(945,913);
HXLINE( 880)		this->_addCaseMapping(946,914);
HXLINE( 881)		this->_addCaseMapping(947,915);
HXLINE( 882)		this->_addCaseMapping(948,916);
HXLINE( 883)		this->_addCaseMapping(949,917);
HXLINE( 884)		this->_addCaseMapping(950,918);
HXLINE( 885)		this->_addCaseMapping(951,919);
HXLINE( 886)		this->_addCaseMapping(952,920);
HXLINE( 887)		this->_addCaseMapping(953,921);
HXLINE( 888)		this->_addCaseMapping(954,922);
HXLINE( 889)		this->_addCaseMapping(955,923);
HXLINE( 890)		this->_addCaseMapping(956,924);
HXLINE( 891)		this->_addCaseMapping(957,925);
HXLINE( 892)		this->_addCaseMapping(958,926);
HXLINE( 893)		this->_addCaseMapping(959,927);
HXLINE( 894)		this->_addCaseMapping(960,928);
HXLINE( 895)		this->_addCaseMapping(961,929);
HXLINE( 896)		this->_addCaseMapping(963,931);
HXLINE( 897)		this->_addCaseMapping(964,932);
HXLINE( 898)		this->_addCaseMapping(965,933);
HXLINE( 899)		this->_addCaseMapping(966,934);
HXLINE( 900)		this->_addCaseMapping(967,935);
HXLINE( 901)		this->_addCaseMapping(968,936);
HXLINE( 902)		this->_addCaseMapping(969,937);
HXLINE( 903)		this->_addCaseMapping(970,938);
HXLINE( 904)		this->_addCaseMapping(971,939);
HXLINE( 905)		this->_addCaseMapping(972,908);
HXLINE( 906)		this->_addCaseMapping(973,910);
HXLINE( 907)		this->_addCaseMapping(974,911);
HXLINE( 908)		this->_addCaseMapping(995,994);
HXLINE( 909)		this->_addCaseMapping(997,996);
HXLINE( 910)		this->_addCaseMapping(999,998);
HXLINE( 911)		this->_addCaseMapping(1001,1000);
HXLINE( 912)		this->_addCaseMapping(1003,1002);
HXLINE( 913)		this->_addCaseMapping(1005,1004);
HXLINE( 914)		this->_addCaseMapping(1007,1006);
HXLINE( 915)		this->_addCaseMapping(1072,1040);
HXLINE( 916)		this->_addCaseMapping(1073,1041);
HXLINE( 917)		this->_addCaseMapping(1074,1042);
HXLINE( 918)		this->_addCaseMapping(1075,1043);
HXLINE( 919)		this->_addCaseMapping(1076,1044);
HXLINE( 920)		this->_addCaseMapping(1077,1045);
HXLINE( 921)		this->_addCaseMapping(1078,1046);
HXLINE( 922)		this->_addCaseMapping(1079,1047);
HXLINE( 923)		this->_addCaseMapping(1080,1048);
HXLINE( 924)		this->_addCaseMapping(1081,1049);
HXLINE( 925)		this->_addCaseMapping(1082,1050);
HXLINE( 926)		this->_addCaseMapping(1083,1051);
HXLINE( 927)		this->_addCaseMapping(1084,1052);
HXLINE( 928)		this->_addCaseMapping(1085,1053);
HXLINE( 929)		this->_addCaseMapping(1086,1054);
HXLINE( 930)		this->_addCaseMapping(1087,1055);
HXLINE( 931)		this->_addCaseMapping(1088,1056);
HXLINE( 932)		this->_addCaseMapping(1089,1057);
HXLINE( 933)		this->_addCaseMapping(1090,1058);
HXLINE( 934)		this->_addCaseMapping(1091,1059);
HXLINE( 935)		this->_addCaseMapping(1092,1060);
HXLINE( 936)		this->_addCaseMapping(1093,1061);
HXLINE( 937)		this->_addCaseMapping(1094,1062);
HXLINE( 938)		this->_addCaseMapping(1095,1063);
HXLINE( 939)		this->_addCaseMapping(1096,1064);
HXLINE( 940)		this->_addCaseMapping(1097,1065);
HXLINE( 941)		this->_addCaseMapping(1098,1066);
HXLINE( 942)		this->_addCaseMapping(1099,1067);
HXLINE( 943)		this->_addCaseMapping(1100,1068);
HXLINE( 944)		this->_addCaseMapping(1101,1069);
HXLINE( 945)		this->_addCaseMapping(1102,1070);
HXLINE( 946)		this->_addCaseMapping(1103,1071);
HXLINE( 947)		this->_addCaseMapping(1105,1025);
HXLINE( 948)		this->_addCaseMapping(1106,1026);
HXLINE( 949)		this->_addCaseMapping(1107,1027);
HXLINE( 950)		this->_addCaseMapping(1108,1028);
HXLINE( 951)		this->_addCaseMapping(1109,1029);
HXLINE( 952)		this->_addCaseMapping(1110,1030);
HXLINE( 953)		this->_addCaseMapping(1111,1031);
HXLINE( 954)		this->_addCaseMapping(1112,1032);
HXLINE( 955)		this->_addCaseMapping(1113,1033);
HXLINE( 956)		this->_addCaseMapping(1114,1034);
HXLINE( 957)		this->_addCaseMapping(1115,1035);
HXLINE( 958)		this->_addCaseMapping(1116,1036);
HXLINE( 959)		this->_addCaseMapping(1118,1038);
HXLINE( 960)		this->_addCaseMapping(1119,1039);
HXLINE( 961)		this->_addCaseMapping(1121,1120);
HXLINE( 962)		this->_addCaseMapping(1123,1122);
HXLINE( 963)		this->_addCaseMapping(1125,1124);
HXLINE( 964)		this->_addCaseMapping(1127,1126);
HXLINE( 965)		this->_addCaseMapping(1129,1128);
HXLINE( 966)		this->_addCaseMapping(1131,1130);
HXLINE( 967)		this->_addCaseMapping(1133,1132);
HXLINE( 968)		this->_addCaseMapping(1135,1134);
HXLINE( 969)		this->_addCaseMapping(1137,1136);
HXLINE( 970)		this->_addCaseMapping(1139,1138);
HXLINE( 971)		this->_addCaseMapping(1141,1140);
HXLINE( 972)		this->_addCaseMapping(1143,1142);
HXLINE( 973)		this->_addCaseMapping(1145,1144);
HXLINE( 974)		this->_addCaseMapping(1147,1146);
HXLINE( 975)		this->_addCaseMapping(1149,1148);
HXLINE( 976)		this->_addCaseMapping(1151,1150);
HXLINE( 977)		this->_addCaseMapping(1153,1152);
HXLINE( 978)		this->_addCaseMapping(1169,1168);
HXLINE( 979)		this->_addCaseMapping(1171,1170);
HXLINE( 980)		this->_addCaseMapping(1173,1172);
HXLINE( 981)		this->_addCaseMapping(1175,1174);
HXLINE( 982)		this->_addCaseMapping(1177,1176);
HXLINE( 983)		this->_addCaseMapping(1179,1178);
HXLINE( 984)		this->_addCaseMapping(1181,1180);
HXLINE( 985)		this->_addCaseMapping(1183,1182);
HXLINE( 986)		this->_addCaseMapping(1185,1184);
HXLINE( 987)		this->_addCaseMapping(1187,1186);
HXLINE( 988)		this->_addCaseMapping(1189,1188);
HXLINE( 989)		this->_addCaseMapping(1191,1190);
HXLINE( 990)		this->_addCaseMapping(1193,1192);
HXLINE( 991)		this->_addCaseMapping(1195,1194);
HXLINE( 992)		this->_addCaseMapping(1197,1196);
HXLINE( 993)		this->_addCaseMapping(1199,1198);
HXLINE( 994)		this->_addCaseMapping(1201,1200);
HXLINE( 995)		this->_addCaseMapping(1203,1202);
HXLINE( 996)		this->_addCaseMapping(1205,1204);
HXLINE( 997)		this->_addCaseMapping(1207,1206);
HXLINE( 998)		this->_addCaseMapping(1209,1208);
HXLINE( 999)		this->_addCaseMapping(1211,1210);
HXLINE(1000)		this->_addCaseMapping(1213,1212);
HXLINE(1001)		this->_addCaseMapping(1215,1214);
HXLINE(1002)		this->_addCaseMapping(1218,1217);
HXLINE(1003)		this->_addCaseMapping(1220,1219);
HXLINE(1004)		this->_addCaseMapping(1224,1223);
HXLINE(1005)		this->_addCaseMapping(1228,1227);
HXLINE(1006)		this->_addCaseMapping(1233,1232);
HXLINE(1007)		this->_addCaseMapping(1235,1234);
HXLINE(1008)		this->_addCaseMapping(1237,1236);
HXLINE(1009)		this->_addCaseMapping(1239,1238);
HXLINE(1010)		this->_addCaseMapping(1241,1240);
HXLINE(1011)		this->_addCaseMapping(1243,1242);
HXLINE(1012)		this->_addCaseMapping(1245,1244);
HXLINE(1013)		this->_addCaseMapping(1247,1246);
HXLINE(1014)		this->_addCaseMapping(1249,1248);
HXLINE(1015)		this->_addCaseMapping(1251,1250);
HXLINE(1016)		this->_addCaseMapping(1253,1252);
HXLINE(1017)		this->_addCaseMapping(1255,1254);
HXLINE(1018)		this->_addCaseMapping(1257,1256);
HXLINE(1019)		this->_addCaseMapping(1259,1258);
HXLINE(1020)		this->_addCaseMapping(1263,1262);
HXLINE(1021)		this->_addCaseMapping(1265,1264);
HXLINE(1022)		this->_addCaseMapping(1267,1266);
HXLINE(1023)		this->_addCaseMapping(1269,1268);
HXLINE(1024)		this->_addCaseMapping(1273,1272);
HXLINE(1025)		this->_addCaseMapping(1377,1329);
HXLINE(1026)		this->_addCaseMapping(1378,1330);
HXLINE(1027)		this->_addCaseMapping(1379,1331);
HXLINE(1028)		this->_addCaseMapping(1380,1332);
HXLINE(1029)		this->_addCaseMapping(1381,1333);
HXLINE(1030)		this->_addCaseMapping(1382,1334);
HXLINE(1031)		this->_addCaseMapping(1383,1335);
HXLINE(1032)		this->_addCaseMapping(1384,1336);
HXLINE(1033)		this->_addCaseMapping(1385,1337);
HXLINE(1034)		this->_addCaseMapping(1386,1338);
HXLINE(1035)		this->_addCaseMapping(1387,1339);
HXLINE(1036)		this->_addCaseMapping(1388,1340);
HXLINE(1037)		this->_addCaseMapping(1389,1341);
HXLINE(1038)		this->_addCaseMapping(1390,1342);
HXLINE(1039)		this->_addCaseMapping(1391,1343);
HXLINE(1040)		this->_addCaseMapping(1392,1344);
HXLINE(1041)		this->_addCaseMapping(1393,1345);
HXLINE(1042)		this->_addCaseMapping(1394,1346);
HXLINE(1043)		this->_addCaseMapping(1395,1347);
HXLINE(1044)		this->_addCaseMapping(1396,1348);
HXLINE(1045)		this->_addCaseMapping(1397,1349);
HXLINE(1046)		this->_addCaseMapping(1398,1350);
HXLINE(1047)		this->_addCaseMapping(1399,1351);
HXLINE(1048)		this->_addCaseMapping(1400,1352);
HXLINE(1049)		this->_addCaseMapping(1401,1353);
HXLINE(1050)		this->_addCaseMapping(1402,1354);
HXLINE(1051)		this->_addCaseMapping(1403,1355);
HXLINE(1052)		this->_addCaseMapping(1404,1356);
HXLINE(1053)		this->_addCaseMapping(1405,1357);
HXLINE(1054)		this->_addCaseMapping(1406,1358);
HXLINE(1055)		this->_addCaseMapping(1407,1359);
HXLINE(1056)		this->_addCaseMapping(1408,1360);
HXLINE(1057)		this->_addCaseMapping(1409,1361);
HXLINE(1058)		this->_addCaseMapping(1410,1362);
HXLINE(1059)		this->_addCaseMapping(1411,1363);
HXLINE(1060)		this->_addCaseMapping(1412,1364);
HXLINE(1061)		this->_addCaseMapping(1413,1365);
HXLINE(1062)		this->_addCaseMapping(1414,1366);
HXLINE(1063)		this->_addCaseMapping(4304,4256);
HXLINE(1064)		this->_addCaseMapping(4305,4257);
HXLINE(1065)		this->_addCaseMapping(4306,4258);
HXLINE(1066)		this->_addCaseMapping(4307,4259);
HXLINE(1067)		this->_addCaseMapping(4308,4260);
HXLINE(1068)		this->_addCaseMapping(4309,4261);
HXLINE(1069)		this->_addCaseMapping(4310,4262);
HXLINE(1070)		this->_addCaseMapping(4311,4263);
HXLINE(1071)		this->_addCaseMapping(4312,4264);
HXLINE(1072)		this->_addCaseMapping(4313,4265);
HXLINE(1073)		this->_addCaseMapping(4314,4266);
HXLINE(1074)		this->_addCaseMapping(4315,4267);
HXLINE(1075)		this->_addCaseMapping(4316,4268);
HXLINE(1076)		this->_addCaseMapping(4317,4269);
HXLINE(1077)		this->_addCaseMapping(4318,4270);
HXLINE(1078)		this->_addCaseMapping(4319,4271);
HXLINE(1079)		this->_addCaseMapping(4320,4272);
HXLINE(1080)		this->_addCaseMapping(4321,4273);
HXLINE(1081)		this->_addCaseMapping(4322,4274);
HXLINE(1082)		this->_addCaseMapping(4323,4275);
HXLINE(1083)		this->_addCaseMapping(4324,4276);
HXLINE(1084)		this->_addCaseMapping(4325,4277);
HXLINE(1085)		this->_addCaseMapping(4326,4278);
HXLINE(1086)		this->_addCaseMapping(4327,4279);
HXLINE(1087)		this->_addCaseMapping(4328,4280);
HXLINE(1088)		this->_addCaseMapping(4329,4281);
HXLINE(1089)		this->_addCaseMapping(4330,4282);
HXLINE(1090)		this->_addCaseMapping(4331,4283);
HXLINE(1091)		this->_addCaseMapping(4332,4284);
HXLINE(1092)		this->_addCaseMapping(4333,4285);
HXLINE(1093)		this->_addCaseMapping(4334,4286);
HXLINE(1094)		this->_addCaseMapping(4335,4287);
HXLINE(1095)		this->_addCaseMapping(4336,4288);
HXLINE(1096)		this->_addCaseMapping(4337,4289);
HXLINE(1097)		this->_addCaseMapping(4338,4290);
HXLINE(1098)		this->_addCaseMapping(4339,4291);
HXLINE(1099)		this->_addCaseMapping(4340,4292);
HXLINE(1100)		this->_addCaseMapping(4341,4293);
HXLINE(1101)		this->_addCaseMapping(7681,7680);
HXLINE(1102)		this->_addCaseMapping(7683,7682);
HXLINE(1103)		this->_addCaseMapping(7685,7684);
HXLINE(1104)		this->_addCaseMapping(7687,7686);
HXLINE(1105)		this->_addCaseMapping(7689,7688);
HXLINE(1106)		this->_addCaseMapping(7691,7690);
HXLINE(1107)		this->_addCaseMapping(7693,7692);
HXLINE(1108)		this->_addCaseMapping(7695,7694);
HXLINE(1109)		this->_addCaseMapping(7697,7696);
HXLINE(1110)		this->_addCaseMapping(7699,7698);
HXLINE(1111)		this->_addCaseMapping(7701,7700);
HXLINE(1112)		this->_addCaseMapping(7703,7702);
HXLINE(1113)		this->_addCaseMapping(7705,7704);
HXLINE(1114)		this->_addCaseMapping(7707,7706);
HXLINE(1115)		this->_addCaseMapping(7709,7708);
HXLINE(1116)		this->_addCaseMapping(7711,7710);
HXLINE(1117)		this->_addCaseMapping(7713,7712);
HXLINE(1118)		this->_addCaseMapping(7715,7714);
HXLINE(1119)		this->_addCaseMapping(7717,7716);
HXLINE(1120)		this->_addCaseMapping(7719,7718);
HXLINE(1121)		this->_addCaseMapping(7721,7720);
HXLINE(1122)		this->_addCaseMapping(7723,7722);
HXLINE(1123)		this->_addCaseMapping(7725,7724);
HXLINE(1124)		this->_addCaseMapping(7727,7726);
HXLINE(1125)		this->_addCaseMapping(7729,7728);
HXLINE(1126)		this->_addCaseMapping(7731,7730);
HXLINE(1127)		this->_addCaseMapping(7733,7732);
HXLINE(1128)		this->_addCaseMapping(7735,7734);
HXLINE(1129)		this->_addCaseMapping(7737,7736);
HXLINE(1130)		this->_addCaseMapping(7739,7738);
HXLINE(1131)		this->_addCaseMapping(7741,7740);
HXLINE(1132)		this->_addCaseMapping(7743,7742);
HXLINE(1133)		this->_addCaseMapping(7745,7744);
HXLINE(1134)		this->_addCaseMapping(7747,7746);
HXLINE(1135)		this->_addCaseMapping(7749,7748);
HXLINE(1136)		this->_addCaseMapping(7751,7750);
HXLINE(1137)		this->_addCaseMapping(7753,7752);
HXLINE(1138)		this->_addCaseMapping(7755,7754);
HXLINE(1139)		this->_addCaseMapping(7757,7756);
HXLINE(1140)		this->_addCaseMapping(7759,7758);
HXLINE(1141)		this->_addCaseMapping(7761,7760);
HXLINE(1142)		this->_addCaseMapping(7763,7762);
HXLINE(1143)		this->_addCaseMapping(7765,7764);
HXLINE(1144)		this->_addCaseMapping(7767,7766);
HXLINE(1145)		this->_addCaseMapping(7769,7768);
HXLINE(1146)		this->_addCaseMapping(7771,7770);
HXLINE(1147)		this->_addCaseMapping(7773,7772);
HXLINE(1148)		this->_addCaseMapping(7775,7774);
HXLINE(1149)		this->_addCaseMapping(7777,7776);
HXLINE(1150)		this->_addCaseMapping(7779,7778);
HXLINE(1151)		this->_addCaseMapping(7781,7780);
HXLINE(1152)		this->_addCaseMapping(7783,7782);
HXLINE(1153)		this->_addCaseMapping(7785,7784);
HXLINE(1154)		this->_addCaseMapping(7787,7786);
HXLINE(1155)		this->_addCaseMapping(7789,7788);
HXLINE(1156)		this->_addCaseMapping(7791,7790);
HXLINE(1157)		this->_addCaseMapping(7793,7792);
HXLINE(1158)		this->_addCaseMapping(7795,7794);
HXLINE(1159)		this->_addCaseMapping(7797,7796);
HXLINE(1160)		this->_addCaseMapping(7799,7798);
HXLINE(1161)		this->_addCaseMapping(7801,7800);
HXLINE(1162)		this->_addCaseMapping(7803,7802);
HXLINE(1163)		this->_addCaseMapping(7805,7804);
HXLINE(1164)		this->_addCaseMapping(7807,7806);
HXLINE(1165)		this->_addCaseMapping(7809,7808);
HXLINE(1166)		this->_addCaseMapping(7811,7810);
HXLINE(1167)		this->_addCaseMapping(7813,7812);
HXLINE(1168)		this->_addCaseMapping(7815,7814);
HXLINE(1169)		this->_addCaseMapping(7817,7816);
HXLINE(1170)		this->_addCaseMapping(7819,7818);
HXLINE(1171)		this->_addCaseMapping(7821,7820);
HXLINE(1172)		this->_addCaseMapping(7823,7822);
HXLINE(1173)		this->_addCaseMapping(7825,7824);
HXLINE(1174)		this->_addCaseMapping(7827,7826);
HXLINE(1175)		this->_addCaseMapping(7829,7828);
HXLINE(1176)		this->_addCaseMapping(7841,7840);
HXLINE(1177)		this->_addCaseMapping(7843,7842);
HXLINE(1178)		this->_addCaseMapping(7845,7844);
HXLINE(1179)		this->_addCaseMapping(7847,7846);
HXLINE(1180)		this->_addCaseMapping(7849,7848);
HXLINE(1181)		this->_addCaseMapping(7851,7850);
HXLINE(1182)		this->_addCaseMapping(7853,7852);
HXLINE(1183)		this->_addCaseMapping(7855,7854);
HXLINE(1184)		this->_addCaseMapping(7857,7856);
HXLINE(1185)		this->_addCaseMapping(7859,7858);
HXLINE(1186)		this->_addCaseMapping(7861,7860);
HXLINE(1187)		this->_addCaseMapping(7863,7862);
HXLINE(1188)		this->_addCaseMapping(7865,7864);
HXLINE(1189)		this->_addCaseMapping(7867,7866);
HXLINE(1190)		this->_addCaseMapping(7869,7868);
HXLINE(1191)		this->_addCaseMapping(7871,7870);
HXLINE(1192)		this->_addCaseMapping(7873,7872);
HXLINE(1193)		this->_addCaseMapping(7875,7874);
HXLINE(1194)		this->_addCaseMapping(7877,7876);
HXLINE(1195)		this->_addCaseMapping(7879,7878);
HXLINE(1196)		this->_addCaseMapping(7881,7880);
HXLINE(1197)		this->_addCaseMapping(7883,7882);
HXLINE(1198)		this->_addCaseMapping(7885,7884);
HXLINE(1199)		this->_addCaseMapping(7887,7886);
HXLINE(1200)		this->_addCaseMapping(7889,7888);
HXLINE(1201)		this->_addCaseMapping(7891,7890);
HXLINE(1202)		this->_addCaseMapping(7893,7892);
HXLINE(1203)		this->_addCaseMapping(7895,7894);
HXLINE(1204)		this->_addCaseMapping(7897,7896);
HXLINE(1205)		this->_addCaseMapping(7899,7898);
HXLINE(1206)		this->_addCaseMapping(7901,7900);
HXLINE(1207)		this->_addCaseMapping(7903,7902);
HXLINE(1208)		this->_addCaseMapping(7905,7904);
HXLINE(1209)		this->_addCaseMapping(7907,7906);
HXLINE(1210)		this->_addCaseMapping(7909,7908);
HXLINE(1211)		this->_addCaseMapping(7911,7910);
HXLINE(1212)		this->_addCaseMapping(7913,7912);
HXLINE(1213)		this->_addCaseMapping(7915,7914);
HXLINE(1214)		this->_addCaseMapping(7917,7916);
HXLINE(1215)		this->_addCaseMapping(7919,7918);
HXLINE(1216)		this->_addCaseMapping(7921,7920);
HXLINE(1217)		this->_addCaseMapping(7923,7922);
HXLINE(1218)		this->_addCaseMapping(7925,7924);
HXLINE(1219)		this->_addCaseMapping(7927,7926);
HXLINE(1220)		this->_addCaseMapping(7929,7928);
HXLINE(1221)		this->_addCaseMapping(7936,7944);
HXLINE(1222)		this->_addCaseMapping(7937,7945);
HXLINE(1223)		this->_addCaseMapping(7938,7946);
HXLINE(1224)		this->_addCaseMapping(7939,7947);
HXLINE(1225)		this->_addCaseMapping(7940,7948);
HXLINE(1226)		this->_addCaseMapping(7941,7949);
HXLINE(1227)		this->_addCaseMapping(7942,7950);
HXLINE(1228)		this->_addCaseMapping(7943,7951);
HXLINE(1229)		this->_addCaseMapping(7952,7960);
HXLINE(1230)		this->_addCaseMapping(7953,7961);
HXLINE(1231)		this->_addCaseMapping(7954,7962);
HXLINE(1232)		this->_addCaseMapping(7955,7963);
HXLINE(1233)		this->_addCaseMapping(7956,7964);
HXLINE(1234)		this->_addCaseMapping(7957,7965);
HXLINE(1235)		this->_addCaseMapping(7968,7976);
HXLINE(1236)		this->_addCaseMapping(7969,7977);
HXLINE(1237)		this->_addCaseMapping(7970,7978);
HXLINE(1238)		this->_addCaseMapping(7971,7979);
HXLINE(1239)		this->_addCaseMapping(7972,7980);
HXLINE(1240)		this->_addCaseMapping(7973,7981);
HXLINE(1241)		this->_addCaseMapping(7974,7982);
HXLINE(1242)		this->_addCaseMapping(7975,7983);
HXLINE(1243)		this->_addCaseMapping(7984,7992);
HXLINE(1244)		this->_addCaseMapping(7985,7993);
HXLINE(1245)		this->_addCaseMapping(7986,7994);
HXLINE(1246)		this->_addCaseMapping(7987,7995);
HXLINE(1247)		this->_addCaseMapping(7988,7996);
HXLINE(1248)		this->_addCaseMapping(7989,7997);
HXLINE(1249)		this->_addCaseMapping(7990,7998);
HXLINE(1250)		this->_addCaseMapping(7991,7999);
HXLINE(1251)		this->_addCaseMapping(8000,8008);
HXLINE(1252)		this->_addCaseMapping(8001,8009);
HXLINE(1253)		this->_addCaseMapping(8002,8010);
HXLINE(1254)		this->_addCaseMapping(8003,8011);
HXLINE(1255)		this->_addCaseMapping(8004,8012);
HXLINE(1256)		this->_addCaseMapping(8005,8013);
HXLINE(1257)		this->_addCaseMapping(8017,8025);
HXLINE(1258)		this->_addCaseMapping(8019,8027);
HXLINE(1259)		this->_addCaseMapping(8021,8029);
HXLINE(1260)		this->_addCaseMapping(8023,8031);
HXLINE(1261)		this->_addCaseMapping(8032,8040);
HXLINE(1262)		this->_addCaseMapping(8033,8041);
HXLINE(1263)		this->_addCaseMapping(8034,8042);
HXLINE(1264)		this->_addCaseMapping(8035,8043);
HXLINE(1265)		this->_addCaseMapping(8036,8044);
HXLINE(1266)		this->_addCaseMapping(8037,8045);
HXLINE(1267)		this->_addCaseMapping(8038,8046);
HXLINE(1268)		this->_addCaseMapping(8039,8047);
HXLINE(1269)		this->_addCaseMapping(8064,8072);
HXLINE(1270)		this->_addCaseMapping(8065,8073);
HXLINE(1271)		this->_addCaseMapping(8066,8074);
HXLINE(1272)		this->_addCaseMapping(8067,8075);
HXLINE(1273)		this->_addCaseMapping(8068,8076);
HXLINE(1274)		this->_addCaseMapping(8069,8077);
HXLINE(1275)		this->_addCaseMapping(8070,8078);
HXLINE(1276)		this->_addCaseMapping(8071,8079);
HXLINE(1277)		this->_addCaseMapping(8080,8088);
HXLINE(1278)		this->_addCaseMapping(8081,8089);
HXLINE(1279)		this->_addCaseMapping(8082,8090);
HXLINE(1280)		this->_addCaseMapping(8083,8091);
HXLINE(1281)		this->_addCaseMapping(8084,8092);
HXLINE(1282)		this->_addCaseMapping(8085,8093);
HXLINE(1283)		this->_addCaseMapping(8086,8094);
HXLINE(1284)		this->_addCaseMapping(8087,8095);
HXLINE(1285)		this->_addCaseMapping(8096,8104);
HXLINE(1286)		this->_addCaseMapping(8097,8105);
HXLINE(1287)		this->_addCaseMapping(8098,8106);
HXLINE(1288)		this->_addCaseMapping(8099,8107);
HXLINE(1289)		this->_addCaseMapping(8100,8108);
HXLINE(1290)		this->_addCaseMapping(8101,8109);
HXLINE(1291)		this->_addCaseMapping(8102,8110);
HXLINE(1292)		this->_addCaseMapping(8103,8111);
HXLINE(1293)		this->_addCaseMapping(8112,8120);
HXLINE(1294)		this->_addCaseMapping(8113,8121);
HXLINE(1295)		this->_addCaseMapping(8144,8152);
HXLINE(1296)		this->_addCaseMapping(8145,8153);
HXLINE(1297)		this->_addCaseMapping(8160,8168);
HXLINE(1298)		this->_addCaseMapping(8161,8169);
HXLINE(1299)		this->_addCaseMapping(9424,9398);
HXLINE(1300)		this->_addCaseMapping(9425,9399);
HXLINE(1301)		this->_addCaseMapping(9426,9400);
HXLINE(1302)		this->_addCaseMapping(9427,9401);
HXLINE(1303)		this->_addCaseMapping(9428,9402);
HXLINE(1304)		this->_addCaseMapping(9429,9403);
HXLINE(1305)		this->_addCaseMapping(9430,9404);
HXLINE(1306)		this->_addCaseMapping(9431,9405);
HXLINE(1307)		this->_addCaseMapping(9432,9406);
HXLINE(1308)		this->_addCaseMapping(9433,9407);
HXLINE(1309)		this->_addCaseMapping(9434,9408);
HXLINE(1310)		this->_addCaseMapping(9435,9409);
HXLINE(1311)		this->_addCaseMapping(9436,9410);
HXLINE(1312)		this->_addCaseMapping(9437,9411);
HXLINE(1313)		this->_addCaseMapping(9438,9412);
HXLINE(1314)		this->_addCaseMapping(9439,9413);
HXLINE(1315)		this->_addCaseMapping(9440,9414);
HXLINE(1316)		this->_addCaseMapping(9441,9415);
HXLINE(1317)		this->_addCaseMapping(9442,9416);
HXLINE(1318)		this->_addCaseMapping(9443,9417);
HXLINE(1319)		this->_addCaseMapping(9444,9418);
HXLINE(1320)		this->_addCaseMapping(9445,9419);
HXLINE(1321)		this->_addCaseMapping(9446,9420);
HXLINE(1322)		this->_addCaseMapping(9447,9421);
HXLINE(1323)		this->_addCaseMapping(9448,9422);
HXLINE(1324)		this->_addCaseMapping(9449,9423);
HXLINE(1325)		this->_addCaseMapping(65345,65313);
HXLINE(1326)		this->_addCaseMapping(65346,65314);
HXLINE(1327)		this->_addCaseMapping(65347,65315);
HXLINE(1328)		this->_addCaseMapping(65348,65316);
HXLINE(1329)		this->_addCaseMapping(65349,65317);
HXLINE(1330)		this->_addCaseMapping(65350,65318);
HXLINE(1331)		this->_addCaseMapping(65351,65319);
HXLINE(1332)		this->_addCaseMapping(65352,65320);
HXLINE(1333)		this->_addCaseMapping(65353,65321);
HXLINE(1334)		this->_addCaseMapping(65354,65322);
HXLINE(1335)		this->_addCaseMapping(65355,65323);
HXLINE(1336)		this->_addCaseMapping(65356,65324);
HXLINE(1337)		this->_addCaseMapping(65357,65325);
HXLINE(1338)		this->_addCaseMapping(65358,65326);
HXLINE(1339)		this->_addCaseMapping(65359,65327);
HXLINE(1340)		this->_addCaseMapping(65360,65328);
HXLINE(1341)		this->_addCaseMapping(65361,65329);
HXLINE(1342)		this->_addCaseMapping(65362,65330);
HXLINE(1343)		this->_addCaseMapping(65363,65331);
HXLINE(1344)		this->_addCaseMapping(65364,65332);
HXLINE(1345)		this->_addCaseMapping(65365,65333);
HXLINE(1346)		this->_addCaseMapping(65366,65334);
HXLINE(1347)		this->_addCaseMapping(65367,65335);
HXLINE(1348)		this->_addCaseMapping(65368,65336);
HXLINE(1349)		this->_addCaseMapping(65369,65337);
HXLINE(1350)		this->_addCaseMapping(65370,65338);
            	}

Dynamic CharCaseMapper_obj::__CreateEmpty() { return new CharCaseMapper_obj; }

void *CharCaseMapper_obj::_hx_vtable = 0;

Dynamic CharCaseMapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharCaseMapper_obj > _hx_result = new CharCaseMapper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CharCaseMapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x293c0912;
}

void CharCaseMapper_obj::_addCaseMapping(int lowerChar,int upperChar){
            	HX_STACKFRAME(&_hx_pos_36ca7503084d1cd9_649__addCaseMapping)
HXLINE( 653)		if (!(this->mapU2L->exists(upperChar))) {
HXLINE( 653)			this->mapU2L->set(upperChar,lowerChar);
            		}
HXLINE( 654)		if (!(this->mapL2U->exists(lowerChar))) {
HXLINE( 654)			this->mapL2U->set(lowerChar,upperChar);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CharCaseMapper_obj,_addCaseMapping,(void))

bool CharCaseMapper_obj::isLowerCase(int ch){
            	HX_STACKFRAME(&_hx_pos_36ca7503084d1cd9_659_isLowerCase)
HXDLIN( 659)		return this->mapL2U->exists(ch);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharCaseMapper_obj,isLowerCase,return )

bool CharCaseMapper_obj::isUpperCase(int ch){
            	HX_STACKFRAME(&_hx_pos_36ca7503084d1cd9_664_isUpperCase)
HXDLIN( 664)		return this->mapU2L->exists(ch);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharCaseMapper_obj,isUpperCase,return )

int CharCaseMapper_obj::toLowerCase(int ch){
            	HX_STACKFRAME(&_hx_pos_36ca7503084d1cd9_668_toLowerCase)
HXLINE( 669)		 ::Dynamic lowerChar = this->mapU2L->get(ch);
HXLINE( 670)		if (::hx::IsNull( lowerChar )) {
HXLINE( 670)			return ch;
            		}
            		else {
HXLINE( 670)			return ( (int)(lowerChar) );
            		}
HXDLIN( 670)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharCaseMapper_obj,toLowerCase,return )

int CharCaseMapper_obj::toUpperCase(int ch){
            	HX_STACKFRAME(&_hx_pos_36ca7503084d1cd9_675_toUpperCase)
HXLINE( 676)		 ::Dynamic upperChar = this->mapL2U->get(ch);
HXLINE( 677)		if (::hx::IsNull( upperChar )) {
HXLINE( 677)			return ch;
            		}
            		else {
HXLINE( 677)			return ( (int)(upperChar) );
            		}
HXDLIN( 677)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharCaseMapper_obj,toUpperCase,return )


::hx::ObjectPtr< CharCaseMapper_obj > CharCaseMapper_obj::__new() {
	::hx::ObjectPtr< CharCaseMapper_obj > __this = new CharCaseMapper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CharCaseMapper_obj > CharCaseMapper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CharCaseMapper_obj *__this = (CharCaseMapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharCaseMapper_obj), true, "hx.strings._Char.CharCaseMapper"));
	*(void **)__this = CharCaseMapper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CharCaseMapper_obj::CharCaseMapper_obj()
{
}

void CharCaseMapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharCaseMapper);
	HX_MARK_MEMBER_NAME(mapU2L,"mapU2L");
	HX_MARK_MEMBER_NAME(mapL2U,"mapL2U");
	HX_MARK_END_CLASS();
}

void CharCaseMapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapU2L,"mapU2L");
	HX_VISIT_MEMBER_NAME(mapL2U,"mapL2U");
}

::hx::Val CharCaseMapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mapU2L") ) { return ::hx::Val( mapU2L ); }
		if (HX_FIELD_EQ(inName,"mapL2U") ) { return ::hx::Val( mapL2U ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isLowerCase") ) { return ::hx::Val( isLowerCase_dyn() ); }
		if (HX_FIELD_EQ(inName,"isUpperCase") ) { return ::hx::Val( isUpperCase_dyn() ); }
		if (HX_FIELD_EQ(inName,"toLowerCase") ) { return ::hx::Val( toLowerCase_dyn() ); }
		if (HX_FIELD_EQ(inName,"toUpperCase") ) { return ::hx::Val( toUpperCase_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_addCaseMapping") ) { return ::hx::Val( _addCaseMapping_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharCaseMapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mapU2L") ) { mapU2L=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mapL2U") ) { mapL2U=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharCaseMapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mapU2L",53,2a,0d,b9));
	outFields->push(HX_("mapL2U",13,56,06,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharCaseMapper_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(CharCaseMapper_obj,mapU2L),HX_("mapU2L",53,2a,0d,b9)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(CharCaseMapper_obj,mapL2U),HX_("mapL2U",13,56,06,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharCaseMapper_obj_sStaticStorageInfo = 0;
#endif

static ::String CharCaseMapper_obj_sMemberFields[] = {
	HX_("mapU2L",53,2a,0d,b9),
	HX_("mapL2U",13,56,06,b9),
	HX_("_addCaseMapping",3c,0a,97,f6),
	HX_("isLowerCase",07,90,ff,2f),
	HX_("isUpperCase",e8,73,98,b0),
	HX_("toLowerCase",56,4c,64,b8),
	HX_("toUpperCase",37,30,fd,38),
	::String(null()) };

::hx::Class CharCaseMapper_obj::__mClass;

void CharCaseMapper_obj::__register()
{
	CharCaseMapper_obj _hx_dummy;
	CharCaseMapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._Char.CharCaseMapper",2a,b4,08,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharCaseMapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharCaseMapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharCaseMapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharCaseMapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _Char
