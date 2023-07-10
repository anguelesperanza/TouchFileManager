#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_AnsiState
#include <hx/strings/AnsiState.h>
#endif
#ifndef INCLUDED_hx_strings_AnsiToHtmlRenderMethod
#include <hx/strings/AnsiToHtmlRenderMethod.h>
#endif
#ifndef INCLUDED_hx_strings_StringBuilder
#include <hx/strings/StringBuilder.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_221aeffc2a848937_4399_new,"hx.strings.AnsiState","new",0x9949d156,"hx.strings.AnsiState.new","hx/strings/Strings.hx",4399,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_221aeffc2a848937_4417_isActive,"hx.strings.AnsiState","isActive",0xf5c4a09a,"hx.strings.AnsiState.isActive","hx/strings/Strings.hx",4417,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_221aeffc2a848937_4420_reset,"hx.strings.AnsiState","reset",0x29f8f445,"hx.strings.AnsiState.reset","hx/strings/Strings.hx",4420,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_221aeffc2a848937_4429_copyFrom,"hx.strings.AnsiState","copyFrom",0x4f75cf09,"hx.strings.AnsiState.copyFrom","hx/strings/Strings.hx",4429,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_221aeffc2a848937_4439_setGraphicModeParameter,"hx.strings.AnsiState","setGraphicModeParameter",0xb1c78eb6,"hx.strings.AnsiState.setGraphicModeParameter","hx/strings/Strings.hx",4439,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_221aeffc2a848937_4464_toCSS,"hx.strings.AnsiState","toCSS",0x573dc37e,"hx.strings.AnsiState.toCSS","hx/strings/Strings.hx",4464,0x74f74a28)
HX_LOCAL_STACK_FRAME(_hx_pos_221aeffc2a848937_4510_defaultCssClassesCallback,"hx.strings.AnsiState","defaultCssClassesCallback",0x63681c9f,"hx.strings.AnsiState.defaultCssClassesCallback","hx/strings/Strings.hx",4510,0x74f74a28)
namespace hx{
namespace strings{

void AnsiState_obj::__construct( ::hx::strings::AnsiState copyFrom){
            	HX_STACKFRAME(&_hx_pos_221aeffc2a848937_4399_new)
HXLINE(4404)		this->underline = false;
HXLINE(4402)		this->bold = false;
HXLINE(4401)		this->blink = false;
HXLINE(4409)		if (::hx::IsNull( copyFrom )) {
HXLINE(4410)			this->reset();
            		}
            		else {
HXLINE(4412)			this->copyFrom(copyFrom);
            		}
            	}

Dynamic AnsiState_obj::__CreateEmpty() { return new AnsiState_obj; }

void *AnsiState_obj::_hx_vtable = 0;

Dynamic AnsiState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnsiState_obj > _hx_result = new AnsiState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnsiState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x470c9b20;
}

bool AnsiState_obj::isActive(){
            	HX_STACKFRAME(&_hx_pos_221aeffc2a848937_4417_isActive)
HXDLIN(4417)		bool _hx_tmp;
HXDLIN(4417)		bool _hx_tmp1;
HXDLIN(4417)		bool _hx_tmp2;
HXDLIN(4417)		if (::hx::IsNull( this->fgcolor )) {
HXDLIN(4417)			_hx_tmp2 = ::hx::IsNotNull( this->bgcolor );
            		}
            		else {
HXDLIN(4417)			_hx_tmp2 = true;
            		}
HXDLIN(4417)		if (!(_hx_tmp2)) {
HXDLIN(4417)			_hx_tmp1 = this->bold;
            		}
            		else {
HXDLIN(4417)			_hx_tmp1 = true;
            		}
HXDLIN(4417)		if (!(_hx_tmp1)) {
HXDLIN(4417)			_hx_tmp = this->underline;
            		}
            		else {
HXDLIN(4417)			_hx_tmp = true;
            		}
HXDLIN(4417)		if (!(_hx_tmp)) {
HXDLIN(4417)			return this->blink;
            		}
            		else {
HXDLIN(4417)			return true;
            		}
HXDLIN(4417)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnsiState_obj,isActive,return )

void AnsiState_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_221aeffc2a848937_4420_reset)
HXLINE(4421)		this->fgcolor = null();
HXLINE(4422)		this->bgcolor = null();
HXLINE(4423)		this->bold = false;
HXLINE(4424)		this->underline = false;
HXLINE(4425)		this->blink = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnsiState_obj,reset,(void))

