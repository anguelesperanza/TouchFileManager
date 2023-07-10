#include <hxcpp.h>

#ifndef INCLUDED_MainView
#include <MainView.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_files_Path
#include <hx/files/Path.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_42_new,"MainView","new",0x67d70b50,"MainView.new","MainView.hx",42,0x21c1ce20)
HX_DEFINE_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_20_new,"MainView","new",0x67d70b50,"MainView.new","MainView.hx",20,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_51_showDirectory,"MainView","showDirectory",0x3e773ca0,"MainView.showDirectory","MainView.hx",51,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_61_showDirectory,"MainView","showDirectory",0x3e773ca0,"MainView.showDirectory","MainView.hx",61,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_62_showDirectory,"MainView","showDirectory",0x3e773ca0,"MainView.showDirectory","MainView.hx",62,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_84_scanDirectory,"MainView","scanDirectory",0x26f20420,"MainView.scanDirectory","MainView.hx",84,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_90_goBackDirectory,"MainView","goBackDirectory",0x47b09aee,"MainView.goBackDirectory","MainView.hx",90,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_101_runFile,"MainView","runFile",0x23cc5657,"MainView.runFile","MainView.hx",101,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_84cb5a54243b0f84_523_registerBehaviours,"MainView","registerBehaviours",0x5ebc3ae9,"MainView.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_62c4266d3adc9f12_651_cloneComponent,"MainView","cloneComponent",0x3a00b4b0,"MainView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_84cb5a54243b0f84_493_self,"MainView","self",0x77a0e29c,"MainView.self","haxe/ui/macros/Macros.hx",493,0x27866361)

