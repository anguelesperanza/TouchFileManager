#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_IDataItem
#include <haxe/ui/data/IDataItem.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_98c3d89b78a0c130_6_new,"haxe.ui.data.DataSource","new",0xecb28029,"haxe.ui.data.DataSource.new","haxe/ui/data/DataSource.hx",6,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_29_get_allowCallbacks,"haxe.ui.data.DataSource","get_allowCallbacks",0x132d3065,"haxe.ui.data.DataSource.get_allowCallbacks","haxe/ui/data/DataSource.hx",29,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_31_set_allowCallbacks,"haxe.ui.data.DataSource","set_allowCallbacks",0xefdc62d9,"haxe.ui.data.DataSource.set_allowCallbacks","haxe/ui/data/DataSource.hx",31,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_42_get_data,"haxe.ui.data.DataSource","get_data",0x12e0894a,"haxe.ui.data.DataSource.get_data","haxe/ui/data/DataSource.hx",42,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_44_set_data,"haxe.ui.data.DataSource","set_data",0xc13de2be,"haxe.ui.data.DataSource.set_data","haxe/ui/data/DataSource.hx",44,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_52_get_size,"haxe.ui.data.DataSource","get_size",0x1cd0d3e1,"haxe.ui.data.DataSource.get_size","haxe/ui/data/DataSource.hx",52,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_55_get,"haxe.ui.data.DataSource","get",0xecad305f,"haxe.ui.data.DataSource.get","haxe/ui/data/DataSource.hx",55,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_66_indexOf,"haxe.ui.data.DataSource","indexOf",0x2f2c1112,"haxe.ui.data.DataSource.indexOf","haxe/ui/data/DataSource.hx",66,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_74_add,"haxe.ui.data.DataSource","add",0xeca8a1ea,"haxe.ui.data.DataSource.add","haxe/ui/data/DataSource.hx",74,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_83_insert,"haxe.ui.data.DataSource","insert",0x7171d710,"haxe.ui.data.DataSource.insert","haxe/ui/data/DataSource.hx",83,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_92_remove,"haxe.ui.data.DataSource","remove",0xd81d301b,"haxe.ui.data.DataSource.remove","haxe/ui/data/DataSource.hx",92,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_101_removeAt,"haxe.ui.data.DataSource","removeAt",0xfddde5ee,"haxe.ui.data.DataSource.removeAt","haxe/ui/data/DataSource.hx",101,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_106_update,"haxe.ui.data.DataSource","update",0x5a9a19e0,"haxe.ui.data.DataSource.update","haxe/ui/data/DataSource.hx",106,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_115_clear,"haxe.ui.data.DataSource","clear",0x0d9c6596,"haxe.ui.data.DataSource.clear","haxe/ui/data/DataSource.hx",115,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_127_clearFilter,"haxe.ui.data.DataSource","clearFilter",0x39d34dee,"haxe.ui.data.DataSource.clearFilter","haxe/ui/data/DataSource.hx",127,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_133_filter,"haxe.ui.data.DataSource","filter",0x58c9b38f,"haxe.ui.data.DataSource.filter","haxe/ui/data/DataSource.hx",133,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_140_get_isFiltered,"haxe.ui.data.DataSource","get_isFiltered",0x54ca3341,"haxe.ui.data.DataSource.get_isFiltered","haxe/ui/data/DataSource.hx",140,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_143_handleClearFilter,"haxe.ui.data.DataSource","handleClearFilter",0xa7d36fe6,"haxe.ui.data.DataSource.handleClearFilter","haxe/ui/data/DataSource.hx",143,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_146_handleFilter,"haxe.ui.data.DataSource","handleFilter",0x4dacd497,"haxe.ui.data.DataSource.handleFilter","haxe/ui/data/DataSource.hx",146,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_149_handleChanged,"haxe.ui.data.DataSource","handleChanged",0x6d133f35,"haxe.ui.data.DataSource.handleChanged","haxe/ui/data/DataSource.hx",149,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_157_sortCustom,"haxe.ui.data.DataSource","sortCustom",0x7c78c906,"haxe.ui.data.DataSource.sortCustom","haxe/ui/data/DataSource.hx",157,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_161_sort,"haxe.ui.data.DataSource","sort",0x32d34775,"haxe.ui.data.DataSource.sort","haxe/ui/data/DataSource.hx",161,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_164_sortByFn,"haxe.ui.data.DataSource","sortByFn",0x9560c914,"haxe.ui.data.DataSource.sortByFn","haxe/ui/data/DataSource.hx",164,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_196_handleGetSize,"haxe.ui.data.DataSource","handleGetSize",0xbf1cdeb8,"haxe.ui.data.DataSource.handleGetSize","haxe/ui/data/DataSource.hx",196,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_200_handleGetItem,"haxe.ui.data.DataSource","handleGetItem",0xb889030a,"haxe.ui.data.DataSource.handleGetItem","haxe/ui/data/DataSource.hx",200,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_204_handleIndexOf,"haxe.ui.data.DataSource","handleIndexOf",0x8105d70a,"haxe.ui.data.DataSource.handleIndexOf","haxe/ui/data/DataSource.hx",204,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_208_handleAddItem,"haxe.ui.data.DataSource","handleAddItem",0x22439615,"haxe.ui.data.DataSource.handleAddItem","haxe/ui/data/DataSource.hx",208,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_212_handleInsert,"haxe.ui.data.DataSource","handleInsert",0x6654f818,"haxe.ui.data.DataSource.handleInsert","haxe/ui/data/DataSource.hx",212,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_216_handleRemoveItem,"haxe.ui.data.DataSource","handleRemoveItem",0x199c0fd6,"haxe.ui.data.DataSource.handleRemoveItem","haxe/ui/data/DataSource.hx",216,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_220_handleGetData,"haxe.ui.data.DataSource","handleGetData",0xb52c9421,"haxe.ui.data.DataSource.handleGetData","haxe/ui/data/DataSource.hx",220,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_223_handleSetData,"haxe.ui.data.DataSource","handleSetData",0xa82e252d,"haxe.ui.data.DataSource.handleSetData","haxe/ui/data/DataSource.hx",223,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_226_handleClear,"haxe.ui.data.DataSource","handleClear",0x1b563d8e,"haxe.ui.data.DataSource.handleClear","haxe/ui/data/DataSource.hx",226,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_236_handleUpdateItem,"haxe.ui.data.DataSource","handleUpdateItem",0x5531c01b,"haxe.ui.data.DataSource.handleUpdateItem","haxe/ui/data/DataSource.hx",236,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_239_clone,"haxe.ui.data.DataSource","clone",0x0da40766,"haxe.ui.data.DataSource.clone","haxe/ui/data/DataSource.hx",239,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_245_onDataItemChange,"haxe.ui.data.DataSource","onDataItemChange",0x482641c3,"haxe.ui.data.DataSource.onDataItemChange","haxe/ui/data/DataSource.hx",245,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_252_onInternalChange,"haxe.ui.data.DataSource","onInternalChange",0x6fae6ca3,"haxe.ui.data.DataSource.onInternalChange","haxe/ui/data/DataSource.hx",252,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_263_fromString,"haxe.ui.data.DataSource","fromString",0x3474f932,"haxe.ui.data.DataSource.fromString","haxe/ui/data/DataSource.hx",263,0xca832966)
namespace haxe{
namespace ui{
namespace data{

void DataSource_obj::__construct(::Dynamic transformer){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_6_new)
HXLINE( 126)		this->_filterFn = null();
HXLINE(  18)		this->onChange = null();
HXLINE(  17)		this->onClear = null();
HXLINE(  16)		this->onRemove = null();
HXLINE(  15)		this->onUpdate = null();
HXLINE(  14)		this->onInsert = null();
HXLINE(  13)		this->onAdd = null();
HXLINE(  21)		this->transformer = transformer;
HXLINE(  22)		this->_allowCallbacks = true;
HXLINE(  23)		this->_changed = false;
            	}

Dynamic DataSource_obj::__CreateEmpty() { return new DataSource_obj; }

void *DataSource_obj::_hx_vtable = 0;

Dynamic DataSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataSource_obj > _hx_result = new DataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1af18d4d;
}

bool DataSource_obj::get_allowCallbacks(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_29_get_allowCallbacks)
HXDLIN(  29)		return this->_allowCallbacks;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_allowCallbacks,return )

