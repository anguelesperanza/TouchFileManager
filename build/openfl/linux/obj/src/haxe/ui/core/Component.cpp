#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
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
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_dragdrop_DragManager
#include <haxe/ui/dragdrop/DragManager.h>
#endif
#ifndef INCLUDED_haxe_ui_events_AnimationEvent
#include <haxe/ui/events/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_DragEvent
#include <haxe/ui/events/DragEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayout
#include <haxe/ui/layouts/DelegateLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_Animation
#include <haxe/ui/styles/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ComponentUtil
#include <haxe/ui/util/ComponentUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#include <haxe/ui/validation/ValidationManager.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_42_new,"haxe.ui.core.Component","new",0xf80fa452,"haxe.ui.core.Component.new","haxe/ui/core/Component.hx",42,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_93_create,"haxe.ui.core.Component","create",0xe32f164a,"haxe.ui.core.Component.create","haxe/ui/core/Component.hx",93,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_128_registerComposite,"haxe.ui.core.Component","registerComposite",0x2203fc96,"haxe.ui.core.Component.registerComposite","haxe/ui/core/Component.hx",128,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_131_createDefaults,"haxe.ui.core.Component","createDefaults",0x6c48fcfc,"haxe.ui.core.Component.createDefaults","haxe/ui/core/Component.hx",131,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_134_createChildren,"haxe.ui.core.Component","createChildren",0x2d1945a9,"haxe.ui.core.Component.createChildren","haxe/ui/core/Component.hx",134,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_139_destroyChildren,"haxe.ui.core.Component","destroyChildren",0x9e11834b,"haxe.ui.core.Component.destroyChildren","haxe/ui/core/Component.hx",139,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_142_createLayout,"haxe.ui.core.Component","createLayout",0x5b250c94,"haxe.ui.core.Component.createLayout","haxe/ui/core/Component.hx",142,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_174_get_native,"haxe.ui.core.Component","get_native",0xfe08a7ae,"haxe.ui.core.Component.get_native","haxe/ui/core/Component.hx",174,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_183_set_native,"haxe.ui.core.Component","set_native",0x01864622,"haxe.ui.core.Component.set_native","haxe/ui/core/Component.hx",183,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_221_get_animatable,"haxe.ui.core.Component","get_animatable",0x5e32d675,"haxe.ui.core.Component.get_animatable","haxe/ui/core/Component.hx",221,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_223_set_animatable,"haxe.ui.core.Component","set_animatable",0x7e52bee9,"haxe.ui.core.Component.set_animatable","haxe/ui/core/Component.hx",223,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_243_get_componentAnimation,"haxe.ui.core.Component","get_componentAnimation",0x643c831e,"haxe.ui.core.Component.get_componentAnimation","haxe/ui/core/Component.hx",243,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_245_set_componentAnimation,"haxe.ui.core.Component","set_componentAnimation",0x97e7ff92,"haxe.ui.core.Component.set_componentAnimation","haxe/ui/core/Component.hx",245,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_271_get_screen,"haxe.ui.core.Component","get_screen",0x23491983,"haxe.ui.core.Component.get_screen","haxe/ui/core/Component.hx",271,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_283_get_draggable,"haxe.ui.core.Component","get_draggable",0x535cf756,"haxe.ui.core.Component.get_draggable","haxe/ui/core/Component.hx",283,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_285_set_draggable,"haxe.ui.core.Component","set_draggable",0x9862d962,"haxe.ui.core.Component.set_draggable","haxe/ui/core/Component.hx",285,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_297_get_dragInitiator,"haxe.ui.core.Component","get_dragInitiator",0xc26164e4,"haxe.ui.core.Component.get_dragInitiator","haxe/ui/core/Component.hx",297,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_299_set_dragInitiator,"haxe.ui.core.Component","set_dragInitiator",0xe5cf3cf0,"haxe.ui.core.Component.set_dragInitiator","haxe/ui/core/Component.hx",299,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_314_get_dragOptions,"haxe.ui.core.Component","get_dragOptions",0x12a40453,"haxe.ui.core.Component.get_dragOptions","haxe/ui/core/Component.hx",314,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_320_set_dragOptions,"haxe.ui.core.Component","set_dragOptions",0x0e6f815f,"haxe.ui.core.Component.set_dragOptions","haxe/ui/core/Component.hx",320,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_342_get_rootComponent,"haxe.ui.core.Component","get_rootComponent",0x6f023104,"haxe.ui.core.Component.get_rootComponent","haxe/ui/core/Component.hx",342,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_355_get_numComponents,"haxe.ui.core.Component","get_numComponents",0x5eaa8dc5,"haxe.ui.core.Component.get_numComponents","haxe/ui/core/Component.hx",355,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_379_addComponent,"haxe.ui.core.Component","addComponent",0xeebf302a,"haxe.ui.core.Component.addComponent","haxe/ui/core/Component.hx",379,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_437_containsComponent,"haxe.ui.core.Component","containsComponent",0x37f8d210,"haxe.ui.core.Component.containsComponent","haxe/ui/core/Component.hx",437,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_432_containsComponent,"haxe.ui.core.Component","containsComponent",0x37f8d210,"haxe.ui.core.Component.containsComponent","haxe/ui/core/Component.hx",432,0x3bb69e3f)
static const bool _hx_array_data_1376d360_27[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_459_addComponentAt,"haxe.ui.core.Component","addComponentAt",0x810b47bd,"haxe.ui.core.Component.addComponentAt","haxe/ui/core/Component.hx",459,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_506_onComponentAdded,"haxe.ui.core.Component","onComponentAdded",0xea95b110,"haxe.ui.core.Component.onComponentAdded","haxe/ui/core/Component.hx",506,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_518_removeComponent,"haxe.ui.core.Component","removeComponent",0x0c1582cb,"haxe.ui.core.Component.removeComponent","haxe/ui/core/Component.hx",518,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_579_disposeComponent,"haxe.ui.core.Component","disposeComponent",0x497fe0ec,"haxe.ui.core.Component.disposeComponent","haxe/ui/core/Component.hx",579,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_617_removeComponentAt,"haxe.ui.core.Component","removeComponentAt",0x5e94449e,"haxe.ui.core.Component.removeComponentAt","haxe/ui/core/Component.hx",617,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_680_onComponentRemoved,"haxe.ui.core.Component","onComponentRemoved",0x5ebdaff0,"haxe.ui.core.Component.onComponentRemoved","haxe/ui/core/Component.hx",680,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_683_assignPositionClasses,"haxe.ui.core.Component","assignPositionClasses",0xc1aef400,"haxe.ui.core.Component.assignPositionClasses","haxe/ui/core/Component.hx",683,0x3bb69e3f)
static const ::String _hx_array_data_1376d360_36[] = {
	HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),
};
static const ::String _hx_array_data_1376d360_37[] = {
	HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_700_destroyComponent,"haxe.ui.core.Component","destroyComponent",0xd4295131,"haxe.ui.core.Component.destroyComponent","haxe/ui/core/Component.hx",700,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_708_onDestroy,"haxe.ui.core.Component","onDestroy",0x72573b0d,"haxe.ui.core.Component.onDestroy","haxe/ui/core/Component.hx",708,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_722_walkComponents,"haxe.ui.core.Component","walkComponents",0x417ec8cd,"haxe.ui.core.Component.walkComponents","haxe/ui/core/Component.hx",722,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_729_walkComponents,"haxe.ui.core.Component","walkComponents",0x417ec8cd,"haxe.ui.core.Component.walkComponents","haxe/ui/core/Component.hx",729,0x3bb69e3f)
static const bool _hx_array_data_1376d360_44[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_746_removeAllComponents,"haxe.ui.core.Component","removeAllComponents",0x5ae576a5,"haxe.ui.core.Component.removeAllComponents","haxe/ui/core/Component.hx",746,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_765_matchesSearch,"haxe.ui.core.Component","matchesSearch",0x1adfff2d,"haxe.ui.core.Component.matchesSearch","haxe/ui/core/Component.hx",765,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_789_findComponent,"haxe.ui.core.Component","findComponent",0x2428a7b6,"haxe.ui.core.Component.findComponent","haxe/ui/core/Component.hx",789,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_825_findComponents,"haxe.ui.core.Component","findComponents",0x7f6a17fd,"haxe.ui.core.Component.findComponents","haxe/ui/core/Component.hx",825,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_876_findAncestor,"haxe.ui.core.Component","findAncestor",0x61148f7a,"haxe.ui.core.Component.findAncestor","haxe/ui/core/Component.hx",876,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_901_findComponentsUnderPoint,"haxe.ui.core.Component","findComponentsUnderPoint",0x29ea7675,"haxe.ui.core.Component.findComponentsUnderPoint","haxe/ui/core/Component.hx",901,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_928_hasComponentUnderPoint,"haxe.ui.core.Component","hasComponentUnderPoint",0xbfade349,"haxe.ui.core.Component.hasComponentUnderPoint","haxe/ui/core/Component.hx",928,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_959_getComponentIndex,"haxe.ui.core.Component","getComponentIndex",0xa31313bd,"haxe.ui.core.Component.getComponentIndex","haxe/ui/core/Component.hx",959,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_980_setComponentIndex,"haxe.ui.core.Component","setComponentIndex",0xc680ebc9,"haxe.ui.core.Component.setComponentIndex","haxe/ui/core/Component.hx",980,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1003_getComponentAt,"haxe.ui.core.Component","getComponentAt",0x72d29368,"haxe.ui.core.Component.getComponentAt","haxe/ui/core/Component.hx",1003,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1020_hide,"haxe.ui.core.Component","hide",0x11abd490,"haxe.ui.core.Component.hide","haxe/ui/core/Component.hx",1020,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1039_hideInternal,"haxe.ui.core.Component","hideInternal",0xc99307ed,"haxe.ui.core.Component.hideInternal","haxe/ui/core/Component.hx",1039,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1070_show,"haxe.ui.core.Component","show",0x18f074cb,"haxe.ui.core.Component.show","haxe/ui/core/Component.hx",1070,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1091_showInternal,"haxe.ui.core.Component","showInternal",0x341adb28,"haxe.ui.core.Component.showInternal","haxe/ui/core/Component.hx",1091,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1120_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1120,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1132_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1132,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1126_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1126,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1148_fadeOut,"haxe.ui.core.Component","fadeOut",0x05d5ed64,"haxe.ui.core.Component.fadeOut","haxe/ui/core/Component.hx",1148,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1151_fadeOut,"haxe.ui.core.Component","fadeOut",0x05d5ed64,"haxe.ui.core.Component.fadeOut","haxe/ui/core/Component.hx",1151,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1172_get_hidden,"haxe.ui.core.Component","get_hidden",0x2881dd81,"haxe.ui.core.Component.get_hidden","haxe/ui/core/Component.hx",1172,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1181_set_hidden,"haxe.ui.core.Component","set_hidden",0x2bff7bf5,"haxe.ui.core.Component.set_hidden","haxe/ui/core/Component.hx",1181,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1207_get_customStyle,"haxe.ui.core.Component","get_customStyle",0x95deba49,"haxe.ui.core.Component.get_customStyle","haxe/ui/core/Component.hx",1207,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1213_set_customStyle,"haxe.ui.core.Component","set_customStyle",0x91aa3755,"haxe.ui.core.Component.set_customStyle","haxe/ui/core/Component.hx",1213,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1233_addClass,"haxe.ui.core.Component","addClass",0xf39a3d25,"haxe.ui.core.Component.addClass","haxe/ui/core/Component.hx",1233,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1256_addClasses,"haxe.ui.core.Component","addClasses",0xbc7fe8d3,"haxe.ui.core.Component.addClasses","haxe/ui/core/Component.hx",1256,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1286_removeClass,"haxe.ui.core.Component","removeClass",0x53086b46,"haxe.ui.core.Component.removeClass","haxe/ui/core/Component.hx",1286,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1309_removeClasses,"haxe.ui.core.Component","removeClasses",0x766ea134,"haxe.ui.core.Component.removeClasses","haxe/ui/core/Component.hx",1309,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1338_hasClass,"haxe.ui.core.Component","hasClass",0x0695614c,"haxe.ui.core.Component.hasClass","haxe/ui/core/Component.hx",1338,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1350_swapClass,"haxe.ui.core.Component","swapClass",0x342bde17,"haxe.ui.core.Component.swapClass","haxe/ui/core/Component.hx",1350,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1381_get_styleNames,"haxe.ui.core.Component","get_styleNames",0xf6e51e6e,"haxe.ui.core.Component.get_styleNames","haxe/ui/core/Component.hx",1381,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1383_set_styleNames,"haxe.ui.core.Component","set_styleNames",0x170506e2,"haxe.ui.core.Component.set_styleNames","haxe/ui/core/Component.hx",1383,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1447_get_styleString,"haxe.ui.core.Component","get_styleString",0x054c6b6b,"haxe.ui.core.Component.get_styleString","haxe/ui/core/Component.hx",1447,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1449_set_styleString,"haxe.ui.core.Component","set_styleString",0x0117e877,"haxe.ui.core.Component.set_styleString","haxe/ui/core/Component.hx",1449,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1475_get_styleSheet,"haxe.ui.core.Component","get_styleSheet",0xdc807145,"haxe.ui.core.Component.get_styleSheet","haxe/ui/core/Component.hx",1475,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1495_set_styleSheet,"haxe.ui.core.Component","set_styleSheet",0xfca059b9,"haxe.ui.core.Component.set_styleSheet","haxe/ui/core/Component.hx",1495,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1500_resetCachedStyleSheetRef,"haxe.ui.core.Component","resetCachedStyleSheetRef",0xa7d00742,"haxe.ui.core.Component.resetCachedStyleSheetRef","haxe/ui/core/Component.hx",1500,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1519_get_includeInLayout,"haxe.ui.core.Component","get_includeInLayout",0x181f41c0,"haxe.ui.core.Component.get_includeInLayout","haxe/ui/core/Component.hx",1519,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1525_set_includeInLayout,"haxe.ui.core.Component","set_includeInLayout",0x54bc34cc,"haxe.ui.core.Component.set_includeInLayout","haxe/ui/core/Component.hx",1525,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1536_get_layout,"haxe.ui.core.Component","get_layout",0x34a48cc1,"haxe.ui.core.Component.get_layout","haxe/ui/core/Component.hx",1536,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1538_set_layout,"haxe.ui.core.Component","set_layout",0x38222b35,"haxe.ui.core.Component.set_layout","haxe/ui/core/Component.hx",1538,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1553_lockLayout,"haxe.ui.core.Component","lockLayout",0x8ec36f43,"haxe.ui.core.Component.lockLayout","haxe/ui/core/Component.hx",1553,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1566_unlockLayout,"haxe.ui.core.Component","unlockLayout",0xef854e5c,"haxe.ui.core.Component.unlockLayout","haxe/ui/core/Component.hx",1566,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1590_ready,"haxe.ui.core.Component","ready",0x2408d4d5,"haxe.ui.core.Component.ready","haxe/ui/core/Component.hx",1590,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1612_ready,"haxe.ui.core.Component","ready",0x2408d4d5,"haxe.ui.core.Component.ready","haxe/ui/core/Component.hx",1612,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1630_onReady,"haxe.ui.core.Component","onReady",0x5191f3b6,"haxe.ui.core.Component.onReady","haxe/ui/core/Component.hx",1630,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1633_onInitialize,"haxe.ui.core.Component","onInitialize",0xa515f11d,"haxe.ui.core.Component.onInitialize","haxe/ui/core/Component.hx",1633,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1637_onResized,"haxe.ui.core.Component","onResized",0xb1446a03,"haxe.ui.core.Component.onResized","haxe/ui/core/Component.hx",1637,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1641_onMoved,"haxe.ui.core.Component","onMoved",0x773d1f86,"haxe.ui.core.Component.onMoved","haxe/ui/core/Component.hx",1641,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1687_get_scriptAccess,"haxe.ui.core.Component","get_scriptAccess",0x1a29fb66,"haxe.ui.core.Component.get_scriptAccess","haxe/ui/core/Component.hx",1687,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1689_set_scriptAccess,"haxe.ui.core.Component","set_scriptAccess",0x706be8da,"haxe.ui.core.Component.set_scriptAccess","haxe/ui/core/Component.hx",1689,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1704_get_namedComponents,"haxe.ui.core.Component","get_namedComponents",0xbc51b138,"haxe.ui.core.Component.get_namedComponents","haxe/ui/core/Component.hx",1704,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1794_onThemeChanged,"haxe.ui.core.Component","onThemeChanged",0x92ad2af8,"haxe.ui.core.Component.onThemeChanged","haxe/ui/core/Component.hx",1794,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1814_initializeComponent,"haxe.ui.core.Component","initializeComponent",0x4b914d3f,"haxe.ui.core.Component.initializeComponent","haxe/ui/core/Component.hx",1814,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1838_validateInitialSize,"haxe.ui.core.Component","validateInitialSize",0xea31ca61,"haxe.ui.core.Component.validateInitialSize","haxe/ui/core/Component.hx",1838,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1861_validateComponentData,"haxe.ui.core.Component","validateComponentData",0x87072783,"haxe.ui.core.Component.validateComponentData","haxe/ui/core/Component.hx",1861,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1872_validateComponentLayout,"haxe.ui.core.Component","validateComponentLayout",0xeaf64843,"haxe.ui.core.Component.validateComponentLayout","haxe/ui/core/Component.hx",1872,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1907_enforceSizeConstraints,"haxe.ui.core.Component","enforceSizeConstraints",0x6ae632c1,"haxe.ui.core.Component.enforceSizeConstraints","haxe/ui/core/Component.hx",1907,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1964_validateComponentStyle,"haxe.ui.core.Component","validateComponentStyle",0x4ed101b8,"haxe.ui.core.Component.validateComponentStyle","haxe/ui/core/Component.hx",1964,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1994_validateComponentPosition,"haxe.ui.core.Component","validateComponentPosition",0x9b049282,"haxe.ui.core.Component.validateComponentPosition","haxe/ui/core/Component.hx",1994,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2002_updateComponentDisplay,"haxe.ui.core.Component","updateComponentDisplay",0x3c5a127c,"haxe.ui.core.Component.updateComponentDisplay","haxe/ui/core/Component.hx",2002,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2022_validateComponentAutoSize,"haxe.ui.core.Component","validateComponentAutoSize",0xff8381a9,"haxe.ui.core.Component.validateComponentAutoSize","haxe/ui/core/Component.hx",2022,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2045_applyStyle,"haxe.ui.core.Component","applyStyle",0x1ad38f31,"haxe.ui.core.Component.applyStyle","haxe/ui/core/Component.hx",2045,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2157_onPointerEventsMouseOver,"haxe.ui.core.Component","onPointerEventsMouseOver",0xa08c12d0,"haxe.ui.core.Component.onPointerEventsMouseOver","haxe/ui/core/Component.hx",2157,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2161_onPointerEventsMouseOut,"haxe.ui.core.Component","onPointerEventsMouseOut",0xfafae292,"haxe.ui.core.Component.onPointerEventsMouseOut","haxe/ui/core/Component.hx",2161,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2165_onPointerEventsMouseDown,"haxe.ui.core.Component","onPointerEventsMouseDown",0x994179de,"haxe.ui.core.Component.onPointerEventsMouseDown","haxe/ui/core/Component.hx",2165,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2169_onPointerEventsMouseUp,"haxe.ui.core.Component","onPointerEventsMouseUp",0x7f6750d7,"haxe.ui.core.Component.onPointerEventsMouseUp","haxe/ui/core/Component.hx",2169,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2188_applyAnimationKeyFrame,"haxe.ui.core.Component","applyAnimationKeyFrame",0xb58d5732,"haxe.ui.core.Component.applyAnimationKeyFrame","haxe/ui/core/Component.hx",2188,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2176_applyAnimationKeyFrame,"haxe.ui.core.Component","applyAnimationKeyFrame",0xb58d5732,"haxe.ui.core.Component.applyAnimationKeyFrame","haxe/ui/core/Component.hx",2176,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2202_cloneComponent,"haxe.ui.core.Component","cloneComponent",0x90cb96ee,"haxe.ui.core.Component.cloneComponent","haxe/ui/core/Component.hx",2202,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2223_get_isComponentClipped,"haxe.ui.core.Component","get_isComponentClipped",0x606cd163,"haxe.ui.core.Component.get_isComponentClipped","haxe/ui/core/Component.hx",2223,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2234_get_cssName,"haxe.ui.core.Component","get_cssName",0x0d3b35b7,"haxe.ui.core.Component.get_cssName","haxe/ui/core/Component.hx",2234,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2249_get_isComponentSolid,"haxe.ui.core.Component","get_isComponentSolid",0x9e949c8f,"haxe.ui.core.Component.get_isComponentSolid","haxe/ui/core/Component.hx",2249,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_523_registerBehaviours,"haxe.ui.core.Component","registerBehaviours",0x24781427,"haxe.ui.core.Component.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_color,"haxe.ui.core.Component","get_color",0x042c232c,"haxe.ui.core.Component.get_color","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_color,"haxe.ui.core.Component","set_color",0xe77d0f38,"haxe.ui.core.Component.set_color","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_backgroundColor,"haxe.ui.core.Component","get_backgroundColor",0xb6a0759e,"haxe.ui.core.Component.get_backgroundColor","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_backgroundColor,"haxe.ui.core.Component","set_backgroundColor",0xf33d68aa,"haxe.ui.core.Component.set_backgroundColor","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_backgroundColorEnd,"haxe.ui.core.Component","get_backgroundColorEnd",0xebfb1cdd,"haxe.ui.core.Component.get_backgroundColorEnd","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_backgroundColorEnd,"haxe.ui.core.Component","set_backgroundColorEnd",0x1fa69951,"haxe.ui.core.Component.set_backgroundColorEnd","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_backgroundImage,"haxe.ui.core.Component","get_backgroundImage",0x29ad2396,"haxe.ui.core.Component.get_backgroundImage","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_backgroundImage,"haxe.ui.core.Component","set_backgroundImage",0x664a16a2,"haxe.ui.core.Component.set_backgroundImage","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_borderColor,"haxe.ui.core.Component","get_borderColor",0x5359eb60,"haxe.ui.core.Component.get_borderColor","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_borderColor,"haxe.ui.core.Component","set_borderColor",0x4f25686c,"haxe.ui.core.Component.set_borderColor","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_borderSize,"haxe.ui.core.Component","get_borderSize",0xe7583564,"haxe.ui.core.Component.get_borderSize","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_borderSize,"haxe.ui.core.Component","set_borderSize",0x07781dd8,"haxe.ui.core.Component.set_borderSize","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_borderRadius,"haxe.ui.core.Component","get_borderRadius",0x85c413b5,"haxe.ui.core.Component.get_borderRadius","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_borderRadius,"haxe.ui.core.Component","set_borderRadius",0xdc060129,"haxe.ui.core.Component.set_borderRadius","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_padding,"haxe.ui.core.Component","get_padding",0x62f3cfda,"haxe.ui.core.Component.get_padding","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_padding,"haxe.ui.core.Component","set_padding",0x6d60d6e6,"haxe.ui.core.Component.set_padding","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_paddingLeft,"haxe.ui.core.Component","get_paddingLeft",0x026af901,"haxe.ui.core.Component.get_paddingLeft","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_paddingLeft,"haxe.ui.core.Component","set_paddingLeft",0xfe36760d,"haxe.ui.core.Component.set_paddingLeft","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_paddingRight,"haxe.ui.core.Component","get_paddingRight",0x923bf5a2,"haxe.ui.core.Component.get_paddingRight","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_paddingRight,"haxe.ui.core.Component","set_paddingRight",0xe87de316,"haxe.ui.core.Component.set_paddingRight","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_paddingTop,"haxe.ui.core.Component","get_paddingTop",0x1a7032db,"haxe.ui.core.Component.get_paddingTop","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_paddingTop,"haxe.ui.core.Component","set_paddingTop",0x3a901b4f,"haxe.ui.core.Component.set_paddingTop","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_paddingBottom,"haxe.ui.core.Component","get_paddingBottom",0x798d8a65,"haxe.ui.core.Component.get_paddingBottom","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_paddingBottom,"haxe.ui.core.Component","set_paddingBottom",0x9cfb6271,"haxe.ui.core.Component.set_paddingBottom","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_marginLeft,"haxe.ui.core.Component","get_marginLeft",0x654788ec,"haxe.ui.core.Component.get_marginLeft","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_marginLeft,"haxe.ui.core.Component","set_marginLeft",0x85677160,"haxe.ui.core.Component.set_marginLeft","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_marginRight,"haxe.ui.core.Component","get_marginRight",0xb05d5357,"haxe.ui.core.Component.get_marginRight","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_marginRight,"haxe.ui.core.Component","set_marginRight",0xac28d063,"haxe.ui.core.Component.set_marginRight","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_marginTop,"haxe.ui.core.Component","get_marginTop",0xe3c74950,"haxe.ui.core.Component.get_marginTop","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_marginTop,"haxe.ui.core.Component","set_marginTop",0x28cd2b5c,"haxe.ui.core.Component.set_marginTop","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_marginBottom,"haxe.ui.core.Component","get_marginBottom",0xb89e2b10,"haxe.ui.core.Component.get_marginBottom","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_marginBottom,"haxe.ui.core.Component","set_marginBottom",0x0ee01884,"haxe.ui.core.Component.set_marginBottom","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_clip,"haxe.ui.core.Component","get_clip",0xf361c927,"haxe.ui.core.Component.get_clip","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_clip,"haxe.ui.core.Component","set_clip",0xa1bf229b,"haxe.ui.core.Component.set_clip","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_opacity,"haxe.ui.core.Component","get_opacity",0x7ddbd3d4,"haxe.ui.core.Component.get_opacity","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_opacity,"haxe.ui.core.Component","set_opacity",0x8848dae0,"haxe.ui.core.Component.set_opacity","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_horizontalAlign,"haxe.ui.core.Component","get_horizontalAlign",0x9dc0b64a,"haxe.ui.core.Component.get_horizontalAlign","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_horizontalAlign,"haxe.ui.core.Component","set_horizontalAlign",0xda5da956,"haxe.ui.core.Component.set_horizontalAlign","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_264_get_verticalAlign,"haxe.ui.core.Component","get_verticalAlign",0x0e704138,"haxe.ui.core.Component.get_verticalAlign","haxe/ui/macros/Macros.hx",264,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_277_set_verticalAlign,"haxe.ui.core.Component","set_verticalAlign",0x31de1944,"haxe.ui.core.Component.set_verticalAlign","haxe/ui/macros/Macros.hx",277,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_493_self,"haxe.ui.core.Component","self",0x18ee2b5a,"haxe.ui.core.Component.self","haxe/ui/macros/Macros.hx",493,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onDragStart,"haxe.ui.core.Component","set_onDragStart",0x80f3f244,"haxe.ui.core.Component.set_onDragStart","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onDrag,"haxe.ui.core.Component","set_onDrag",0xc463b13e,"haxe.ui.core.Component.set_onDrag","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onDragEnd,"haxe.ui.core.Component","set_onDragEnd",0x0370e53d,"haxe.ui.core.Component.set_onDragEnd","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onAnimationStart,"haxe.ui.core.Component","set_onAnimationStart",0xf1e5cc88,"haxe.ui.core.Component.set_onAnimationStart","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onAnimationFrame,"haxe.ui.core.Component","set_onAnimationFrame",0x745dd053,"haxe.ui.core.Component.set_onAnimationFrame","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onAnimationEnd,"haxe.ui.core.Component","set_onAnimationEnd",0x3c6ce681,"haxe.ui.core.Component.set_onAnimationEnd","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onClick,"haxe.ui.core.Component","set_onClick",0x7b7f97be,"haxe.ui.core.Component.set_onClick","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onMouseOver,"haxe.ui.core.Component","set_onMouseOver",0x90a0588f,"haxe.ui.core.Component.set_onMouseOver","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onMouseOut,"haxe.ui.core.Component","set_onMouseOut",0x825ed9b3,"haxe.ui.core.Component.set_onMouseOut","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onDblClick,"haxe.ui.core.Component","set_onDblClick",0x2b43e084,"haxe.ui.core.Component.set_onDblClick","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onRightClick,"haxe.ui.core.Component","set_onRightClick",0xf13cfb96,"haxe.ui.core.Component.set_onRightClick","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_230_set_onChange,"haxe.ui.core.Component","set_onChange",0x41497d3a,"haxe.ui.core.Component.set_onChange","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1716_addNamedComponentsFrom,"haxe.ui.core.Component","addNamedComponentsFrom",0x87ba48e6,"haxe.ui.core.Component.addNamedComponentsFrom","haxe/ui/core/Component.hx",1716,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_42_boot,"haxe.ui.core.Component","boot",0x0db92400,"haxe.ui.core.Component.boot","haxe/ui/core/Component.hx",42,0x3bb69e3f)
namespace haxe{
namespace ui{
namespace core{

void Component_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_42_new)
HXLINE(2044)		this->_pauseAnimationStyleChanges = false;
HXLINE(1836)		this->_initialSizeApplied = false;
HXLINE(1679)		this->_scriptAccess = true;
HXLINE(1511)		this->_includeInLayout = true;
HXLINE(1473)		this->_styleSheet = null();
HXLINE(1472)		this->_cachedStyleSheetRef = null();
HXLINE(1471)		this->_useCachedStyleSheetRef = false;
HXLINE(1377)		this->_styleNamesList = null();
HXLINE(1376)		this->_styleNames = null();
HXLINE(1223)		this->cascadeActive = false;
HXLINE(1221)		this->classes = ::Array_obj< ::String >::__new(0);
HXLINE(1198)		this->_customStyle = null();
HXLINE(1165)		this->_hidden = false;
HXLINE(1065)		this->_invalidateRecursivelyOnShow = true;
HXLINE( 330)		this->bindingRoot = false;
HXLINE( 312)		this->_dragOptions = null();
HXLINE( 294)		this->_dragInitiator = null();
HXLINE( 260)		this->userData = null();
HXLINE( 209)		this->_animatable = true;
HXLINE( 169)		this->_native = null();
HXLINE(  92)		this->_defaultLayoutClass = null();
HXLINE(  87)		this->componentTabIndex = 0;
HXLINE(  48)		super::__construct();
HXLINE(  56)		this->addClass(::haxe::ui::Backend_obj::get_id(),false,null());
HXLINE(  58)		::hx::Class c = ::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  59)		while(::hx::IsNotNull( c )){
HXLINE(  60)			::String css = ::Type_obj::getClassName(c);
HXLINE(  61)			::String className = ( (::String)(css.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE(  62)			this->addClass(className.toLowerCase(),false,null());
HXLINE(  63)			this->addClass(::haxe::ui::util::StringUtil_obj::toDashes(className,null()),false,null());
HXLINE(  64)			if ((className.toLowerCase() == HX_("component",bd,f0,53,0f))) {
HXLINE(  65)				goto _hx_goto_0;
            			}
HXLINE(  67)			c = ::Type_obj::getSuperClass(c);
            		}
            		_hx_goto_0:;
HXLINE(  73)		 ::haxe::ui::styles::Style s = ::haxe::ui::Toolkit_obj::styleSheet->buildStyleFor(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( s->native )) {
HXLINE(  74)			_hx_tmp = (this->get_hasNativeEntry() == true);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			this->set_native(s->native);
            		}
            		else {
HXLINE(  77)			this->create();
            		}
HXLINE(  81)		if ((::haxe::ui::Toolkit_obj::get_initialized() == false)) {
HXLINE(  82)			::haxe::Log_obj::trace(HX_("WARNING: You are trying to create a component before the toolkit has been initialized. This could have undefined results.",5e,d9,e2,65),::hx::SourceInfo(HX_("haxe/ui/core/Component.hx",3f,9e,b6,3b),82,HX_("haxe.ui.core.Component",60,d3,76,13),HX_("new",60,d0,53,00)));
            		}
            	}

Dynamic Component_obj::__CreateEmpty() { return new Component_obj; }

void *Component_obj::_hx_vtable = 0;

Dynamic Component_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Component_obj > _hx_result = new Component_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Component_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			} else {
				return inClassId==(int)0x1f4df417;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x4af7dd8e;
				}
			} else {
				return inClassId==(int)0x6b353933;
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

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_Component__hx_haxe_ui_validation_IValidating= {
	( int (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_depth,
	( int (::hx::Object::*)(int))&::haxe::ui::core::Component_obj::set_depth,
	( ::String (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::haxe::ui::core::Component_obj::set_id,
	( bool (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_isComponentOffscreen,
	( void (::hx::Object::*)(::hx::Null< bool > ))&::haxe::ui::core::Component_obj::validateComponent,
	( void (::hx::Object::*)())&::haxe::ui::core::Component_obj::updateComponentDisplay,
};

void *Component_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_Component__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

void Component_obj::create(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_93_create)
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		if (::hx::IsNotEq( this->get_native(),false )) {
HXLINE(  94)			_hx_tmp = ::hx::IsNull( this->get_native() );
            		}
            		else {
HXLINE(  94)			_hx_tmp = true;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  95)			this->registerComposite();
            		}
HXLINE(  97)		this->createDefaults();
HXLINE(  98)		this->handleCreate(( (bool)(this->get_native()) ));
HXLINE(  99)		this->destroyChildren();
HXLINE( 100)		this->registerBehaviours();
HXLINE( 101)		this->behaviours->replaceNative();
HXLINE( 103)		bool _hx_tmp1;
HXDLIN( 103)		if (::hx::IsNotEq( this->get_native(),false )) {
HXLINE( 103)			_hx_tmp1 = ::hx::IsNull( this->get_native() );
            		}
            		else {
HXLINE( 103)			_hx_tmp1 = true;
            		}
HXDLIN( 103)		if (_hx_tmp1) {
HXLINE( 104)			if (::hx::IsNotNull( this->_compositeBuilderClass )) {
HXLINE( 105)				if (::hx::IsNull( this->_compositeBuilder )) {
HXLINE( 106)					this->_compositeBuilder = ( ( ::haxe::ui::core::CompositeBuilder)(::Type_obj::createInstance(this->_compositeBuilderClass,::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
            				}
HXLINE( 108)				this->_compositeBuilder->create();
            			}
HXLINE( 110)			this->createChildren();
HXLINE( 111)			bool _hx_tmp;
HXDLIN( 111)			if (::hx::IsNotNull( this->_internalEventsClass )) {
HXLINE( 111)				_hx_tmp = ::hx::IsNull( this->_internalEvents );
            			}
            			else {
HXLINE( 111)				_hx_tmp = false;
            			}
HXDLIN( 111)			if (_hx_tmp) {
HXLINE( 112)				this->registerInternalEvents(this->_internalEventsClass,null());
            			}
            		}
            		else {
HXLINE( 115)			::String builderClass = this->getNativeConfigProperty(HX_(".builder.@class",99,29,ba,a8),null());
HXLINE( 116)			if (::hx::IsNotNull( builderClass )) {
HXLINE( 117)				if (::hx::IsNull( this->_compositeBuilder )) {
HXLINE( 118)					this->_compositeBuilder = ( ( ::haxe::ui::core::CompositeBuilder)(::Type_obj::createInstance(::Type_obj::resolveClass(builderClass),::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
            				}
HXLINE( 120)				this->_compositeBuilder->create();
            			}
            		}
HXLINE( 123)		this->behaviours->applyDefaults();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,create,(void))

void Component_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_128_registerComposite)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,registerComposite,(void))

void Component_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_131_createDefaults)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createDefaults,(void))

void Component_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_134_createChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createChildren,(void))

void Component_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_139_destroyChildren)
HXDLIN( 139)		this->unregisterInternalEvents();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,destroyChildren,(void))

 ::haxe::ui::layouts::Layout Component_obj::createLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_142_createLayout)
HXLINE( 143)		 ::haxe::ui::layouts::Layout l = null();
HXLINE( 144)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 145)			 ::haxe::ds::StringMap sizeProps = this->getNativeConfigProperties(HX_(".size",ef,4f,c2,c8));
HXLINE( 146)			bool _hx_tmp;
HXDLIN( 146)			if (::hx::IsNotNull( sizeProps )) {
HXLINE( 146)				_hx_tmp = sizeProps->exists(HX_("class",38,78,58,48));
            			}
            			else {
HXLINE( 146)				_hx_tmp = false;
            			}
HXDLIN( 146)			if (_hx_tmp) {
HXLINE( 147)				 ::haxe::ui::layouts::DelegateLayoutSize size = ( ( ::haxe::ui::layouts::DelegateLayoutSize)(::Type_obj::createInstance(::Type_obj::resolveClass(sizeProps->get_string(HX_("class",38,78,58,48))),::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 148)				size->config = sizeProps;
HXLINE( 149)				l =  ::haxe::ui::layouts::DelegateLayout_obj::__alloc( HX_CTX ,size);
            			}
            			else {
HXLINE( 151)				 ::haxe::ds::StringMap layoutProps = this->getNativeConfigProperties(HX_(".layout",58,05,94,d1));
HXLINE( 152)				bool _hx_tmp;
HXDLIN( 152)				if (::hx::IsNotNull( layoutProps )) {
HXLINE( 152)					_hx_tmp = layoutProps->exists(HX_("class",38,78,58,48));
            				}
            				else {
HXLINE( 152)					_hx_tmp = false;
            				}
HXDLIN( 152)				if (_hx_tmp) {
HXLINE( 153)					l = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(::Type_obj::resolveClass(layoutProps->get_string(HX_("class",38,78,58,48))),::cpp::VirtualArray_obj::__new(0))) );
            				}
            			}
            		}
HXLINE( 158)		if (::hx::IsNull( l )) {
HXLINE( 159)			if (::hx::IsNotNull( this->_defaultLayoutClass )) {
HXLINE( 160)				l = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(this->_defaultLayoutClass,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE( 162)				l =  ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX );
            			}
            		}
HXLINE( 166)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createLayout,return )

 ::Dynamic Component_obj::get_native(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_174_get_native)
HXLINE( 175)		if (::hx::IsNull( this->_native )) {
HXLINE( 176)			return false;
            		}
HXLINE( 178)		if ((this->get_hasNativeEntry() == false)) {
HXLINE( 179)			return false;
            		}
HXLINE( 181)		return this->_native;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_native,return )

 ::Dynamic Component_obj::set_native( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_183_set_native)