void MainView_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainView,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_42_new)
HXLINE(  42)			_gthis->goBackDirectory(_gthis->p,_gthis->directoryDisplay);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_20_new)
HXLINE(  24)		this->itemClicked = HX_("",00,00,00,00);
HXLINE(  22)		this->cwd = HX_("",00,00,00,00);
HXLINE(  21)		this->home = HX_("",00,00,00,00);
HXLINE(  26)		 ::MainView _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  27)		super::__construct();
HXLINE(  11)		{
HXLINE( 310)			::haxe::ui::Toolkit_obj::styleSheet->parse(HX_("\n        .button {\n            font-size: 10px;\n        }\n    ",4f,cb,88,69),HX_("user",4b,92,ad,4d),null());
HXLINE( 871)			 ::haxe::ui::containers::HBox c0 =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(1111)			c0->set_percentWidth(((Float)100.));
HXDLIN(1111)			c0->set_percentHeight(((Float)100.));
HXLINE( 871)			 ::haxe::ui::containers::VBox c1 =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE(1111)			c1->set_id(HX_("header",8d,09,00,fd));
HXDLIN(1111)			c1->set_percentWidth(((Float)100.));
HXDLIN(1111)			c1->set_percentHeight(((Float)100.));
HXLINE( 871)			 ::haxe::ui::components::Label c2 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(1111)			c2->set_id(HX_("pathViewer",97,51,82,f8));
HXDLIN(1111)			c2->set_text(HX_("File Path Here....",c7,f9,56,d2));
HXLINE( 929)			c1->addComponent(c2);
HXLINE( 871)			 ::haxe::ui::components::Label c3 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(1111)			c3->set_text(HX_("_______________________________________________________________________________________________",7f,79,7f,8d));
HXLINE( 929)			c1->addComponent(c3);
HXLINE( 871)			 ::haxe::ui::containers::HBox c4 =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXDLIN( 871)			 ::haxe::ui::components::Button c5 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1111)			c5->set_id(HX_("backDir",66,ad,6e,fb));
HXDLIN(1111)			c5->set_text(HX_("Go Back",1f,93,cd,82));
HXLINE( 929)			c4->addComponent(c5);
HXLINE( 871)			 ::haxe::ui::components::Button c6 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1111)			c6->set_id(HX_("copy",b5,bb,c4,41));
HXDLIN(1111)			c6->set_text(HX_("copy",b5,bb,c4,41));
HXLINE( 929)			c4->addComponent(c6);
HXLINE( 871)			 ::haxe::ui::components::Button c7 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1111)			c7->set_id(HX_("paste",53,53,56,bd));
HXDLIN(1111)			c7->set_text(HX_("paste",53,53,56,bd));
HXLINE( 929)			c4->addComponent(c7);
HXLINE( 871)			 ::haxe::ui::components::Button c8 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1111)			c8->set_id(HX_("move",11,e3,60,48));
HXDLIN(1111)			c8->set_text(HX_("move",11,e3,60,48));
HXLINE( 929)			c4->addComponent(c8);
HXLINE( 871)			 ::haxe::ui::components::Button c9 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1111)			c9->set_id(HX_("run",4b,e7,56,00));
HXDLIN(1111)			c9->set_text(HX_("run",4b,e7,56,00));
HXLINE( 929)			c4->addComponent(c9);
HXDLIN( 929)			c1->addComponent(c4);
HXLINE( 871)			 ::haxe::ui::containers::ScrollView c10 =  ::haxe::ui::containers::ScrollView_obj::__alloc( HX_CTX );
HXLINE(1111)			c10->set_percentWidth(((Float)100.));
HXDLIN(1111)			c10->set_percentHeight(((Float)100.));
HXDLIN(1111)			c10->set_percentContentWidth(((Float)100.));
HXDLIN(1111)			c10->set_styleString(HX_("border: 1px solid $normal-border-color;padding:5px;",70,c9,51,87));
HXLINE( 871)			 ::haxe::ui::containers::HBox c11 =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(1111)			c11->set_id(HX_("directoryDisplay",55,37,33,d3));
HXDLIN(1111)			c11->set_percentWidth(((Float)100.));
HXDLIN(1111)			c11->set_styleString(HX_("border: 1px solid $normal-border-color;padding:5px;",70,c9,51,87));
HXLINE(1084)			c11->set_continuous(true);
HXLINE( 929)			c10->addComponent(c11);
HXDLIN( 929)			c1->addComponent(c10);
HXDLIN( 929)			c0->addComponent(c1);
HXLINE( 338)			this->addComponent(c0);
HXLINE(1111)			this->set_percentWidth(((Float)100.));
HXDLIN(1111)			this->set_percentHeight(((Float)100.));
HXDLIN(1111)			this->set_styleString(HX_("padding: 5px;",55,3e,6f,76));
HXLINE( 359)			this->bindingRoot = true;
HXLINE( 255)			this->run = c9;
HXDLIN( 255)			this->pathViewer = c2;
HXDLIN( 255)			this->paste = c7;
HXDLIN( 255)			this->move = c8;
HXDLIN( 255)			this->header = c1;
HXDLIN( 255)			this->directoryDisplay = c11;
HXDLIN( 255)			this->copy = c6;
HXDLIN( 255)			this->backDir = c5;
            		}
HXLINE(  29)		if ((::Sys_obj::systemName() == HX_("Windows",63,06,c6,b5))) {
HXLINE(  30)			this->home = HX_("C:/",b8,09,33,00);
            		}
            		else {
HXLINE(  33)			this->home = HX_("/",2f,00,00,00);
            		}
HXLINE(  35)		this->cwd = this->home;
HXLINE(  36)		this->pathViewer->set_text(this->cwd);
HXLINE(  38)		this->p = ::hx::files::Path_obj::of(this->home,null());
HXLINE(  40)		this->showDirectory(this->p,this->directoryDisplay);
HXLINE(  42)		this->backDir->set_onClick( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic MainView_obj::__CreateEmpty() { return new MainView_obj; }

void *MainView_obj::_hx_vtable = 0;

Dynamic MainView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainView_obj > _hx_result = new MainView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					if (inClassId<=(int)0x01557b4b) {
						return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
					} else {
						return inClassId==(int)0x0330636f;
					}
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241810fb) {
				if (inClassId<=(int)0x1f4df417) {
					return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
				} else {
					return inClassId==(int)0x241810fb;
				}
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x32f63b82) {
				if (inClassId<=(int)0x2eb1d3e1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x2eb1d3e1;
				} else {
					return inClassId==(int)0x32f63b82;
				}
			} else {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

void MainView_obj::showDirectory( ::hx::files::Path path, ::haxe::ui::core::Component container){
            	HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_51_showDirectory)
HXDLIN(  51)		::Array< ::Dynamic> path1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,path);
HXDLIN(  51)		 ::MainView _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  53)		container->removeAllComponents(null());
HXLINE(  55)		::Array< ::String > scans = this->scanDirectory(path1->__get(0).StaticCast<  ::hx::files::Path >()->getAbsolutePath());
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			while((_g < scans->length)){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::Button,button) HXARGC(1)
            				void _hx_run( ::openfl::events::MouseEvent e){
            					HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_61_showDirectory)