bool DataSource_obj::set_allowCallbacks(bool value){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_31_set_allowCallbacks)
HXLINE(  32)		this->_allowCallbacks = value;
HXLINE(  33)		bool _hx_tmp;
HXDLIN(  33)		if ((this->_allowCallbacks == true)) {
HXLINE(  33)			_hx_tmp = (this->_changed == true);
            		}
            		else {
HXLINE(  33)			_hx_tmp = false;
            		}
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  34)			this->_changed = false;
HXLINE(  35)			this->onInternalChange();
            		}
HXLINE(  37)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_allowCallbacks,return )

 ::Dynamic DataSource_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_42_get_data)
HXDLIN(  42)		return this->handleGetData();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_data,return )

 ::Dynamic DataSource_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_44_set_data)
HXLINE(  45)		this->handleSetData(value);
HXLINE(  46)		this->handleChanged();
HXLINE(  47)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_data,return )

int DataSource_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_52_get_size)
HXDLIN(  52)		return this->handleGetSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_size,return )

 ::Dynamic DataSource_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_55_get)
HXLINE(  56)		 ::Dynamic r = this->handleGetItem(index);
HXLINE(  57)		if (::Std_obj::isOfType(r,::hx::ClassOf< ::haxe::ui::data::IDataItem >())) {
HXLINE(  58)			 ::hx::interface_check(r,0xd62b28e2)->__SetField(HX_("onDataSourceChanged",b0,dc,ea,03),this->onDataItemChange_dyn(),::hx::paccDynamic);
            		}