HXLINE( 184)		if ((this->get_hasNativeEntry() == false)) {
HXLINE( 185)			return value;
            		}
HXLINE( 187)		if (::hx::IsEq( this->_native,value )) {
HXLINE( 188)			return value;
            		}
HXLINE( 191)		this->_native = value;
HXLINE( 192)		this->get_customStyle()->native = value;
HXLINE( 193)		bool _hx_tmp;
HXDLIN( 193)		if (::hx::IsEq( this->_native,true )) {
HXLINE( 193)			_hx_tmp = this->get_hasNativeEntry();
            		}
            		else {
HXLINE( 193)			_hx_tmp = false;
            		}
HXDLIN( 193)		if (_hx_tmp) {
HXLINE( 194)			this->addClass(HX_(":native",51,b1,f9,8d),null(),null());
            		}
            		else {
HXLINE( 196)			this->removeClass(HX_(":native",51,b1,f9,8d),null(),null());
            		}
HXLINE( 199)		this->behaviours->cache();
HXLINE( 200)		this->behaviours->detatch();
HXLINE( 201)		this->create();
HXLINE( 202)		if (::hx::IsNotNull( this->get_layout() )) {
HXLINE( 203)			this->set_layout(this->createLayout());
            		}
HXLINE( 205)		this->behaviours->restore();
HXLINE( 206)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_native,return )

bool Component_obj::get_animatable(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_221_get_animatable)
HXDLIN( 221)		return this->_animatable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_animatable,return )

bool Component_obj::set_animatable(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_223_set_animatable)
HXLINE( 224)		if ((this->_animatable != value)) {
HXLINE( 225)			bool _hx_tmp;
HXDLIN( 225)			if ((value == false)) {
HXLINE( 225)				_hx_tmp = ::hx::IsNotNull( this->_componentAnimation );
            			}
            			else {
HXLINE( 225)				_hx_tmp = false;
            			}
HXDLIN( 225)			if (_hx_tmp) {
HXLINE( 226)				this->_componentAnimation->stop();
HXLINE( 227)				this->_componentAnimation = null();
            			}
HXLINE( 230)			this->_animatable = value;
            		}
HXLINE( 232)		this->_animatable = value;
HXLINE( 233)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_animatable,return )

 ::haxe::ui::styles::animation::Animation Component_obj::get_componentAnimation(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_243_get_componentAnimation)
HXDLIN( 243)		return this->_componentAnimation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_componentAnimation,return )

 ::haxe::ui::styles::animation::Animation Component_obj::set_componentAnimation( ::haxe::ui::styles::animation::Animation value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_245_set_componentAnimation)
HXLINE( 246)		bool _hx_tmp;
HXDLIN( 246)		if (::hx::IsInstanceNotEq( this->_componentAnimation,value )) {
HXLINE( 246)			_hx_tmp = (this->_animatable == true);
            		}
            		else {
HXLINE( 246)			_hx_tmp = false;
            		}
HXDLIN( 246)		if (_hx_tmp) {
HXLINE( 247)			if (::hx::IsNotNull( this->_componentAnimation )) {
HXLINE( 248)				this->_componentAnimation->stop();
            			}
HXLINE( 251)			this->_componentAnimation = value;
            		}
HXLINE( 254)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_componentAnimation,return )

 ::haxe::ui::core::Screen Component_obj::get_screen(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_271_get_screen)
HXDLIN( 271)		return ::haxe::ui::Toolkit_obj::get_screen();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_screen,return )

bool Component_obj::get_draggable(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_283_get_draggable)
HXDLIN( 283)		return ::haxe::ui::dragdrop::DragManager_obj::get_instance()->isRegisteredDraggable(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_draggable,return )

bool Component_obj::set_draggable(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_285_set_draggable)
HXLINE( 286)		if ((value == true)) {
HXLINE( 287)			 ::haxe::ui::dragdrop::DragManager _hx_tmp = ::haxe::ui::dragdrop::DragManager_obj::get_instance();
HXDLIN( 287)			_hx_tmp->registerDraggable(::hx::ObjectPtr<OBJ_>(this),this->get_dragOptions());
            		}
            		else {
HXLINE( 289)			::haxe::ui::dragdrop::DragManager_obj::get_instance()->unregisterDraggable(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 291)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_draggable,return )

 ::haxe::ui::core::Component Component_obj::get_dragInitiator(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_297_get_dragInitiator)
HXDLIN( 297)		return this->_dragInitiator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_dragInitiator,return )

 ::haxe::ui::core::Component Component_obj::set_dragInitiator( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_299_set_dragInitiator)
HXLINE( 300)		this->_dragInitiator = value;
HXLINE( 301)		if (::hx::IsNotNull( value )) {
HXLINE( 302)			if (::hx::IsNotNull( this->_dragOptions )) {
HXLINE( 303)				this->_dragOptions->__SetField(HX_("mouseTarget",56,27,75,7c),value,::hx::paccDynamic);
            			}
HXLINE( 305)			this->set_draggable(true);
            		}
            		else {
HXLINE( 307)			this->set_draggable(false);
            		}
HXLINE( 309)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_dragInitiator,return )

 ::Dynamic Component_obj::get_dragOptions(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_314_get_dragOptions)
HXLINE( 315)		if (::hx::IsNull( this->_dragOptions )) {
HXLINE( 316)			this->_dragOptions =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("mouseTarget",56,27,75,7c),this->_dragInitiator));
            		}
HXLINE( 318)		return this->_dragOptions;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_dragOptions,return )

 ::Dynamic Component_obj::set_dragOptions( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_320_set_dragOptions)
HXLINE( 321)		this->_dragOptions = value;
HXLINE( 322)		this->set_draggable(true);
HXLINE( 323)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_dragOptions,return )

 ::haxe::ui::core::Component Component_obj::get_rootComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_342_get_rootComponent)
HXLINE( 343)		 ::haxe::ui::core::Component r = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 344)		while(::hx::IsNotNull( r->parentComponent )){
HXLINE( 345)			r = r->parentComponent;
            		}
HXLINE( 347)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_rootComponent,return )

int Component_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_355_get_numComponents)
HXLINE( 356)		int n = 0;
HXLINE( 357)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 358)			 ::Dynamic builderCount = this->_compositeBuilder->get_numComponents();
HXLINE( 359)			if (::hx::IsNotNull( builderCount )) {
HXLINE( 360)				n = ( (int)(builderCount) );
            			}
            			else {
HXLINE( 361)				if (::hx::IsNotNull( this->_children )) {
HXLINE( 362)					n = this->_children->length;
            				}
            			}
            		}
            		else {
HXLINE( 364)			if (::hx::IsNotNull( this->_children )) {
HXLINE( 365)				n = this->_children->length;
            			}
            		}
HXLINE( 367)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_numComponents,return )

 ::haxe::ui::core::Component Component_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_379_addComponent)
HXLINE( 380)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 381)			 ::haxe::ui::core::Component v = this->_compositeBuilder->addComponent(child);
HXLINE( 382)			if (::hx::IsNotNull( v )) {
HXLINE( 383)				v->set_scriptAccess(this->get_scriptAccess());
HXLINE( 384)				return v;
            			}
            		}
HXLINE( 388)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 389)			bool allowChildren = this->getNativeConfigPropertyBool(HX_(".@allowChildren",56,37,b0,b1),true);
HXLINE( 390)			if ((allowChildren == false)) {
HXLINE( 391)				return child;
            			}
            		}
HXLINE( 395)		child->parentComponent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 396)		child->_isDisposed = false;
HXLINE( 398)		if (::hx::IsNull( this->_children )) {
HXLINE( 399)			this->_children = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 401)		this->_children->push(child);
HXLINE( 403)		this->handleAddComponent(child);
HXLINE( 404)		if (this->_componentReady) {
HXLINE( 405)			child->ready();
            		}
HXLINE( 408)		this->assignPositionClasses(null());
HXLINE( 409)		{
HXLINE( 409)			bool _hx_tmp;
HXDLIN( 409)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 409)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 409)				_hx_tmp = true;
            			}
HXDLIN( 409)			if (!(_hx_tmp)) {
HXLINE( 409)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 410)		if (this->get_disabled()) {
HXLINE( 411)			child->set_disabled(true);
            		}
HXLINE( 414)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 415)			this->_compositeBuilder->onComponentAdded(child);
            		}
HXLINE( 418)		this->onComponentAdded(child);
HXLINE( 419)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentadded",e3,16,1d,d8),null(),null()));
HXLINE( 420)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentaddedtoparent",c8,6a,5b,68),null(),null()));
HXLINE( 422)		child->set_scriptAccess(this->get_scriptAccess());
HXLINE( 423)		return child;
            	}


bool Component_obj::containsComponent( ::haxe::ui::core::Component child){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,contains, ::haxe::ui::core::Component,child) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_437_containsComponent)
HXLINE( 438)			if (::hx::IsInstanceEq( child,c )) {
HXLINE( 439)				contains[0] = true;
            			}
HXLINE( 441)			return !(contains->__get(0));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_432_containsComponent)
HXLINE( 433)		if (::hx::IsNull( child )) {
HXLINE( 434)			return false;
            		}
HXLINE( 436)		::Array< bool > contains = ::Array_obj< bool >::fromData( _hx_array_data_1376d360_27,1);
HXLINE( 437)		this->walkComponents( ::Dynamic(new _hx_Closure_0(contains,child)));
HXLINE( 443)		return contains->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,containsComponent,return )

 ::haxe::ui::core::Component Component_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_459_addComponentAt)
HXLINE( 460)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 461)			 ::haxe::ui::core::Component v = this->_compositeBuilder->addComponentAt(child,index);
HXLINE( 462)			if (::hx::IsNotNull( v )) {
HXLINE( 463)				v->set_scriptAccess(this->get_scriptAccess());
HXLINE( 464)				return v;
            			}
            		}
HXLINE( 468)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 469)			bool allowChildren = this->getNativeConfigPropertyBool(HX_(".@allowChildren",56,37,b0,b1),true);
HXLINE( 470)			if ((allowChildren == false)) {
HXLINE( 471)				return child;
            			}
            		}
HXLINE( 475)		child->parentComponent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 476)		child->_isDisposed = false;
HXLINE( 478)		if (::hx::IsNull( this->_children )) {
HXLINE( 479)			this->_children = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 481)		this->_children->insert(index,child);
HXLINE( 483)		this->handleAddComponentAt(child,index);
HXLINE( 484)		if (this->_componentReady) {
HXLINE( 485)			child->ready();
            		}
HXLINE( 488)		this->assignPositionClasses(null());
HXLINE( 489)		{
HXLINE( 489)			bool _hx_tmp;
HXDLIN( 489)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 489)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 489)				_hx_tmp = true;
            			}
HXDLIN( 489)			if (!(_hx_tmp)) {
HXLINE( 489)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 490)		if (this->get_disabled()) {
HXLINE( 491)			child->set_disabled(true);
            		}
HXLINE( 494)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 495)			this->_compositeBuilder->onComponentAdded(child);
            		}
HXLINE( 498)		this->onComponentAdded(child);
HXLINE( 499)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentadded",e3,16,1d,d8),null(),null()));
HXLINE( 500)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentaddedtoparent",c8,6a,5b,68),null(),null()));
HXLINE( 502)		child->set_scriptAccess(this->get_scriptAccess());
HXLINE( 503)		return child;
            	}


void Component_obj::onComponentAdded( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_506_onComponentAdded)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onComponentAdded,(void))

 ::haxe::ui::core::Component Component_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_518_removeComponent)
HXLINE( 519)		if (::hx::IsNull( child )) {
HXLINE( 520)			return null();
            		}
HXLINE( 523)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 524)			 ::haxe::ui::core::Component v = this->_compositeBuilder->removeComponent(child,dispose,invalidate);
HXLINE( 525)			if (::hx::IsNotNull( v )) {
HXLINE( 526)				return v;
            			}
            		}