HXLINE(  61)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  61)					::String _hx_tmp1 = (button->get_text() + HX_(" Is held down",37,82,d7,dd));
HXDLIN(  61)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/MainView.hx",35,5b,8f,cb),61,HX_("MainView",5e,63,83,80),HX_("showDirectory",b0,f5,62,00)));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,path1, ::MainView,_gthis, ::haxe::ui::core::Component,container, ::haxe::ui::components::Button,button) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::MouseEvent e){
            					HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_62_showDirectory)
HXLINE(  63)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  63)					::String _hx_tmp1 = (button->get_text() + HX_(" has been clicked",19,0c,ee,8d));
HXDLIN(  63)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/MainView.hx",35,5b,8f,cb),63,HX_("MainView",5e,63,83,80),HX_("showDirectory",b0,f5,62,00)));
HXLINE(  64)					 ::hx::files::Path path = path1->__get(0).StaticCast<  ::hx::files::Path >();
HXDLIN(  64)					 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(button->get_text());
HXDLIN(  64)					if (path->join(this1,null())->isDirectory()) {
HXLINE(  65)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  65)						 ::hx::files::Path path = path1->__get(0).StaticCast<  ::hx::files::Path >();
HXDLIN(  65)						 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(button->get_text());
HXDLIN(  65)						::String _hx_tmp1 = (::Std_obj::string(path->join(this1,null())) + HX_(" Is a valid path",5e,36,3e,05));
HXDLIN(  65)						_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/MainView.hx",35,5b,8f,cb),65,HX_("MainView",5e,63,83,80),HX_("showDirectory",b0,f5,62,00)));
HXLINE(  66)						::Array< ::Dynamic> path2 = path1;
HXDLIN(  66)						 ::hx::files::Path path3 = path1->__get(0).StaticCast<  ::hx::files::Path >();
HXDLIN(  66)						 ::hx::strings::internal::_Either2::_Either2 this2 = ::hx::strings::internal::_Either2::_Either2_obj::a(button->get_text());
HXDLIN(  66)						path2[0] = path3->join(this2,null());
HXLINE(  67)						::String _hx_tmp2 = path1->__get(0).StaticCast<  ::hx::files::Path >()->getAbsolutePath();
HXDLIN(  67)						_gthis->p = ::hx::files::Path_obj::of(_hx_tmp2,null());
HXLINE(  68)						 ::Dynamic _hx_tmp3 = ::haxe::Log_obj::trace;
HXDLIN(  68)						::String _hx_tmp4 = (HX_("Current P file path: ",98,52,40,40) + _gthis->p->getAbsolutePath());
HXDLIN(  68)						_hx_tmp3(_hx_tmp4,::hx::SourceInfo(HX_("src/MainView.hx",35,5b,8f,cb),68,HX_("MainView",5e,63,83,80),HX_("showDirectory",b0,f5,62,00)));
HXLINE(  69)						_gthis->showDirectory(path1->__get(0).StaticCast<  ::hx::files::Path >(),container);
            					}
            					else {
HXLINE(  75)						 ::MainView _gthis1 = _gthis;
HXDLIN(  75)						 ::hx::files::Path path = path1->__get(0).StaticCast<  ::hx::files::Path >();
HXDLIN(  75)						 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(button->get_text());
HXDLIN(  75)						_gthis1->runFile(path->join(this1,null())->getAbsolutePath());
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  56)				::String s = scans->__get(_g);
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  57)				 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  58)				button->set_width(( (Float)(100) ));
HXLINE(  59)				button->set_height(( (Float)(100) ));
HXLINE(  60)				button->set_text(s);
HXLINE(  61)				button->addEventListener(HX_("mouseDown",27,b1,c2,ee), ::Dynamic(new _hx_Closure_0(button)),null(),null(),null());
HXLINE(  62)				button->set_onClick( ::Dynamic(new _hx_Closure_1(path1,_gthis,container,button)));
HXLINE(  80)				container->addComponent(button);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MainView_obj,showDirectory,(void))