HXLINE(  60)		if (::hx::IsNotNull( this->transformer )) {
HXLINE(  61)			r = ::haxe::ui::data::transformation::IItemTransformer_obj::transformFrom(this->transformer,r);
            		}
HXLINE(  63)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,get,return )

int DataSource_obj::indexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_66_indexOf)
HXLINE(  67)		if (::hx::IsNotNull( this->transformer )) {
HXLINE(  68)			item = ::haxe::ui::data::transformation::IItemTransformer_obj::transformFrom(this->transformer,item);
            		}
HXLINE(  71)		return this->handleIndexOf(item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,indexOf,return )

 ::Dynamic DataSource_obj::add( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_74_add)
HXLINE(  75)		 ::Dynamic r = this->handleAddItem(item);
HXLINE(  76)		this->handleChanged();
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		if ((this->_allowCallbacks == true)) {
HXLINE(  77)			_hx_tmp = ::hx::IsNotNull( this->onAdd );
            		}
            		else {
HXLINE(  77)			_hx_tmp = false;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			this->onAdd(r);
            		}
HXLINE(  80)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,add,return )

 ::Dynamic DataSource_obj::insert(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_83_insert)
HXLINE(  84)		 ::Dynamic r = this->handleInsert(index,item);
HXLINE(  85)		this->handleChanged();
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if ((this->_allowCallbacks == true)) {
HXLINE(  86)			_hx_tmp = ::hx::IsNotNull( this->onInsert );
            		}
            		else {
HXLINE(  86)			_hx_tmp = false;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  87)			this->onInsert(index,r);
            		}
HXLINE(  89)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,insert,return )

 ::Dynamic DataSource_obj::remove( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_92_remove)
HXLINE(  93)		 ::Dynamic r = this->handleRemoveItem(item);
HXLINE(  94)		this->handleChanged();
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		if ((this->_allowCallbacks == true)) {
HXLINE(  95)			_hx_tmp = ::hx::IsNotNull( this->onRemove );
            		}
            		else {
HXLINE(  95)			_hx_tmp = false;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXLINE(  96)			this->onRemove(r);
            		}