HXLINE( 530)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 531)			if ((this->_children->indexOf(child,null()) == -1)) {
HXLINE( 532)				::String childId = child->get_className();
HXLINE( 533)				if (::hx::IsNotNull( child->get_id() )) {
HXLINE( 534)					childId = (childId + (HX_("#",23,00,00,00) + child->get_id()));
            				}
HXLINE( 536)				::String thisId = this->get_className();
HXLINE( 537)				if (::hx::IsNotNull( this->get_id() )) {
HXLINE( 538)					thisId = (thisId + (HX_("#",23,00,00,00) + this->get_id()));
            				}
HXLINE( 540)				::haxe::Log_obj::trace(((((HX_("WARNING: trying to remove a child (",97,bd,ae,d5) + childId) + HX_(") that is not a child of this component (",c8,7a,aa,51)) + thisId) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/core/Component.hx",3f,9e,b6,3b),540,HX_("haxe.ui.core.Component",60,d3,76,13),HX_("removeComponent",d9,8b,72,50)));
HXLINE( 541)				return child;
            			}
HXLINE( 543)			if (this->_children->remove(child)) {
HXLINE( 544)				child->parentComponent = null();
HXLINE( 545)				child->set_depth(-1);
            			}
HXLINE( 547)			if ((dispose == true)) {
HXLINE( 548)				child->disposeComponent();
            			}
            			else {
HXLINE( 550)				child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
HXLINE( 552)				child->removeClass(HX_(":hover",42,d3,17,5c),false,true);
            			}
            		}
HXLINE( 556)		this->handleRemoveComponent(child,dispose);
HXLINE( 557)		this->assignPositionClasses(invalidate);
HXLINE( 558)		bool _hx_tmp;
HXDLIN( 558)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 558)			_hx_tmp = (invalidate == true);
            		}
            		else {
HXLINE( 558)			_hx_tmp = false;
            		}
HXDLIN( 558)		if (_hx_tmp) {
HXLINE( 559)			bool _hx_tmp;
HXDLIN( 559)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 559)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 559)				_hx_tmp = true;
            			}
HXDLIN( 559)			if (!(_hx_tmp)) {
HXLINE( 559)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 562)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 563)			this->_compositeBuilder->onComponentRemoved(child);
            		}
HXLINE( 566)		this->onComponentRemoved(child);
HXLINE( 567)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentremoved",83,70,48,49),null(),null()));
HXLINE( 568)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentremovedfromparent",57,e8,32,f0),null(),null()));
HXLINE( 570)		return child;
            	}


void Component_obj::disposeComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_579_disposeComponent)
HXLINE( 580)		this->_isDisposed = true;
HXLINE( 581)		this->removeAllComponents(true);
HXLINE( 582)		this->destroyComponent();
HXLINE( 583)		this->unregisterEvents();
HXLINE( 584)		if (this->hasTextDisplay()) {
HXLINE( 585)			this->getTextDisplay()->dispose();
            		}
HXLINE( 587)		if (this->hasTextInput()) {
HXLINE( 588)			this->getTextInput()->dispose();
            		}
HXLINE( 590)		if (this->hasImageDisplay()) {
HXLINE( 591)			this->getImageDisplay()->dispose();
            		}
HXLINE( 593)		if (::hx::IsNotNull( this->behaviours )) {
HXLINE( 594)			this->behaviours->dispose();
HXLINE( 595)			this->behaviours = null();
            		}
HXLINE( 597)		if (::hx::IsNotNull( this->_layout )) {
HXLINE( 598)			this->_layout->set_component(null());
HXLINE( 599)			this->_layout = null();
            		}
HXLINE( 601)		if (::hx::IsNotNull( this->_internalEvents )) {
HXLINE( 602)			this->_internalEvents->_target = null();
HXLINE( 603)			this->_internalEvents = null();
            		}
HXLINE( 605)		this->parentComponent = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,disposeComponent,(void))

 ::haxe::ui::core::Component Component_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_617_removeComponentAt)
HXLINE( 618)		if (::hx::IsNull( this->_children )) {
HXLINE( 619)			return null();
            		}
HXLINE( 622)		int childCount = this->_children->length;
HXLINE( 623)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 624)			 ::Dynamic compositeChildCount = this->_compositeBuilder->get_numComponents();
HXLINE( 625)			if (::hx::IsNotNull( compositeChildCount )) {
HXLINE( 626)				childCount = ( (int)(compositeChildCount) );
            			}
            		}
HXLINE( 630)		bool _hx_tmp;
HXDLIN( 630)		if ((index >= 0)) {
HXLINE( 630)			_hx_tmp = (index > (childCount - 1));
            		}
            		else {
HXLINE( 630)			_hx_tmp = true;
            		}
HXDLIN( 630)		if (_hx_tmp) {
HXLINE( 631)			return null();
            		}
HXLINE( 634)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 635)			 ::haxe::ui::core::Component v = this->_compositeBuilder->removeComponentAt(index,dispose,invalidate);
HXLINE( 636)			if (::hx::IsNotNull( v )) {
HXLINE( 637)				return v;
            			}
            		}
HXLINE( 641)		 ::haxe::ui::core::Component child = this->_children->__get(index).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 642)		if (::hx::IsNull( child )) {
HXLINE( 643)			return null();
            		}
HXLINE( 646)		if ((dispose == true)) {
HXLINE( 647)			child->_isDisposed = true;
HXLINE( 648)			child->removeAllComponents(true);
            		}
            		else {
HXLINE( 650)			child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
HXLINE( 652)			child->removeClass(HX_(":hover",42,d3,17,5c),false,true);
            		}
HXLINE( 654)		this->handleRemoveComponentAt(index,dispose);
HXLINE( 655)		if (this->_children->remove(child)) {
HXLINE( 656)			child->parentComponent = null();
HXLINE( 657)			child->set_depth(-1);
            		}
HXLINE( 659)		if ((dispose == true)) {
HXLINE( 660)			child->destroyComponent();
HXLINE( 661)			child->unregisterEvents();
            		}
HXLINE( 664)		this->assignPositionClasses(invalidate);
HXLINE( 665)		if ((invalidate == true)) {
HXLINE( 666)			bool _hx_tmp;
HXDLIN( 666)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 666)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 666)				_hx_tmp = true;
            			}
HXDLIN( 666)			if (!(_hx_tmp)) {
HXLINE( 666)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 669)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 670)			this->_compositeBuilder->onComponentRemoved(child);
            		}
HXLINE( 673)		this->onComponentRemoved(child);
HXLINE( 674)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentremoved",83,70,48,49),null(),null()));
HXLINE( 675)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentremovedfromparent",57,e8,32,f0),null(),null()));
HXLINE( 677)		return child;
            	}


void Component_obj::onComponentRemoved( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_680_onComponentRemoved)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onComponentRemoved,(void))

void Component_obj::assignPositionClasses(::hx::Null< bool >  __o_invalidate){
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_683_assignPositionClasses)
HXLINE( 684)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 684)		if (::hx::IsNull( this->_children )) {
HXLINE( 684)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 684)			_hx_tmp = this->_children;
            		}
HXDLIN( 684)		if ((_hx_tmp->length == 1)) {
HXLINE( 685)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 685)			if (::hx::IsNull( this->_children )) {
HXLINE( 685)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 685)				_hx_tmp = this->_children;
            			}
HXDLIN( 685)			_hx_tmp->__get(0).StaticCast<  ::haxe::ui::core::Component >()->addClasses(::Array_obj< ::String >::fromData( _hx_array_data_1376d360_36,2),invalidate,null());
HXLINE( 686)			return;
            		}
HXLINE( 688)		{
HXLINE( 688)			int _g = 0;
HXDLIN( 688)			::Array< ::Dynamic> _g1;
HXDLIN( 688)			if (::hx::IsNull( this->_children )) {
HXLINE( 688)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 688)				_g1 = this->_children;
            			}
HXDLIN( 688)			int _g2 = _g1->length;
HXDLIN( 688)			while((_g < _g2)){
HXLINE( 688)				_g = (_g + 1);
HXDLIN( 688)				int i = (_g - 1);
HXLINE( 689)				::Array< ::Dynamic> c;
HXDLIN( 689)				if (::hx::IsNull( this->_children )) {
HXLINE( 689)					c = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 689)					c = this->_children;
            				}
HXDLIN( 689)				 ::haxe::ui::core::Component c1 = c->__get(i).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 690)				if ((i == 0)) {
HXLINE( 691)					c1->swapClass(HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),invalidate,null());
            				}
            				else {
HXLINE( 692)					bool _hx_tmp;
HXDLIN( 692)					::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 692)					if (::hx::IsNull( this->_children )) {
HXLINE( 692)						_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 692)						_hx_tmp1 = this->_children;
            					}
HXDLIN( 692)					if ((_hx_tmp1->length > 1)) {
HXLINE( 692)						::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 692)						if (::hx::IsNull( this->_children )) {
HXLINE( 692)							_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            						}
            						else {
HXLINE( 692)							_hx_tmp1 = this->_children;
            						}
HXDLIN( 692)						_hx_tmp = (i == (_hx_tmp1->length - 1));
            					}
            					else {
HXLINE( 692)						_hx_tmp = false;
            					}
HXDLIN( 692)					if (_hx_tmp) {
HXLINE( 693)						c1->swapClass(HX_("last",56,0a,ad,47),HX_("first",30,78,9d,00),invalidate,null());
            					}
            					else {
HXLINE( 695)						c1->removeClasses(::Array_obj< ::String >::fromData( _hx_array_data_1376d360_37,2),invalidate,null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,assignPositionClasses,(void))

void Component_obj::destroyComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_700_destroyComponent)
HXLINE( 701)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 702)			this->_compositeBuilder->destroy();
            		}
HXLINE( 704)		::haxe::ui::locale::LocaleManager_obj::get_instance()->unregisterComponent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 705)		this->onDestroy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,destroyComponent,(void))

void Component_obj::onDestroy(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_708_onDestroy)
HXLINE( 709)		{
HXLINE( 709)			int _g = 0;
HXDLIN( 709)			::Array< ::Dynamic> _g1;
HXDLIN( 709)			if (::hx::IsNull( this->_children )) {
HXLINE( 709)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 709)				_g1 = this->_children;
            			}
HXDLIN( 709)			while((_g < _g1->length)){
HXLINE( 709)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 709)				_g = (_g + 1);
HXLINE( 710)				child->onDestroy();
            			}
            		}
HXLINE( 712)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
HXLINE( 713)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("destroy",fa,2c,86,24),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onDestroy,(void))

void Component_obj::walkComponents( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_722_walkComponents)
HXLINE( 723)		if (::hx::IsEq( callback(::hx::ObjectPtr<OBJ_>(this)),false )) {
HXLINE( 724)			return;
            		}
HXLINE( 727)		{
HXLINE( 727)			int _g = 0;
HXDLIN( 727)			::Array< ::Dynamic> _g1;
HXDLIN( 727)			if (::hx::IsNull( this->_children )) {
HXLINE( 727)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 727)				_g1 = this->_children;
            			}
HXDLIN( 727)			while((_g < _g1->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,cont, ::Dynamic,callback) HXARGC(1)
            				bool _hx_run( ::haxe::ui::core::Component c){
            					HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_729_walkComponents)
HXLINE( 730)					cont[0] = ( (bool)(callback(c)) );
HXLINE( 731)					return cont->__get(0);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 727)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 727)				_g = (_g + 1);
HXLINE( 728)				::Array< bool > cont = ::Array_obj< bool >::fromData( _hx_array_data_1376d360_44,1);
HXLINE( 729)				child->walkComponents( ::Dynamic(new _hx_Closure_0(cont,callback)));
HXLINE( 734)				if ((cont->__get(0) == false)) {
HXLINE( 735)					goto _hx_goto_41;
            				}
            			}
            			_hx_goto_41:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,walkComponents,(void))

void Component_obj::removeAllComponents(::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_746_removeAllComponents)
HXLINE( 747)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 748)			bool b = this->_compositeBuilder->removeAllComponents(dispose);
HXLINE( 749)			if ((b == true)) {
HXLINE( 750)				return;
            			}
            		}
HXLINE( 754)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 755)			while((this->_children->length > 0)){
HXLINE( 756)				if (dispose) {
HXLINE( 757)					this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >()->removeAllComponents(dispose);
            				}
HXLINE( 759)				this->removeComponent(this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >(),dispose,false);
            			}
HXLINE( 761)			{
HXLINE( 761)				bool _hx_tmp;
HXDLIN( 761)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 761)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 761)					_hx_tmp = true;
            				}
HXDLIN( 761)				if (!(_hx_tmp)) {
HXLINE( 761)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,removeAllComponents,(void))

bool Component_obj::matchesSearch(::String criteria,::hx::Class type,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_765_matchesSearch)
HXLINE( 766)		if (::hx::IsNotNull( criteria )) {
HXLINE( 767)			bool _hx_tmp;
HXDLIN( 767)			bool _hx_tmp1;
HXDLIN( 767)			if ((searchType == HX_("id",db,5b,00,00))) {
HXLINE( 767)				_hx_tmp1 = (this->get_id() == criteria);
            			}
            			else {
HXLINE( 767)				_hx_tmp1 = false;
            			}
HXDLIN( 767)			if (!(_hx_tmp1)) {
HXLINE( 767)				if ((searchType == HX_("css",c3,83,4b,00))) {
HXLINE( 767)					_hx_tmp = ((this->classes->indexOf(criteria,null()) != -1) == true);
            				}
            				else {
HXLINE( 767)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 767)				_hx_tmp = true;
            			}
HXDLIN( 767)			if (_hx_tmp) {
HXLINE( 768)				if (::hx::IsNotNull( type )) {
HXLINE( 769)					return ::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),type);
            				}
HXLINE( 771)				return true;
            			}
            		}
            		else {
HXLINE( 773)			if (::hx::IsNotNull( type )) {
HXLINE( 774)				return ::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),type);
            			}
            		}
HXLINE( 776)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,matchesSearch,return )

 ::Dynamic Component_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_789_findComponent)
HXLINE( 790)		bool _hx_tmp;
HXDLIN( 790)		bool _hx_tmp1;
HXDLIN( 790)		if (::hx::IsNull( recursive )) {
HXLINE( 790)			_hx_tmp1 = ::hx::IsNotNull( criteria );
            		}
            		else {
HXLINE( 790)			_hx_tmp1 = false;
            		}
HXDLIN( 790)		if (_hx_tmp1) {
HXLINE( 790)			_hx_tmp = (searchType == HX_("id",db,5b,00,00));
            		}
            		else {
HXLINE( 790)			_hx_tmp = false;
            		}
HXDLIN( 790)		if (_hx_tmp) {
HXLINE( 791)			recursive = true;
            		}
HXLINE( 794)		 ::haxe::ui::core::Component match = null();
HXLINE( 795)		{
HXLINE( 795)			int _g = 0;
HXDLIN( 795)			::Array< ::Dynamic> _g1;
HXDLIN( 795)			if (::hx::IsNull( this->_children )) {
HXLINE( 795)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 795)				_g1 = this->_children;
            			}
HXDLIN( 795)			while((_g < _g1->length)){
HXLINE( 795)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 795)				_g = (_g + 1);
HXLINE( 796)				if (child->matchesSearch(criteria,type,searchType)) {
HXLINE( 797)					match = child;
HXLINE( 798)					goto _hx_goto_48;
            				}
            			}
            			_hx_goto_48:;
            		}
HXLINE( 801)		bool _hx_tmp2;
HXDLIN( 801)		if (::hx::IsNull( match )) {
HXLINE( 801)			_hx_tmp2 = ::hx::IsEq( recursive,true );
            		}
            		else {
HXLINE( 801)			_hx_tmp2 = false;
            		}
HXDLIN( 801)		if (_hx_tmp2) {
HXLINE( 802)			{
HXLINE( 802)				int _g = 0;
HXDLIN( 802)				::Array< ::Dynamic> _g1;
HXDLIN( 802)				if (::hx::IsNull( this->_children )) {
HXLINE( 802)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 802)					_g1 = this->_children;
            				}
HXDLIN( 802)				while((_g < _g1->length)){
HXLINE( 802)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 802)					_g = (_g + 1);
HXLINE( 803)					 ::haxe::ui::core::Component temp = ( ( ::haxe::ui::core::Component)(child->findComponent(criteria,type,recursive,searchType)) );
HXLINE( 804)					if (::hx::IsNotNull( temp )) {
HXLINE( 805)						match = temp;
HXLINE( 806)						goto _hx_goto_49;
            					}
            				}
            				_hx_goto_49:;
            			}
HXLINE( 809)			bool _hx_tmp;
HXDLIN( 809)			if (::hx::IsNull( match )) {
HXLINE( 809)				_hx_tmp = ::hx::IsNotNull( this->_compositeBuilder );
            			}
            			else {
HXLINE( 809)				_hx_tmp = false;
            			}
HXDLIN( 809)			if (_hx_tmp) {
HXLINE( 810)				match = ( ( ::haxe::ui::core::Component)(this->_compositeBuilder->findComponent(criteria,type,recursive,searchType)) );
            			}
            		}
HXLINE( 814)		return match;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Component_obj,findComponent,return )

::cpp::VirtualArray Component_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_825_findComponents)
HXLINE( 826)		if ((maxDepth == -1)) {
HXLINE( 827)			maxDepth = 100;
            		}
HXLINE( 829)		if ((maxDepth <= 0)) {
HXLINE( 830)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 833)		maxDepth = (maxDepth - 1);
HXLINE( 835)		::cpp::VirtualArray r = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 836)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 837)			::cpp::VirtualArray childArray = this->_compositeBuilder->findComponents(styleName,type,maxDepth);
HXLINE( 838)			if (::hx::IsNotNull( childArray )) {
HXLINE( 839)				int _g = 0;
HXDLIN( 839)				while((_g < childArray->get_length())){
HXLINE( 839)					 ::Dynamic c = childArray->__get(_g);
HXDLIN( 839)					_g = (_g + 1);
HXLINE( 840)					r->push(c);
            				}
            			}
            		}
HXLINE( 845)		{
HXLINE( 845)			int _g = 0;
HXDLIN( 845)			::Array< ::Dynamic> _g1;
HXDLIN( 845)			if (::hx::IsNull( this->_children )) {
HXLINE( 845)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 845)				_g1 = this->_children;
            			}
HXDLIN( 845)			while((_g < _g1->length)){
HXLINE( 845)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 845)				_g = (_g + 1);
HXLINE( 846)				bool match = true;
HXLINE( 847)				bool _hx_tmp;
HXDLIN( 847)				if (::hx::IsNotNull( styleName )) {
HXLINE( 847)					_hx_tmp = ((child->classes->indexOf(styleName,null()) != -1) == false);
            				}
            				else {
HXLINE( 847)					_hx_tmp = false;
            				}
HXDLIN( 847)				if (_hx_tmp) {
HXLINE( 848)					match = false;
            				}
HXLINE( 850)				bool _hx_tmp1;
HXDLIN( 850)				if (::hx::IsNotNull( type )) {
HXLINE( 850)					_hx_tmp1 = (::Std_obj::isOfType(child,type) == false);
            				}
            				else {
HXLINE( 850)					_hx_tmp1 = false;
            				}
HXDLIN( 850)				if (_hx_tmp1) {
HXLINE( 851)					match = false;
            				}
HXLINE( 854)				if ((match == true)) {
HXLINE( 855)					r->push(child);
            				}
            				else {
HXLINE( 857)					::cpp::VirtualArray childArray = child->findComponents(styleName,type,maxDepth);
HXLINE( 858)					{
HXLINE( 858)						int _g = 0;
HXDLIN( 858)						while((_g < childArray->get_length())){
HXLINE( 858)							 ::Dynamic c = childArray->__get(_g);
HXDLIN( 858)							_g = (_g + 1);
HXLINE( 859)							r->push(c);
            						}
            					}
            				}
            			}
            		}
HXLINE( 864)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findComponents,return )

 ::Dynamic Component_obj::findAncestor(::String criteria,::hx::Class type,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_876_findAncestor)
HXLINE( 877)		 ::haxe::ui::core::Component match = null();
HXLINE( 878)		 ::haxe::ui::core::Component p = this->parentComponent;
HXLINE( 879)		while(::hx::IsNotNull( p )){
HXLINE( 880)			if (p->matchesSearch(criteria,type,searchType)) {
HXLINE( 881)				match = p;
HXLINE( 882)				goto _hx_goto_55;
            			}
            			else {
HXLINE( 884)				p = p->parentComponent;
            			}
            		}
            		_hx_goto_55:;
HXLINE( 887)		return match;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findAncestor,return )

::Array< ::Dynamic> Component_obj::findComponentsUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_901_findComponentsUnderPoint)
HXLINE( 902)		::Array< ::Dynamic> c = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 903)		if (this->hitTest(screenX,screenY,false)) {
HXLINE( 904)			int _g = 0;
HXDLIN( 904)			::Array< ::Dynamic> _g1;
HXDLIN( 904)			if (::hx::IsNull( this->_children )) {
HXLINE( 904)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 904)				_g1 = this->_children;
            			}
HXDLIN( 904)			while((_g < _g1->length)){
HXLINE( 904)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 904)				_g = (_g + 1);
HXLINE( 905)				if (child->hitTest(screenX,screenY,false)) {
HXLINE( 906)					bool match = true;
HXLINE( 907)					bool _hx_tmp;
HXDLIN( 907)					if (::hx::IsNotNull( type )) {
HXLINE( 907)						_hx_tmp = (::Std_obj::isOfType(child,type) == false);
            					}
            					else {
HXLINE( 907)						_hx_tmp = false;
            					}
HXDLIN( 907)					if (_hx_tmp) {
HXLINE( 908)						match = false;
            					}
HXLINE( 910)					if ((match == true)) {
HXLINE( 911)						c->push(child);
            					}
HXLINE( 913)					c = c->concat(child->findComponentsUnderPoint(screenX,screenY,type));
            				}
            			}
            		}
HXLINE( 917)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findComponentsUnderPoint,return )

bool Component_obj::hasComponentUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_928_hasComponentUnderPoint)
HXLINE( 929)		bool b = false;
HXLINE( 930)		if (this->hitTest(screenX,screenY,false)) {
HXLINE( 931)			if (::hx::IsNull( type )) {
HXLINE( 932)				return true;
            			}
HXLINE( 934)			{
HXLINE( 934)				int _g = 0;
HXDLIN( 934)				::Array< ::Dynamic> _g1;
HXDLIN( 934)				if (::hx::IsNull( this->_children )) {
HXLINE( 934)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 934)					_g1 = this->_children;
            				}
HXDLIN( 934)				while((_g < _g1->length)){
HXLINE( 934)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 934)					_g = (_g + 1);
HXLINE( 935)					if (child->hitTest(screenX,screenY,false)) {
HXLINE( 936)						bool match = true;
HXLINE( 937)						bool _hx_tmp;
HXDLIN( 937)						if (::hx::IsNotNull( type )) {
HXLINE( 937)							_hx_tmp = (::Std_obj::isOfType(child,type) == false);
            						}
            						else {
HXLINE( 937)							_hx_tmp = false;
            						}
HXDLIN( 937)						if (_hx_tmp) {
HXLINE( 938)							match = false;
            						}
HXLINE( 940)						if ((match == false)) {
HXLINE( 941)							match = child->hasComponentUnderPoint(screenX,screenY,type);
            						}
HXLINE( 943)						if ((match == true)) {
HXLINE( 944)							b = match;
HXLINE( 945)							goto _hx_goto_59;
            						}
            					}
            				}
            				_hx_goto_59:;
            			}
            		}
HXLINE( 950)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,hasComponentUnderPoint,return )

int Component_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_959_getComponentIndex)
HXLINE( 960)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 961)			int index = this->_compositeBuilder->getComponentIndex(child);
HXLINE( 962)			if ((index != (int)-2147483648)) {
HXLINE( 963)				return index;
            			}
            		}
HXLINE( 967)		int index = -1;
HXLINE( 968)		bool _hx_tmp;
HXDLIN( 968)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 968)			_hx_tmp = ::hx::IsNotNull( child );
            		}
            		else {
HXLINE( 968)			_hx_tmp = false;
            		}
HXDLIN( 968)		if (_hx_tmp) {
HXLINE( 969)			index = this->_children->indexOf(child,null());
            		}
HXLINE( 971)		return index;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,getComponentIndex,return )

 ::haxe::ui::core::Component Component_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_980_setComponentIndex)
HXLINE( 981)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 982)			 ::haxe::ui::core::Component v = this->_compositeBuilder->setComponentIndex(child,index);
HXLINE( 983)			if (::hx::IsNotNull( v )) {
HXLINE( 984)				return v;
            			}
            		}
HXLINE( 988)		bool _hx_tmp;
HXDLIN( 988)		bool _hx_tmp1;
HXDLIN( 988)		if ((index >= 0)) {
HXLINE( 988)			_hx_tmp1 = (index <= this->_children->length);
            		}
            		else {
HXLINE( 988)			_hx_tmp1 = false;
            		}
HXDLIN( 988)		if (_hx_tmp1) {
HXLINE( 988)			_hx_tmp = ::hx::IsInstanceEq( child->parentComponent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 988)			_hx_tmp = false;
            		}