::Array< ::String > MainView_obj::scanDirectory(::String cwd){
            	HX_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_84_scanDirectory)
HXLINE(  85)		::Array< ::String > results = ::sys::FileSystem_obj::readDirectory(cwd);
HXLINE(  86)		return results;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainView_obj,scanDirectory,return )

void MainView_obj::goBackDirectory( ::hx::files::Path path, ::haxe::ui::core::Component container){
            	HX_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_90_goBackDirectory)
HXDLIN(  90)		if (::hx::IsNotNull( path->parent )) {
HXLINE(  91)			::haxe::Log_obj::trace(path,::hx::SourceInfo(HX_("src/MainView.hx",35,5b,8f,cb),91,HX_("MainView",5e,63,83,80),HX_("goBackDirectory",fe,b7,c8,26)));
HXLINE(  92)			 ::hx::files::Path temp = ::hx::files::Path_obj::of(path->parent->getAbsolutePath(),null());
HXLINE(  93)			this->p = ::hx::files::Path_obj::of(temp->getAbsolutePath(),null());
HXLINE(  94)			this->showDirectory(temp,container);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MainView_obj,goBackDirectory,(void))

void MainView_obj::runFile(::String path){
            	HX_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_101_runFile)
HXDLIN( 101)		::String _hx_switch_0 = ::Sys_obj::systemName();
            		if (  (_hx_switch_0==HX_("Linux",d4,5b,2f,08)) ){
HXLINE( 104)			::Sys_obj::command(HX_("xdg-open",9c,2a,86,6f),::Array_obj< ::String >::__new(1)->init(0,path));
HXDLIN( 104)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("Windows",63,06,c6,b5)) ){
HXLINE( 103)			::Sys_obj::command(HX_("start",62,74,0b,84),::Array_obj< ::String >::__new(2)->init(0,HX_("",00,00,00,00))->init(1,path));
HXDLIN( 103)			goto _hx_goto_8;
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainView_obj,runFile,(void))

void MainView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_84cb5a54243b0f84_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer MainView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_62c4266d3adc9f12_651_cloneComponent)
HXLINE( 441)		 ::MainView c = ( ( ::MainView)(this->super::cloneComponent()) );
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				::Array< ::Dynamic> _g1;
HXDLIN( 458)				if (::hx::IsNull( this->_children )) {
HXLINE( 458)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 458)					_g1 = this->_children;
            				}
HXDLIN( 458)				while((_g < _g1->length)){
HXLINE( 458)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 458)					_g = (_g + 1);
HXLINE( 459)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 463)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 465)		return c;
            	}


 ::haxe::ui::core::ComponentContainer MainView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_84cb5a54243b0f84_493_self)
HXDLIN( 493)		return  ::MainView_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MainView_obj > MainView_obj::__new() {
	::hx::ObjectPtr< MainView_obj > __this = new MainView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MainView_obj > MainView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MainView_obj *__this = (MainView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainView_obj), true, "MainView"));
	*(void **)__this = MainView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MainView_obj::MainView_obj()
{
}