HXLINE(  98)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,remove,return )

 ::Dynamic DataSource_obj::removeAt(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_101_removeAt)
HXLINE( 102)		 ::Dynamic item = this->get(index);
HXLINE( 103)		return this->remove(item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,removeAt,return )

 ::Dynamic DataSource_obj::update(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_106_update)
HXLINE( 107)		 ::Dynamic r = this->handleUpdateItem(index,item);
HXLINE( 108)		this->handleChanged();
HXLINE( 109)		bool _hx_tmp;
HXDLIN( 109)		if ((this->_allowCallbacks == true)) {
HXLINE( 109)			_hx_tmp = ::hx::IsNotNull( this->onUpdate );
            		}
            		else {
HXLINE( 109)			_hx_tmp = false;
            		}
HXDLIN( 109)		if (_hx_tmp) {
HXLINE( 110)			this->onUpdate(index,r);
            		}
HXLINE( 112)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,update,return )

void DataSource_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_115_clear)
HXLINE( 116)		bool o = this->_allowCallbacks;
HXLINE( 117)		this->_allowCallbacks = false;
HXLINE( 118)		this->handleClear();
HXLINE( 119)		this->_allowCallbacks = o;
HXLINE( 120)		this->handleChanged();
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		if ((this->_allowCallbacks == true)) {
HXLINE( 121)			_hx_tmp = ::hx::IsNotNull( this->onClear );
            		}
            		else {
HXLINE( 121)			_hx_tmp = false;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 122)			this->onClear();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clear,(void))

void DataSource_obj::clearFilter(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_127_clearFilter)
HXLINE( 128)		this->_filterFn = null();
HXLINE( 129)		this->handleClearFilter();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clearFilter,(void))

void DataSource_obj::filter( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_133_filter)
HXLINE( 134)		this->_filterFn = fn;
HXLINE( 135)		this->handleFilter(fn);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,filter,(void))

bool DataSource_obj::get_isFiltered(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_140_get_isFiltered)
HXDLIN( 140)		return ::hx::IsNotNull( this->_filterFn );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_isFiltered,return )

void DataSource_obj::handleClearFilter(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_143_handleClearFilter)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleClearFilter,(void))

void DataSource_obj::handleFilter( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_146_handleFilter)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleFilter,(void))

void DataSource_obj::handleChanged(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_149_handleChanged)
HXLINE( 150)		this->_changed = true;
HXLINE( 151)		if ((this->_allowCallbacks == true)) {
HXLINE( 152)			this->_changed = false;
HXLINE( 153)			this->onInternalChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleChanged,(void))

void DataSource_obj::sortCustom( ::Dynamic fn,::String direction){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_157_sortCustom)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,sortCustom,(void))

void DataSource_obj::sort(::String field,::String direction){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,field1, ::Dynamic,_g) HXARGC(3)
            		int _hx_run( ::Dynamic o1, ::Dynamic o2,::String direction){
            			HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_161_sort)
HXDLIN( 161)			return ( (int)(_g(o1,o2,direction,field1)) );
            		}
            		HX_END_LOCAL_FUNC3(return)

            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_161_sort)
HXDLIN( 161)		 ::Dynamic _g = this->sortByFn_dyn();
HXDLIN( 161)		::String field1 = field;
HXDLIN( 161)		this->sortCustom( ::Dynamic(new _hx_Closure_0(field1,_g)),direction);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,sort,(void))

int DataSource_obj::sortByFn( ::Dynamic o1, ::Dynamic o2,::String direction,::String field){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_164_sortByFn)
HXLINE( 165)		 ::Dynamic f1 = o1;
HXLINE( 166)		 ::Dynamic f2 = o2;
HXLINE( 168)		if (::hx::IsNotNull( field )) {
HXLINE( 169)			f1 = ::Reflect_obj::field(o1,field);
HXLINE( 170)			f2 = ::Reflect_obj::field(o2,field);
            		}
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		if (::hx::IsNotNull( f1 )) {
HXLINE( 173)			_hx_tmp = ::hx::IsNull( f2 );
            		}
            		else {
HXLINE( 173)			_hx_tmp = true;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 174)			return 0;
            		}