HXDLIN( 988)		if (_hx_tmp) {
HXLINE( 989)			this->handleSetComponentIndex(child,index);
HXLINE( 990)			this->_children->remove(child);
HXLINE( 991)			this->_children->insert(index,child);
HXLINE( 992)			{
HXLINE( 992)				bool _hx_tmp;
HXDLIN( 992)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 992)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 992)					_hx_tmp = true;
            				}
HXDLIN( 992)				if (!(_hx_tmp)) {
HXLINE( 992)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
HXLINE( 994)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,setComponentIndex,return )

 ::haxe::ui::core::Component Component_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1003_getComponentAt)
HXLINE(1004)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1005)			 ::haxe::ui::core::Component v = this->_compositeBuilder->getComponentAt(index);
HXLINE(1006)			if (::hx::IsNotNull( v )) {
HXLINE(1007)				return v;
            			}
            		}
HXLINE(1010)		if (::hx::IsNull( this->_children )) {
HXLINE(1011)			return null();
            		}
HXLINE(1013)		return this->_children->__get(index).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,getComponentAt,return )

void Component_obj::hide(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1020_hide)
HXLINE(1021)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1022)			bool v = this->_compositeBuilder->hide();
HXLINE(1023)			if ((v == true)) {
HXLINE(1024)				return;
            			}
            		}
HXLINE(1028)		if ((this->_hidden == false)) {
HXLINE(1029)			this->_hidden = true;
HXLINE(1030)			this->handleVisibility(false);
HXLINE(1031)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1032)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1032)				bool _hx_tmp;
HXDLIN(1032)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1032)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1032)					_hx_tmp = true;
            				}
HXDLIN(1032)				if (!(_hx_tmp)) {
HXLINE(1032)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1035)			this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,hide,(void))

void Component_obj::hideInternal(::hx::Null< bool >  __o_dispatchChildren){
            		bool dispatchChildren = __o_dispatchChildren.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1039_hideInternal)
HXLINE(1040)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1041)			bool v = this->_compositeBuilder->hide();
HXLINE(1042)			if ((v == true)) {
HXLINE(1043)				return;
            			}
            		}
HXLINE(1047)		if ((this->_hidden == false)) {
HXLINE(1048)			this->_hidden = true;
HXLINE(1049)			this->handleVisibility(false);
HXLINE(1050)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1051)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1051)				bool _hx_tmp;
HXDLIN(1051)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1051)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1051)					_hx_tmp = true;
            				}
HXDLIN(1051)				if (!(_hx_tmp)) {
HXLINE(1051)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1054)			if ((dispatchChildren == true)) {
HXLINE(1055)				this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
            			}
            			else {
HXLINE(1057)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,hideInternal,(void))

void Component_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1070_show)
HXLINE(1071)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1072)			bool v = this->_compositeBuilder->show();
HXLINE(1073)			if ((v == true)) {
HXLINE(1074)				return;
            			}
            		}
HXLINE(1078)		if ((this->_hidden == true)) {
HXLINE(1079)			this->_hidden = false;
HXLINE(1080)			this->handleVisibility(true);
HXLINE(1081)			{
HXLINE(1081)				bool _hx_tmp;
HXDLIN(1081)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1081)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1081)					_hx_tmp = true;
            				}
HXDLIN(1081)				if (!(_hx_tmp)) {
HXLINE(1081)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),this->_invalidateRecursivelyOnShow);
            				}
            			}
HXLINE(1082)			this->_invalidateRecursivelyOnShow = false;
HXLINE(1083)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1084)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1084)				bool _hx_tmp;
HXDLIN(1084)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1084)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1084)					_hx_tmp = true;
            				}
HXDLIN(1084)				if (!(_hx_tmp)) {
HXLINE(1084)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1087)			this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,show,(void))

void Component_obj::showInternal(::hx::Null< bool >  __o_dispatchChildren){
            		bool dispatchChildren = __o_dispatchChildren.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1091_showInternal)
HXLINE(1092)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1093)			bool v = this->_compositeBuilder->show();
HXLINE(1094)			if ((v == true)) {
HXLINE(1095)				return;
            			}
            		}
HXLINE(1099)		if ((this->_hidden == true)) {
HXLINE(1100)			this->_hidden = false;
HXLINE(1101)			this->handleVisibility(true);
HXLINE(1102)			{
HXLINE(1102)				bool _hx_tmp;
HXDLIN(1102)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1102)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1102)					_hx_tmp = true;
            				}
HXDLIN(1102)				if (!(_hx_tmp)) {
HXLINE(1102)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1103)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1104)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1104)				bool _hx_tmp;
HXDLIN(1104)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1104)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1104)					_hx_tmp = true;
            				}
HXDLIN(1104)				if (!(_hx_tmp)) {
HXLINE(1104)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1107)			if ((dispatchChildren == true)) {
HXLINE(1108)				this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            			}
            			else {
HXLINE(1110)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,showInternal,(void))

void Component_obj::fadeIn( ::Dynamic onEnd,::hx::Null< bool >  __o_show){
            		bool show = __o_show.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1120_fadeIn)
HXDLIN(1120)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1121)		bool _hx_tmp;
HXDLIN(1121)		if (::hx::IsNull( onEnd )) {
HXLINE(1121)			_hx_tmp = (show == true);
            		}
            		else {
HXLINE(1121)			_hx_tmp = true;
            		}
HXDLIN(1121)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::core::Component,_gthis, ::Dynamic,onEnd, ::Dynamic,prevEnd) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::AnimationEvent e){
            				HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1132_fadeIn)
HXLINE(1133)				if (::hx::IsNotNull( onEnd )) {
HXLINE(1134)					onEnd();
            				}
HXLINE(1136)				_gthis->removeClass(HX_("fade-in",56,61,22,31),null(),null());
HXLINE(1137)				_gthis->set_onAnimationEnd(prevEnd);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1122)			::Array< ::Dynamic> prevStart = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->onAnimationStart);
HXLINE(1123)			 ::Dynamic prevEnd = this->onAnimationEnd;
HXLINE(1124)			if ((show == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis,::Array< ::Dynamic>,prevStart) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::AnimationEvent e){
            					HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1126_fadeIn)
HXLINE(1127)					_gthis->show();
HXLINE(1128)					_gthis->set_onAnimationStart(prevStart->__get(0));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(1125)				prevStart[0] = this->onAnimationStart;
HXLINE(1126)				this->set_onAnimationStart( ::Dynamic(new _hx_Closure_0(_gthis,prevStart)));
            			}
HXLINE(1132)			this->set_onAnimationEnd( ::Dynamic(new _hx_Closure_1(_gthis,onEnd,prevEnd)));
            		}
HXLINE(1140)		this->swapClass(HX_("fade-in",56,61,22,31),HX_("fade-out",fd,5d,f7,cc),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,fadeIn,(void))

void Component_obj::fadeOut( ::Dynamic onEnd,::hx::Null< bool >  __o_hide){
            		bool hide = __o_hide.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1148_fadeOut)
HXDLIN(1148)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1149)		bool _hx_tmp;
HXDLIN(1149)		if (::hx::IsNull( onEnd )) {
HXLINE(1149)			_hx_tmp = (hide == true);
            		}
            		else {
HXLINE(1149)			_hx_tmp = true;
            		}
HXDLIN(1149)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis, ::Dynamic,onEnd, ::Dynamic,prevEnd,bool,hide) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::AnimationEvent e){
            				HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1151_fadeOut)
HXLINE(1152)				if ((hide == true)) {
HXLINE(1153)					_gthis->hide();
            				}
HXLINE(1155)				if (::hx::IsNotNull( onEnd )) {
HXLINE(1156)					onEnd();
            				}
HXLINE(1158)				_gthis->set_onAnimationEnd(prevEnd);
HXLINE(1159)				_gthis->removeClass(HX_("fade-out",fd,5d,f7,cc),null(),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1150)			 ::Dynamic prevEnd = this->onAnimationEnd;
HXLINE(1151)			this->set_onAnimationEnd( ::Dynamic(new _hx_Closure_0(_gthis,onEnd,prevEnd,hide)));
            		}
HXLINE(1162)		this->swapClass(HX_("fade-out",fd,5d,f7,cc),HX_("fade-in",56,61,22,31),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,fadeOut,(void))

bool Component_obj::get_hidden(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1172_get_hidden)
HXLINE(1173)		if ((this->_hidden == true)) {
HXLINE(1174)			return true;
            		}
HXLINE(1176)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1177)			return this->parentComponent->get_hidden();
            		}
HXLINE(1179)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_hidden,return )

bool Component_obj::set_hidden(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1181_set_hidden)
HXLINE(1182)		if ((value == this->_hidden)) {
HXLINE(1183)			return value;
            		}
HXLINE(1185)		if ((value == true)) {
HXLINE(1186)			this->hide();
            		}
            		else {
HXLINE(1188)			this->show();
            		}
HXLINE(1190)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("hidden",6a,ff,95,4c)));
HXLINE(1191)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_hidden,return )

 ::haxe::ui::styles::Style Component_obj::get_customStyle(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1207_get_customStyle)
HXLINE(1208)		if (::hx::IsNull( this->_customStyle )) {
HXLINE(1209)			this->_customStyle =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1211)		return this->_customStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_customStyle,return )

 ::haxe::ui::styles::Style Component_obj::set_customStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1213_set_customStyle)
HXLINE(1214)		if (::hx::IsInstanceNotEq( value,this->_customStyle )) {
HXLINE(1215)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1215)			{
            			}
            		}
HXLINE(1217)		this->_customStyle = value;
HXLINE(1218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_customStyle,return )

void Component_obj::addClass(::String name,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1233_addClass)
HXLINE(1234)		if ((this->classes->indexOf(name,null()) == -1)) {
HXLINE(1235)			this->classes->push(name);
HXLINE(1236)			if ((invalidate == true)) {
HXLINE(1237)				this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1237)				{
            				}
            			}
            		}
HXLINE(1241)		bool _hx_tmp;
HXDLIN(1241)		if ((recursive != true)) {
HXLINE(1241)			if ((this->cascadeActive == true)) {
HXLINE(1241)				_hx_tmp = (name == HX_(":active",80,29,23,82));
            			}
            			else {
HXLINE(1241)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1241)			_hx_tmp = true;
            		}
HXDLIN(1241)		if (_hx_tmp) {
HXLINE(1242)			int _g = 0;
HXDLIN(1242)			::Array< ::Dynamic> _g1;
HXDLIN(1242)			if (::hx::IsNull( this->_children )) {
HXLINE(1242)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1242)				_g1 = this->_children;
            			}
HXDLIN(1242)			while((_g < _g1->length)){
HXLINE(1242)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1242)				_g = (_g + 1);
HXLINE(1243)				child->addClass(name,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,addClass,(void))

void Component_obj::addClasses(::Array< ::String > names,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1256_addClasses)
HXLINE(1257)		bool needsInvalidate = false;
HXLINE(1258)		{
HXLINE(1258)			int _g = 0;
HXDLIN(1258)			while((_g < names->length)){
HXLINE(1258)				::String name = names->__get(_g);
HXDLIN(1258)				_g = (_g + 1);
HXLINE(1259)				if ((this->classes->indexOf(name,null()) == -1)) {
HXLINE(1260)					this->classes->push(name);
HXLINE(1261)					if ((invalidate == true)) {
HXLINE(1262)						needsInvalidate = true;
            					}
            				}
            			}
            		}
HXLINE(1267)		if ((needsInvalidate == true)) {
HXLINE(1268)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1268)			{
            			}
            		}
HXLINE(1271)		if ((recursive == true)) {
HXLINE(1272)			int _g = 0;
HXDLIN(1272)			::Array< ::Dynamic> _g1;
HXDLIN(1272)			if (::hx::IsNull( this->_children )) {
HXLINE(1272)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1272)				_g1 = this->_children;
            			}
HXDLIN(1272)			while((_g < _g1->length)){
HXLINE(1272)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1272)				_g = (_g + 1);
HXLINE(1273)				child->addClasses(names,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,addClasses,(void))

void Component_obj::removeClass(::String name,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1286_removeClass)
HXLINE(1287)		if ((this->classes->indexOf(name,null()) != -1)) {
HXLINE(1288)			this->classes->remove(name);
HXLINE(1289)			if ((invalidate == true)) {
HXLINE(1290)				this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1290)				{
            				}
            			}
            		}
HXLINE(1294)		bool _hx_tmp;
HXDLIN(1294)		if ((recursive != true)) {
HXLINE(1294)			if ((this->cascadeActive == true)) {
HXLINE(1294)				_hx_tmp = (name == HX_(":active",80,29,23,82));
            			}
            			else {
HXLINE(1294)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1294)			_hx_tmp = true;
            		}
HXDLIN(1294)		if (_hx_tmp) {
HXLINE(1295)			int _g = 0;
HXDLIN(1295)			::Array< ::Dynamic> _g1;
HXDLIN(1295)			if (::hx::IsNull( this->_children )) {
HXLINE(1295)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1295)				_g1 = this->_children;
            			}
HXDLIN(1295)			while((_g < _g1->length)){
HXLINE(1295)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1295)				_g = (_g + 1);
HXLINE(1296)				child->removeClass(name,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,removeClass,(void))

void Component_obj::removeClasses(::Array< ::String > names,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1309_removeClasses)
HXLINE(1310)		bool needsInvalidate = false;
HXLINE(1311)		{
HXLINE(1311)			int _g = 0;
HXDLIN(1311)			while((_g < names->length)){
HXLINE(1311)				::String name = names->__get(_g);
HXDLIN(1311)				_g = (_g + 1);
HXLINE(1312)				if ((this->classes->indexOf(name,null()) != -1)) {
HXLINE(1313)					this->classes->remove(name);
HXLINE(1314)					if ((invalidate == true)) {
HXLINE(1315)						needsInvalidate = true;
            					}
            				}
            			}
            		}
HXLINE(1320)		if ((needsInvalidate == true)) {
HXLINE(1321)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1321)			{
            			}
            		}
HXLINE(1324)		if ((recursive == true)) {
HXLINE(1325)			int _g = 0;
HXDLIN(1325)			::Array< ::Dynamic> _g1;
HXDLIN(1325)			if (::hx::IsNull( this->_children )) {
HXLINE(1325)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1325)				_g1 = this->_children;
            			}
HXDLIN(1325)			while((_g < _g1->length)){
HXLINE(1325)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1325)				_g = (_g + 1);
HXLINE(1326)				child->removeClasses(names,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,removeClasses,(void))

bool Component_obj::hasClass(::String name){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1338_hasClass)
HXDLIN(1338)		return (this->classes->indexOf(name,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,hasClass,return )

void Component_obj::swapClass(::String classToAdd,::String classToRemove,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1350_swapClass)
HXLINE(1351)		bool needsInvalidate = false;
HXLINE(1352)		bool _hx_tmp;
HXDLIN(1352)		if (::hx::IsNotNull( classToAdd )) {
HXLINE(1352)			_hx_tmp = (this->classes->indexOf(classToAdd,null()) == -1);
            		}
            		else {
HXLINE(1352)			_hx_tmp = false;
            		}
HXDLIN(1352)		if (_hx_tmp) {
HXLINE(1353)			this->classes->push(classToAdd);
HXLINE(1354)			needsInvalidate = true;
            		}
HXLINE(1357)		bool _hx_tmp1;
HXDLIN(1357)		if (::hx::IsNotNull( classToRemove )) {
HXLINE(1357)			_hx_tmp1 = (this->classes->indexOf(classToRemove,null()) != -1);
            		}
            		else {
HXLINE(1357)			_hx_tmp1 = false;
            		}
HXDLIN(1357)		if (_hx_tmp1) {
HXLINE(1358)			this->classes->remove(classToRemove);
HXLINE(1359)			needsInvalidate = true;
            		}
HXLINE(1362)		bool _hx_tmp2;
HXDLIN(1362)		if ((invalidate == true)) {
HXLINE(1362)			_hx_tmp2 = (needsInvalidate == true);
            		}
            		else {
HXLINE(1362)			_hx_tmp2 = false;
            		}
HXDLIN(1362)		if (_hx_tmp2) {
HXLINE(1363)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1363)			{
            			}
            		}
HXLINE(1366)		if ((recursive == true)) {
HXLINE(1367)			int _g = 0;
HXDLIN(1367)			::Array< ::Dynamic> _g1;
HXDLIN(1367)			if (::hx::IsNull( this->_children )) {
HXLINE(1367)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1367)				_g1 = this->_children;
            			}
HXDLIN(1367)			while((_g < _g1->length)){
HXLINE(1367)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1367)				_g = (_g + 1);
HXLINE(1368)				child->swapClass(classToAdd,classToRemove,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Component_obj,swapClass,(void))

::String Component_obj::get_styleNames(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1381_get_styleNames)
HXDLIN(1381)		return this->_styleNames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleNames,return )

::String Component_obj::set_styleNames(::String value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1383_set_styleNames)
HXLINE(1384)		if ((value == this->_styleNames)) {
HXLINE(1385)			return value;
            		}
HXLINE(1388)		if (::hx::IsNull( value )) {
HXLINE(1389)			value = HX_("",00,00,00,00);
            		}
HXLINE(1392)		this->_styleNames = value;
HXLINE(1393)		::Array< ::String > newStyleNamesList = ::Array_obj< ::String >::__new(0);
HXLINE(1394)		::Array< ::String > classesToAdd = ::Array_obj< ::String >::__new(0);
HXLINE(1395)		bool requiresInvalidation = false;
HXLINE(1396)		{
HXLINE(1396)			int _g = 0;
HXDLIN(1396)			::Array< ::String > _g1 = value.split(HX_(" ",20,00,00,00));
HXDLIN(1396)			while((_g < _g1->length)){
HXLINE(1396)				::String x = _g1->__get(_g);
HXDLIN(1396)				_g = (_g + 1);
HXLINE(1397)				x = ::StringTools_obj::trim(x);
HXLINE(1398)				if ((x.length == 0)) {
HXLINE(1399)					continue;
            				}
HXLINE(1401)				newStyleNamesList->push(x);
HXLINE(1402)				if (::hx::IsNotNull( this->_styleNamesList )) {
HXLINE(1403)					if ((this->_styleNamesList->indexOf(x,null()) == -1)) {
HXLINE(1404)						classesToAdd->push(x);
HXLINE(1405)						requiresInvalidation = true;
            					}
            				}
            				else {
HXLINE(1408)					classesToAdd->push(x);
HXLINE(1409)					requiresInvalidation = true;
            				}
            			}
            		}
HXLINE(1413)		::Array< ::String > classesToRemove = ::Array_obj< ::String >::__new(0);
HXLINE(1414)		if (::hx::IsNotNull( this->_styleNamesList )) {
HXLINE(1415)			int _g = 0;
HXDLIN(1415)			::Array< ::String > _g1 = this->_styleNamesList;
HXDLIN(1415)			while((_g < _g1->length)){
HXLINE(1415)				::String x = _g1->__get(_g);
HXDLIN(1415)				_g = (_g + 1);
HXLINE(1416)				if ((newStyleNamesList->indexOf(x,null()) == -1)) {
HXLINE(1417)					classesToRemove->push(x);
HXLINE(1418)					requiresInvalidation = true;
            				}
            			}
            		}
HXLINE(1423)		this->_styleNamesList = newStyleNamesList;
HXLINE(1425)		if (requiresInvalidation) {
HXLINE(1426)			{
HXLINE(1426)				int _g = 0;
HXDLIN(1426)				while((_g < classesToAdd->length)){
HXLINE(1426)					::String x = classesToAdd->__get(_g);
HXDLIN(1426)					_g = (_g + 1);
HXLINE(1427)					this->addClass(x,false,false);
            				}
            			}
HXLINE(1429)			{
HXLINE(1429)				int _g1 = 0;
HXDLIN(1429)				while((_g1 < classesToRemove->length)){
HXLINE(1429)					::String x = classesToRemove->__get(_g1);
HXDLIN(1429)					_g1 = (_g1 + 1);
HXLINE(1430)					this->removeClass(x,false,false);
            				}
            			}
HXLINE(1433)			this->invalidateComponent(HX_("all",21,f9,49,00),true);
            		}
HXLINE(1436)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleNames,return )

::String Component_obj::get_styleString(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1447_get_styleString)
HXDLIN(1447)		return this->_styleString;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleString,return )

::String Component_obj::set_styleString(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1449_set_styleString)
HXLINE(1450)		bool _hx_tmp;
HXDLIN(1450)		if (::hx::IsNotNull( value )) {
HXLINE(1450)			_hx_tmp = (value == this->_styleString);
            		}
            		else {
HXLINE(1450)			_hx_tmp = true;
            		}
HXDLIN(1450)		if (_hx_tmp) {
HXLINE(1451)			return value;
            		}
HXLINE(1453)		::String cssString = ::StringTools_obj::trim(value);
HXLINE(1454)		if ((cssString.length == 0)) {
HXLINE(1455)			return value;
            		}
HXLINE(1457)		if ((::StringTools_obj::endsWith(cssString,HX_(";",3b,00,00,00)) == false)) {
HXLINE(1458)			cssString = (cssString + HX_(";",3b,00,00,00));
            		}
HXLINE(1460)		cssString = ((HX_("_ { ",66,f8,e3,3e) + cssString) + HX_("}",7d,00,00,00));
HXLINE(1461)		 ::haxe::ui::styles::StyleSheet s =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX )->parse(cssString);
HXLINE(1462)		 ::haxe::ui::styles::Style _hx_tmp1 = this->get_customStyle();
HXDLIN(1462)		_hx_tmp1->mergeDirectives(s->get_rules()->__get(0).StaticCast<  ::haxe::ui::styles::elements::RuleElement >()->directives);
HXLINE(1464)		this->_styleString = value;
HXLINE(1465)		{
HXLINE(1465)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1465)			{
            			}
            		}
HXLINE(1466)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleString,return )

 ::haxe::ui::styles::StyleSheet Component_obj::get_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1475_get_styleSheet)
HXLINE(1476)		if ((this->_useCachedStyleSheetRef == true)) {
HXLINE(1477)			return this->_cachedStyleSheetRef;
            		}
HXLINE(1480)		 ::haxe::ui::styles::StyleSheet s = null();
HXLINE(1481)		 ::haxe::ui::core::Component ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1482)		while(::hx::IsNotNull( ref )){
HXLINE(1483)			if (::hx::IsNotNull( ref->_styleSheet )) {
HXLINE(1484)				s = ref->_styleSheet;
HXLINE(1485)				goto _hx_goto_98;
            			}
HXLINE(1487)			ref = ref->parentComponent;
            		}
            		_hx_goto_98:;
HXLINE(1490)		this->_useCachedStyleSheetRef = true;
HXLINE(1491)		this->_cachedStyleSheetRef = s;
HXLINE(1493)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleSheet,return )

 ::haxe::ui::styles::StyleSheet Component_obj::set_styleSheet( ::haxe::ui::styles::StyleSheet value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1495_set_styleSheet)
HXLINE(1496)		this->_styleSheet = value;
HXLINE(1497)		this->resetCachedStyleSheetRef();
HXLINE(1498)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleSheet,return )

void Component_obj::resetCachedStyleSheetRef(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1500_resetCachedStyleSheetRef)
HXLINE(1501)		this->_cachedStyleSheetRef = null();
HXLINE(1502)		this->_useCachedStyleSheetRef = false;
HXLINE(1503)		{
HXLINE(1503)			int _g = 0;
HXDLIN(1503)			::Array< ::Dynamic> _g1;
HXDLIN(1503)			if (::hx::IsNull( this->_children )) {
HXLINE(1503)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1503)				_g1 = this->_children;
            			}
HXDLIN(1503)			while((_g < _g1->length)){
HXLINE(1503)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1503)				_g = (_g + 1);
HXLINE(1504)				c->resetCachedStyleSheetRef();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,resetCachedStyleSheetRef,(void))

bool Component_obj::get_includeInLayout(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1519_get_includeInLayout)
HXLINE(1520)		if ((this->_hidden == true)) {
HXLINE(1521)			return false;
            		}
HXLINE(1523)		return this->_includeInLayout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_includeInLayout,return )

bool Component_obj::set_includeInLayout(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1525_set_includeInLayout)
HXLINE(1526)		this->_includeInLayout = value;
HXLINE(1527)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_includeInLayout,return )

 ::haxe::ui::layouts::Layout Component_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1536_get_layout)
HXDLIN(1536)		return this->_layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_layout,return )

 ::haxe::ui::layouts::Layout Component_obj::set_layout( ::haxe::ui::layouts::Layout value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1538_set_layout)
HXLINE(1539)		if (::hx::IsNull( value )) {
HXLINE(1541)			return value;
            		}
HXLINE(1544)		bool _hx_tmp;
HXDLIN(1544)		if (::hx::IsNotNull( this->_layout )) {
HXLINE(1544)			::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(value));
HXDLIN(1544)			_hx_tmp = (_hx_tmp1 == ::Type_obj::getClassName(::Type_obj::getClass(this->_layout)));
            		}
            		else {
HXLINE(1544)			_hx_tmp = false;
            		}
HXDLIN(1544)		if (_hx_tmp) {
HXLINE(1545)			return value;
            		}
HXLINE(1548)		this->_layout = value;
HXLINE(1549)		this->_layout->set_component(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1550)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_layout,return )

