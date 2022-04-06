#include "Text.bmx.debug.win32.x86.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s14={
	&bbStringClass,
	0xfd3b9ffd685f7886,
	1,
	{32}
};
static BBString _s13={
	&bbStringClass,
	0x6163945ce66eba58,
	4,
	{32,92,110,32}
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
static BBString _s12={
	&bbStringClass,
	0xfd9ce1d4e3a50e17,
	2,
	{92,110}
};
static BBString _s11={
	&bbStringClass,
	0x9a4f4af5f8758abd,
	16,
	{102,111,110,116,115,47,99,111,117,114,98,100,46,116,116,102}
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
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
struct brl_max2d_imagefont_TImageFont_obj* _m_Text_FONT_COURIER_20=(struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
struct brl_max2d_imagefont_TImageFont_obj* _m_Text_FONT_COURIER_48=(struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
void __m_Text_TextSprite_New_S(struct _m_Text_TextSprite_obj* o,BBSTRING bbt_text) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Text_TextSprite;
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite = (struct _m_minib3d_TSprite_obj*)(&bbNullObject);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font = (struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
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
	struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 13, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite =(struct _m_minib3d_TSprite_obj*)_m_minib3d_CreateSprite((struct _m_minib3d_TEntity_obj*)&bbNullObject);
	struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 14, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o));
	((struct _m_Text_TextSprite_obj*)o)->clas->m_SetText_Sif((struct _m_Text_TextSprite_obj*)o,bbt_text,1000,5.00000000f);
	bbOnDebugLeaveScope();
}
struct _m_Text_TextSprite_obj* __m_Text_TextSprite_New_S_ObjectNew(BBClass * clas,BBSTRING bbt_text) {
	struct _m_Text_TextSprite_obj* o = (struct _m_Text_TextSprite_obj*)bbObjectNewNC(clas);
	__m_Text_TextSprite_New_S(o, bbt_text);
	return o;
}
void __m_Text_TextSprite_New_TTMeshSTTImageFont(struct _m_Text_TextSprite_obj* o,struct _m_minib3d_TMesh_obj* bbt_mesh,BBSTRING bbt_name,struct brl_max2d_imagefont_TImageFont_obj* bbt_font) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Text_TextSprite;
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite = (struct _m_minib3d_TSprite_obj*)(&bbNullObject);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font = (struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"mesh",
				":TMesh",
				.var_address=&bbt_mesh
			},
			{
				BBDEBUGDECL_LOCAL,
				"name",
				"$",
				.var_address=&bbt_name
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
	struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 18, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite =(struct _m_minib3d_TSprite_obj*)_m_minib3d_CreateSprite((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_mesh,(BBClass*)&_m_minib3d_TEntity)));
	struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 19, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_font!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 19, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font =(struct brl_max2d_imagefont_TImageFont_obj*)bbt_font;
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 19, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font =(struct brl_max2d_imagefont_TImageFont_obj*)_m_Text_FONT_COURIER_48;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x22784deb012f028b, 20, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_minib3d_PositionEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityX((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_mesh,(BBClass*)&_m_minib3d_TEntity)),0),(_m_minib3d_EntityY((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_mesh,(BBClass*)&_m_minib3d_TEntity)),0)+2.00000000f),_m_minib3d_EntityZ((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_mesh,(BBClass*)&_m_minib3d_TEntity)),0),0);
	struct BBDebugStm __stmt_3 = {0x22784deb012f028b, 21, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o));
	((struct _m_Text_TextSprite_obj*)o)->clas->m_SetText_Sif((struct _m_Text_TextSprite_obj*)o,bbt_name,1000,5.00000000f);
	bbOnDebugLeaveScope();
}
struct _m_Text_TextSprite_obj* __m_Text_TextSprite_New_TTMeshSTTImageFont_ObjectNew(BBClass * clas,struct _m_minib3d_TMesh_obj* bbt_mesh,BBSTRING bbt_name,struct brl_max2d_imagefont_TImageFont_obj* bbt_font) {
	struct _m_Text_TextSprite_obj* o = (struct _m_Text_TextSprite_obj*)bbObjectNewNC(clas);
	__m_Text_TextSprite_New_TTMeshSTTImageFont(o, bbt_mesh, bbt_name, bbt_font);
	return o;
}
void __m_Text_TextSprite_New(struct _m_Text_TextSprite_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Text_TextSprite;
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite = (struct _m_minib3d_TSprite_obj*)(&bbNullObject);
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font = (struct brl_max2d_imagefont_TImageFont_obj*)(&bbNullObject);
}
BBINT __m_Text_TextSprite_SetText_Sif(struct _m_Text_TextSprite_obj* o,BBSTRING bbt_text,BBINT bbt_w,BBFLOAT bbt_scale){
	((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o));
	BBINT bbt_height=0;
	struct _m_minib3d_TTexture_obj* bbt_texture=(struct _m_minib3d_TTexture_obj*)(&bbNullObject);
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TextSprite",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"text",
				"$",
				.var_address=&bbt_text
			},
			{
				BBDEBUGDECL_LOCAL,
				"w",
				"i",
				.var_address=&bbt_w
			},
			{
				BBDEBUGDECL_LOCAL,
				"scale",
				"f",
				.var_address=&bbt_scale
			},
			{
				BBDEBUGDECL_LOCAL,
				"height",
				"i",
				.var_address=&bbt_height
			},
			{
				BBDEBUGDECL_LOCAL,
				"texture",
				":TTexture",
				.var_address=&bbt_texture
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 25, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font !=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 25, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_SetImageFont((struct brl_max2d_imagefont_TImageFont_obj*)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_font );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 26, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_height=_m_Text_TextRect(bbt_text,0,0,bbt_w,1);
	struct BBDebugStm __stmt_2 = {0x22784deb012f028b, 27, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_texture=(struct _m_minib3d_TTexture_obj*)_m_minib3d_CreateTexture(bbt_w,bbt_height,6,1);
	struct BBDebugStm __stmt_3 = {0x22784deb012f028b, 29, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_minib3d_BeginMax2D();
	struct BBDebugStm __stmt_4 = {0x22784deb012f028b, 30, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_5 = {0x22784deb012f028b, 31, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,((BBFLOAT)bbt_w),1000.00000f);
	struct BBDebugStm __stmt_6 = {0x22784deb012f028b, 33, 0};
	bbOnDebugEnterStm(&__stmt_6);
	brl_max2d_SetColor(141,141,141);
	struct BBDebugStm __stmt_7 = {0x22784deb012f028b, 34, 0};
	bbOnDebugEnterStm(&__stmt_7);
	_m_Text_TextRect(bbt_text,1,1,bbt_w,1);
	struct BBDebugStm __stmt_8 = {0x22784deb012f028b, 35, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetColor(255,255,255);
	struct BBDebugStm __stmt_9 = {0x22784deb012f028b, 36, 0};
	bbOnDebugEnterStm(&__stmt_9);
	_m_Text_TextRect(bbt_text,0,0,bbt_w,1);
	struct BBDebugStm __stmt_10 = {0x22784deb012f028b, 38, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct _m_minib3d_TTexture_obj*)bbNullObjectTest(bbt_texture))->clas->m_BackBufferToTex_iii((struct _m_minib3d_TTexture_obj*)bbt_texture,0,0,0);
	struct BBDebugStm __stmt_11 = {0x22784deb012f028b, 40, 0};
	bbOnDebugEnterStm(&__stmt_11);
	brl_max2d_Cls();
	struct BBDebugStm __stmt_12 = {0x22784deb012f028b, 41, 0};
	bbOnDebugEnterStm(&__stmt_12);
	_m_minib3d_EndMax2D();
	struct BBDebugStm __stmt_13 = {0x22784deb012f028b, 43, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct _m_minib3d_TSprite_obj*)bbNullObjectTest(((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite ))->clas->m_EntityTexture_TTTextureii((struct _m_minib3d_TEntity_obj*)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite ,(struct _m_minib3d_TTexture_obj*)bbt_texture,0,0);
	struct BBDebugStm __stmt_14 = {0x22784deb012f028b, 45, 0};
	bbOnDebugEnterStm(&__stmt_14);
	_m_minib3d_SpriteViewMode((struct _m_minib3d_TSprite_obj*)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite ,2);
	struct BBDebugStm __stmt_15 = {0x22784deb012f028b, 46, 0};
	bbOnDebugEnterStm(&__stmt_15);
	_m_minib3d_ScaleSprite((struct _m_minib3d_TSprite_obj*)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(o))->__m_text_textsprite_sprite ,(((BBFLOAT)bbt_w)/(100.0f*bbt_scale)),(((BBFLOAT)bbt_height)/(100.0f*bbt_scale)));
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_6 _m_Text_TextSprite_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TextSprite",
	{
		{
			BBDEBUGDECL_FIELD,
			"sprite",
			":TSprite",
			.field_offset=offsetof(struct _m_Text_TextSprite_obj,__m_text_textsprite_sprite)
		},
		{
			BBDEBUGDECL_FIELD,
			"font",
			":TImageFont",
			.field_offset=offsetof(struct _m_Text_TextSprite_obj,__m_text_textsprite_font)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Text_TextSprite_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"($):TextSprite",
			.var_address=(void*)&__m_Text_TextSprite_New_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(:TMesh,$,:TImageFont):TextSprite",
			.var_address=(void*)&__m_Text_TextSprite_New_TTMeshSTTImageFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($,i,f)i",
			.var_address=(void*)&__m_Text_TextSprite_SetText_Sif
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Text_TextSprite _m_Text_TextSprite={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_Text_TextSprite_scope,
	sizeof(struct _m_Text_TextSprite_obj),
	(void (*)(BBOBJECT))__m_Text_TextSprite_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Text_TextSprite_obj,__m_text_textsprite_font) - offsetof(struct _m_Text_TextSprite_obj,__m_text_textsprite_sprite) + sizeof(struct brl_max2d_imagefont_TImageFont_obj*)
	,0
	,offsetof(struct _m_Text_TextSprite_obj,__m_text_textsprite_sprite)
	,__m_Text_TextSprite_SetText_Sif
};

struct brl_linkedlist_TList_obj* _m_Text_Split(BBSTRING bbt_str,BBSTRING bbt_separator){
	struct brl_linkedlist_TList_obj* bbt_array=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
	BBINT bbt_prev=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Split",
		{
			{
				BBDEBUGDECL_LOCAL,
				"str",
				"$",
				.var_address=&bbt_str
			},
			{
				BBDEBUGDECL_LOCAL,
				"separator",
				"$",
				.var_address=&bbt_separator
			},
			{
				BBDEBUGDECL_LOCAL,
				"array",
				":TList",
				.var_address=&bbt_array
			},
			{
				BBDEBUGDECL_LOCAL,
				"prev",
				"i",
				.var_address=&bbt_prev
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 84, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_array=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
	struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 86, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_prev=0;
	struct BBDebugStm __stmt_2 = {0x22784deb012f028b, 87, 0};
	bbOnDebugEnterStm(&__stmt_2);
	{
		BBINT bbt_i=1;
		BBINT bbt_=(bbt_str)->length;
		for(;(bbt_i<=bbt_);bbt_i=(bbt_i+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"i",
						"i",
						.var_address=&bbt_i
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 88, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbStringEquals(brl_retro_Mid(bbt_str,bbt_i,1), bbt_separator)==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 89, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct brl_linkedlist_TList_obj*)bbNullObjectTest(bbt_array))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_array,(BBOBJECT)brl_retro_Mid(bbt_str,bbt_prev,(bbt_i-bbt_prev)));
				struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 90, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_prev=(bbt_i+1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_3 = {0x22784deb012f028b, 93, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(bbt_array))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_array,(BBOBJECT)brl_retro_Mid(bbt_str,bbt_prev,(((bbt_str)->length-bbt_prev)+1)));
	struct BBDebugStm __stmt_4 = {0x22784deb012f028b, 94, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return (struct brl_linkedlist_TList_obj*)bbt_array;
}
BBINT _m_Text_DrawText(BBSTRING bbt_text,BBINT bbt_x,BBINT bbt_y,BBINT bbt_center){
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"DrawText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"text",
				"$",
				.var_address=&bbt_text
			},
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
			{
				BBDEBUGDECL_LOCAL,
				"center",
				"i",
				.var_address=&bbt_center
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 79, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawText(bbt_text,((BBFLOAT)(bbt_x-((brl_max2d_TextWidth(bbt_text)/2)*bbt_center))),((BBFLOAT)bbt_y));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_Text_TextRect(BBSTRING bbt_text,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_center){
	struct brl_linkedlist_TList_obj* bbt_wordList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
	BBSTRING bbt_words=(&bbEmptyString);
	BBINT bbt_h=0;
	BBINT bbt_rows=0;
	struct BBDebugScope_9 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"TextRect",
		{
			{
				BBDEBUGDECL_LOCAL,
				"text",
				"$",
				.var_address=&bbt_text
			},
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
			{
				BBDEBUGDECL_LOCAL,
				"w",
				"i",
				.var_address=&bbt_w
			},
			{
				BBDEBUGDECL_LOCAL,
				"center",
				"i",
				.var_address=&bbt_center
			},
			{
				BBDEBUGDECL_LOCAL,
				"wordList",
				":TList",
				.var_address=&bbt_wordList
			},
			{
				BBDEBUGDECL_LOCAL,
				"words",
				"$",
				.var_address=&bbt_words
			},
			{
				BBDEBUGDECL_LOCAL,
				"h",
				"i",
				.var_address=&bbt_h
			},
			{
				BBDEBUGDECL_LOCAL,
				"rows",
				"i",
				.var_address=&bbt_rows
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 52, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_wordList=(struct brl_linkedlist_TList_obj*)_m_Text_Split(bbStringReplace((BBSTRING)bbt_text,&_s12,&_s13),&_s14);
	struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 53, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_words=&bbEmptyString;
	struct BBDebugStm __stmt_2 = {0x22784deb012f028b, 54, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_h=brl_max2d_TextHeight(bbt_text);
	struct BBDebugStm __stmt_3 = {0x22784deb012f028b, 55, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_rows=0;
	struct BBDebugStm __stmt_4 = {0x22784deb012f028b, 57, 0};
	bbOnDebugEnterStm(&__stmt_4);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(bbt_wordList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_wordList);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		BBSTRING bbt_word=(&bbEmptyString);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"word",
					"$",
					.var_address=&bbt_word
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		BBOBJECT bbt_2=(BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_);
		if(bbObjectIsString((BBOBJECT)(BBOBJECT)bbt_2)==0){
			bbOnDebugLeaveScope();
			continue;
		}
		bbt_word=((BBString *)bbObjectStringcast((BBOBJECT)bbt_2));
		struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 59, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((brl_max2d_TextWidth(bbStringConcat(bbStringConcat(bbt_words,&_s14),bbt_word))>bbt_w) || bbStringEquals(bbt_word, &_s12)==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 60, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_Text_DrawText(bbt_words,(bbt_x+((bbt_center*bbt_w)/2)),(bbt_y+(bbt_rows*bbt_h)),bbt_center);
			struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 61, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_words=&bbEmptyString;
			struct BBDebugStm __stmt_2 = {0x22784deb012f028b, 62, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_rows=(bbt_rows+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 65, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_words==&bbEmptyString){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 66, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_words=bbStringReplace((BBSTRING)bbt_word,&_s12,&bbEmptyString);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 68, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_words=bbStringConcat(bbStringConcat(bbt_words,&_s14),bbt_word);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {0x22784deb012f028b, 72, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_Text_DrawText(bbt_words,(bbt_x+((bbt_center*bbt_w)/2)),(bbt_y+(bbt_rows*bbt_h)),bbt_center);
	struct BBDebugStm __stmt_6 = {0x22784deb012f028b, 74, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbOnDebugLeaveScope();
	return ((bbt_rows+1)*bbt_h);
}
static int _bb_bmx_rpg_text_inited = 0;
int _bb_bmx_rpg_text(){
	if (!_bb_bmx_rpg_text_inited) {
		_bb_bmx_rpg_text_inited = 1;
		GC_add_roots(&_m_Text_FONT_COURIER_20, &_m_Text_FONT_COURIER_48 + 1);
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
		_bb_includes_minib3d();
		_bb_bmx_rpg_color();
		bbObjectRegisterType((BBCLASS)&_m_Text_TextSprite);
		bbRegisterSource(0x22784deb012f028b, "C:/Users/Kirill/Desktop/BMX RPG/Text.bmx");
		bbRegisterSource(0x4a404f1ae2c72fb0, "F:/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x5647aa7153e648b8, "F:/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"Text",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"FONT_COURIER_20",
					":TImageFont",
					.var_address=(void*)&_m_Text_FONT_COURIER_20
				},
				{
					BBDEBUGDECL_GLOBAL,
					"FONT_COURIER_48",
					":TImageFont",
					.var_address=(void*)&_m_Text_FONT_COURIER_48
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x22784deb012f028b, 5, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_Text_FONT_COURIER_20=(struct brl_max2d_imagefont_TImageFont_obj*)brl_max2d_LoadImageFont((BBOBJECT)&_s11,20,4);
		struct BBDebugStm __stmt_1 = {0x22784deb012f028b, 6, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_Text_FONT_COURIER_48=(struct brl_max2d_imagefont_TImageFont_obj*)brl_max2d_LoadImageFont((BBOBJECT)&_s11,48,4);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}