void AnsiState_obj::copyFrom( ::hx::strings::AnsiState other){
            	HX_STACKFRAME(&_hx_pos_221aeffc2a848937_4429_copyFrom)
HXLINE(4430)		this->fgcolor = other->fgcolor;
HXLINE(4431)		this->bgcolor = other->bgcolor;
HXLINE(4432)		this->bold = other->bold;
HXLINE(4433)		this->underline = other->underline;
HXLINE(4434)		this->blink = other->blink;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnsiState_obj,copyFrom,(void))

void AnsiState_obj::setGraphicModeParameter(int param){
            	HX_STACKFRAME(&_hx_pos_221aeffc2a848937_4439_setGraphicModeParameter)
HXDLIN(4439)		switch((int)(param)){
            			case (int)0: {
HXLINE(4440)				this->reset();
            			}
            			break;
            			case (int)1: {
HXLINE(4441)				this->bold = true;
            			}
            			break;
            			case (int)4: {
HXLINE(4442)				this->underline = true;
            			}
            			break;
            			case (int)5: {
HXLINE(4443)				this->blink = true;
            			}
            			break;
            			case (int)30: {
HXLINE(4444)				this->fgcolor = HX_("black",bf,d5,f1,b4);
            			}
            			break;
            			case (int)31: {
HXLINE(4445)				this->fgcolor = HX_("red",51,d9,56,00);
            			}
            			break;
            			case (int)32: {
HXLINE(4446)				this->fgcolor = HX_("green",c3,0e,ed,99);
            			}
            			break;
            			case (int)33: {
HXLINE(4447)				this->fgcolor = HX_("yellow",74,9f,5c,d0);
            			}
            			break;
            			case (int)34: {
HXLINE(4448)				this->fgcolor = HX_("blue",9a,42,19,41);
            			}
            			break;
            			case (int)35: {
HXLINE(4449)				this->fgcolor = HX_("magenta",29,ba,9d,0e);
            			}
            			break;
            			case (int)36: {
HXLINE(4450)				this->fgcolor = HX_("cyan",23,45,cc,41);
            			}
            			break;
            			case (int)37: {
HXLINE(4451)				this->fgcolor = HX_("white",a9,4a,bd,c9);
            			}
            			break;
            			case (int)40: {
HXLINE(4452)				this->bgcolor = HX_("black",bf,d5,f1,b4);
            			}
            			break;
            			case (int)41: {
HXLINE(4453)				this->bgcolor = HX_("red",51,d9,56,00);
            			}
            			break;
            			case (int)42: {
HXLINE(4454)				this->bgcolor = HX_("green",c3,0e,ed,99);
            			}
            			break;
            			case (int)43: {
HXLINE(4455)				this->bgcolor = HX_("yellow",74,9f,5c,d0);
            			}
            			break;
            			case (int)44: {
HXLINE(4456)				this->bgcolor = HX_("blue",9a,42,19,41);
            			}
            			break;
            			case (int)45: {
HXLINE(4457)				this->bgcolor = HX_("magenta",29,ba,9d,0e);
            			}
            			break;
            			case (int)46: {
HXLINE(4458)				this->bgcolor = HX_("cyan",23,45,cc,41);
            			}
            			break;
            			case (int)47: {
HXLINE(4459)				this->bgcolor = HX_("white",a9,4a,bd,c9);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnsiState_obj,setGraphicModeParameter,(void))

::String AnsiState_obj::toCSS( ::hx::strings::AnsiToHtmlRenderMethod renderMethod){
            	HX_GC_STACKFRAME(&_hx_pos_221aeffc2a848937_4464_toCSS)
HXLINE(4465)		bool _hx_tmp;
HXDLIN(4465)		bool _hx_tmp1;
HXDLIN(4465)		bool _hx_tmp2;
HXDLIN(4465)		bool _hx_tmp3;
HXDLIN(4465)		if (::hx::IsNull( this->fgcolor )) {
HXLINE(4465)			_hx_tmp3 = ::hx::IsNotNull( this->bgcolor );
            		}
            		else {
HXLINE(4465)			_hx_tmp3 = true;
            		}
HXDLIN(4465)		if (!(_hx_tmp3)) {
HXLINE(4465)			_hx_tmp2 = this->bold;
            		}
            		else {
HXLINE(4465)			_hx_tmp2 = true;
            		}
HXDLIN(4465)		if (!(_hx_tmp2)) {
HXLINE(4465)			_hx_tmp1 = this->underline;
            		}
            		else {
HXLINE(4465)			_hx_tmp1 = true;
            		}
HXDLIN(4465)		if (!(_hx_tmp1)) {
HXLINE(4465)			_hx_tmp = this->blink;
            		}
            		else {
HXLINE(4465)			_hx_tmp = true;
            		}
HXDLIN(4465)		if (_hx_tmp) {
HXLINE(4466)			 ::hx::strings::StringBuilder sb =  ::hx::strings::StringBuilder_obj::__alloc( HX_CTX ,null());
HXLINE(4467)			if (::hx::IsNull( renderMethod )) {
HXLINE(4467)				renderMethod = ::hx::strings::AnsiToHtmlRenderMethod_obj::StyleAttributes_dyn();
            			}
HXLINE(4468)			switch((int)(renderMethod->_hx_getIndex())){
            				case (int)0: {
HXLINE(4470)					if (::hx::IsNotNull( this->fgcolor )) {
HXLINE(4471)						sb->add(HX_("color:",77,c5,86,c6))->add(this->fgcolor)->add(HX_(";",3b,00,00,00));
            					}
HXLINE(4472)					if (::hx::IsNotNull( this->bgcolor )) {
HXLINE(4473)						sb->add(HX_("background-color:",36,8b,bd,c1))->add(this->bgcolor)->add(HX_(";",3b,00,00,00));
            					}
HXLINE(4474)					if (this->bold) {
HXLINE(4475)						sb->add(HX_("font-weight:bold;",92,98,cf,29));
            					}
HXLINE(4476)					if (this->underline) {
HXLINE(4477)						sb->add(HX_("text-decoration:underline;",59,c4,ff,8a));
            					}
HXLINE(4478)					if (this->blink) {
HXLINE(4479)						sb->add(HX_("text-decoration:blink;",09,91,3e,2b));
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(4482)					sb->add(::hx::strings::AnsiState_obj::defaultCssClassesCallback(::hx::ObjectPtr<OBJ_>(this)));
            				}
            				break;
            				case (int)2: {
HXLINE(4484)					 ::Dynamic func = renderMethod->_hx_getObject(0);
HXLINE(4485)					sb->add(( (::String)(func(::hx::ObjectPtr<OBJ_>(this))) ));
            				}
            				break;
            			}
HXLINE(4487)			return sb->toString();
            		}
HXLINE(4489)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnsiState_obj,toCSS,return )

::String AnsiState_obj::defaultCssClassesCallback( ::hx::strings::AnsiState state){
            	HX_STACKFRAME(&_hx_pos_221aeffc2a848937_4510_defaultCssClassesCallback)
HXLINE(4511)		::Array< ::String > classes = ::Array_obj< ::String >::__new(0);
HXLINE(4512)		if (::hx::IsNotNull( state->fgcolor )) {
HXLINE(4512)			classes->push((HX_("ansi_fg_",42,b1,8c,39) + state->fgcolor));
            		}
HXLINE(4513)		if (::hx::IsNotNull( state->bgcolor )) {
HXLINE(4513)			classes->push((HX_("ansi_bg_",3e,a8,89,39) + state->bgcolor));
            		}
HXLINE(4514)		if (state->bold) {
HXLINE(4514)			classes->push(HX_("ansi_bold",c1,ab,ef,1e));
            		}
HXLINE(4515)		if (state->underline) {
HXLINE(4515)			classes->push(HX_("ansi_underline",50,51,0e,04));
            		}
HXLINE(4516)		if (state->blink) {
HXLINE(4516)			classes->push(HX_("ansi_blink",a0,bb,c8,f0));
            		}
HXLINE(4517)		return classes->join(HX_(" ",20,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnsiState_obj,defaultCssClassesCallback,return )


::hx::ObjectPtr< AnsiState_obj > AnsiState_obj::__new( ::hx::strings::AnsiState copyFrom) {
	::hx::ObjectPtr< AnsiState_obj > __this = new AnsiState_obj();
	__this->__construct(copyFrom);
	return __this;
}

::hx::ObjectPtr< AnsiState_obj > AnsiState_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::strings::AnsiState copyFrom) {
	AnsiState_obj *__this = (AnsiState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnsiState_obj), true, "hx.strings.AnsiState"));
	*(void **)__this = AnsiState_obj::_hx_vtable;
	__this->__construct(copyFrom);
	return __this;
}

AnsiState_obj::AnsiState_obj()
{
}

void AnsiState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnsiState);
	HX_MARK_MEMBER_NAME(bgcolor,"bgcolor");
	HX_MARK_MEMBER_NAME(blink,"blink");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(fgcolor,"fgcolor");
	HX_MARK_MEMBER_NAME(underline,"underline");
	HX_MARK_END_CLASS();
}

