#include "UserControl.bmx.debug.win32.x86.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s0={
	&bbStringClass,
	0x75cdc067fd4d9b00,
	64,
	{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81
	,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103
	,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
	,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}
};
static BBString _s1={
	&bbStringClass,
	0xf25a07ea0c0e69f,
	54,
	{65,110,32,101,108,101,109,101,110,116,32,119,105,116,104,32,116
	,104,101,32,115,97,109,101,32,107,101,121,32,97,108,114,101
	,97,100,121,32,101,120,105,115,116,115,32,105,110,32,116,104
	,101,32,109,97,112}
};
static BBString _s2={
	&bbStringClass,
	0xbfd0800945fa68b4,
	18,
	{84,104,101,32,113,117,101,117,101,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s3={
	&bbStringClass,
	0x5c2b786e4055ff04,
	18,
	{84,104,101,32,115,116,97,99,107,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s4={
	&bbStringClass,
	0xf8c407ed2d3563fa,
	13,
	{108,105,115,116,32,105,115,32,101,109,112,116,121}
};
static BBString _s9={
	&bbStringClass,
	0x558220868d858e40,
	37,
	{108,111,119,101,114,86,97,108,117,101,32,105,115,32,103,114,101
	,97,116,101,114,32,116,104,97,110,32,117,112,112,101,114,86
	,97,108,117,101}
};
static BBString _s5={
	&bbStringClass,
	0x42ce070328eb2a04,
	4,
	{110,111,100,101}
};
static BBString _s7={
	&bbStringClass,
	0x7f0d637a59d0dd2b,
	25,
	{110,111,100,101,32,105,115,32,102,114,111,109,32,97,110,111,116
	,104,101,114,32,108,105,115,116}
};
static BBString _s6={
	&bbStringClass,
	0xdf1cc2d23552cb81,
	29,
	{110,111,100,101,32,112,97,114,101,110,116,32,108,105,115,116,32
	,105,115,32,100,105,102,102,101,114,101,110,116}
};
static BBString _s8={
	&bbStringClass,
	0x44dc2ffe03a7a88e,
	5,
	{111,116,104,101,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_23{int kind; const char *name; BBDebugDecl decls[24]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct brl_linkedlist_TList_obj* _m_UserControl_visibleControlList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
void __m_UserControl_UserControl_New_ii(struct _m_UserControl_UserControl_obj* o,BBINT bbt_x,BBINT bbt_y) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_UserControl_UserControl;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_w = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_h = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_text = &bbEmptyString;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground = (struct _m_Color_Color_obj*)(&bbNullObject);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background = (struct _m_Color_Color_obj*)(&bbNullObject);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_font = (struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_hookid = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_value = 0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 19, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x =bbt_x;
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 20, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y =bbt_y;
	struct BBDebugStm __stmt_2 = {0x4580d68c6b8c96e5, 21, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground =(struct _m_Color_Color_obj*)_m_Color_Color_White;
	struct BBDebugStm __stmt_3 = {0x4580d68c6b8c96e5, 22, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background =(struct _m_Color_Color_obj*)_m_Color_Color_Black;
	struct BBDebugStm __stmt_4 = {0x4580d68c6b8c96e5, 23, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_hookid =brl_hook_AllocHookId();
	struct BBDebugStm __stmt_5 = {0x4580d68c6b8c96e5, 24, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_font =(struct brl_max2d_imagefont_TImageFont_obj*)_m_Text_FONT_COURIER_20;
	bbOnDebugLeaveScope();
}
struct _m_UserControl_UserControl_obj* __m_UserControl_UserControl_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y) {
	struct _m_UserControl_UserControl_obj* o = (struct _m_UserControl_UserControl_obj*)bbObjectNewNC(clas);
	__m_UserControl_UserControl_New_ii(o, bbt_x, bbt_y);
	return o;
}
void __m_UserControl_UserControl_New(struct _m_UserControl_UserControl_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_UserControl_UserControl;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_w = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_h = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_text = &bbEmptyString;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground = (struct _m_Color_Color_obj*)(&bbNullObject);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background = (struct _m_Color_Color_obj*)(&bbNullObject);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_font = (struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_hookid = 0;
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_value = 0;
}
BBINT __m_UserControl_UserControl_Update(struct _m_UserControl_UserControl_obj* o){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Update",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 28, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	((struct _m_UserControl_UserControl_obj*)o)->clas->m_Draw((struct _m_UserControl_UserControl_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_(struct _m_UserControl_UserControl_obj* o,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT)){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddHook",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"func",
				"(i,:Object,:Object):Object",
				.var_address=&bbt_func
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 32, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_AddHook(((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_hookid ,bbt_func,(BBOBJECT)&bbNullObject,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_Show(struct _m_UserControl_UserControl_obj* o){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Show",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 36, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_UserControl_visibleControlList))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_UserControl_visibleControlList,(BBOBJECT)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_Hide(struct _m_UserControl_UserControl_obj* o){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Hide",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 40, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_UserControl_visibleControlList))->clas->m_Remove_TObject((struct brl_linkedlist_TList_obj*)_m_UserControl_visibleControlList,(BBOBJECT)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetText_S(struct _m_UserControl_UserControl_obj* o,BBSTRING bbt_text){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"text",
				"$",
				.var_address=&bbt_text
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 44, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_text =bbt_text;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetValue_i(struct _m_UserControl_UserControl_obj* o,BBINT bbt_value){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"value",
				"i",
				.var_address=&bbt_value
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 48, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_value =bbt_value;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetFont_TTImageFont(struct _m_UserControl_UserControl_obj* o,struct brl_max2d_imagefont_TImageFont_obj* bbt_font){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"font",
				":TImageFont",
				.var_address=&bbt_font
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 52, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_font =(struct brl_max2d_imagefont_TImageFont_obj*)bbt_font;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetForeground_TColor(struct _m_UserControl_UserControl_obj* o,struct _m_Color_Color_obj* bbt_color){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetForeground",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"color",
				":Color",
				.var_address=&bbt_color
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 56, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground =(struct _m_Color_Color_obj*)bbt_color;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetBackground_TColor(struct _m_UserControl_UserControl_obj* o,struct _m_Color_Color_obj* bbt_color){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetBackground",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"color",
				":Color",
				.var_address=&bbt_color
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 60, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background =(struct _m_Color_Color_obj*)bbt_color;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetColors_TColorTColor(struct _m_UserControl_UserControl_obj* o,struct _m_Color_Color_obj* bbt_color1,struct _m_Color_Color_obj* bbt_color2){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColors",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"color1",
				":Color",
				.var_address=&bbt_color1
			},
			{
				BBDEBUGDECL_LOCAL,
				"color2",
				":Color",
				.var_address=&bbt_color2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 64, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background =(struct _m_Color_Color_obj*)bbt_color1;
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 65, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground =(struct _m_Color_Color_obj*)bbt_color2;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_SetSize_ii(struct _m_UserControl_UserControl_obj* o,BBINT bbt_w,BBINT bbt_h){
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSize",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":UserControl",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"w",
				"i",
				.var_address=&bbt_w
			},
			{
				BBDEBUGDECL_LOCAL,
				"h",
				"i",
				.var_address=&bbt_h
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 69, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_w =bbt_w;
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 70, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_h =bbt_h;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_UserControl_UserControl_Draw(struct _m_UserControl_UserControl_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
struct BBDebugScope_23 _m_UserControl_UserControl_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"UserControl",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"w",
			"i",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_w)
		},
		{
			BBDEBUGDECL_FIELD,
			"h",
			"i",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_h)
		},
		{
			BBDEBUGDECL_FIELD,
			"text",
			"$",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_text)
		},
		{
			BBDEBUGDECL_FIELD,
			"foreground",
			":Color",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_foreground)
		},
		{
			BBDEBUGDECL_FIELD,
			"background",
			":Color",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_background)
		},
		{
			BBDEBUGDECL_FIELD,
			"font",
			":TImageFont",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_font)
		},
		{
			BBDEBUGDECL_FIELD,
			"hookID",
			"i",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_hookid)
		},
		{
			BBDEBUGDECL_FIELD,
			"value",
			"i",
			.field_offset=offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_UserControl_UserControl_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i):UserControl",
			.var_address=(void*)&__m_UserControl_UserControl_New_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Update",
			"()i",
			.var_address=(void*)&__m_UserControl_UserControl_Update
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddHook",
			"((i,:Object,:Object):Object)i",
			.var_address=(void*)&__m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Show",
			"()i",
			.var_address=(void*)&__m_UserControl_UserControl_Show
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Hide",
			"()i",
			.var_address=(void*)&__m_UserControl_UserControl_Hide
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue",
			"(i)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetValue_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TImageFont)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetFont_TTImageFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetForeground",
			"(:Color)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetForeground_TColor
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetBackground",
			"(:Color)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetBackground_TColor
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColors",
			"(:Color,:Color)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetColors_TColorTColor
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSize",
			"(i,i)i",
			.var_address=(void*)&__m_UserControl_UserControl_SetSize_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_UserControl_UserControl _m_UserControl_UserControl={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_UserControl_UserControl_scope,
	sizeof(struct _m_UserControl_UserControl_obj),
	(void (*)(BBOBJECT))__m_UserControl_UserControl_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_value) - offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_x) + sizeof(BBINT)
	,0
	,offsetof(struct _m_UserControl_UserControl_obj,__m_usercontrol_usercontrol_x)
	,__m_UserControl_UserControl_Update
	,__m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_
	,__m_UserControl_UserControl_Show
	,__m_UserControl_UserControl_Hide
	,__m_UserControl_UserControl_SetText_S
	,__m_UserControl_UserControl_SetValue_i
	,__m_UserControl_UserControl_SetFont_TTImageFont
	,__m_UserControl_UserControl_SetForeground_TColor
	,__m_UserControl_UserControl_SetBackground_TColor
	,__m_UserControl_UserControl_SetColors_TColorTColor
	,__m_UserControl_UserControl_SetSize_ii
	,__m_UserControl_UserControl_Draw
};

void __m_UserControl_Panel_New_iiii(struct _m_UserControl_Panel_obj* o,BBINT bbt_x2,BBINT bbt_y2,BBINT bbt_w,BBINT bbt_h) {
	__m_UserControl_UserControl_New_ii((struct _m_UserControl_UserControl_obj*)o,bbt_x2,bbt_y2);
	o->clas = &_m_UserControl_Panel;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x2
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y2
			},
			{
				BBDEBUGDECL_LOCAL,
				"w",
				"i",
				.var_address=&bbt_w
			},
			{
				BBDEBUGDECL_LOCAL,
				"h",
				"i",
				.var_address=&bbt_h
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 78, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 79, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	((struct _m_UserControl_UserControl_obj*)o)->clas->m_SetSize_ii((struct _m_UserControl_UserControl_obj*)o,bbt_w,bbt_h);
	bbOnDebugLeaveScope();
}
struct _m_UserControl_Panel_obj* __m_UserControl_Panel_New_iiii_ObjectNew(BBClass * clas,BBINT bbt_x2,BBINT bbt_y2,BBINT bbt_w,BBINT bbt_h) {
	struct _m_UserControl_Panel_obj* o = (struct _m_UserControl_Panel_obj*)bbObjectNewNC(clas);
	__m_UserControl_Panel_New_iiii(o, bbt_x2, bbt_y2, bbt_w, bbt_h);
	return o;
}
void __m_UserControl_Panel_New_ii(struct _m_UserControl_Panel_obj* o,BBINT bbt_x,BBINT bbt_y) {
	__m_UserControl_UserControl_New_ii(o, bbt_x, bbt_y);
	o->clas = &_m_UserControl_Panel;
}
struct _m_UserControl_Panel_obj* __m_UserControl_Panel_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y) {
	struct _m_UserControl_Panel_obj* o = (struct _m_UserControl_Panel_obj*)bbObjectNewNC(clas);
	__m_UserControl_Panel_New_ii(o, bbt_x, bbt_y);
	return o;
}
void __m_UserControl_Panel_New(struct _m_UserControl_Panel_obj* o) {
	__m_UserControl_UserControl_New((struct _m_UserControl_UserControl_obj*)o);
	o->clas = &_m_UserControl_Panel;
}
BBINT __m_UserControl_Panel_Draw(struct _m_UserControl_Panel_obj* o){
	((struct _m_UserControl_Panel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Panel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 83, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_Color_SetColor((struct _m_Color_Color_obj*)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background );
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 84, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_DrawRect(((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_w ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_h ));
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_3 _m_UserControl_Panel_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Panel",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_UserControl_Panel_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,i,i):Panel",
			.var_address=(void*)&__m_UserControl_Panel_New_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Draw",
			"()i",
			.var_address=(void*)&__m_UserControl_Panel_Draw
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_UserControl_Panel _m_UserControl_Panel={
	&_m_UserControl_UserControl,
	bbObjectFree,
	(BBDebugScope*)&_m_UserControl_Panel_scope,
	sizeof(struct _m_UserControl_Panel_obj),
	(void (*)(BBOBJECT))__m_UserControl_Panel_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_UserControl_UserControl_Update
	,__m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_
	,__m_UserControl_UserControl_Show
	,__m_UserControl_UserControl_Hide
	,__m_UserControl_UserControl_SetText_S
	,__m_UserControl_UserControl_SetValue_i
	,__m_UserControl_UserControl_SetFont_TTImageFont
	,__m_UserControl_UserControl_SetForeground_TColor
	,__m_UserControl_UserControl_SetBackground_TColor
	,__m_UserControl_UserControl_SetColors_TColorTColor
	,__m_UserControl_UserControl_SetSize_ii
	,__m_UserControl_Panel_Draw
};

void __m_UserControl_Label_New_iiS(struct _m_UserControl_Label_obj* o,BBINT bbt_x3,BBINT bbt_y3,BBSTRING bbt_text) {
	__m_UserControl_UserControl_New_ii((struct _m_UserControl_UserControl_obj*)o,bbt_x3,bbt_y3);
	o->clas = &_m_UserControl_Label;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x3
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y3
			},
			{
				BBDEBUGDECL_LOCAL,
				"text",
				"$",
				.var_address=&bbt_text
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 91, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 92, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_text =bbt_text;
	bbOnDebugLeaveScope();
}
struct _m_UserControl_Label_obj* __m_UserControl_Label_New_iiS_ObjectNew(BBClass * clas,BBINT bbt_x3,BBINT bbt_y3,BBSTRING bbt_text) {
	struct _m_UserControl_Label_obj* o = (struct _m_UserControl_Label_obj*)bbObjectNewNC(clas);
	__m_UserControl_Label_New_iiS(o, bbt_x3, bbt_y3, bbt_text);
	return o;
}
void __m_UserControl_Label_New_ii(struct _m_UserControl_Label_obj* o,BBINT bbt_x,BBINT bbt_y) {
	__m_UserControl_UserControl_New_ii(o, bbt_x, bbt_y);
	o->clas = &_m_UserControl_Label;
}
struct _m_UserControl_Label_obj* __m_UserControl_Label_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y) {
	struct _m_UserControl_Label_obj* o = (struct _m_UserControl_Label_obj*)bbObjectNewNC(clas);
	__m_UserControl_Label_New_ii(o, bbt_x, bbt_y);
	return o;
}
void __m_UserControl_Label_New(struct _m_UserControl_Label_obj* o) {
	__m_UserControl_UserControl_New((struct _m_UserControl_UserControl_obj*)o);
	o->clas = &_m_UserControl_Label;
}
BBINT __m_UserControl_Label_Draw(struct _m_UserControl_Label_obj* o){
	((struct _m_UserControl_Label_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Label",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 96, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_font !=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 96, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_SetImageFont((struct brl_max2d_imagefont_TImageFont_obj*)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_font );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 97, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_Color_SetColor((struct _m_Color_Color_obj*)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground );
	struct BBDebugStm __stmt_2 = {0x4580d68c6b8c96e5, 98, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_DrawText(((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_text ,((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y ));
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_3 _m_UserControl_Label_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Label",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_UserControl_Label_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,$):Label",
			.var_address=(void*)&__m_UserControl_Label_New_iiS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Draw",
			"()i",
			.var_address=(void*)&__m_UserControl_Label_Draw
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_UserControl_Label _m_UserControl_Label={
	&_m_UserControl_UserControl,
	bbObjectFree,
	(BBDebugScope*)&_m_UserControl_Label_scope,
	sizeof(struct _m_UserControl_Label_obj),
	(void (*)(BBOBJECT))__m_UserControl_Label_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_UserControl_UserControl_Update
	,__m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_
	,__m_UserControl_UserControl_Show
	,__m_UserControl_UserControl_Hide
	,__m_UserControl_UserControl_SetText_S
	,__m_UserControl_UserControl_SetValue_i
	,__m_UserControl_UserControl_SetFont_TTImageFont
	,__m_UserControl_UserControl_SetForeground_TColor
	,__m_UserControl_UserControl_SetBackground_TColor
	,__m_UserControl_UserControl_SetColors_TColorTColor
	,__m_UserControl_UserControl_SetSize_ii
	,__m_UserControl_Label_Draw
};

void __m_UserControl_ProgressBar_New_iiiii(struct _m_UserControl_ProgressBar_obj* o,BBINT bbt_x4,BBINT bbt_y4,BBINT bbt_w2,BBINT bbt_h2,BBINT bbt_maximum) {
	__m_UserControl_UserControl_New_ii((struct _m_UserControl_UserControl_obj*)o,bbt_x4,bbt_y4);
	o->clas = &_m_UserControl_ProgressBar;
	((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(o))->__m_usercontrol_progressbar_maximum = .00000000f;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x4
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y4
			},
			{
				BBDEBUGDECL_LOCAL,
				"w",
				"i",
				.var_address=&bbt_w2
			},
			{
				BBDEBUGDECL_LOCAL,
				"h",
				"i",
				.var_address=&bbt_h2
			},
			{
				BBDEBUGDECL_LOCAL,
				"maximum",
				"i",
				.var_address=&bbt_maximum
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 106, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 107, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o));
	((struct _m_UserControl_UserControl_obj*)o)->clas->m_SetSize_ii((struct _m_UserControl_UserControl_obj*)o,bbt_w2,bbt_h2);
	struct BBDebugStm __stmt_2 = {0x4580d68c6b8c96e5, 108, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(o))->__m_usercontrol_progressbar_maximum =((BBFLOAT)bbt_maximum);
	bbOnDebugLeaveScope();
}
struct _m_UserControl_ProgressBar_obj* __m_UserControl_ProgressBar_New_iiiii_ObjectNew(BBClass * clas,BBINT bbt_x4,BBINT bbt_y4,BBINT bbt_w2,BBINT bbt_h2,BBINT bbt_maximum) {
	struct _m_UserControl_ProgressBar_obj* o = (struct _m_UserControl_ProgressBar_obj*)bbObjectNewNC(clas);
	__m_UserControl_ProgressBar_New_iiiii(o, bbt_x4, bbt_y4, bbt_w2, bbt_h2, bbt_maximum);
	return o;
}
void __m_UserControl_ProgressBar_New_ii(struct _m_UserControl_ProgressBar_obj* o,BBINT bbt_x,BBINT bbt_y) {
	__m_UserControl_UserControl_New_ii(o, bbt_x, bbt_y);
	o->clas = &_m_UserControl_ProgressBar;
	((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(o))->__m_usercontrol_progressbar_maximum = .00000000f;
}
struct _m_UserControl_ProgressBar_obj* __m_UserControl_ProgressBar_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y) {
	struct _m_UserControl_ProgressBar_obj* o = (struct _m_UserControl_ProgressBar_obj*)bbObjectNewNC(clas);
	__m_UserControl_ProgressBar_New_ii(o, bbt_x, bbt_y);
	return o;
}
void __m_UserControl_ProgressBar_New(struct _m_UserControl_ProgressBar_obj* o) {
	__m_UserControl_UserControl_New((struct _m_UserControl_UserControl_obj*)o);
	o->clas = &_m_UserControl_ProgressBar;
	((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(o))->__m_usercontrol_progressbar_maximum = .00000000f;
}
BBINT __m_UserControl_ProgressBar_Draw(struct _m_UserControl_ProgressBar_obj* o){
	((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":ProgressBar",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 112, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_Color_SetColor((struct _m_Color_Color_obj*)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_background );
	struct BBDebugStm __stmt_1 = {0x4580d68c6b8c96e5, 113, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_DrawRect(((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_w ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_h ));
	struct BBDebugStm __stmt_2 = {0x4580d68c6b8c96e5, 114, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_Color_SetColor((struct _m_Color_Color_obj*)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_foreground );
	struct BBDebugStm __stmt_3 = {0x4580d68c6b8c96e5, 115, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_DrawRect(((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_x ),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_y ),(((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_w )*(((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_value )/((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(o))->__m_usercontrol_progressbar_maximum )),((BBFLOAT)((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(o))->__m_usercontrol_usercontrol_h ));
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_4 _m_UserControl_ProgressBar_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"ProgressBar",
	{
		{
			BBDEBUGDECL_FIELD,
			"maximum",
			"f",
			.field_offset=offsetof(struct _m_UserControl_ProgressBar_obj,__m_usercontrol_progressbar_maximum)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_UserControl_ProgressBar_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,i,i,i):ProgressBar",
			.var_address=(void*)&__m_UserControl_ProgressBar_New_iiiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Draw",
			"()i",
			.var_address=(void*)&__m_UserControl_ProgressBar_Draw
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_UserControl_ProgressBar _m_UserControl_ProgressBar={
	&_m_UserControl_UserControl,
	bbObjectFree,
	(BBDebugScope*)&_m_UserControl_ProgressBar_scope,
	sizeof(struct _m_UserControl_ProgressBar_obj),
	(void (*)(BBOBJECT))__m_UserControl_ProgressBar_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	sizeof(BBFLOAT)
	,0
	,offsetof(struct _m_UserControl_ProgressBar_obj,__m_usercontrol_progressbar_maximum)
	,__m_UserControl_UserControl_Update
	,__m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_
	,__m_UserControl_UserControl_Show
	,__m_UserControl_UserControl_Hide
	,__m_UserControl_UserControl_SetText_S
	,__m_UserControl_UserControl_SetValue_i
	,__m_UserControl_UserControl_SetFont_TTImageFont
	,__m_UserControl_UserControl_SetForeground_TColor
	,__m_UserControl_UserControl_SetBackground_TColor
	,__m_UserControl_UserControl_SetColors_TColorTColor
	,__m_UserControl_UserControl_SetSize_ii
	,__m_UserControl_ProgressBar_Draw
};

static int _bb_bmx_rpg_usercontrol_inited = 0;
int _bb_bmx_rpg_usercontrol(){
	if (!_bb_bmx_rpg_usercontrol_inited) {
		_bb_bmx_rpg_usercontrol_inited = 1;
		GC_add_roots(&_m_UserControl_visibleControlList, &_m_UserControl_visibleControlList + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxunit_maxunit();
		__bb_brl_maxutil_maxutil();
		__bb_brl_objectlist_objectlist();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_platform_platform();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_randomdefault_randomdefault();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_uuid_uuid();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_nfd_nfd();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_opengles3_opengles3();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		_bb_bmx_rpg_color();
		_bb_bmx_rpg_text();
		bbObjectRegisterType((BBCLASS)&_m_UserControl_UserControl);
		bbObjectRegisterType((BBCLASS)&_m_UserControl_Panel);
		bbObjectRegisterType((BBCLASS)&_m_UserControl_Label);
		bbObjectRegisterType((BBCLASS)&_m_UserControl_ProgressBar);
		bbRegisterSource(0x4580d68c6b8c96e5, "C:/Users/Kirill/Desktop/BMX RPG/UserControl.bmx");
		bbRegisterSource(0x4a404f1ae2c72fb0, "F:/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x5647aa7153e648b8, "F:/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"UserControl",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"visibleControlList",
					":TList",
					.var_address=(void*)&_m_UserControl_visibleControlList
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x4580d68c6b8c96e5, 4, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_UserControl_visibleControlList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}