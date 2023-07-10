#ifndef INCLUDED_haxe_ui_core_Component
#define INCLUDED_haxe_ui_core_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,events,AnimationEvent)
HX_DECLARE_CLASS3(haxe,ui,events,DragEvent)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,styles,StyleSheet)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,Animation)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,AnimationOptions)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrames)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Component_obj : public  ::haxe::ui::backend::ComponentImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentImpl_obj super;
		typedef Component_obj OBJ_;
		Component_obj();

	public:
		enum { _hx_ClassId = 0x72c347e4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.Component")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.Component"); }
		static ::hx::ObjectPtr< Component_obj > __new();
		static ::hx::ObjectPtr< Component_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Component",9d,d0,26,b1); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void addNamedComponentsFrom( ::haxe::ui::core::Component parent,::Array< ::Dynamic> list);
		static ::Dynamic addNamedComponentsFrom_dyn();

		int componentTabIndex;
		::hx::Class _defaultLayoutClass;
		void create();
		::Dynamic create_dyn();

		::hx::Class _compositeBuilderClass;
		 ::haxe::ui::core::CompositeBuilder _compositeBuilder;
		virtual void registerComposite();
		::Dynamic registerComposite_dyn();

		virtual void createDefaults();
		::Dynamic createDefaults_dyn();

		virtual void createChildren();
		::Dynamic createChildren_dyn();

		void destroyChildren();
		::Dynamic destroyChildren_dyn();

		 ::haxe::ui::layouts::Layout createLayout();
		::Dynamic createLayout_dyn();

		 ::Dynamic _native;
		 ::Dynamic get_native();
		::Dynamic get_native_dyn();

		 ::Dynamic set_native( ::Dynamic value);
		::Dynamic set_native_dyn();

		bool _animatable;
		bool get_animatable();
		::Dynamic get_animatable_dyn();

		bool set_animatable(bool value);
		::Dynamic set_animatable_dyn();

		 ::haxe::ui::styles::animation::Animation _componentAnimation;
		 ::haxe::ui::styles::animation::Animation get_componentAnimation();
		::Dynamic get_componentAnimation_dyn();

		 ::haxe::ui::styles::animation::Animation set_componentAnimation( ::haxe::ui::styles::animation::Animation value);
		::Dynamic set_componentAnimation_dyn();

		 ::Dynamic userData;
		 ::haxe::ui::core::Screen screen;
		 ::haxe::ui::core::Screen get_screen();
		::Dynamic get_screen_dyn();

		bool get_draggable();
		::Dynamic get_draggable_dyn();

		bool set_draggable(bool value);
		::Dynamic set_draggable_dyn();

		 ::haxe::ui::core::Component _dragInitiator;
		 ::haxe::ui::core::Component get_dragInitiator();
		::Dynamic get_dragInitiator_dyn();

		 ::haxe::ui::core::Component set_dragInitiator( ::haxe::ui::core::Component value);
		::Dynamic set_dragInitiator_dyn();

		 ::Dynamic _dragOptions;
		 ::Dynamic get_dragOptions();
		::Dynamic get_dragOptions_dyn();

		 ::Dynamic set_dragOptions( ::Dynamic value);
		::Dynamic set_dragOptions_dyn();

		bool bindingRoot;
		 ::haxe::ui::core::Component get_rootComponent();
		::Dynamic get_rootComponent_dyn();

		int get_numComponents();
		::Dynamic get_numComponents_dyn();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		bool containsComponent( ::haxe::ui::core::Component child);
		::Dynamic containsComponent_dyn();

		 ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);

		void onComponentAdded( ::haxe::ui::core::Component child);
		::Dynamic onComponentAdded_dyn();

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		void disposeComponent();
		::Dynamic disposeComponent_dyn();

		 ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		void onComponentRemoved( ::haxe::ui::core::Component child);
		::Dynamic onComponentRemoved_dyn();

		void assignPositionClasses(::hx::Null< bool >  invalidate);
		::Dynamic assignPositionClasses_dyn();

		void destroyComponent();
		::Dynamic destroyComponent_dyn();

		void onDestroy();
		::Dynamic onDestroy_dyn();

		void walkComponents( ::Dynamic callback);
		::Dynamic walkComponents_dyn();

		void removeAllComponents(::hx::Null< bool >  dispose);
		::Dynamic removeAllComponents_dyn();

		bool matchesSearch(::String criteria,::hx::Class type,::String searchType);
		::Dynamic matchesSearch_dyn();

		 ::Dynamic findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType);
		::Dynamic findComponent_dyn();

		::cpp::VirtualArray findComponents(::String styleName,::hx::Class type,::hx::Null< int >  maxDepth);
		::Dynamic findComponents_dyn();

		 ::Dynamic findAncestor(::String criteria,::hx::Class type,::String searchType);
		::Dynamic findAncestor_dyn();

		::Array< ::Dynamic> findComponentsUnderPoint(Float screenX,Float screenY,::hx::Class type);
		::Dynamic findComponentsUnderPoint_dyn();

		bool hasComponentUnderPoint(Float screenX,Float screenY,::hx::Class type);
		::Dynamic hasComponentUnderPoint_dyn();

		int getComponentIndex( ::haxe::ui::core::Component child);
		::Dynamic getComponentIndex_dyn();

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		 ::haxe::ui::core::Component getComponentAt(int index);
		::Dynamic getComponentAt_dyn();

		void hide();
		::Dynamic hide_dyn();

		void hideInternal(::hx::Null< bool >  dispatchChildren);
		::Dynamic hideInternal_dyn();

		bool _invalidateRecursivelyOnShow;
		void show();
		::Dynamic show_dyn();

		void showInternal(::hx::Null< bool >  dispatchChildren);
		::Dynamic showInternal_dyn();

		void fadeIn( ::Dynamic onEnd,::hx::Null< bool >  show);
		::Dynamic fadeIn_dyn();

		void fadeOut( ::Dynamic onEnd,::hx::Null< bool >  hide);
		::Dynamic fadeOut_dyn();

		bool _hidden;
		bool get_hidden();
		::Dynamic get_hidden_dyn();

		bool set_hidden(bool value);
		::Dynamic set_hidden_dyn();

		 ::haxe::ui::styles::Style _customStyle;
		 ::haxe::ui::styles::Style get_customStyle();
		::Dynamic get_customStyle_dyn();

		 ::haxe::ui::styles::Style set_customStyle( ::haxe::ui::styles::Style value);
		::Dynamic set_customStyle_dyn();

		::Array< ::String > classes;
		bool cascadeActive;
		void addClass(::String name,::hx::Null< bool >  invalidate,::hx::Null< bool >  recursive);
		::Dynamic addClass_dyn();

		void addClasses(::Array< ::String > names,::hx::Null< bool >  invalidate,::hx::Null< bool >  recursive);
		::Dynamic addClasses_dyn();

		void removeClass(::String name,::hx::Null< bool >  invalidate,::hx::Null< bool >  recursive);
		::Dynamic removeClass_dyn();

		void removeClasses(::Array< ::String > names,::hx::Null< bool >  invalidate,::hx::Null< bool >  recursive);
		::Dynamic removeClasses_dyn();

		bool hasClass(::String name);
		::Dynamic hasClass_dyn();

		void swapClass(::String classToAdd,::String classToRemove,::hx::Null< bool >  invalidate,::hx::Null< bool >  recursive);
		::Dynamic swapClass_dyn();

		::String _styleNames;
		::Array< ::String > _styleNamesList;
		::String get_styleNames();
		::Dynamic get_styleNames_dyn();

		::String set_styleNames(::String value);
		::Dynamic set_styleNames_dyn();

		::String _styleString;
		::String get_styleString();
		::Dynamic get_styleString_dyn();

		::String set_styleString(::String value);
		::Dynamic set_styleString_dyn();

		bool _useCachedStyleSheetRef;
		 ::haxe::ui::styles::StyleSheet _cachedStyleSheetRef;
		 ::haxe::ui::styles::StyleSheet _styleSheet;
		 ::haxe::ui::styles::StyleSheet get_styleSheet();
		::Dynamic get_styleSheet_dyn();

		 ::haxe::ui::styles::StyleSheet set_styleSheet( ::haxe::ui::styles::StyleSheet value);
		::Dynamic set_styleSheet_dyn();

		void resetCachedStyleSheetRef();
		::Dynamic resetCachedStyleSheetRef_dyn();

		bool _includeInLayout;
		bool get_includeInLayout();
		::Dynamic get_includeInLayout_dyn();

		bool set_includeInLayout(bool value);
		::Dynamic set_includeInLayout_dyn();

		 ::haxe::ui::layouts::Layout get_layout();
		::Dynamic get_layout_dyn();

		 ::haxe::ui::layouts::Layout set_layout( ::haxe::ui::layouts::Layout value);
		::Dynamic set_layout_dyn();

		void lockLayout(::hx::Null< bool >  recursive);
		::Dynamic lockLayout_dyn();

		void unlockLayout(::hx::Null< bool >  recursive);
		::Dynamic unlockLayout_dyn();

		void ready();
		::Dynamic ready_dyn();

		void onReady();
		::Dynamic onReady_dyn();

		void onInitialize();
		::Dynamic onInitialize_dyn();

		void onResized();
		::Dynamic onResized_dyn();

		void onMoved();
		::Dynamic onMoved_dyn();

		bool _scriptAccess;
		bool get_scriptAccess();
		::Dynamic get_scriptAccess_dyn();

		bool set_scriptAccess(bool value);
		::Dynamic set_scriptAccess_dyn();

		::Array< ::Dynamic> namedComponents;
		::Array< ::Dynamic> get_namedComponents();
		::Dynamic get_namedComponents_dyn();

		void onThemeChanged();
		::Dynamic onThemeChanged_dyn();

		void initializeComponent();

		bool _initialSizeApplied;
		void validateInitialSize(bool isInitialized);

		virtual void validateComponentData();

		virtual bool validateComponentLayout();

		void enforceSizeConstraints();
		::Dynamic enforceSizeConstraints_dyn();

		void validateComponentStyle();

		void validateComponentPosition();

		void updateComponentDisplay();
		::Dynamic updateComponentDisplay_dyn();

		bool validateComponentAutoSize();
		::Dynamic validateComponentAutoSize_dyn();

		bool _pauseAnimationStyleChanges;
		virtual void applyStyle( ::haxe::ui::styles::Style style);

		void onPointerEventsMouseOver( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseOver_dyn();

		void onPointerEventsMouseOut( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseOut_dyn();

		void onPointerEventsMouseDown( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseDown_dyn();

		void onPointerEventsMouseUp( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseUp_dyn();

		void applyAnimationKeyFrame( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::haxe::ui::styles::animation::AnimationOptions options);
		::Dynamic applyAnimationKeyFrame_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		bool get_isComponentClipped();

		::String cssName;
		::String get_cssName();
		::Dynamic get_cssName_dyn();

		bool isComponentSolid;
		bool get_isComponentSolid();
		::Dynamic get_isComponentSolid_dyn();

		virtual void registerBehaviours();

		 ::Dynamic get_color();
		::Dynamic get_color_dyn();

		 ::Dynamic set_color( ::Dynamic value);
		::Dynamic set_color_dyn();

		 ::Dynamic get_backgroundColor();
		::Dynamic get_backgroundColor_dyn();

		 ::Dynamic set_backgroundColor( ::Dynamic value);
		::Dynamic set_backgroundColor_dyn();

		 ::Dynamic get_backgroundColorEnd();
		::Dynamic get_backgroundColorEnd_dyn();

		 ::Dynamic set_backgroundColorEnd( ::Dynamic value);
		::Dynamic set_backgroundColorEnd_dyn();

		 ::haxe::ui::util::VariantType get_backgroundImage();
		::Dynamic get_backgroundImage_dyn();

		 ::haxe::ui::util::VariantType set_backgroundImage( ::haxe::ui::util::VariantType value);
		::Dynamic set_backgroundImage_dyn();

		 ::Dynamic get_borderColor();
		::Dynamic get_borderColor_dyn();

		 ::Dynamic set_borderColor( ::Dynamic value);
		::Dynamic set_borderColor_dyn();

		 ::Dynamic get_borderSize();
		::Dynamic get_borderSize_dyn();

		 ::Dynamic set_borderSize( ::Dynamic value);
		::Dynamic set_borderSize_dyn();

		 ::Dynamic get_borderRadius();
		::Dynamic get_borderRadius_dyn();

		 ::Dynamic set_borderRadius( ::Dynamic value);
		::Dynamic set_borderRadius_dyn();

		 ::Dynamic get_padding();
		::Dynamic get_padding_dyn();

		 ::Dynamic set_padding( ::Dynamic value);
		::Dynamic set_padding_dyn();

		 ::Dynamic get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		 ::Dynamic set_paddingLeft( ::Dynamic value);
		::Dynamic set_paddingLeft_dyn();

		 ::Dynamic get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		 ::Dynamic set_paddingRight( ::Dynamic value);
		::Dynamic set_paddingRight_dyn();

		 ::Dynamic get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		 ::Dynamic set_paddingTop( ::Dynamic value);
		::Dynamic set_paddingTop_dyn();

		 ::Dynamic get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		 ::Dynamic set_paddingBottom( ::Dynamic value);
		::Dynamic set_paddingBottom_dyn();

		 ::Dynamic get_marginLeft();
		::Dynamic get_marginLeft_dyn();

		 ::Dynamic set_marginLeft( ::Dynamic value);
		::Dynamic set_marginLeft_dyn();

		 ::Dynamic get_marginRight();
		::Dynamic get_marginRight_dyn();

		 ::Dynamic set_marginRight( ::Dynamic value);
		::Dynamic set_marginRight_dyn();

		 ::Dynamic get_marginTop();
		::Dynamic get_marginTop_dyn();

		 ::Dynamic set_marginTop( ::Dynamic value);
		::Dynamic set_marginTop_dyn();

		 ::Dynamic get_marginBottom();
		::Dynamic get_marginBottom_dyn();

		 ::Dynamic set_marginBottom( ::Dynamic value);
		::Dynamic set_marginBottom_dyn();

		 ::Dynamic get_clip();
		::Dynamic get_clip_dyn();

		 ::Dynamic set_clip( ::Dynamic value);
		::Dynamic set_clip_dyn();

		 ::Dynamic get_opacity();
		::Dynamic get_opacity_dyn();

		 ::Dynamic set_opacity( ::Dynamic value);
		::Dynamic set_opacity_dyn();

		::String get_horizontalAlign();
		::Dynamic get_horizontalAlign_dyn();

		::String set_horizontalAlign(::String value);
		::Dynamic set_horizontalAlign_dyn();

		::String get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		::String set_verticalAlign(::String value);
		::Dynamic set_verticalAlign_dyn();

		virtual  ::haxe::ui::core::ComponentContainer self();

		 ::Dynamic _internal__onDragStart;
		Dynamic _internal__onDragStart_dyn() { return _internal__onDragStart;}
		 ::Dynamic onDragStart;
		Dynamic onDragStart_dyn() { return onDragStart;}
		 ::Dynamic set_onDragStart( ::Dynamic value);
		::Dynamic set_onDragStart_dyn();

		 ::Dynamic _internal__onDrag;
		Dynamic _internal__onDrag_dyn() { return _internal__onDrag;}
		 ::Dynamic onDrag;
		Dynamic onDrag_dyn() { return onDrag;}
		 ::Dynamic set_onDrag( ::Dynamic value);
		::Dynamic set_onDrag_dyn();

		 ::Dynamic _internal__onDragEnd;
		Dynamic _internal__onDragEnd_dyn() { return _internal__onDragEnd;}
		 ::Dynamic onDragEnd;
		Dynamic onDragEnd_dyn() { return onDragEnd;}
		 ::Dynamic set_onDragEnd( ::Dynamic value);
		::Dynamic set_onDragEnd_dyn();

		 ::Dynamic _internal__onAnimationStart;
		Dynamic _internal__onAnimationStart_dyn() { return _internal__onAnimationStart;}
		 ::Dynamic onAnimationStart;
		Dynamic onAnimationStart_dyn() { return onAnimationStart;}
		 ::Dynamic set_onAnimationStart( ::Dynamic value);
		::Dynamic set_onAnimationStart_dyn();

		 ::Dynamic _internal__onAnimationFrame;
		Dynamic _internal__onAnimationFrame_dyn() { return _internal__onAnimationFrame;}
		 ::Dynamic onAnimationFrame;
		Dynamic onAnimationFrame_dyn() { return onAnimationFrame;}
		 ::Dynamic set_onAnimationFrame( ::Dynamic value);
		::Dynamic set_onAnimationFrame_dyn();

		 ::Dynamic _internal__onAnimationEnd;
		Dynamic _internal__onAnimationEnd_dyn() { return _internal__onAnimationEnd;}
		 ::Dynamic onAnimationEnd;
		Dynamic onAnimationEnd_dyn() { return onAnimationEnd;}
		 ::Dynamic set_onAnimationEnd( ::Dynamic value);
		::Dynamic set_onAnimationEnd_dyn();

		 ::Dynamic _internal__onClick;
		Dynamic _internal__onClick_dyn() { return _internal__onClick;}
		 ::Dynamic onClick;
		Dynamic onClick_dyn() { return onClick;}
		 ::Dynamic set_onClick( ::Dynamic value);
		::Dynamic set_onClick_dyn();

		 ::Dynamic _internal__onMouseOver;
		Dynamic _internal__onMouseOver_dyn() { return _internal__onMouseOver;}
		 ::Dynamic onMouseOver;
		Dynamic onMouseOver_dyn() { return onMouseOver;}
		 ::Dynamic set_onMouseOver( ::Dynamic value);
		::Dynamic set_onMouseOver_dyn();

		 ::Dynamic _internal__onMouseOut;
		Dynamic _internal__onMouseOut_dyn() { return _internal__onMouseOut;}
		 ::Dynamic onMouseOut;
		Dynamic onMouseOut_dyn() { return onMouseOut;}
		 ::Dynamic set_onMouseOut( ::Dynamic value);
		::Dynamic set_onMouseOut_dyn();

		 ::Dynamic _internal__onDblClick;
		Dynamic _internal__onDblClick_dyn() { return _internal__onDblClick;}
		 ::Dynamic onDblClick;
		Dynamic onDblClick_dyn() { return onDblClick;}
		 ::Dynamic set_onDblClick( ::Dynamic value);
		::Dynamic set_onDblClick_dyn();

		 ::Dynamic _internal__onRightClick;
		Dynamic _internal__onRightClick_dyn() { return _internal__onRightClick;}
		 ::Dynamic onRightClick;
		Dynamic onRightClick_dyn() { return onRightClick;}
		 ::Dynamic set_onRightClick( ::Dynamic value);
		::Dynamic set_onRightClick_dyn();

		 ::Dynamic _internal__onChange;
		Dynamic _internal__onChange_dyn() { return _internal__onChange;}
		 ::Dynamic onChange;
		Dynamic onChange_dyn() { return onChange;}
		 ::Dynamic set_onChange( ::Dynamic value);
		::Dynamic set_onChange_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Component */ 