void AnsiState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgcolor,"bgcolor");
	HX_VISIT_MEMBER_NAME(blink,"blink");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(fgcolor,"fgcolor");
	HX_VISIT_MEMBER_NAME(underline,"underline");
}

::hx::Val AnsiState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blink") ) { return ::hx::Val( blink ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"toCSS") ) { return ::hx::Val( toCSS_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgcolor") ) { return ::hx::Val( bgcolor ); }
		if (HX_FIELD_EQ(inName,"fgcolor") ) { return ::hx::Val( fgcolor ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return ::hx::Val( isActive_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return ::hx::Val( underline ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setGraphicModeParameter") ) { return ::hx::Val( setGraphicModeParameter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AnsiState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"defaultCssClassesCallback") ) { outValue = defaultCssClassesCallback_dyn(); return true; }
	}
	return false;
}

::hx::Val AnsiState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blink") ) { blink=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgcolor") ) { bgcolor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fgcolor") ) { fgcolor=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { underline=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnsiState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bgcolor",7e,11,56,64));
	outFields->push(HX_("blink",5c,f1,f7,b4));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("fgcolor",82,ec,ab,0a));
	outFields->push(HX_("underline",0c,15,d1,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnsiState_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnsiState_obj,bgcolor),HX_("bgcolor",7e,11,56,64)},
	{::hx::fsBool,(int)offsetof(AnsiState_obj,blink),HX_("blink",5c,f1,f7,b4)},
	{::hx::fsBool,(int)offsetof(AnsiState_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsString,(int)offsetof(AnsiState_obj,fgcolor),HX_("fgcolor",82,ec,ab,0a)},
	{::hx::fsBool,(int)offsetof(AnsiState_obj,underline),HX_("underline",0c,15,d1,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnsiState_obj_sStaticStorageInfo = 0;
#endif

static ::String AnsiState_obj_sMemberFields[] = {
	HX_("bgcolor",7e,11,56,64),
	HX_("blink",5c,f1,f7,b4),
	HX_("bold",85,81,1b,41),
	HX_("fgcolor",82,ec,ab,0a),
	HX_("underline",0c,15,d1,87),
	HX_("isActive",50,dd,af,6e),
	HX_("reset",cf,49,c8,e6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("setGraphicModeParameter",c0,0e,1d,df),
	HX_("toCSS",08,19,0d,14),
	::String(null()) };

::hx::Class AnsiState_obj::__mClass;

static ::String AnsiState_obj_sStaticFields[] = {
	HX_("defaultCssClassesCallback",29,33,25,b1),
	::String(null())
};

void AnsiState_obj::__register()
{
	AnsiState_obj _hx_dummy;
	AnsiState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.AnsiState",64,2e,4d,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AnsiState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnsiState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnsiState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnsiState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnsiState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnsiState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