void Component_obj::lockLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1553_lockLayout)
HXLINE(1554)		if ((this->_layoutLocked == true)) {
HXLINE(1555)			return;
            		}
HXLINE(1558)		this->_layoutLocked = true;
HXLINE(1559)		if ((recursive == true)) {
HXLINE(1560)			int _g = 0;
HXDLIN(1560)			::Array< ::Dynamic> _g1;
HXDLIN(1560)			if (::hx::IsNull( this->_children )) {
HXLINE(1560)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1560)				_g1 = this->_children;
            			}
HXDLIN(1560)			while((_g < _g1->length)){
HXLINE(1560)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1560)				_g = (_g + 1);
HXLINE(1561)				child->lockLayout(recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,lockLayout,(void))

void Component_obj::unlockLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1566_unlockLayout)
HXLINE(1567)		if ((this->_layoutLocked == false)) {
HXLINE(1568)			return;
            		}
HXLINE(1571)		if ((recursive == true)) {
HXLINE(1572)			int _g = 0;
HXDLIN(1572)			::Array< ::Dynamic> _g1;
HXDLIN(1572)			if (::hx::IsNull( this->_children )) {
HXLINE(1572)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1572)				_g1 = this->_children;
            			}
HXDLIN(1572)			while((_g < _g1->length)){
HXLINE(1572)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1572)				_g = (_g + 1);
HXLINE(1573)				child->unlockLayout(recursive);
            			}
            		}
HXLINE(1577)		this->_layoutLocked = false;
HXLINE(1578)		{
HXLINE(1578)			bool _hx_tmp;
HXDLIN(1578)			if (::hx::IsNotNull( this->_layout )) {
HXLINE(1578)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(1578)				_hx_tmp = true;
            			}
HXDLIN(1578)			if (!(_hx_tmp)) {
HXLINE(1578)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,unlockLayout,(void))

void Component_obj::ready(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1590_ready)
HXDLIN(1590)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1591)		this->set_depth(::haxe::ui::util::ComponentUtil_obj::getDepth(::hx::ObjectPtr<OBJ_>(this)));
HXLINE(1593)		if (this->isComponentInvalid(null())) {
HXLINE(1594)			this->_invalidateCount = 0;
HXLINE(1595)			::haxe::ui::validation::ValidationManager_obj::get_instance()->add(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1598)		if ((this->_componentReady == false)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1612_ready)
HXLINE(1613)				_gthis->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE(1614)				{
HXLINE(1614)					_gthis->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1614)					{
            					}
            				}
HXLINE(1616)				if (::hx::IsNotNull( _gthis->_compositeBuilder )) {
HXLINE(1617)					_gthis->_compositeBuilder->onReady();
            				}
HXLINE(1620)				_gthis->onReady();
HXLINE(1622)				 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1622)				_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("ready",63,a0,ba,e6),null(),null()));
HXLINE(1623)				if ((_gthis->_hidden == false)) {
HXLINE(1624)					 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1624)					_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(1599)			this->_componentReady = true;
HXLINE(1600)			this->handleReady();
HXLINE(1602)			::Array< ::Dynamic> _hx_tmp;
HXDLIN(1602)			if (::hx::IsNull( this->_children )) {
HXLINE(1602)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1602)				_hx_tmp = this->_children;
            			}
HXDLIN(1602)			if (::hx::IsNotNull( _hx_tmp )) {
HXLINE(1603)				int _g = 0;
HXDLIN(1603)				::Array< ::Dynamic> _g1;
HXDLIN(1603)				if (::hx::IsNull( this->_children )) {
HXLINE(1603)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(1603)					_g1 = this->_children;
            				}
HXDLIN(1603)				while((_g < _g1->length)){
HXLINE(1603)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1603)					_g = (_g + 1);
HXLINE(1604)					child->ready();
            				}
            			}
HXLINE(1608)			this->invalidateComponent(null(),null());
HXLINE(1610)			this->behaviours->ready();
HXLINE(1611)			this->behaviours->update();
HXLINE(1612)			::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,ready,(void))

void Component_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1630_onReady)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onReady,(void))

void Component_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1633_onInitialize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onInitialize,(void))

void Component_obj::onResized(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1637_onResized)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onResized,(void))

void Component_obj::onMoved(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1641_onMoved)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onMoved,(void))

bool Component_obj::get_scriptAccess(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1687_get_scriptAccess)
HXDLIN(1687)		return this->_scriptAccess;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_scriptAccess,return )

bool Component_obj::set_scriptAccess(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1689_set_scriptAccess)
HXLINE(1690)		if ((value == this->_scriptAccess)) {
HXLINE(1691)			return value;
            		}
HXLINE(1694)		this->_scriptAccess = value;
HXLINE(1695)		{
HXLINE(1695)			int _g = 0;
HXDLIN(1695)			::Array< ::Dynamic> _g1;
HXDLIN(1695)			if (::hx::IsNull( this->_children )) {
HXLINE(1695)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1695)				_g1 = this->_children;
            			}
HXDLIN(1695)			while((_g < _g1->length)){
HXLINE(1695)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1695)				_g = (_g + 1);
HXLINE(1696)				child->set_scriptAccess(value);
            			}
            		}
HXLINE(1699)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_scriptAccess,return )

::Array< ::Dynamic> Component_obj::get_namedComponents(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1704_get_namedComponents)
HXLINE(1705)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1706)		::haxe::ui::core::Component_obj::addNamedComponentsFrom(::hx::ObjectPtr<OBJ_>(this),list);
HXLINE(1707)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_namedComponents,return )

void Component_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1794_onThemeChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onThemeChanged,(void))

void Component_obj::initializeComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1814_initializeComponent)
HXLINE(1815)		if ((this->_isInitialized == true)) {
HXLINE(1816)			return;
            		}
HXLINE(1819)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1820)			this->_compositeBuilder->onInitialize();
            		}
HXLINE(1823)		this->onInitialize();
HXLINE(1825)		if (::hx::IsNull( this->_layout )) {
HXLINE(1826)			this->set_layout(this->createLayout());
            		}
HXLINE(1829)		this->_isInitialized = true;
HXLINE(1831)		if (this->hasEvent(HX_("initialize",50,31,bb,ec),null())) {
HXLINE(1832)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("initialize",50,31,bb,ec),null(),null()));
            		}
            	}


void Component_obj::validateInitialSize(bool isInitialized){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1838_validateInitialSize)
HXDLIN(1838)		bool _hx_tmp;
HXDLIN(1838)		bool _hx_tmp1;
HXDLIN(1838)		if ((isInitialized == false)) {
HXDLIN(1838)			_hx_tmp1 = ::hx::IsNotNull( this->_style );
            		}
            		else {
HXDLIN(1838)			_hx_tmp1 = false;
            		}
HXDLIN(1838)		if (_hx_tmp1) {
HXDLIN(1838)			_hx_tmp = (this->_initialSizeApplied == false);
            		}
            		else {
HXDLIN(1838)			_hx_tmp = false;
            		}
HXDLIN(1838)		if (_hx_tmp) {
HXLINE(1839)			bool _hx_tmp;
HXDLIN(1839)			bool _hx_tmp1;
HXDLIN(1839)			if (::hx::IsNull( this->_style->initialWidth )) {
HXLINE(1839)				_hx_tmp1 = ::hx::IsNotNull( this->_style->initialPercentWidth );
            			}
            			else {
HXLINE(1839)				_hx_tmp1 = true;
            			}
HXDLIN(1839)			if (_hx_tmp1) {
HXLINE(1839)				if ((this->get_width() <= 0)) {
HXLINE(1839)					_hx_tmp = ::hx::IsNull( this->get_percentWidth() );
            				}
            				else {
HXLINE(1839)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1839)				_hx_tmp = false;
            			}
HXDLIN(1839)			if (_hx_tmp) {
HXLINE(1840)				if (::hx::IsNotNull( this->_style->initialWidth )) {
HXLINE(1841)					this->set_width(( (Float)(this->_style->initialWidth) ));
HXLINE(1842)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1843)					if (::hx::IsNotNull( this->_style->initialPercentWidth )) {
HXLINE(1844)						this->set_percentWidth(this->_style->initialPercentWidth);
HXLINE(1845)						this->_initialSizeApplied = true;
            					}
            				}
            			}
HXLINE(1849)			bool _hx_tmp2;
HXDLIN(1849)			bool _hx_tmp3;
HXDLIN(1849)			if (::hx::IsNull( this->_style->initialHeight )) {
HXLINE(1849)				_hx_tmp3 = ::hx::IsNotNull( this->_style->initialPercentHeight );
            			}
            			else {
HXLINE(1849)				_hx_tmp3 = true;
            			}
HXDLIN(1849)			if (_hx_tmp3) {
HXLINE(1849)				if ((this->get_height() <= 0)) {
HXLINE(1849)					_hx_tmp2 = ::hx::IsNull( this->get_percentHeight() );
            				}
            				else {
HXLINE(1849)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(1849)				_hx_tmp2 = false;
            			}
HXDLIN(1849)			if (_hx_tmp2) {
HXLINE(1850)				if (::hx::IsNotNull( this->_style->initialHeight )) {
HXLINE(1851)					this->set_height(( (Float)(this->_style->initialHeight) ));
HXLINE(1852)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1853)					if (::hx::IsNotNull( this->_style->initialPercentHeight )) {
HXLINE(1854)						this->set_percentHeight(this->_style->initialPercentHeight);
HXLINE(1855)						this->_initialSizeApplied = true;
            					}
            				}
            			}
            		}
            	}


void Component_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1861_validateComponentData)
HXLINE(1862)		this->behaviours->validateData();
HXLINE(1864)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1865)			this->_compositeBuilder->validateComponentData();
            		}
            	}


bool Component_obj::validateComponentLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1872_validateComponentLayout)
HXLINE(1873)		this->get_layout()->refresh();
HXLINE(1876)		while(this->validateComponentAutoSize()){
HXLINE(1877)			this->get_layout()->refresh();
            		}
HXLINE(1880)		bool sizeChanged = false;
HXLINE(1881)		bool _hx_tmp;
HXDLIN(1881)		if (::hx::IsEq( this->_componentWidth,this->_actualWidth )) {
HXLINE(1881)			_hx_tmp = ::hx::IsNotEq( this->_componentHeight,this->_actualHeight );
            		}
            		else {
HXLINE(1881)			_hx_tmp = true;
            		}
HXDLIN(1881)		if (_hx_tmp) {
HXLINE(1882)			this->_actualWidth = this->_componentWidth;
HXLINE(1883)			this->_actualHeight = this->_componentHeight;
HXLINE(1885)			this->enforceSizeConstraints();
HXLINE(1887)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1888)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1888)				bool _hx_tmp;
HXDLIN(1888)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1888)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1888)					_hx_tmp = true;
            				}
HXDLIN(1888)				if (!(_hx_tmp)) {
HXLINE(1888)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1891)			this->onResized();
HXLINE(1893)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),null(),null()));
HXLINE(1896)			sizeChanged = true;
            		}
HXLINE(1899)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1900)			if (this->_compositeBuilder->validateComponentLayout()) {
HXLINE(1900)				sizeChanged = true;
            			}
            		}
HXLINE(1903)		return sizeChanged;
            	}


void Component_obj::enforceSizeConstraints(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1907_enforceSizeConstraints)
HXDLIN(1907)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE(1909)			bool _hx_tmp;
HXDLIN(1909)			if (::hx::IsNotNull( this->get_style()->minWidth )) {
HXLINE(1909)				 ::Dynamic _hx_tmp1 = this->_componentWidth;
HXDLIN(1909)				_hx_tmp = ::hx::IsLess( _hx_tmp1,this->get_style()->minWidth );
            			}
            			else {
HXLINE(1909)				_hx_tmp = false;
            			}
HXDLIN(1909)			if (_hx_tmp) {
HXLINE(1910)				this->_componentWidth = (this->_actualWidth = (this->_width = this->get_style()->minWidth));
            			}
HXLINE(1914)			bool _hx_tmp1;
HXDLIN(1914)			bool _hx_tmp2;
HXDLIN(1914)			if (::hx::IsNotNull( this->get_style()->maxWidth )) {
HXLINE(1914)				_hx_tmp2 = ::hx::IsNull( this->get_style()->maxPercentWidth );
            			}
            			else {
HXLINE(1914)				_hx_tmp2 = false;
            			}
HXDLIN(1914)			if (_hx_tmp2) {
HXLINE(1914)				 ::Dynamic _hx_tmp = this->_componentWidth;
HXDLIN(1914)				_hx_tmp1 = ::hx::IsGreater( _hx_tmp,this->get_style()->maxWidth );
            			}
            			else {
HXLINE(1914)				_hx_tmp1 = false;
            			}
HXDLIN(1914)			if (_hx_tmp1) {
HXLINE(1915)				this->_componentWidth = (this->_actualWidth = (this->_width = this->get_style()->maxWidth));
            			}
            			else {
HXLINE(1916)				bool _hx_tmp;
HXDLIN(1916)				if (::hx::IsNull( this->get_style()->maxWidth )) {
HXLINE(1916)					_hx_tmp = ::hx::IsNotNull( this->get_style()->maxPercentWidth );
            				}
            				else {
HXLINE(1916)					_hx_tmp = false;
            				}
HXDLIN(1916)				if (_hx_tmp) {
HXLINE(1917)					 ::haxe::ui::core::Component p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1918)					Float max = ( (Float)(0) );
HXLINE(1919)					while(::hx::IsNotNull( p )){
HXLINE(1920)						bool _hx_tmp;
HXDLIN(1920)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1920)							_hx_tmp = ::hx::IsNull( p->get_style()->maxPercentWidth );
            						}
            						else {
HXLINE(1920)							_hx_tmp = false;
            						}
HXDLIN(1920)						if (_hx_tmp) {
HXLINE(1921)							max = (max + p->get_width());
HXLINE(1922)							goto _hx_goto_128;
            						}
HXLINE(1924)						bool _hx_tmp1;
HXDLIN(1924)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1924)							_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::ObjectPtr<OBJ_>(this) );
            						}
            						else {
HXLINE(1924)							_hx_tmp1 = false;
            						}
HXDLIN(1924)						if (_hx_tmp1) {
HXLINE(1925)							 ::Dynamic max1 = p->get_style()->paddingLeft;
HXDLIN(1925)							max = (max - (max1 + p->get_style()->paddingRight));
            						}
HXLINE(1927)						p = p->parentComponent;
            					}
            					_hx_goto_128:;
HXLINE(1929)					max = ((max * ( (Float)(this->get_style()->maxPercentWidth) )) / ( (Float)(100) ));
HXLINE(1930)					bool _hx_tmp;
HXDLIN(1930)					if ((max > 0)) {
HXLINE(1930)						_hx_tmp = ::hx::IsGreater( this->_componentWidth,max );
            					}
            					else {
HXLINE(1930)						_hx_tmp = false;
            					}
HXDLIN(1930)					if (_hx_tmp) {
HXLINE(1931)						this->_componentWidth = (this->_actualWidth = (this->_width = max));
            					}
            				}
            			}
HXLINE(1936)			bool _hx_tmp3;
HXDLIN(1936)			if (::hx::IsNotNull( this->get_style()->minHeight )) {
HXLINE(1936)				 ::Dynamic _hx_tmp = this->_componentHeight;
HXDLIN(1936)				_hx_tmp3 = ::hx::IsLess( _hx_tmp,this->get_style()->minHeight );
            			}
            			else {
HXLINE(1936)				_hx_tmp3 = false;
            			}
HXDLIN(1936)			if (_hx_tmp3) {
HXLINE(1937)				this->_componentHeight = (this->_actualHeight = (this->_height = this->get_style()->minHeight));
            			}
HXLINE(1941)			bool _hx_tmp4;
HXDLIN(1941)			bool _hx_tmp5;
HXDLIN(1941)			if (::hx::IsNotNull( this->get_style()->maxHeight )) {
HXLINE(1941)				_hx_tmp5 = ::hx::IsNull( this->get_style()->maxPercentHeight );
            			}
            			else {
HXLINE(1941)				_hx_tmp5 = false;
            			}
HXDLIN(1941)			if (_hx_tmp5) {
HXLINE(1941)				 ::Dynamic _hx_tmp = this->_componentHeight;
HXDLIN(1941)				_hx_tmp4 = ::hx::IsGreater( _hx_tmp,this->get_style()->maxHeight );
            			}
            			else {
HXLINE(1941)				_hx_tmp4 = false;
            			}
HXDLIN(1941)			if (_hx_tmp4) {
HXLINE(1942)				this->_componentHeight = (this->_actualHeight = (this->_height = this->get_style()->maxHeight));
            			}
            			else {
HXLINE(1943)				bool _hx_tmp;
HXDLIN(1943)				if (::hx::IsNull( this->get_style()->maxHeight )) {
HXLINE(1943)					_hx_tmp = ::hx::IsNotNull( this->get_style()->maxPercentHeight );
            				}
            				else {
HXLINE(1943)					_hx_tmp = false;
            				}
HXDLIN(1943)				if (_hx_tmp) {
HXLINE(1944)					 ::haxe::ui::core::Component p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1945)					Float max = ( (Float)(0) );
HXLINE(1946)					while(::hx::IsNotNull( p )){
HXLINE(1947)						bool _hx_tmp;
HXDLIN(1947)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1947)							_hx_tmp = ::hx::IsNull( p->get_style()->maxPercentHeight );
            						}
            						else {
HXLINE(1947)							_hx_tmp = false;
            						}
HXDLIN(1947)						if (_hx_tmp) {
HXLINE(1948)							max = (max + p->get_height());
HXLINE(1949)							goto _hx_goto_129;
            						}
HXLINE(1951)						bool _hx_tmp1;
HXDLIN(1951)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1951)							_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::ObjectPtr<OBJ_>(this) );
            						}
            						else {
HXLINE(1951)							_hx_tmp1 = false;
            						}
HXDLIN(1951)						if (_hx_tmp1) {
HXLINE(1952)							 ::Dynamic max1 = p->get_style()->paddingTop;
HXDLIN(1952)							max = (max - (max1 + p->get_style()->paddingBottom));
            						}
HXLINE(1954)						p = p->parentComponent;
            					}
            					_hx_goto_129:;
HXLINE(1956)					max = ((max * ( (Float)(this->get_style()->maxPercentHeight) )) / ( (Float)(100) ));
HXLINE(1957)					bool _hx_tmp;
HXDLIN(1957)					if ((max > 0)) {
HXLINE(1957)						_hx_tmp = ::hx::IsGreater( this->_componentHeight,max );
            					}
            					else {
HXLINE(1957)						_hx_tmp = false;
            					}
HXDLIN(1957)					if (_hx_tmp) {
HXLINE(1958)						this->_componentHeight = (this->_actualHeight = (this->_height = max));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,enforceSizeConstraints,(void))

void Component_obj::validateComponentStyle(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1964_validateComponentStyle)
HXLINE(1965)		 ::haxe::ui::styles::Style s = ::haxe::ui::Toolkit_obj::styleSheet->buildStyleFor(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1966)		if (::hx::IsNotNull( this->get_styleSheet() )) {
HXLINE(1967)			 ::haxe::ui::styles::Style localStyle = this->get_styleSheet()->buildStyleFor(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(1968)			s->apply(localStyle);
            		}
HXLINE(1970)		s->apply(this->get_customStyle());
HXLINE(1972)		bool _hx_tmp;
HXDLIN(1972)		if (::hx::IsNotNull( this->_style )) {
HXLINE(1972)			_hx_tmp = (this->_style->equalTo(s) == false);
            		}
            		else {
HXLINE(1972)			_hx_tmp = true;
            		}
HXDLIN(1972)		if (_hx_tmp) {
HXLINE(1974)			bool marginsChanged = false;
HXLINE(1975)			bool _hx_tmp;
HXDLIN(1975)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1975)				_hx_tmp = ::hx::IsNotNull( this->_style );
            			}
            			else {
HXLINE(1975)				_hx_tmp = false;
            			}
HXDLIN(1975)			if (_hx_tmp) {
HXLINE(1976)				bool marginsChanged1;
HXDLIN(1976)				bool marginsChanged2;
HXDLIN(1976)				if (::hx::IsEq( this->_style->marginLeft,s->marginLeft )) {
HXLINE(1976)					marginsChanged2 = ::hx::IsNotEq( this->_style->marginRight,s->marginRight );
            				}
            				else {
HXLINE(1976)					marginsChanged2 = true;
            				}
HXDLIN(1976)				if (!(marginsChanged2)) {
HXLINE(1976)					marginsChanged1 = ::hx::IsNotEq( this->_style->marginTop,s->marginTop );
            				}
            				else {
HXLINE(1976)					marginsChanged1 = true;
            				}
HXDLIN(1976)				if (!(marginsChanged1)) {
HXLINE(1976)					marginsChanged = ::hx::IsNotEq( this->_style->marginBottom,s->marginBottom );
            				}
            				else {
HXLINE(1976)					marginsChanged = true;
            				}
            			}
HXLINE(1978)			bool bordersChanged = false;
HXLINE(1979)			bool _hx_tmp1;
HXDLIN(1979)			if (::hx::IsNotNull( this->_style )) {
HXLINE(1979)				 ::Dynamic _hx_tmp = this->_style->get_fullBorderSize();
HXDLIN(1979)				_hx_tmp1 = ::hx::IsNotEq( _hx_tmp,s->get_fullBorderSize() );
            			}
            			else {
HXLINE(1979)				_hx_tmp1 = false;
            			}
HXDLIN(1979)			if (_hx_tmp1) {
HXLINE(1980)				bordersChanged = true;
            			}
HXLINE(1983)			this->_style = s;
HXLINE(1984)			this->applyStyle(s);
HXLINE(1985)			if ((bordersChanged == true)) {
HXLINE(1986)				bool _hx_tmp;
HXDLIN(1986)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1986)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1986)					_hx_tmp = true;
            				}
HXDLIN(1986)				if (!(_hx_tmp)) {
HXLINE(1986)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1988)			if ((marginsChanged == true)) {
HXLINE(1989)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1989)				bool _hx_tmp;
HXDLIN(1989)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1989)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1989)					_hx_tmp = true;
            				}
HXDLIN(1989)				if (!(_hx_tmp)) {
HXLINE(1989)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            	}


void Component_obj::validateComponentPosition(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1994_validateComponentPosition)
HXLINE(1995)		this->handlePosition(this->_left,this->_top,this->_style);
HXLINE(1997)		this->onMoved();
HXLINE(1998)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("move",11,e3,60,48),null(),null()));
            	}


void Component_obj::updateComponentDisplay(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2002_updateComponentDisplay)
HXLINE(2003)		bool _hx_tmp;
HXDLIN(2003)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE(2003)			_hx_tmp = ::hx::IsNull( this->get_componentHeight() );
            		}
            		else {
HXLINE(2003)			_hx_tmp = true;
            		}
HXDLIN(2003)		if (_hx_tmp) {
HXLINE(2004)			return;
            		}
HXLINE(2007)		 ::Dynamic _hx_tmp1 = this->get_componentWidth();
HXDLIN(2007)		 ::Dynamic _hx_tmp2 = this->get_componentHeight();
HXDLIN(2007)		this->handleSize(_hx_tmp1,_hx_tmp2,this->_style);
HXLINE(2013)		bool _hx_tmp3;
HXDLIN(2013)		if (::hx::IsNull( this->_componentClipRect )) {
HXLINE(2014)			bool _hx_tmp;
HXDLIN(2014)			if (::hx::IsNotNull( this->get_style() )) {
HXLINE(2014)				_hx_tmp = ::hx::IsNotNull( this->get_style()->clip );
            			}
            			else {
HXLINE(2014)				_hx_tmp = false;
            			}
HXDLIN(2014)			if (_hx_tmp) {
HXLINE(2013)				_hx_tmp3 = ::hx::IsEq( this->get_style()->clip,true );
            			}
            			else {
HXLINE(2013)				_hx_tmp3 = false;
            			}
            		}
            		else {
HXLINE(2013)			_hx_tmp3 = true;
            		}
HXDLIN(2013)		if (_hx_tmp3) {
HXLINE(2015)			 ::haxe::ui::geom::Rectangle _hx_tmp;
HXDLIN(2015)			if (::hx::IsNotNull( this->_componentClipRect )) {
HXLINE(2015)				_hx_tmp = this->_componentClipRect;
            			}
            			else {
HXLINE(2015)				 ::Dynamic _hx_tmp1 = this->get_componentWidth();
HXDLIN(2015)				_hx_tmp =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,this->get_componentHeight());
            			}
HXDLIN(2015)			this->handleClipRect(_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,updateComponentDisplay,(void))

bool Component_obj::validateComponentAutoSize(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2022_validateComponentAutoSize)
HXLINE(2023)		bool invalidate = false;
HXLINE(2024)		bool _hx_tmp;
HXDLIN(2024)		if ((this->get_autoWidth() != true)) {
HXLINE(2024)			_hx_tmp = (this->get_autoHeight() == true);
            		}
            		else {
HXLINE(2024)			_hx_tmp = true;
            		}