void MainView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainView);
	HX_MARK_MEMBER_NAME(home,"home");
	HX_MARK_MEMBER_NAME(cwd,"cwd");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(itemClicked,"itemClicked");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_MEMBER_NAME(pathViewer,"pathViewer");
	HX_MARK_MEMBER_NAME(paste,"paste");
	HX_MARK_MEMBER_NAME(move,"move");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(directoryDisplay,"directoryDisplay");
	HX_MARK_MEMBER_NAME(copy,"copy");
	HX_MARK_MEMBER_NAME(backDir,"backDir");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(home,"home");
	HX_VISIT_MEMBER_NAME(cwd,"cwd");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(itemClicked,"itemClicked");
	HX_VISIT_MEMBER_NAME(run,"run");
	HX_VISIT_MEMBER_NAME(pathViewer,"pathViewer");
	HX_VISIT_MEMBER_NAME(paste,"paste");
	HX_VISIT_MEMBER_NAME(move,"move");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(directoryDisplay,"directoryDisplay");
	HX_VISIT_MEMBER_NAME(copy,"copy");
	HX_VISIT_MEMBER_NAME(backDir,"backDir");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cwd") ) { return ::hx::Val( cwd ); }
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"home") ) { return ::hx::Val( home ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paste") ) { return ::hx::Val( paste ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return ::hx::Val( header ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runFile") ) { return ::hx::Val( runFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"backDir") ) { return ::hx::Val( backDir ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathViewer") ) { return ::hx::Val( pathViewer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"itemClicked") ) { return ::hx::Val( itemClicked ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showDirectory") ) { return ::hx::Val( showDirectory_dyn() ); }
		if (HX_FIELD_EQ(inName,"scanDirectory") ) { return ::hx::Val( scanDirectory_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"goBackDirectory") ) { return ::hx::Val( goBackDirectory_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"directoryDisplay") ) { return ::hx::Val( directoryDisplay ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::hx::files::Path >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cwd") ) { cwd=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"home") ) { home=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"move") ) { move=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copy") ) { copy=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paste") ) { paste=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast<  ::haxe::ui::containers::VBox >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backDir") ) { backDir=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathViewer") ) { pathViewer=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"itemClicked") ) { itemClicked=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"directoryDisplay") ) { directoryDisplay=inValue.Cast<  ::haxe::ui::containers::HBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("home",1f,ca,12,45));
	outFields->push(HX_("cwd",30,87,4b,00));
	outFields->push(HX_("p",70,00,00,00));
	outFields->push(HX_("itemClicked",d4,f1,2e,58));
	outFields->push(HX_("run",4b,e7,56,00));
	outFields->push(HX_("pathViewer",97,51,82,f8));
	outFields->push(HX_("paste",53,53,56,bd));
	outFields->push(HX_("move",11,e3,60,48));
	outFields->push(HX_("header",8d,09,00,fd));
	outFields->push(HX_("directoryDisplay",55,37,33,d3));
	outFields->push(HX_("copy",b5,bb,c4,41));
	outFields->push(HX_("backDir",66,ad,6e,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainView_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MainView_obj,home),HX_("home",1f,ca,12,45)},
	{::hx::fsString,(int)offsetof(MainView_obj,cwd),HX_("cwd",30,87,4b,00)},
	{::hx::fsObject /*  ::hx::files::Path */ ,(int)offsetof(MainView_obj,p),HX_("p",70,00,00,00)},
	{::hx::fsString,(int)offsetof(MainView_obj,itemClicked),HX_("itemClicked",d4,f1,2e,58)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,run),HX_("run",4b,e7,56,00)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(MainView_obj,pathViewer),HX_("pathViewer",97,51,82,f8)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,paste),HX_("paste",53,53,56,bd)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,move),HX_("move",11,e3,60,48)},
	{::hx::fsObject /*  ::haxe::ui::containers::VBox */ ,(int)offsetof(MainView_obj,header),HX_("header",8d,09,00,fd)},
	{::hx::fsObject /*  ::haxe::ui::containers::HBox */ ,(int)offsetof(MainView_obj,directoryDisplay),HX_("directoryDisplay",55,37,33,d3)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,copy),HX_("copy",b5,bb,c4,41)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,backDir),HX_("backDir",66,ad,6e,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainView_obj_sStaticStorageInfo = 0;
#endif

static ::String MainView_obj_sMemberFields[] = {
	HX_("home",1f,ca,12,45),
	HX_("cwd",30,87,4b,00),
	HX_("p",70,00,00,00),
	HX_("itemClicked",d4,f1,2e,58),
	HX_("showDirectory",b0,f5,62,00),
	HX_("scanDirectory",30,bd,dd,e8),
	HX_("goBackDirectory",fe,b7,c8,26),
	HX_("runFile",67,e3,f8,d0),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("run",4b,e7,56,00),
	HX_("pathViewer",97,51,82,f8),
	HX_("paste",53,53,56,bd),
	HX_("move",11,e3,60,48),
	HX_("header",8d,09,00,fd),
	HX_("directoryDisplay",55,37,33,d3),
	HX_("copy",b5,bb,c4,41),
	HX_("backDir",66,ad,6e,fb),
	::String(null()) };

::hx::Class MainView_obj::__mClass;

void MainView_obj::__register()
{
	MainView_obj _hx_dummy;
	MainView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainView",5e,63,83,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