HXLINE( 177)		f1 = ::Std_obj::string(f1);
HXLINE( 178)		f2 = ::Std_obj::string(f2);
HXLINE( 180)		if (::hx::IsNull( direction )) {
HXLINE( 181)			direction = HX_("asc",31,ff,49,00);
            		}
HXLINE( 184)		int high = 1;
HXLINE( 185)		int low = -1;
HXLINE( 186)		if ((direction == HX_("desc",51,5e,66,42))) {
HXLINE( 187)			high = -1;
HXLINE( 188)			low = 1;
            		}
HXLINE( 191)		if (::hx::IsGreater( f1,f2 )) {
HXLINE( 191)			return high;
            		}
            		else {
HXLINE( 191)			return low;
            		}
HXDLIN( 191)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(DataSource_obj,sortByFn,return )

int DataSource_obj::handleGetSize(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_196_handleGetSize)
HXDLIN( 196)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleGetSize,return )

 ::Dynamic DataSource_obj::handleGetItem(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_200_handleGetItem)
HXDLIN( 200)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleGetItem,return )

int DataSource_obj::handleIndexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_204_handleIndexOf)
HXDLIN( 204)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleIndexOf,return )

 ::Dynamic DataSource_obj::handleAddItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_208_handleAddItem)
HXDLIN( 208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleAddItem,return )

 ::Dynamic DataSource_obj::handleInsert(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_212_handleInsert)
HXDLIN( 212)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,handleInsert,return )

 ::Dynamic DataSource_obj::handleRemoveItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_216_handleRemoveItem)
HXDLIN( 216)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleRemoveItem,return )

 ::Dynamic DataSource_obj::handleGetData(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_220_handleGetData)
HXDLIN( 220)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleGetData,return )

void DataSource_obj::handleSetData( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_223_handleSetData)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleSetData,(void))

void DataSource_obj::handleClear(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_226_handleClear)
HXLINE( 227)		::Dynamic cachedTransformer = this->transformer;
HXLINE( 228)		this->transformer = null();
HXLINE( 229)		while((this->get_size() > 0)){
HXLINE( 230)			this->remove(this->get(0));
            		}
HXLINE( 232)		this->transformer = cachedTransformer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleClear,(void))

 ::Dynamic DataSource_obj::handleUpdateItem(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_236_handleUpdateItem)
HXDLIN( 236)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,handleUpdateItem,return )

 ::haxe::ui::data::DataSource DataSource_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_98c3d89b78a0c130_239_clone)
HXLINE( 240)		 ::haxe::ui::data::DataSource c =  ::haxe::ui::data::DataSource_obj::__alloc( HX_CTX ,null());
HXLINE( 241)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clone,return )

void DataSource_obj::onDataItemChange(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_245_onDataItemChange)
HXDLIN( 245)		if (::hx::IsNotNull( this->_filterFn )) {
HXLINE( 246)			this->handleFilter(this->_filterFn);
            		}
            		else {
HXLINE( 248)			this->onInternalChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,onDataItemChange,(void))

void DataSource_obj::onInternalChange(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_252_onInternalChange)
HXLINE( 253)		if (::hx::IsNotNull( this->onDataSourceChange )) {
HXLINE( 254)			this->onDataSourceChange();
            		}
HXLINE( 256)		if (::hx::IsNotNull( this->onChange )) {
HXLINE( 257)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,onInternalChange,(void))

 ::haxe::ui::data::DataSource DataSource_obj::fromString(::String data,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_263_fromString)
HXDLIN( 263)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,fromString,return )


::hx::ObjectPtr< DataSource_obj > DataSource_obj::__new(::Dynamic transformer) {
	::hx::ObjectPtr< DataSource_obj > __this = new DataSource_obj();
	__this->__construct(transformer);
	return __this;
}

::hx::ObjectPtr< DataSource_obj > DataSource_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic transformer) {
	DataSource_obj *__this = (DataSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSource_obj), true, "haxe.ui.data.DataSource"));
	*(void **)__this = DataSource_obj::_hx_vtable;
	__this->__construct(transformer);
	return __this;
}