HXDLIN(2024)		if (_hx_tmp) {
HXLINE(2025)			 ::haxe::ui::geom::Size s = this->get_layout()->calcAutoSize(null());
HXLINE(2026)			if ((this->get_autoWidth() == true)) {
HXLINE(2027)				if (::hx::IsNotEq( s->width,this->_componentWidth )) {
HXLINE(2028)					this->_componentWidth = s->width;
HXLINE(2029)					invalidate = true;
            				}
            			}
HXLINE(2032)			if ((this->get_autoHeight() == true)) {
HXLINE(2033)				if (::hx::IsNotEq( s->height,this->_componentHeight )) {
HXLINE(2034)					this->_componentHeight = s->height;
HXLINE(2035)					invalidate = true;
            				}
            			}
            		}
HXLINE(2040)		return invalidate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,validateComponentAutoSize,return )

void Component_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2045_applyStyle)
HXLINE(2046)		this->super::applyStyle(style);
HXLINE(2048)		bool _hx_tmp;
HXDLIN(2048)		if (::hx::IsNotNull( style )) {
HXLINE(2048)			_hx_tmp = (this->_initialSizeApplied == false);
            		}
            		else {
HXLINE(2048)			_hx_tmp = false;
            		}
HXDLIN(2048)		if (_hx_tmp) {
HXLINE(2049)			bool _hx_tmp;
HXDLIN(2049)			bool _hx_tmp1;
HXDLIN(2049)			if (::hx::IsNull( style->initialWidth )) {
HXLINE(2049)				_hx_tmp1 = ::hx::IsNotNull( style->initialPercentWidth );
            			}
            			else {
HXLINE(2049)				_hx_tmp1 = true;
            			}
HXDLIN(2049)			if (_hx_tmp1) {
HXLINE(2049)				if ((this->get_width() <= 0)) {
HXLINE(2049)					_hx_tmp = ::hx::IsNull( this->get_percentWidth() );
            				}
            				else {
HXLINE(2049)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(2049)				_hx_tmp = false;
            			}
HXDLIN(2049)			if (_hx_tmp) {
HXLINE(2050)				if (::hx::IsNotNull( style->initialWidth )) {
HXLINE(2051)					this->set_width(( (Float)(style->initialWidth) ));
HXLINE(2052)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(2053)					if (::hx::IsNotNull( style->initialPercentWidth )) {
HXLINE(2054)						this->set_percentWidth(style->initialPercentWidth);
HXLINE(2055)						this->_initialSizeApplied = true;
            					}
            				}
            			}
HXLINE(2059)			bool _hx_tmp2;
HXDLIN(2059)			bool _hx_tmp3;
HXDLIN(2059)			if (::hx::IsNull( style->initialHeight )) {
HXLINE(2059)				_hx_tmp3 = ::hx::IsNotNull( style->initialPercentHeight );
            			}
            			else {
HXLINE(2059)				_hx_tmp3 = true;
            			}
HXDLIN(2059)			if (_hx_tmp3) {
HXLINE(2059)				if ((this->get_height() <= 0)) {
HXLINE(2059)					_hx_tmp2 = ::hx::IsNull( this->get_percentHeight() );
            				}
            				else {
HXLINE(2059)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(2059)				_hx_tmp2 = false;
            			}
HXDLIN(2059)			if (_hx_tmp2) {
HXLINE(2060)				if (::hx::IsNotNull( style->initialHeight )) {
HXLINE(2061)					this->set_height(( (Float)(style->initialHeight) ));
HXLINE(2062)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(2063)					if (::hx::IsNotNull( style->initialPercentHeight )) {
HXLINE(2064)						this->set_percentHeight(style->initialPercentHeight);
HXLINE(2065)						this->_initialSizeApplied = true;
            					}
            				}
            			}
            		}
HXLINE(2070)		if (::hx::IsNotNull( style->left )) {
HXLINE(2071)			this->set_left(style->left);
            		}
HXLINE(2073)		if (::hx::IsNotNull( style->top )) {
HXLINE(2074)			this->set_top(style->top);
            		}
HXLINE(2077)		if (::hx::IsNotNull( style->percentWidth )) {
HXLINE(2078)			this->_width = null();
HXLINE(2079)			this->set_componentWidth(null());
HXLINE(2080)			this->set_percentWidth(style->percentWidth);
            		}
HXLINE(2082)		if (::hx::IsNotNull( style->percentHeight )) {
HXLINE(2083)			this->_height = null();
HXLINE(2084)			this->set_componentHeight(null());
HXLINE(2085)			this->set_percentHeight(style->percentHeight);
            		}
HXLINE(2087)		if (::hx::IsNotNull( style->width )) {
HXLINE(2088)			this->set_percentWidth(null());
HXLINE(2089)			this->set_width(( (Float)(style->width) ));
            		}
HXLINE(2091)		if (::hx::IsNotNull( style->height )) {
HXLINE(2092)			this->set_percentHeight(null());
HXLINE(2093)			this->set_height(( (Float)(style->height) ));
            		}
HXLINE(2096)		if (::hx::IsNotNull( style->native )) {
HXLINE(2097)			this->set_native(style->native);
            		}
HXLINE(2100)		if (::hx::IsNotNull( style->hidden )) {
HXLINE(2101)			this->set_hidden(( (bool)(style->hidden) ));
            		}
HXLINE(2104)		if ((this->_pauseAnimationStyleChanges == false)) {
HXLINE(2105)			if (::hx::IsNotNull( style->animationName )) {
HXLINE(2106)				::Dynamic this1 = ::haxe::ui::Toolkit_obj::styleSheet->get_animations();
HXDLIN(2106)				 ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames = ( ( ::haxe::ui::styles::elements::AnimationKeyFrames)(( ( ::haxe::ds::StringMap)(this1) )->get(style->animationName)) );
HXLINE(2107)				this->applyAnimationKeyFrame(animationKeyFrames,style->animationOptions);
            			}
            			else {
HXLINE(2108)				if (::hx::IsNotNull( this->get_componentAnimation() )) {
HXLINE(2109)					this->set_componentAnimation(null());
            				}
            			}
            		}
HXLINE(2113)		bool _hx_tmp1;
HXDLIN(2113)		if (::hx::IsNotNull( style->pointerEvents )) {
HXLINE(2113)			_hx_tmp1 = (style->pointerEvents != HX_("none",b8,12,0a,49));
            		}
            		else {
HXLINE(2113)			_hx_tmp1 = false;
            		}
HXDLIN(2113)		if (_hx_tmp1) {
HXLINE(2114)			if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn()) == false)) {
HXLINE(2115)				if (::hx::IsNull( style->cursor )) {
HXLINE(2116)					this->get_customStyle()->cursor = HX_("pointer",bd,c0,21,51);
            				}
HXLINE(2118)				this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn(),null());
            			}
HXLINE(2120)			if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn()) == false)) {
HXLINE(2121)				this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn(),null());
            			}
HXLINE(2123)			if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn()) == false)) {
HXLINE(2124)				this->registerEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn(),null());
            			}
HXLINE(2126)			if ((this->hasEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn()) == false)) {
HXLINE(2127)				this->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn(),null());
            			}
HXLINE(2129)			this->handleFrameworkProperty(HX_("allowMouseInteraction",56,34,ef,e0),true);
            		}
            		else {
HXLINE(2130)			if (::hx::IsNotNull( style->pointerEvents )) {
HXLINE(2131)				if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn()) == true)) {
HXLINE(2132)					this->get_customStyle()->cursor = null();
HXLINE(2133)					this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn());
            				}
HXLINE(2135)				if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn()) == true)) {
HXLINE(2136)					this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn());
            				}
HXLINE(2138)				if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn()) == true)) {
HXLINE(2139)					this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn());
            				}
HXLINE(2141)				if ((this->hasEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn()) == true)) {
HXLINE(2142)					this->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn());
            				}
HXLINE(2144)				this->handleFrameworkProperty(HX_("allowMouseInteraction",56,34,ef,e0),false);
            			}
            		}
HXLINE(2147)		if (::hx::IsNotNull( style->includeInLayout )) {
HXLINE(2148)			this->set_includeInLayout(( (bool)(style->includeInLayout) ));
            		}
HXLINE(2151)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2152)			this->_compositeBuilder->applyStyle(style);
            		}
            	}


void Component_obj::onPointerEventsMouseOver( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2157_onPointerEventsMouseOver)
HXDLIN(2157)		this->addClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseOver,(void))

void Component_obj::onPointerEventsMouseOut( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2161_onPointerEventsMouseOut)
HXDLIN(2161)		this->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseOut,(void))

void Component_obj::onPointerEventsMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2165_onPointerEventsMouseDown)
HXDLIN(2165)		this->addClass(HX_(":down",9c,9d,ab,a7),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseDown,(void))

void Component_obj::onPointerEventsMouseUp( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2169_onPointerEventsMouseUp)
HXDLIN(2169)		this->removeClass(HX_(":down",9c,9d,ab,a7),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseUp,(void))

void Component_obj::applyAnimationKeyFrame( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::haxe::ui::styles::animation::AnimationOptions options){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2188_applyAnimationKeyFrame)
HXLINE(2188)			if (_gthis->hasEvent(HX_("animationend",57,4f,3c,aa),null())) {
HXLINE(2189)				 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(2189)				_gthis1->dispatch( ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,HX_("animationend",57,4f,3c,aa)));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2176_applyAnimationKeyFrame)
HXDLIN(2176)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(2177)		bool _hx_tmp;
HXDLIN(2177)		bool _hx_tmp1;
HXDLIN(2177)		bool _hx_tmp2;
HXDLIN(2177)		if ((this->_animatable != false)) {
HXLINE(2177)			_hx_tmp2 = ::hx::IsNull( options );
            		}
            		else {
HXLINE(2177)			_hx_tmp2 = true;
            		}
HXDLIN(2177)		if (!(_hx_tmp2)) {
HXLINE(2177)			_hx_tmp1 = ::hx::IsEq( options->duration,0 );
            		}
            		else {
HXLINE(2177)			_hx_tmp1 = true;
            		}
HXDLIN(2177)		if (!(_hx_tmp1)) {
HXLINE(2178)			bool _hx_tmp1;
HXDLIN(2178)			if (::hx::IsNotNull( this->_componentAnimation )) {
HXLINE(2178)				_hx_tmp1 = (this->_componentAnimation->name == animationKeyFrames->id);
            			}
            			else {
HXLINE(2178)				_hx_tmp1 = false;
            			}
HXDLIN(2178)			if (_hx_tmp1) {
HXLINE(2177)				_hx_tmp = (options->compareToAnimation(this->_componentAnimation) == true);
            			}
            			else {
HXLINE(2177)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(2177)			_hx_tmp = true;
            		}
HXDLIN(2177)		if (_hx_tmp) {
HXLINE(2179)			return;
            		}
HXLINE(2182)		if (this->hasEvent(HX_("animationstart",de,96,01,01),null())) {
HXLINE(2183)			this->dispatch( ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,HX_("animationstart",de,96,01,01)));
            		}
HXLINE(2186)		this->set_componentAnimation(::haxe::ui::styles::animation::Animation_obj::createWithKeyFrames(animationKeyFrames,::hx::ObjectPtr<OBJ_>(this),options));
HXLINE(2187)		this->get_componentAnimation()->run( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,applyAnimationKeyFrame,(void))

 ::haxe::ui::core::ComponentContainer Component_obj::cloneComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2202_cloneComponent)
HXLINE( 441)		 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->super::cloneComponent()) );
HXLINE( 450)		if (::hx::IsNotNull( this->get_styleNames() )) {
HXLINE( 450)			c->set_styleNames(this->get_styleNames());
            		}
HXDLIN( 450)		if (::hx::IsNotNull( this->get_styleString() )) {
HXLINE( 450)			c->set_styleString(this->get_styleString());
            		}
HXLINE(2203)		bool _hx_tmp = (this->_componentReady == false);
HXLINE(2206)		if ((this->_hidden == true)) {
HXLINE(2207)			c->hide();
            		}
HXLINE(2209)		bool _hx_tmp1;
HXDLIN(2209)		if ((this->get_autoWidth() == false)) {
HXLINE(2209)			_hx_tmp1 = (this->get_width() > 0);
            		}
            		else {
HXLINE(2209)			_hx_tmp1 = false;
            		}
HXDLIN(2209)		if (_hx_tmp1) {
HXLINE(2210)			c->set_width(this->get_width());
            		}
HXLINE(2212)		bool _hx_tmp2;
HXDLIN(2212)		if ((this->get_autoHeight() == false)) {
HXLINE(2212)			_hx_tmp2 = (this->get_height() > 0);
            		}
            		else {
HXLINE(2212)			_hx_tmp2 = false;
            		}
HXDLIN(2212)		if (_hx_tmp2) {
HXLINE(2213)			c->set_height(this->get_height());
            		}
HXLINE(2215)		if (::hx::IsNotNull( this->get_customStyle() )) {
HXLINE(2216)			if (::hx::IsNull( c->get_customStyle() )) {
HXLINE(2217)				c->set_customStyle( ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
            			}
HXLINE(2219)			 ::haxe::ui::styles::Style _hx_tmp = c->get_customStyle();
HXDLIN(2219)			_hx_tmp->apply(this->get_customStyle());
            		}
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp3;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp3 = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp4;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp4 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp4 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp3->length != _hx_tmp4->length)) {
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
HXLINE( 463)			this->postCloneComponent(c);
            		}
HXLINE( 465)		return c;
            	}


bool Component_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2223_get_isComponentClipped)
HXLINE(2224)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2225)			return this->_compositeBuilder->get_isComponentClipped();
            		}
HXLINE(2227)		return ::hx::IsNotNull( this->get_componentClipRect() );
            	}


::String Component_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2234_get_cssName)
HXLINE(2235)		::String cssName = null();
HXLINE(2236)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2237)			cssName = this->_compositeBuilder->get_cssName();
            		}
HXLINE(2239)		if (::hx::IsNull( cssName )) {
HXLINE(2240)			cssName = ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).split(HX_(".",2e,00,00,00))->pop()) ).toLowerCase();
            		}
HXLINE(2242)		return cssName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_cssName,return )

bool Component_obj::get_isComponentSolid(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2249_get_isComponentSolid)
HXLINE(2250)		if (::hx::IsNull( this->get_style() )) {
HXLINE(2251)			return false;
            		}
HXLINE(2254)		bool _hx_tmp;
HXDLIN(2254)		if (::hx::IsNull( this->get_style()->backgroundColor )) {
HXLINE(2254)			_hx_tmp = ::hx::IsNotNull( this->get_style()->backgroundImage );
            		}
            		else {
HXLINE(2254)			_hx_tmp = true;
            		}
HXDLIN(2254)		if (_hx_tmp) {
HXLINE(2255)			bool _hx_tmp;
HXDLIN(2255)			if (::hx::IsNotNull( this->get_style()->opacity )) {
HXLINE(2255)				_hx_tmp = ::hx::IsGreater( this->get_style()->opacity,0 );
            			}
            			else {
HXLINE(2255)				_hx_tmp = true;
            			}
HXDLIN(2255)			if (_hx_tmp) {
HXLINE(2256)				bool _hx_tmp;
HXDLIN(2256)				if (::hx::IsNotNull( this->get_style()->backgroundOpacity )) {
HXLINE(2256)					_hx_tmp = ::hx::IsGreater( this->get_style()->backgroundOpacity,0 );
            				}
            				else {
HXLINE(2256)					_hx_tmp = true;
            				}
HXDLIN(2256)				if (_hx_tmp) {
HXLINE(2257)					return true;
            				}
            			}
            		}
HXLINE(2262)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_isComponentSolid,return )

void Component_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::Dynamic Component_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_color)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->color )) {
HXLINE( 266)			return this->get_customStyle()->color;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->color );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_color,return )

 ::Dynamic Component_obj::set_color( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_color)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->color,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->color = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->color = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_color,return )

 ::Dynamic Component_obj::get_backgroundColor(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_backgroundColor)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->backgroundColor )) {
HXLINE( 266)			return this->get_customStyle()->backgroundColor;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundColor );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundColor,return )

 ::Dynamic Component_obj::set_backgroundColor( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_backgroundColor)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->backgroundColor,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->backgroundColor = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->backgroundColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundColor,return )

 ::Dynamic Component_obj::get_backgroundColorEnd(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_backgroundColorEnd)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->backgroundColorEnd )) {
HXLINE( 266)			return this->get_customStyle()->backgroundColorEnd;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundColorEnd );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->backgroundColorEnd;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundColorEnd,return )

 ::Dynamic Component_obj::set_backgroundColorEnd( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_backgroundColorEnd)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->backgroundColorEnd,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->backgroundColorEnd = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->backgroundColorEnd = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundColorEnd,return )

 ::haxe::ui::util::VariantType Component_obj::get_backgroundImage(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_backgroundImage)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->backgroundImage )) {
HXLINE( 266)			return this->get_customStyle()->backgroundImage;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundImage );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->backgroundImage;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundImage,return )

 ::haxe::ui::util::VariantType Component_obj::set_backgroundImage( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_backgroundImage)
HXLINE( 278)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(this->get_customStyle()->backgroundImage,value)) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->backgroundImage = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->backgroundImage = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundImage,return )

 ::Dynamic Component_obj::get_borderColor(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_borderColor)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->borderColor )) {
HXLINE( 266)			return this->get_customStyle()->borderColor;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->borderColor );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->borderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderColor,return )

 ::Dynamic Component_obj::set_borderColor( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_borderColor)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->borderColor,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->borderColor = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->borderColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 293)		{
HXLINE( 294)			this->get_customStyle()->borderTopColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 295)			this->get_customStyle()->borderLeftColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 296)			this->get_customStyle()->borderBottomColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 297)			this->get_customStyle()->borderRightColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderColor,return )

 ::Dynamic Component_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_borderSize)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->borderSize )) {
HXLINE( 266)			return this->get_customStyle()->borderSize;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->borderSize );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->borderSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderSize,return )

 ::Dynamic Component_obj::set_borderSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_borderSize)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->borderSize,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->borderSize = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->borderSize = value;
            		}
HXLINE( 300)		{
HXLINE( 301)			this->get_customStyle()->borderTopSize = value;
HXLINE( 302)			this->get_customStyle()->borderLeftSize = value;
HXLINE( 303)			this->get_customStyle()->borderBottomSize = value;
HXLINE( 304)			this->get_customStyle()->borderRightSize = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderSize,return )

 ::Dynamic Component_obj::get_borderRadius(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_borderRadius)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->borderRadius )) {
HXLINE( 266)			return this->get_customStyle()->borderRadius;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->borderRadius );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->borderRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderRadius,return )

 ::Dynamic Component_obj::set_borderRadius( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_borderRadius)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->borderRadius,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->borderRadius = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->borderRadius = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderRadius,return )

 ::Dynamic Component_obj::get_padding(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_padding)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->padding )) {
HXLINE( 266)			return this->get_customStyle()->padding;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->padding );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->padding;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_padding,return )

 ::Dynamic Component_obj::set_padding( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_padding)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->padding,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->set_padding(null());
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->set_padding(value);
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 311)		{
HXLINE( 311)			bool _hx_tmp;
HXDLIN( 311)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 311)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 311)				_hx_tmp = true;
            			}
HXDLIN( 311)			if (!(_hx_tmp)) {
HXLINE( 311)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_padding,return )

 ::Dynamic Component_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_paddingLeft)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->paddingLeft )) {
HXLINE( 266)			return this->get_customStyle()->paddingLeft;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingLeft,return )

 ::Dynamic Component_obj::set_paddingLeft( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_paddingLeft)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->paddingLeft,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->paddingLeft = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->paddingLeft = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 311)		{
HXLINE( 311)			bool _hx_tmp;
HXDLIN( 311)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 311)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 311)				_hx_tmp = true;
            			}
HXDLIN( 311)			if (!(_hx_tmp)) {
HXLINE( 311)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingLeft,return )

 ::Dynamic Component_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_paddingRight)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->paddingRight )) {
HXLINE( 266)			return this->get_customStyle()->paddingRight;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingRight );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingRight,return )

 ::Dynamic Component_obj::set_paddingRight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_paddingRight)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->paddingRight,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->paddingRight = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->paddingRight = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 311)		{
HXLINE( 311)			bool _hx_tmp;
HXDLIN( 311)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 311)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 311)				_hx_tmp = true;
            			}
HXDLIN( 311)			if (!(_hx_tmp)) {
HXLINE( 311)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingRight,return )

 ::Dynamic Component_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_paddingTop)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->paddingTop )) {
HXLINE( 266)			return this->get_customStyle()->paddingTop;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingTop );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingTop,return )

 ::Dynamic Component_obj::set_paddingTop( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_paddingTop)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->paddingTop,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->paddingTop = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->paddingTop = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 311)		{
HXLINE( 311)			bool _hx_tmp;
HXDLIN( 311)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 311)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 311)				_hx_tmp = true;
            			}
HXDLIN( 311)			if (!(_hx_tmp)) {
HXLINE( 311)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingTop,return )

 ::Dynamic Component_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_paddingBottom)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->paddingBottom )) {
HXLINE( 266)			return this->get_customStyle()->paddingBottom;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingBottom,return )

 ::Dynamic Component_obj::set_paddingBottom( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_paddingBottom)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->paddingBottom,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->paddingBottom = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->paddingBottom = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 311)		{
HXLINE( 311)			bool _hx_tmp;
HXDLIN( 311)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 311)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 311)				_hx_tmp = true;
            			}
HXDLIN( 311)			if (!(_hx_tmp)) {
HXLINE( 311)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingBottom,return )

 ::Dynamic Component_obj::get_marginLeft(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_marginLeft)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->marginLeft )) {
HXLINE( 266)			return this->get_customStyle()->marginLeft;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->marginLeft );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->marginLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginLeft,return )

 ::Dynamic Component_obj::set_marginLeft( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_marginLeft)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->marginLeft,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->marginLeft = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->marginLeft = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginLeft,return )

 ::Dynamic Component_obj::get_marginRight(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_marginRight)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->marginRight )) {
HXLINE( 266)			return this->get_customStyle()->marginRight;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->marginRight );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->marginRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginRight,return )

 ::Dynamic Component_obj::set_marginRight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_marginRight)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->marginRight,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->marginRight = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->marginRight = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginRight,return )

 ::Dynamic Component_obj::get_marginTop(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_marginTop)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->marginTop )) {
HXLINE( 266)			return this->get_customStyle()->marginTop;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->marginTop );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->marginTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginTop,return )

 ::Dynamic Component_obj::set_marginTop( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_marginTop)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->marginTop,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->marginTop = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->marginTop = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginTop,return )

 ::Dynamic Component_obj::get_marginBottom(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_marginBottom)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->marginBottom )) {
HXLINE( 266)			return this->get_customStyle()->marginBottom;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->marginBottom );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->marginBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginBottom,return )

 ::Dynamic Component_obj::set_marginBottom( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_marginBottom)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->marginBottom,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->marginBottom = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->marginBottom = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginBottom,return )

 ::Dynamic Component_obj::get_clip(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_clip)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->clip )) {
HXLINE( 266)			return this->get_customStyle()->clip;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->clip );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->clip;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clip,return )

 ::Dynamic Component_obj::set_clip( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_clip)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->clip,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->clip = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->clip = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clip,return )

 ::Dynamic Component_obj::get_opacity(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_opacity)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->opacity )) {
HXLINE( 266)			return this->get_customStyle()->opacity;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->opacity );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->opacity;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_opacity,return )

 ::Dynamic Component_obj::set_opacity( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_opacity)
HXLINE( 278)		if (::hx::IsEq( this->get_customStyle()->opacity,value )) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->opacity = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->opacity = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_opacity,return )

::String Component_obj::get_horizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_horizontalAlign)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->horizontalAlign )) {
HXLINE( 266)			return this->get_customStyle()->horizontalAlign;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->horizontalAlign );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_horizontalAlign,return )

::String Component_obj::set_horizontalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_horizontalAlign)
HXLINE( 278)		if ((this->get_customStyle()->horizontalAlign == value)) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->horizontalAlign = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->horizontalAlign = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 316)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 316)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 316)			bool _hx_tmp;
HXDLIN( 316)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 316)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 316)				_hx_tmp = true;
            			}
HXDLIN( 316)			if (!(_hx_tmp)) {
HXLINE( 316)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_horizontalAlign,return )

::String Component_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_264_get_verticalAlign)
HXLINE( 265)		if (::hx::IsNotNull( this->get_customStyle()->verticalAlign )) {
HXLINE( 266)			return this->get_customStyle()->verticalAlign;
            		}
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 268)			_hx_tmp = ::hx::IsNull( this->get_style()->verticalAlign );
            		}
            		else {
HXLINE( 268)			_hx_tmp = true;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			return null();
            		}
HXLINE( 271)		return this->get_style()->verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_verticalAlign,return )

::String Component_obj::set_verticalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_277_set_verticalAlign)
HXLINE( 278)		if ((this->get_customStyle()->verticalAlign == value)) {
HXLINE( 279)			return value;
            		}
HXLINE( 281)		if (::hx::IsNull( this->_style )) {
HXLINE( 282)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 284)		if (::hx::IsNull( value )) {
HXLINE( 285)			this->get_customStyle()->verticalAlign = null();
            		}
            		else {
HXLINE( 287)			this->get_customStyle()->verticalAlign = value;
            		}
