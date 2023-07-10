#ifndef INCLUDED_lime_utils_Preloader
#define INCLUDED_lime_utils_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,utils,Preloader)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Preloader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();

	public:
		enum { _hx_ClassId = 0x773c4d3e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.Preloader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.Preloader"); }
		static ::hx::ObjectPtr< Preloader_obj > __new();
		static ::hx::ObjectPtr< Preloader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Preloader",56,c4,4e,24); }

		bool complete;
		 ::lime::app::_Event_Void_Void onComplete;
		 ::lime::app::_Event_Int_Int_Void onProgress;
		int bytesLoaded;
		 ::haxe::ds::ObjectMap bytesLoadedCache;
		 ::haxe::ds::StringMap bytesLoadedCache2;
		int bytesTotal;
		 ::haxe::ds::StringMap bytesTotalCache;
		bool initLibraryNames;
		::cpp::VirtualArray libraries;
		::Array< ::String > libraryNames;
		int loadedLibraries;
		bool loadedStage;
		bool preloadComplete;
		bool preloadStarted;
		bool simulateProgress;
		void addLibrary( ::Dynamic library);
		::Dynamic addLibrary_dyn();

		void addLibraryName(::String name);
		::Dynamic addLibraryName_dyn();

		void load();
		::Dynamic load_dyn();

		void loadedAssetLibrary(::String name);
		::Dynamic loadedAssetLibrary_dyn();

		void start();
		::Dynamic start_dyn();

		void update(int loaded,int total);
		::Dynamic update_dyn();

		void updateProgress();
		::Dynamic updateProgress_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_Preloader */ 