DataSource_obj::DataSource_obj()
{
}

void DataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSource);
	HX_MARK_MEMBER_NAME(onDataSourceChange,"onDataSourceChange");
	HX_MARK_MEMBER_NAME(transformer,"transformer");
	HX_MARK_MEMBER_NAME(_changed,"_changed");
	HX_MARK_MEMBER_NAME(onAdd,"onAdd");
	HX_MARK_MEMBER_NAME(onInsert,"onInsert");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(onRemove,"onRemove");
	HX_MARK_MEMBER_NAME(onClear,"onClear");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(_allowCallbacks,"_allowCallbacks");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_filterFn,"_filterFn");
	HX_MARK_MEMBER_NAME(isFiltered,"isFiltered");
	HX_MARK_END_CLASS();
}

void DataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onDataSourceChange,"onDataSourceChange");
	HX_VISIT_MEMBER_NAME(transformer,"transformer");
	HX_VISIT_MEMBER_NAME(_changed,"_changed");
	HX_VISIT_MEMBER_NAME(onAdd,"onAdd");
	HX_VISIT_MEMBER_NAME(onInsert,"onInsert");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(onRemove,"onRemove");
	HX_VISIT_MEMBER_NAME(onClear,"onClear");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(_allowCallbacks,"_allowCallbacks");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_filterFn,"_filterFn");
	HX_VISIT_MEMBER_NAME(isFiltered,"isFiltered");
}