HXLINE( 307)		{
HXLINE( 307)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 307)			{
            			}
            		}
HXLINE( 316)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 316)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 316)			bool _hx_tmp;
HXDLIN( 316)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 316)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 316)				_hx_tmp = true;
            			}
HXDLIN( 316)			if (!(_hx_tmp)) {
HXLINE( 316)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_verticalAlign,return )

 ::haxe::ui::core::ComponentContainer Component_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_493_self)
HXDLIN( 493)		return  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
            	}


 ::Dynamic Component_obj::set_onDragStart( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onDragStart)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onDragStart )) {
HXLINE( 232)			this->unregisterEvent(HX_("dragstart",ee,73,33,53),this->_internal__onDragStart);
HXLINE( 233)			this->_internal__onDragStart = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onDragStart = value;
HXLINE( 237)			this->registerEvent(HX_("dragstart",ee,73,33,53),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDragStart,return )

 ::Dynamic Component_obj::set_onDrag( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onDrag)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onDrag )) {
HXLINE( 232)			this->unregisterEvent(HX_("drag",f4,2b,70,42),this->_internal__onDrag);
HXLINE( 233)			this->_internal__onDrag = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onDrag = value;
HXLINE( 237)			this->registerEvent(HX_("drag",f4,2b,70,42),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDrag,return )

 ::Dynamic Component_obj::set_onDragEnd( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onDragEnd)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onDragEnd )) {
HXLINE( 232)			this->unregisterEvent(HX_("dragend",67,c8,51,f1),this->_internal__onDragEnd);
HXLINE( 233)			this->_internal__onDragEnd = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onDragEnd = value;
HXLINE( 237)			this->registerEvent(HX_("dragend",67,c8,51,f1),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDragEnd,return )

 ::Dynamic Component_obj::set_onAnimationStart( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onAnimationStart)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onAnimationStart )) {
HXLINE( 232)			this->unregisterEvent(HX_("animationstart",de,96,01,01),this->_internal__onAnimationStart);
HXLINE( 233)			this->_internal__onAnimationStart = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onAnimationStart = value;
HXLINE( 237)			this->registerEvent(HX_("animationstart",de,96,01,01),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationStart,return )

 ::Dynamic Component_obj::set_onAnimationFrame( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onAnimationFrame)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onAnimationFrame )) {
HXLINE( 232)			this->unregisterEvent(HX_("animationframe",a9,9a,79,83),this->_internal__onAnimationFrame);
HXLINE( 233)			this->_internal__onAnimationFrame = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onAnimationFrame = value;
HXLINE( 237)			this->registerEvent(HX_("animationframe",a9,9a,79,83),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationFrame,return )

 ::Dynamic Component_obj::set_onAnimationEnd( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onAnimationEnd)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onAnimationEnd )) {
HXLINE( 232)			this->unregisterEvent(HX_("animationend",57,4f,3c,aa),this->_internal__onAnimationEnd);
HXLINE( 233)			this->_internal__onAnimationEnd = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onAnimationEnd = value;
HXLINE( 237)			this->registerEvent(HX_("animationend",57,4f,3c,aa),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationEnd,return )

 ::Dynamic Component_obj::set_onClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onClick)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onClick )) {
HXLINE( 232)			this->unregisterEvent(HX_("click",48,7c,5e,48),this->_internal__onClick);
HXLINE( 233)			this->_internal__onClick = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onClick = value;
HXLINE( 237)			this->registerEvent(HX_("click",48,7c,5e,48),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onClick,return )

 ::Dynamic Component_obj::set_onMouseOver( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onMouseOver)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onMouseOver )) {
HXLINE( 232)			this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_internal__onMouseOver);
HXLINE( 233)			this->_internal__onMouseOver = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onMouseOver = value;
HXLINE( 237)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onMouseOver,return )

 ::Dynamic Component_obj::set_onMouseOut( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onMouseOut)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onMouseOut )) {
HXLINE( 232)			this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_internal__onMouseOut);
HXLINE( 233)			this->_internal__onMouseOut = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onMouseOut = value;
HXLINE( 237)			this->registerEvent(HX_("mouseout",89,2f,36,a4),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onMouseOut,return )

 ::Dynamic Component_obj::set_onDblClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onDblClick)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onDblClick )) {
HXLINE( 232)			this->unregisterEvent(HX_("doubleclick",97,93,48,3a),this->_internal__onDblClick);
HXLINE( 233)			this->_internal__onDblClick = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onDblClick = value;
HXLINE( 237)			this->registerEvent(HX_("doubleclick",97,93,48,3a),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDblClick,return )

 ::Dynamic Component_obj::set_onRightClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onRightClick)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onRightClick )) {
HXLINE( 232)			this->unregisterEvent(HX_("rightclick",ec,f2,f5,b7),this->_internal__onRightClick);
HXLINE( 233)			this->_internal__onRightClick = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onRightClick = value;
HXLINE( 237)			this->registerEvent(HX_("rightclick",ec,f2,f5,b7),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onRightClick,return )

 ::Dynamic Component_obj::set_onChange( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_230_set_onChange)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onChange )) {
HXLINE( 232)			this->unregisterEvent(HX_("change",70,91,72,b7),this->_internal__onChange);
HXLINE( 233)			this->_internal__onChange = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onChange = value;
HXLINE( 237)			this->registerEvent(HX_("change",70,91,72,b7),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onChange,return )

void Component_obj::addNamedComponentsFrom( ::haxe::ui::core::Component parent,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1716_addNamedComponentsFrom)
HXLINE(1717)		if (::hx::IsNull( parent )) {
HXLINE(1718)			return;
            		}
HXLINE(1721)		if (::hx::IsNotNull( parent->get_id() )) {
HXLINE(1722)			list->push(parent);
            		}
HXLINE(1725)		{
HXLINE(1725)			int _g = 0;
HXDLIN(1725)			::Array< ::Dynamic> _g1;
HXDLIN(1725)			if (::hx::IsNull( parent->_children )) {
HXLINE(1725)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1725)				_g1 = parent->_children;
            			}
HXDLIN(1725)			while((_g < _g1->length)){
HXLINE(1725)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1725)				_g = (_g + 1);
HXLINE(1726)				::haxe::ui::core::Component_obj::addNamedComponentsFrom(child,list);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Component_obj,addNamedComponentsFrom,(void))