::hx::Val DataSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_size() : size ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClear") ) { return ::hx::Val( onClear ); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return ::hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_changed") ) { return ::hx::Val( _changed ); }
		if (HX_FIELD_EQ(inName,"onInsert") ) { return ::hx::Val( onInsert ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return ::hx::Val( removeAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortByFn") ) { return ::hx::Val( sortByFn_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_filterFn") ) { return ::hx::Val( _filterFn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFiltered") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isFiltered() : isFiltered ); }
		if (HX_FIELD_EQ(inName,"sortCustom") ) { return ::hx::Val( sortCustom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformer") ) { return ::hx::Val( transformer ); }
		if (HX_FIELD_EQ(inName,"clearFilter") ) { return ::hx::Val( clearFilter_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleClear") ) { return ::hx::Val( handleClear_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleFilter") ) { return ::hx::Val( handleFilter_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleInsert") ) { return ::hx::Val( handleInsert_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleChanged") ) { return ::hx::Val( handleChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetSize") ) { return ::hx::Val( handleGetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetItem") ) { return ::hx::Val( handleGetItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleIndexOf") ) { return ::hx::Val( handleIndexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddItem") ) { return ::hx::Val( handleAddItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetData") ) { return ::hx::Val( handleGetData_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleSetData") ) { return ::hx::Val( handleSetData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowCallbacks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowCallbacks() ); }
		if (HX_FIELD_EQ(inName,"get_isFiltered") ) { return ::hx::Val( get_isFiltered_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowCallbacks") ) { return ::hx::Val( _allowCallbacks ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleRemoveItem") ) { return ::hx::Val( handleRemoveItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleUpdateItem") ) { return ::hx::Val( handleUpdateItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDataItemChange") ) { return ::hx::Val( onDataItemChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"onInternalChange") ) { return ::hx::Val( onInternalChange_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleClearFilter") ) { return ::hx::Val( handleClearFilter_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onDataSourceChange") ) { return ::hx::Val( onDataSourceChange ); }
		if (HX_FIELD_EQ(inName,"get_allowCallbacks") ) { return ::hx::Val( get_allowCallbacks_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowCallbacks") ) { return ::hx::Val( set_allowCallbacks_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

::hx::Val DataSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onAdd") ) { onAdd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClear") ) { onClear=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_changed") ) { _changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onInsert") ) { onInsert=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRemove") ) { onRemove=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_filterFn") ) { _filterFn=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFiltered") ) { isFiltered=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformer") ) { transformer=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowCallbacks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowCallbacks(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowCallbacks") ) { _allowCallbacks=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onDataSourceChange") ) { onDataSourceChange=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("transformer",d9,b8,ca,32));
	outFields->push(HX_("_changed",75,0a,85,06));
	outFields->push(HX_("_allowCallbacks",e4,1d,a5,c2));
	outFields->push(HX_("allowCallbacks",45,d5,44,79));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("isFiltered",21,e8,35,8f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onDataSourceChange),HX_("onDataSourceChange",34,31,40,b4)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DataSource_obj,transformer),HX_("transformer",d9,b8,ca,32)},
	{::hx::fsBool,(int)offsetof(DataSource_obj,_changed),HX_("_changed",75,0a,85,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onAdd),HX_("onAdd",42,86,61,32)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onInsert),HX_("onInsert",b8,39,8a,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onUpdate),HX_("onUpdate",88,7c,b2,66)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onRemove),HX_("onRemove",c3,92,35,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onClear),HX_("onClear",ee,0f,99,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsBool,(int)offsetof(DataSource_obj,_allowCallbacks),HX_("_allowCallbacks",e4,1d,a5,c2)},
	{::hx::fsInt,(int)offsetof(DataSource_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataSource_obj,_filterFn),HX_("_filterFn",7f,b2,1c,5c)},
	{::hx::fsBool,(int)offsetof(DataSource_obj,isFiltered),HX_("isFiltered",21,e8,35,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSource_obj_sMemberFields[] = {
	HX_("onDataSourceChange",34,31,40,b4),
	HX_("transformer",d9,b8,ca,32),
	HX_("_changed",75,0a,85,06),
	HX_("onAdd",42,86,61,32),
	HX_("onInsert",b8,39,8a,7d),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onRemove",c3,92,35,e4),
	HX_("onClear",ee,0f,99,de),
	HX_("onChange",ef,87,1f,97),
	HX_("_allowCallbacks",e4,1d,a5,c2),
	HX_("get_allowCallbacks",0e,b6,de,14),
	HX_("set_allowCallbacks",82,e8,8d,f1),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("size",c1,a0,53,4c),
	HX_("get_size",4a,5c,0e,cc),
	HX_("get",96,80,4e,00),
	HX_("indexOf",c9,48,bf,e0),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("remove",44,9c,88,04),
	HX_("removeAt",57,6e,1b,ad),
	HX_("update",09,86,05,87),
	HX_("clear",8d,71,5b,48),
	HX_("_filterFn",7f,b2,1c,5c),
	HX_("clearFilter",25,2d,22,19),
	HX_("filter",b8,1f,35,85),
	HX_("isFiltered",21,e8,35,8f),
	HX_("get_isFiltered",6a,70,2b,05),
	HX_("handleClearFilter",5d,12,30,17),
	HX_("handleFilter",80,45,61,d3),
	HX_("handleChanged",2c,9a,41,e5),
	HX_("sortCustom",af,fd,77,9c),
	HX_("sort",5e,27,58,4c),
	HX_("sortByFn",7d,51,9e,44),
	HX_("handleGetSize",af,39,4b,37),
	HX_("handleGetItem",01,5e,b7,30),
	HX_("handleIndexOf",01,32,34,f9),
	HX_("handleAddItem",0c,f1,71,9a),
	HX_("handleInsert",01,69,09,ec),
	HX_("handleRemoveItem",3f,a9,a5,92),
	HX_("handleGetData",18,ef,5a,2d),
	HX_("handleSetData",24,80,5c,20),
	HX_("handleClear",c5,1c,a5,fa),
	HX_("handleUpdateItem",84,59,3b,ce),
	HX_("clone",5d,13,63,48),
	HX_("onDataItemChange",2c,db,2f,c1),
	HX_("onInternalChange",0c,06,b8,e8),
	::String(null()) };

::hx::Class DataSource_obj::__mClass;

static ::String DataSource_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void DataSource_obj::__register()
{
	DataSource_obj _hx_dummy;
	DataSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.data.DataSource",b7,37,3b,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataSource_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DataSource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