::hx::ObjectPtr< Component_obj > Component_obj::__new() {
	::hx::ObjectPtr< Component_obj > __this = new Component_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Component_obj > Component_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Component_obj *__this = (Component_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Component_obj), true, "haxe.ui.core.Component"));
	*(void **)__this = Component_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(componentTabIndex,"componentTabIndex");
	HX_MARK_MEMBER_NAME(_defaultLayoutClass,"_defaultLayoutClass");
	HX_MARK_MEMBER_NAME(_compositeBuilderClass,"_compositeBuilderClass");
	HX_MARK_MEMBER_NAME(_compositeBuilder,"_compositeBuilder");
	HX_MARK_MEMBER_NAME(_native,"_native");
	HX_MARK_MEMBER_NAME(_animatable,"_animatable");
	HX_MARK_MEMBER_NAME(_componentAnimation,"_componentAnimation");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(_dragInitiator,"_dragInitiator");
	HX_MARK_MEMBER_NAME(_dragOptions,"_dragOptions");
	HX_MARK_MEMBER_NAME(bindingRoot,"bindingRoot");
	HX_MARK_MEMBER_NAME(_invalidateRecursivelyOnShow,"_invalidateRecursivelyOnShow");
	HX_MARK_MEMBER_NAME(_hidden,"_hidden");
	HX_MARK_MEMBER_NAME(_customStyle,"_customStyle");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_MEMBER_NAME(cascadeActive,"cascadeActive");
	HX_MARK_MEMBER_NAME(_styleNames,"_styleNames");
	HX_MARK_MEMBER_NAME(_styleNamesList,"_styleNamesList");
	HX_MARK_MEMBER_NAME(_styleString,"_styleString");
	HX_MARK_MEMBER_NAME(_useCachedStyleSheetRef,"_useCachedStyleSheetRef");
	HX_MARK_MEMBER_NAME(_cachedStyleSheetRef,"_cachedStyleSheetRef");
	HX_MARK_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_MARK_MEMBER_NAME(_scriptAccess,"_scriptAccess");
	HX_MARK_MEMBER_NAME(namedComponents,"namedComponents");
	HX_MARK_MEMBER_NAME(_initialSizeApplied,"_initialSizeApplied");
	HX_MARK_MEMBER_NAME(_pauseAnimationStyleChanges,"_pauseAnimationStyleChanges");
	HX_MARK_MEMBER_NAME(cssName,"cssName");
	HX_MARK_MEMBER_NAME(isComponentSolid,"isComponentSolid");
	HX_MARK_MEMBER_NAME(_internal__onDragStart,"_internal__onDragStart");
	HX_MARK_MEMBER_NAME(onDragStart,"onDragStart");
	HX_MARK_MEMBER_NAME(_internal__onDrag,"_internal__onDrag");
	HX_MARK_MEMBER_NAME(onDrag,"onDrag");
	HX_MARK_MEMBER_NAME(_internal__onDragEnd,"_internal__onDragEnd");
	HX_MARK_MEMBER_NAME(onDragEnd,"onDragEnd");
	HX_MARK_MEMBER_NAME(_internal__onAnimationStart,"_internal__onAnimationStart");
	HX_MARK_MEMBER_NAME(onAnimationStart,"onAnimationStart");
	HX_MARK_MEMBER_NAME(_internal__onAnimationFrame,"_internal__onAnimationFrame");
	HX_MARK_MEMBER_NAME(onAnimationFrame,"onAnimationFrame");
	HX_MARK_MEMBER_NAME(_internal__onAnimationEnd,"_internal__onAnimationEnd");
	HX_MARK_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_MARK_MEMBER_NAME(_internal__onClick,"_internal__onClick");
	HX_MARK_MEMBER_NAME(onClick,"onClick");
	HX_MARK_MEMBER_NAME(_internal__onMouseOver,"_internal__onMouseOver");
	HX_MARK_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_MARK_MEMBER_NAME(_internal__onMouseOut,"_internal__onMouseOut");
	HX_MARK_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_MARK_MEMBER_NAME(_internal__onDblClick,"_internal__onDblClick");
	HX_MARK_MEMBER_NAME(onDblClick,"onDblClick");
	HX_MARK_MEMBER_NAME(_internal__onRightClick,"_internal__onRightClick");
	HX_MARK_MEMBER_NAME(onRightClick,"onRightClick");
	HX_MARK_MEMBER_NAME(_internal__onChange,"_internal__onChange");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	 ::haxe::ui::backend::ComponentImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentTabIndex,"componentTabIndex");
	HX_VISIT_MEMBER_NAME(_defaultLayoutClass,"_defaultLayoutClass");
	HX_VISIT_MEMBER_NAME(_compositeBuilderClass,"_compositeBuilderClass");
	HX_VISIT_MEMBER_NAME(_compositeBuilder,"_compositeBuilder");
	HX_VISIT_MEMBER_NAME(_native,"_native");
	HX_VISIT_MEMBER_NAME(_animatable,"_animatable");
	HX_VISIT_MEMBER_NAME(_componentAnimation,"_componentAnimation");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(_dragInitiator,"_dragInitiator");
	HX_VISIT_MEMBER_NAME(_dragOptions,"_dragOptions");
	HX_VISIT_MEMBER_NAME(bindingRoot,"bindingRoot");
	HX_VISIT_MEMBER_NAME(_invalidateRecursivelyOnShow,"_invalidateRecursivelyOnShow");
	HX_VISIT_MEMBER_NAME(_hidden,"_hidden");
	HX_VISIT_MEMBER_NAME(_customStyle,"_customStyle");
	HX_VISIT_MEMBER_NAME(classes,"classes");
	HX_VISIT_MEMBER_NAME(cascadeActive,"cascadeActive");
	HX_VISIT_MEMBER_NAME(_styleNames,"_styleNames");
	HX_VISIT_MEMBER_NAME(_styleNamesList,"_styleNamesList");
	HX_VISIT_MEMBER_NAME(_styleString,"_styleString");
	HX_VISIT_MEMBER_NAME(_useCachedStyleSheetRef,"_useCachedStyleSheetRef");
	HX_VISIT_MEMBER_NAME(_cachedStyleSheetRef,"_cachedStyleSheetRef");
	HX_VISIT_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_VISIT_MEMBER_NAME(_scriptAccess,"_scriptAccess");
	HX_VISIT_MEMBER_NAME(namedComponents,"namedComponents");
	HX_VISIT_MEMBER_NAME(_initialSizeApplied,"_initialSizeApplied");
	HX_VISIT_MEMBER_NAME(_pauseAnimationStyleChanges,"_pauseAnimationStyleChanges");
	HX_VISIT_MEMBER_NAME(cssName,"cssName");
	HX_VISIT_MEMBER_NAME(isComponentSolid,"isComponentSolid");
	HX_VISIT_MEMBER_NAME(_internal__onDragStart,"_internal__onDragStart");
	HX_VISIT_MEMBER_NAME(onDragStart,"onDragStart");
	HX_VISIT_MEMBER_NAME(_internal__onDrag,"_internal__onDrag");
	HX_VISIT_MEMBER_NAME(onDrag,"onDrag");
	HX_VISIT_MEMBER_NAME(_internal__onDragEnd,"_internal__onDragEnd");
	HX_VISIT_MEMBER_NAME(onDragEnd,"onDragEnd");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationStart,"_internal__onAnimationStart");
	HX_VISIT_MEMBER_NAME(onAnimationStart,"onAnimationStart");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationFrame,"_internal__onAnimationFrame");
	HX_VISIT_MEMBER_NAME(onAnimationFrame,"onAnimationFrame");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationEnd,"_internal__onAnimationEnd");
	HX_VISIT_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_VISIT_MEMBER_NAME(_internal__onClick,"_internal__onClick");
	HX_VISIT_MEMBER_NAME(onClick,"onClick");
	HX_VISIT_MEMBER_NAME(_internal__onMouseOver,"_internal__onMouseOver");
	HX_VISIT_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_VISIT_MEMBER_NAME(_internal__onMouseOut,"_internal__onMouseOut");
	HX_VISIT_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_VISIT_MEMBER_NAME(_internal__onDblClick,"_internal__onDblClick");
	HX_VISIT_MEMBER_NAME(onDblClick,"onDblClick");
	HX_VISIT_MEMBER_NAME(_internal__onRightClick,"_internal__onRightClick");
	HX_VISIT_MEMBER_NAME(onRightClick,"onRightClick");
	HX_VISIT_MEMBER_NAME(_internal__onChange,"_internal__onChange");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	 ::haxe::ui::backend::ComponentImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Component_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clip() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"native") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_native() ); }
		if (HX_FIELD_EQ(inName,"screen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screen() : screen ); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return ::hx::Val( fadeIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hidden() ); }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"onDrag") ) { return ::hx::Val( onDrag ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_native") ) { return ::hx::Val( _native ); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return ::hx::Val( fadeOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hidden") ) { return ::hx::Val( _hidden ); }
		if (HX_FIELD_EQ(inName,"classes") ) { return ::hx::Val( classes ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMoved") ) { return ::hx::Val( onMoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"cssName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_cssName() : cssName ); }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_padding() ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_opacity() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return ::hx::Val( userData ); }
		if (HX_FIELD_EQ(inName,"addClass") ) { return ::hx::Val( addClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasClass") ) { return ::hx::Val( hasClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return ::hx::Val( get_clip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return ::hx::Val( set_clip_dyn() ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draggable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_draggable() ); }
		if (HX_FIELD_EQ(inName,"onDestroy") ) { return ::hx::Val( onDestroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapClass") ) { return ::hx::Val( swapClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResized") ) { return ::hx::Val( onResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginTop() ); }
		if (HX_FIELD_EQ(inName,"onDragEnd") ) { return ::hx::Val( onDragEnd ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_native") ) { return ::hx::Val( get_native_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_native") ) { return ::hx::Val( set_native_dyn() ); }
		if (HX_FIELD_EQ(inName,"animatable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animatable() ); }
		if (HX_FIELD_EQ(inName,"get_screen") ) { return ::hx::Val( get_screen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hidden") ) { return ::hx::Val( get_hidden_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hidden") ) { return ::hx::Val( set_hidden_dyn() ); }
		if (HX_FIELD_EQ(inName,"addClasses") ) { return ::hx::Val( addClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleNames() ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleSheet() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"lockLayout") ) { return ::hx::Val( lockLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderSize() ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginLeft() ); }
		if (HX_FIELD_EQ(inName,"set_onDrag") ) { return ::hx::Val( set_onDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut ); }
		if (HX_FIELD_EQ(inName,"onDblClick") ) { return ::hx::Val( onDblClick ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animatable") ) { return ::hx::Val( _animatable ); }
		if (HX_FIELD_EQ(inName,"dragOptions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dragOptions() ); }
		if (HX_FIELD_EQ(inName,"bindingRoot") ) { return ::hx::Val( bindingRoot ); }
		if (HX_FIELD_EQ(inName,"customStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customStyle() ); }
		if (HX_FIELD_EQ(inName,"removeClass") ) { return ::hx::Val( removeClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"_styleNames") ) { return ::hx::Val( _styleNames ); }
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleString() ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { return ::hx::Val( _styleSheet ); }
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderColor() ); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return ::hx::Val( get_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return ::hx::Val( set_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginRight() ); }
		if (HX_FIELD_EQ(inName,"get_opacity") ) { return ::hx::Val( get_opacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_opacity") ) { return ::hx::Val( set_opacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDragStart") ) { return ::hx::Val( onDragStart ); }
		if (HX_FIELD_EQ(inName,"set_onClick") ) { return ::hx::Val( set_onClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLayout") ) { return ::hx::Val( createLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"_dragOptions") ) { return ::hx::Val( _dragOptions ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"findAncestor") ) { return ::hx::Val( findAncestor_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideInternal") ) { return ::hx::Val( hideInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"showInternal") ) { return ::hx::Val( showInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"_customStyle") ) { return ::hx::Val( _customStyle ); }
		if (HX_FIELD_EQ(inName,"_styleString") ) { return ::hx::Val( _styleString ); }
		if (HX_FIELD_EQ(inName,"unlockLayout") ) { return ::hx::Val( unlockLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"scriptAccess") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scriptAccess() ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderRadius() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginBottom() ); }
		if (HX_FIELD_EQ(inName,"onRightClick") ) { return ::hx::Val( onRightClick ); }
		if (HX_FIELD_EQ(inName,"set_onChange") ) { return ::hx::Val( set_onChange_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_draggable") ) { return ::hx::Val( get_draggable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_draggable") ) { return ::hx::Val( set_draggable_dyn() ); }
		if (HX_FIELD_EQ(inName,"dragInitiator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dragInitiator() ); }
		if (HX_FIELD_EQ(inName,"rootComponent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rootComponent() ); }
		if (HX_FIELD_EQ(inName,"numComponents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numComponents() ); }
		if (HX_FIELD_EQ(inName,"matchesSearch") ) { return ::hx::Val( matchesSearch_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"cascadeActive") ) { return ::hx::Val( cascadeActive ); }
		if (HX_FIELD_EQ(inName,"removeClasses") ) { return ::hx::Val( removeClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"_scriptAccess") ) { return ::hx::Val( _scriptAccess ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"get_marginTop") ) { return ::hx::Val( get_marginTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginTop") ) { return ::hx::Val( set_marginTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
		if (HX_FIELD_EQ(inName,"set_onDragEnd") ) { return ::hx::Val( set_onDragEnd_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animatable") ) { return ::hx::Val( get_animatable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animatable") ) { return ::hx::Val( set_animatable_dyn() ); }
		if (HX_FIELD_EQ(inName,"_dragInitiator") ) { return ::hx::Val( _dragInitiator ); }
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"walkComponents") ) { return ::hx::Val( walkComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleNames") ) { return ::hx::Val( get_styleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleNames") ) { return ::hx::Val( set_styleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleSheet") ) { return ::hx::Val( get_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleSheet") ) { return ::hx::Val( set_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return ::hx::Val( get_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginLeft") ) { return ::hx::Val( get_marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginLeft") ) { return ::hx::Val( set_marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { return ::hx::Val( onAnimationEnd ); }
		if (HX_FIELD_EQ(inName,"set_onMouseOut") ) { return ::hx::Val( set_onMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onDblClick") ) { return ::hx::Val( set_onDblClick_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return ::hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dragOptions") ) { return ::hx::Val( get_dragOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dragOptions") ) { return ::hx::Val( set_dragOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customStyle") ) { return ::hx::Val( get_customStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customStyle") ) { return ::hx::Val( set_customStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_styleNamesList") ) { return ::hx::Val( _styleNamesList ); }
		if (HX_FIELD_EQ(inName,"get_styleString") ) { return ::hx::Val( get_styleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleString") ) { return ::hx::Val( set_styleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_includeInLayout() ); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_namedComponents() : namedComponents ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColor() ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundImage() ); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return ::hx::Val( get_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginRight") ) { return ::hx::Val( get_marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginRight") ) { return ::hx::Val( set_marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalAlign() ); }
		if (HX_FIELD_EQ(inName,"set_onDragStart") ) { return ::hx::Val( set_onDragStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onMouseOver") ) { return ::hx::Val( set_onMouseOver_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentAdded") ) { return ::hx::Val( onComponentAdded_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeComponent") ) { return ::hx::Val( disposeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyComponent") ) { return ::hx::Val( destroyComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return ::hx::Val( _includeInLayout ); }
		if (HX_FIELD_EQ(inName,"get_scriptAccess") ) { return ::hx::Val( get_scriptAccess_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scriptAccess") ) { return ::hx::Val( set_scriptAccess_dyn() ); }
		if (HX_FIELD_EQ(inName,"isComponentSolid") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentSolid() : isComponentSolid ); }
		if (HX_FIELD_EQ(inName,"get_borderRadius") ) { return ::hx::Val( get_borderRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderRadius") ) { return ::hx::Val( set_borderRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginBottom") ) { return ::hx::Val( get_marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginBottom") ) { return ::hx::Val( set_marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAnimationStart") ) { return ::hx::Val( onAnimationStart ); }
		if (HX_FIELD_EQ(inName,"onAnimationFrame") ) { return ::hx::Val( onAnimationFrame ); }
		if (HX_FIELD_EQ(inName,"set_onRightClick") ) { return ::hx::Val( set_onRightClick_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentTabIndex") ) { return ::hx::Val( componentTabIndex ); }
		if (HX_FIELD_EQ(inName,"_compositeBuilder") ) { return ::hx::Val( _compositeBuilder ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dragInitiator") ) { return ::hx::Val( get_dragInitiator_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dragInitiator") ) { return ::hx::Val( set_dragInitiator_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rootComponent") ) { return ::hx::Val( get_rootComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsComponent") ) { return ::hx::Val( containsComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onDrag") ) { return ::hx::Val( _internal__onDrag ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"componentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentAnimation() ); }
		if (HX_FIELD_EQ(inName,"onComponentRemoved") ) { return ::hx::Val( onComponentRemoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColorEnd() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationEnd") ) { return ::hx::Val( set_onAnimationEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onClick") ) { return ::hx::Val( _internal__onClick ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_defaultLayoutClass") ) { return ::hx::Val( _defaultLayoutClass ); }
		if (HX_FIELD_EQ(inName,"_componentAnimation") ) { return ::hx::Val( _componentAnimation ); }
		if (HX_FIELD_EQ(inName,"removeAllComponents") ) { return ::hx::Val( removeAllComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return ::hx::Val( get_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return ::hx::Val( set_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_namedComponents") ) { return ::hx::Val( get_namedComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeComponent") ) { return ::hx::Val( initializeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_initialSizeApplied") ) { return ::hx::Val( _initialSizeApplied ); }
		if (HX_FIELD_EQ(inName,"validateInitialSize") ) { return ::hx::Val( validateInitialSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return ::hx::Val( get_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundImage") ) { return ::hx::Val( get_backgroundImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundImage") ) { return ::hx::Val( set_backgroundImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return ::hx::Val( get_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return ::hx::Val( set_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onChange") ) { return ::hx::Val( _internal__onChange ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedStyleSheetRef") ) { return ::hx::Val( _cachedStyleSheetRef ); }
		if (HX_FIELD_EQ(inName,"get_isComponentSolid") ) { return ::hx::Val( get_isComponentSolid_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onDragEnd") ) { return ::hx::Val( _internal__onDragEnd ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationStart") ) { return ::hx::Val( set_onAnimationStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationFrame") ) { return ::hx::Val( set_onAnimationFrame_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"assignPositionClasses") ) { return ::hx::Val( assignPositionClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOut") ) { return ::hx::Val( _internal__onMouseOut ); }
		if (HX_FIELD_EQ(inName,"_internal__onDblClick") ) { return ::hx::Val( _internal__onDblClick ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_compositeBuilderClass") ) { return ::hx::Val( _compositeBuilderClass ); }
		if (HX_FIELD_EQ(inName,"get_componentAnimation") ) { return ::hx::Val( get_componentAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentAnimation") ) { return ::hx::Val( set_componentAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasComponentUnderPoint") ) { return ::hx::Val( hasComponentUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"enforceSizeConstraints") ) { return ::hx::Val( enforceSizeConstraints_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentStyle") ) { return ::hx::Val( validateComponentStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateComponentDisplay") ) { return ::hx::Val( updateComponentDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseUp") ) { return ::hx::Val( onPointerEventsMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyAnimationKeyFrame") ) { return ::hx::Val( applyAnimationKeyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColorEnd") ) { return ::hx::Val( get_backgroundColorEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColorEnd") ) { return ::hx::Val( set_backgroundColorEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onDragStart") ) { return ::hx::Val( _internal__onDragStart ); }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOver") ) { return ::hx::Val( _internal__onMouseOver ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_useCachedStyleSheetRef") ) { return ::hx::Val( _useCachedStyleSheetRef ); }
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseOut") ) { return ::hx::Val( onPointerEventsMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onRightClick") ) { return ::hx::Val( _internal__onRightClick ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findComponentsUnderPoint") ) { return ::hx::Val( findComponentsUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetCachedStyleSheetRef") ) { return ::hx::Val( resetCachedStyleSheetRef_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseOver") ) { return ::hx::Val( onPointerEventsMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseDown") ) { return ::hx::Val( onPointerEventsMouseDown_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentPosition") ) { return ::hx::Val( validateComponentPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentAutoSize") ) { return ::hx::Val( validateComponentAutoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationEnd") ) { return ::hx::Val( _internal__onAnimationEnd ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_pauseAnimationStyleChanges") ) { return ::hx::Val( _pauseAnimationStyleChanges ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationStart") ) { return ::hx::Val( _internal__onAnimationStart ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationFrame") ) { return ::hx::Val( _internal__onAnimationFrame ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_invalidateRecursivelyOnShow") ) { return ::hx::Val( _invalidateRecursivelyOnShow ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Component_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"addNamedComponentsFrom") ) { outValue = addNamedComponentsFrom_dyn(); return true; }
	}
	return false;
}

::hx::Val Component_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clip(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"native") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_native(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast<  ::haxe::ui::core::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hidden(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast<  ::haxe::ui::layouts::Layout >()) ); }
		if (HX_FIELD_EQ(inName,"onDrag") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDrag(inValue.Cast<  ::Dynamic >()) );onDrag=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_native") ) { _native=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hidden") ) { _hidden=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cssName") ) { cssName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_padding(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_opacity(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onClick(inValue.Cast<  ::Dynamic >()) );onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onChange(inValue.Cast<  ::Dynamic >()) );onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draggable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_draggable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginTop(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onDragEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDragEnd(inValue.Cast<  ::Dynamic >()) );onDragEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animatable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animatable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleNames(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleSheet(inValue.Cast<  ::haxe::ui::styles::StyleSheet >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginLeft(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMouseOut(inValue.Cast<  ::Dynamic >()) );onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDblClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDblClick(inValue.Cast<  ::Dynamic >()) );onDblClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animatable") ) { _animatable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragOptions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dragOptions(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"bindingRoot") ) { bindingRoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"_styleNames") ) { _styleNames=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleString(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { _styleSheet=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginRight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onDragStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDragStart(inValue.Cast<  ::Dynamic >()) );onDragStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMouseOver(inValue.Cast<  ::Dynamic >()) );onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_dragOptions") ) { _dragOptions=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customStyle") ) { _customStyle=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styleString") ) { _styleString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptAccess") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scriptAccess(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderRadius(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginBottom(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onRightClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onRightClick(inValue.Cast<  ::Dynamic >()) );onRightClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dragInitiator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dragInitiator(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"cascadeActive") ) { cascadeActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scriptAccess") ) { _scriptAccess=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dragInitiator") ) { _dragInitiator=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationEnd(inValue.Cast<  ::Dynamic >()) );onAnimationEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_styleNamesList") ) { _styleNamesList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_includeInLayout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { namedComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundImage(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentSolid") ) { isComponentSolid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationStart(inValue.Cast<  ::Dynamic >()) );onAnimationStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationFrame(inValue.Cast<  ::Dynamic >()) );onAnimationFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentTabIndex") ) { componentTabIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_compositeBuilder") ) { _compositeBuilder=inValue.Cast<  ::haxe::ui::core::CompositeBuilder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDrag") ) { _internal__onDrag=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"componentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentAnimation(inValue.Cast<  ::haxe::ui::styles::animation::Animation >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColorEnd(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_internal__onClick") ) { _internal__onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_defaultLayoutClass") ) { _defaultLayoutClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_componentAnimation") ) { _componentAnimation=inValue.Cast<  ::haxe::ui::styles::animation::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_initialSizeApplied") ) { _initialSizeApplied=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onChange") ) { _internal__onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedStyleSheetRef") ) { _cachedStyleSheetRef=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDragEnd") ) { _internal__onDragEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_internal__onMouseOut") ) { _internal__onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDblClick") ) { _internal__onDblClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_compositeBuilderClass") ) { _compositeBuilderClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDragStart") ) { _internal__onDragStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOver") ) { _internal__onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_useCachedStyleSheetRef") ) { _useCachedStyleSheetRef=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onRightClick") ) { _internal__onRightClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onAnimationEnd") ) { _internal__onAnimationEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_pauseAnimationStyleChanges") ) { _pauseAnimationStyleChanges=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationStart") ) { _internal__onAnimationStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationFrame") ) { _internal__onAnimationFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_invalidateRecursivelyOnShow") ) { _invalidateRecursivelyOnShow=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentTabIndex",5a,4e,69,2f));
	outFields->push(HX_("_defaultLayoutClass",0c,ba,3b,98));
	outFields->push(HX_("_compositeBuilderClass",05,4f,94,24));
	outFields->push(HX_("_compositeBuilder",33,00,05,49));
	outFields->push(HX_("_native",36,db,93,90));
	outFields->push(HX_("native",97,c9,1c,22));
	outFields->push(HX_("_animatable",fd,6d,52,50));
	outFields->push(HX_("animatable",de,a0,c8,7d));
	outFields->push(HX_("_componentAnimation",a6,e2,8a,82));
	outFields->push(HX_("componentAnimation",87,5e,b0,a2));
	outFields->push(HX_("userData",15,96,28,05));
	outFields->push(HX_("screen",6c,3b,5d,47));
	outFields->push(HX_("draggable",0d,2d,d6,5d));
	outFields->push(HX_("_dragInitiator",5c,32,bf,d6));
	outFields->push(HX_("dragInitiator",1b,42,6d,98));
	outFields->push(HX_("_dragOptions",cb,03,29,fc));
	outFields->push(HX_("dragOptions",ca,55,1f,96));
	outFields->push(HX_("bindingRoot",07,2c,7d,bd));
	outFields->push(HX_("rootComponent",3b,0e,0e,45));
	outFields->push(HX_("numComponents",fc,6a,b6,34));
	outFields->push(HX_("_invalidateRecursivelyOnShow",a1,d1,26,c0));
	outFields->push(HX_("_hidden",09,11,0d,bb));
	outFields->push(HX_("hidden",6a,ff,95,4c));
	outFields->push(HX_("_customStyle",c1,b9,63,7f));
	outFields->push(HX_("customStyle",c0,0b,5a,19));
	outFields->push(HX_("classes",a6,4e,91,69));
	outFields->push(HX_("cascadeActive",1a,89,af,1b));
	outFields->push(HX_("_styleNames",f6,b5,04,e9));
	outFields->push(HX_("_styleNamesList",74,31,22,19));
	outFields->push(HX_("styleNames",d7,e8,7a,16));
	outFields->push(HX_("_styleString",e3,6a,d1,ee));
	outFields->push(HX_("styleString",e2,bc,c7,88));
	outFields->push(HX_("_useCachedStyleSheetRef",9b,74,e6,1d));
	outFields->push(HX_("_cachedStyleSheetRef",04,98,8d,3e));
	outFields->push(HX_("_styleSheet",cd,08,a0,ce));
	outFields->push(HX_("styleSheet",ae,3b,16,fc));
	outFields->push(HX_("_includeInLayout",38,5d,a5,59));
	outFields->push(HX_("includeInLayout",b7,1a,c6,6e));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_scriptAccess",ee,84,04,85));
	outFields->push(HX_("scriptAccess",0f,f2,95,a2));
	outFields->push(HX_("namedComponents",2f,8a,f8,12));
	outFields->push(HX_("_initialSizeApplied",77,94,44,c2));
	outFields->push(HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f));
	outFields->push(HX_("cssName",ae,bf,c4,7a));
	outFields->push(HX_("isComponentSolid",b8,9b,eb,19));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundColorEnd",46,f8,6e,2a));
	outFields->push(HX_("backgroundImage",8d,fc,53,80));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderRadius",5e,0a,30,0e));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("marginLeft",55,53,dd,84));
	outFields->push(HX_("marginRight",ce,a4,d8,33));
	outFields->push(HX_("marginTop",07,7f,40,ee));
	outFields->push(HX_("marginBottom",b9,21,0a,41));
	outFields->push(HX_("clip",d0,6e,c2,41));
	outFields->push(HX_("opacity",cb,5d,65,eb));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Component_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Component_obj,componentTabIndex),HX_("componentTabIndex",5a,4e,69,2f)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Component_obj,_defaultLayoutClass),HX_("_defaultLayoutClass",0c,ba,3b,98)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Component_obj,_compositeBuilderClass),HX_("_compositeBuilderClass",05,4f,94,24)},
	{::hx::fsObject /*  ::haxe::ui::core::CompositeBuilder */ ,(int)offsetof(Component_obj,_compositeBuilder),HX_("_compositeBuilder",33,00,05,49)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_native),HX_("_native",36,db,93,90)},
	{::hx::fsBool,(int)offsetof(Component_obj,_animatable),HX_("_animatable",fd,6d,52,50)},
	{::hx::fsObject /*  ::haxe::ui::styles::animation::Animation */ ,(int)offsetof(Component_obj,_componentAnimation),HX_("_componentAnimation",a6,e2,8a,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,userData),HX_("userData",15,96,28,05)},
	{::hx::fsObject /*  ::haxe::ui::core::Screen */ ,(int)offsetof(Component_obj,screen),HX_("screen",6c,3b,5d,47)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Component_obj,_dragInitiator),HX_("_dragInitiator",5c,32,bf,d6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_dragOptions),HX_("_dragOptions",cb,03,29,fc)},
	{::hx::fsBool,(int)offsetof(Component_obj,bindingRoot),HX_("bindingRoot",07,2c,7d,bd)},
	{::hx::fsBool,(int)offsetof(Component_obj,_invalidateRecursivelyOnShow),HX_("_invalidateRecursivelyOnShow",a1,d1,26,c0)},
	{::hx::fsBool,(int)offsetof(Component_obj,_hidden),HX_("_hidden",09,11,0d,bb)},
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(Component_obj,_customStyle),HX_("_customStyle",c1,b9,63,7f)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Component_obj,classes),HX_("classes",a6,4e,91,69)},
	{::hx::fsBool,(int)offsetof(Component_obj,cascadeActive),HX_("cascadeActive",1a,89,af,1b)},
	{::hx::fsString,(int)offsetof(Component_obj,_styleNames),HX_("_styleNames",f6,b5,04,e9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Component_obj,_styleNamesList),HX_("_styleNamesList",74,31,22,19)},
	{::hx::fsString,(int)offsetof(Component_obj,_styleString),HX_("_styleString",e3,6a,d1,ee)},
	{::hx::fsBool,(int)offsetof(Component_obj,_useCachedStyleSheetRef),HX_("_useCachedStyleSheetRef",9b,74,e6,1d)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(Component_obj,_cachedStyleSheetRef),HX_("_cachedStyleSheetRef",04,98,8d,3e)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(Component_obj,_styleSheet),HX_("_styleSheet",cd,08,a0,ce)},
	{::hx::fsBool,(int)offsetof(Component_obj,_includeInLayout),HX_("_includeInLayout",38,5d,a5,59)},
	{::hx::fsBool,(int)offsetof(Component_obj,_scriptAccess),HX_("_scriptAccess",ee,84,04,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Component_obj,namedComponents),HX_("namedComponents",2f,8a,f8,12)},
	{::hx::fsBool,(int)offsetof(Component_obj,_initialSizeApplied),HX_("_initialSizeApplied",77,94,44,c2)},
	{::hx::fsBool,(int)offsetof(Component_obj,_pauseAnimationStyleChanges),HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f)},
	{::hx::fsString,(int)offsetof(Component_obj,cssName),HX_("cssName",ae,bf,c4,7a)},
	{::hx::fsBool,(int)offsetof(Component_obj,isComponentSolid),HX_("isComponentSolid",b8,9b,eb,19)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDragStart),HX_("_internal__onDragStart",73,b7,cb,0f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDragStart),HX_("onDragStart",af,c6,a3,08)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDrag),HX_("_internal__onDrag",6f,fa,df,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDrag),HX_("onDrag",b3,34,fa,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDragEnd),HX_("_internal__onDragEnd",ac,b0,6b,05)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDragEnd),HX_("onDragEnd",e8,38,e4,c8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationStart),HX_("_internal__onAnimationStart",f9,dc,89,50)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationStart),HX_("onAnimationStart",3d,14,85,a0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationFrame),HX_("_internal__onAnimationFrame",c4,e0,01,d3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationFrame),HX_("onAnimationFrame",08,18,fd,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationEnd),HX_("_internal__onAnimationEnd",b2,48,0f,a4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationEnd),HX_("onAnimationEnd",f6,66,13,d4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onClick),HX_("_internal__onClick",6d,59,c3,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onClick),HX_("onClick",a9,1a,9c,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onMouseOver),HX_("_internal__onMouseOver",be,1d,78,1f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onMouseOver),HX_("onMouseOver",fa,2c,50,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onMouseOut),HX_("_internal__onMouseOut",64,0f,d6,3b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onMouseOut),HX_("onMouseOut",a8,bb,d4,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDblClick),HX_("_internal__onDblClick",35,16,bb,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDblClick),HX_("onDblClick",79,c2,b9,2a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onRightClick),HX_("_internal__onRightClick",87,bf,31,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onRightClick),HX_("onRightClick",cb,04,67,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onChange),HX_("_internal__onChange",ab,34,4f,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Component_obj_sStaticStorageInfo = 0;
#endif

static ::String Component_obj_sMemberFields[] = {
	HX_("componentTabIndex",5a,4e,69,2f),
	HX_("_defaultLayoutClass",0c,ba,3b,98),
	HX_("create",fc,66,0f,7c),
	HX_("_compositeBuilderClass",05,4f,94,24),
	HX_("_compositeBuilder",33,00,05,49),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("createChildren",5b,98,a4,c2),
	HX_("destroyChildren",59,8c,6e,e2),
	HX_("createLayout",c6,ee,0d,7b),
	HX_("_native",36,db,93,90),
	HX_("get_native",60,39,a4,12),
	HX_("set_native",d4,d7,21,16),
	HX_("_animatable",fd,6d,52,50),
	HX_("get_animatable",27,29,be,f3),
	HX_("set_animatable",9b,11,de,13),
	HX_("_componentAnimation",a6,e2,8a,82),
	HX_("get_componentAnimation",d0,d7,44,fc),
	HX_("set_componentAnimation",44,54,f0,2f),
	HX_("userData",15,96,28,05),
	HX_("screen",6c,3b,5d,47),
	HX_("get_screen",35,ab,e4,37),
	HX_("get_draggable",e4,00,3a,1f),
	HX_("set_draggable",f0,e2,3f,64),
	HX_("_dragInitiator",5c,32,bf,d6),
	HX_("get_dragInitiator",72,4d,dd,9e),
	HX_("set_dragInitiator",7e,25,4b,c2),
	HX_("_dragOptions",cb,03,29,fc),
	HX_("get_dragOptions",61,0d,01,57),
	HX_("set_dragOptions",6d,8a,cc,52),
	HX_("bindingRoot",07,2c,7d,bd),
	HX_("get_rootComponent",92,19,7e,4b),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("containsComponent",9e,ba,74,14),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("onComponentAdded",42,94,a0,77),
	HX_("removeComponent",d9,8b,72,50),
	HX_("disposeComponent",1e,c4,8a,d6),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("onComponentRemoved",a2,43,ad,6e),
	HX_("assignPositionClasses",8e,3b,25,b1),
	HX_("destroyComponent",63,34,34,61),
	HX_("onDestroy",9b,e5,30,fc),
	HX_("walkComponents",7f,1b,0a,d7),
	HX_("removeAllComponents",b3,1e,97,3c),
	HX_("matchesSearch",bb,08,bd,e6),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("findAncestor",ac,71,fd,80),
	HX_("findComponentsUnderPoint",a7,db,36,14),
	HX_("hasComponentUnderPoint",fb,37,b6,57),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("hide",c2,34,0e,45),
	HX_("hideInternal",1f,ea,7b,e9),
	HX_("_invalidateRecursivelyOnShow",a1,d1,26,c0),
	HX_("show",fd,d4,52,4c),
	HX_("showInternal",5a,bd,03,54),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("fadeOut",72,38,3c,31),
	HX_("_hidden",09,11,0d,bb),
	HX_("get_hidden",33,6f,1d,3d),
	HX_("set_hidden",a7,0d,9b,40),
	HX_("_customStyle",c1,b9,63,7f),
	HX_("get_customStyle",57,c3,3b,da),
	HX_("set_customStyle",63,40,07,d6),
	HX_("classes",a6,4e,91,69),
	HX_("cascadeActive",1a,89,af,1b),
	HX_("addClass",57,9e,b5,c1),
	HX_("addClasses",85,7a,1b,d1),
	HX_("removeClass",54,55,8c,46),
	HX_("removeClasses",c2,aa,4b,42),
	HX_("hasClass",7e,c2,b0,d4),
	HX_("swapClass",a5,88,05,be),
	HX_("_styleNames",f6,b5,04,e9),
	HX_("_styleNamesList",74,31,22,19),
	HX_("get_styleNames",20,71,70,8c),
	HX_("set_styleNames",94,59,90,ac),
	HX_("_styleString",e3,6a,d1,ee),
	HX_("get_styleString",79,74,a9,49),
	HX_("set_styleString",85,f1,74,45),
	HX_("_useCachedStyleSheetRef",9b,74,e6,1d),
	HX_("_cachedStyleSheetRef",04,98,8d,3e),
	HX_("_styleSheet",cd,08,a0,ce),
	HX_("get_styleSheet",f7,c3,0b,72),
	HX_("set_styleSheet",6b,ac,2b,92),
	HX_("resetCachedStyleSheetRef",74,6c,1c,92),
	HX_("_includeInLayout",38,5d,a5,59),
	HX_("get_includeInLayout",ce,e9,d0,f9),
	HX_("set_includeInLayout",da,dc,6d,36),
	HX_("get_layout",73,1e,40,49),
	HX_("set_layout",e7,bc,bd,4c),
	HX_("lockLayout",f5,00,5f,a3),
	HX_("unlockLayout",8e,30,6e,0f),
	HX_("ready",63,a0,ba,e6),
	HX_("onReady",c4,3e,f8,7c),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onResized",91,14,1e,3b),
	HX_("onMoved",94,6a,a3,a2),
	HX_("_scriptAccess",ee,84,04,85),
	HX_("get_scriptAccess",98,de,34,a7),
	HX_("set_scriptAccess",0c,cc,76,fd),
	HX_("namedComponents",2f,8a,f8,12),
	HX_("get_namedComponents",46,59,03,9e),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("initializeComponent",4d,f5,42,2d),
	HX_("_initialSizeApplied",77,94,44,c2),
	HX_("validateInitialSize",6f,72,e3,cb),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("enforceSizeConstraints",73,87,ee,02),
	HX_("validateComponentStyle",6a,56,d9,e6),
	HX_("validateComponentPosition",10,b9,90,b3),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("validateComponentAutoSize",37,a8,0f,18),
	HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("onPointerEventsMouseOver",02,78,d8,8a),
	HX_("onPointerEventsMouseOut",a0,a9,3c,6a),
	HX_("onPointerEventsMouseDown",10,df,8d,83),
	HX_("onPointerEventsMouseUp",89,a5,6f,17),
	HX_("applyAnimationKeyFrame",e4,ab,95,4d),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("get_isComponentClipped",15,26,75,f8),
	HX_("cssName",ae,bf,c4,7a),
	HX_("get_cssName",c5,1f,bf,00),
	HX_("isComponentSolid",b8,9b,eb,19),
	HX_("get_isComponentSolid",c1,00,56,38),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_backgroundColor",ac,1d,52,98),
	HX_("set_backgroundColor",b8,10,ef,d4),
	HX_("get_backgroundColorEnd",8f,71,03,84),
	HX_("set_backgroundColorEnd",03,ee,ae,b7),
	HX_("get_backgroundImage",a4,cb,5e,0b),
	HX_("set_backgroundImage",b0,be,fb,47),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("set_borderColor",7a,71,82,93),
	HX_("get_borderSize",16,88,e3,7c),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("get_borderRadius",e7,f6,ce,12),
	HX_("set_borderRadius",5b,e4,10,69),
	HX_("get_padding",e8,b9,77,56),
	HX_("set_padding",f4,c0,e4,60),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("set_paddingLeft",1b,7f,93,42),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("set_paddingRight",48,c6,88,75),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("set_paddingTop",01,6e,1b,d0),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("set_paddingBottom",ff,4a,77,79),
	HX_("get_marginLeft",9e,db,d2,fa),
	HX_("set_marginLeft",12,c4,f2,1a),
	HX_("get_marginRight",65,5c,ba,f4),
	HX_("set_marginRight",71,d9,85,f0),
	HX_("get_marginTop",de,52,a4,af),
	HX_("set_marginTop",ea,34,aa,f4),
	HX_("get_marginBottom",42,0e,a9,45),
	HX_("set_marginBottom",b6,fb,ea,9b),
	HX_("get_clip",59,2a,7d,c1),
	HX_("set_clip",cd,83,da,6f),
	HX_("get_opacity",e2,bd,5f,71),
	HX_("set_opacity",ee,c4,cc,7b),
	HX_("get_horizontalAlign",58,5e,72,7f),
	HX_("set_horizontalAlign",64,51,0f,bc),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("self",8c,8b,50,4c),
	HX_("_internal__onDragStart",73,b7,cb,0f),
	HX_("onDragStart",af,c6,a3,08),
	HX_("set_onDragStart",52,fb,50,c5),
	HX_("_internal__onDrag",6f,fa,df,18),
	HX_("onDrag",b3,34,fa,e4),
	HX_("set_onDrag",f0,42,ff,d8),
	HX_("_internal__onDragEnd",ac,b0,6b,05),
	HX_("onDragEnd",e8,38,e4,c8),
	HX_("set_onDragEnd",cb,ee,4d,cf),
	HX_("_internal__onAnimationStart",f9,dc,89,50),
	HX_("onAnimationStart",3d,14,85,a0),
	HX_("set_onAnimationStart",ba,30,a7,8b),
	HX_("_internal__onAnimationFrame",c4,e0,01,d3),
	HX_("onAnimationFrame",08,18,fd,22),
	HX_("set_onAnimationFrame",85,34,1f,0e),
	HX_("_internal__onAnimationEnd",b2,48,0f,a4),
	HX_("onAnimationEnd",f6,66,13,d4),
	HX_("set_onAnimationEnd",33,7a,5c,4c),
	HX_("_internal__onClick",6d,59,c3,13),
	HX_("onClick",a9,1a,9c,de),
	HX_("set_onClick",cc,81,03,6f),
	HX_("_internal__onMouseOver",be,1d,78,1f),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("set_onMouseOver",9d,61,fd,d4),
	HX_("_internal__onMouseOut",64,0f,d6,3b),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("set_onMouseOut",65,2c,ea,17),
	HX_("_internal__onDblClick",35,16,bb,e4),
	HX_("onDblClick",79,c2,b9,2a),
	HX_("set_onDblClick",36,33,cf,c0),
	HX_("_internal__onRightClick",87,bf,31,5f),
	HX_("onRightClick",cb,04,67,23),
	HX_("set_onRightClick",c8,de,47,7e),
	HX_("_internal__onChange",ab,34,4f,e4),
	HX_("onChange",ef,87,1f,97),
	HX_("set_onChange",6c,5f,32,61),
	::String(null()) };

::hx::Class Component_obj::__mClass;

static ::String Component_obj_sStaticFields[] = {
	HX_("addNamedComponentsFrom",98,9d,c2,1f),
	::String(null())
};

void Component_obj::__register()
{
	Component_obj _hx_dummy;
	Component_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.Component",60,d3,76,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Component_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Component_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Component_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Component_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Component_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Component_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Component_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_42_boot)
HXDLIN(  42)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("styleString",e2,bc,c7,88), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())))
            				->setFixed(1,HX_("styleNames",d7,e8,7a,16), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
