#include "Entity.bmx.debug.win32.x86.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s12={
	&bbStringClass,
	0xcf16c2e6c7619535,
	3,
	{32,47,32}
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
static BBString _s11={
	&bbStringClass,
	0x23e760eb3e7bd571,
	6,
	{92,110,72,80,58,32}
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
struct BBDebugScope_20{int kind; const char *name; BBDebugDecl decls[21]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
BBINT _m_Entity_HOOK_PROJECTILE_HIT_PLAYER=0;
void __m_Entity_Entity_New_STTMesh(struct _m_Entity_Entity_obj* o,BBSTRING bbt_name,struct _m_minib3d_TMesh_obj* bbt_mesh) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_Entity;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_name = &bbEmptyString;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh = (struct _m_minib3d_TMesh_obj*)(&bbNullObject);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate = (struct _m_Text_TextSprite_obj*)(&bbNullObject);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_speed = .00000000f;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackrange = .00000000f;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackspeed = 0;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackdamage = 0;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_health = (struct _m_Entity_DoubleStat_obj*)(&bbNullObject);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd = 0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"name",
				"$",
				.var_address=&bbt_name
			},
			{
				BBDEBUGDECL_LOCAL,
				"mesh",
				":TMesh",
				.var_address=&bbt_mesh
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 60, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_name =bbt_name;
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 61, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh =(struct _m_minib3d_TMesh_obj*)bbt_mesh;
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 62, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate =(struct _m_Text_TextSprite_obj*)__m_Text_TextSprite_New_TTMeshSTTImageFont_ObjectNew((struct _m_Text_TextSprite_obj*)&_m_Text_TextSprite,(struct _m_minib3d_TMesh_obj*)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_name ,(struct brl_max2d_imagefont_TImageFont_obj*)&bbNullObject);
	struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 65, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_minib3d_EntityType((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),1,0);
	struct BBDebugStm __stmt_4 = {0x78fd078a7c4e747f, 68, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_speed =0.05f;
	struct BBDebugStm __stmt_5 = {0x78fd078a7c4e747f, 69, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackrange =4.00000000f;
	struct BBDebugStm __stmt_6 = {0x78fd078a7c4e747f, 70, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd =0;
	struct BBDebugStm __stmt_7 = {0x78fd078a7c4e747f, 71, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackspeed =0;
	struct BBDebugStm __stmt_8 = {0x78fd078a7c4e747f, 72, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackdamage =10;
	struct BBDebugStm __stmt_9 = {0x78fd078a7c4e747f, 73, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_health =(struct _m_Entity_DoubleStat_obj*)__m_Entity_DoubleStat_New_i_ObjectNew((struct _m_Entity_DoubleStat_obj*)&_m_Entity_DoubleStat,100);
	struct BBDebugStm __stmt_10 = {0x78fd078a7c4e747f, 76, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_entityList))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_Entity_entityList,(BBOBJECT)o);
	bbOnDebugLeaveScope();
}
struct _m_Entity_Entity_obj* __m_Entity_Entity_New_STTMesh_ObjectNew(BBClass * clas,BBSTRING bbt_name,struct _m_minib3d_TMesh_obj* bbt_mesh) {
	struct _m_Entity_Entity_obj* o = (struct _m_Entity_Entity_obj*)bbObjectNewNC(clas);
	__m_Entity_Entity_New_STTMesh(o, bbt_name, bbt_mesh);
	return o;
}
void __m_Entity_Entity_New(struct _m_Entity_Entity_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_Entity;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_name = &bbEmptyString;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh = (struct _m_minib3d_TMesh_obj*)(&bbNullObject);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate = (struct _m_Text_TextSprite_obj*)(&bbNullObject);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_speed = .00000000f;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackrange = .00000000f;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackspeed = 0;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackdamage = 0;
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_health = (struct _m_Entity_DoubleStat_obj*)(&bbNullObject);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd = 0;
}
BBINT __m_Entity_Entity_Update(struct _m_Entity_Entity_obj* o){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Update",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 81, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd >0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 82, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd =(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd -1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 86, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(_m_minib3d_EntityDistance((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)),(struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)))<10.0000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 88, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_minib3d_ShowEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)));
		struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 91, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_minib3d_PointEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)),(struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f);
		struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 92, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,(_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)),0)-180.000000f),0.000000000f,0);
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
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 94, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_minib3d_HideEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_Shoot(struct _m_Entity_Entity_obj* o){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Shoot",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 99, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd ==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 100, 0};
		bbOnDebugEnterStm(&__stmt_0);
		__m_Entity_Projectile_New_TEntityf_ObjectNew((struct _m_Entity_Projectile_obj*)&_m_Entity_Projectile,(struct _m_Entity_Entity_obj*)o,0.1f);
		struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 101, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackcd =(50-((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackspeed );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_SetPosition_fff(struct _m_Entity_Entity_obj* o,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_z){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	BBINT bbt_saveType=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetPosition",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"f",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"f",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"z",
				"f",
				.var_address=&bbt_z
			},
			{
				BBDEBUGDECL_LOCAL,
				"saveType",
				"i",
				.var_address=&bbt_saveType
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 106, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_saveType=_m_minib3d_GetEntityType((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)));
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 107, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_minib3d_EntityType((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0,0);
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 108, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_minib3d_PositionEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),bbt_x,bbt_y,bbt_z,0);
	struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 109, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_minib3d_EntityType((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),bbt_saveType,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_Move_fff(struct _m_Entity_Entity_obj* o,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_z){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"f",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"f",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"z",
				"f",
				.var_address=&bbt_z
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 113, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_MoveEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),bbt_x,bbt_y,bbt_z);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_Move_f(struct _m_Entity_Entity_obj* o,BBFLOAT bbt_z){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"z",
				"f",
				.var_address=&bbt_z
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 117, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_MoveEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,0.000000000f,bbt_z);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_Move(struct _m_Entity_Entity_obj* o){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 121, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_MoveEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,0.000000000f,((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_speed );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_Turn_fff(struct _m_Entity_Entity_obj* o,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_z){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Turn",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"f",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"f",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"z",
				"f",
				.var_address=&bbt_z
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 125, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_TurnEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),bbt_x,bbt_y,bbt_z,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Entity_Turn_f(struct _m_Entity_Entity_obj* o,BBFLOAT bbt_y){
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Turn",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Entity",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"f",
				.var_address=&bbt_y
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 129, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_TurnEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,bbt_y,0.000000000f,0);
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_Entity_Entity_obj* _m_Entity_Entity_Find_TEntity_TTEntity(struct _m_minib3d_TEntity_obj* bbt_mesh){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Find",
		{
			{
				BBDEBUGDECL_LOCAL,
				"mesh",
				":TEntity",
				.var_address=&bbt_mesh
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 133, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_entityList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_Entity_entityList);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct _m_Entity_Entity_obj* bbt_ent=(struct _m_Entity_Entity_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"ent",
					":Entity",
					.var_address=&bbt_ent
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_ent=(struct _m_Entity_Entity_obj*)((struct _m_Entity_Entity_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&_m_Entity_Entity));
		if(bbt_ent==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 134, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity))==bbt_mesh){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 134, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return (struct _m_Entity_Entity_obj*)bbt_ent;
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return (struct _m_Entity_Entity_obj*)(&bbNullObject);
}
struct BBDebugScope_20 _m_Entity_Entity_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Entity",
	{
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"mesh",
			":TMesh",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_mesh)
		},
		{
			BBDEBUGDECL_FIELD,
			"namePlate",
			":TextSprite",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_nameplate)
		},
		{
			BBDEBUGDECL_FIELD,
			"speed",
			"f",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_speed)
		},
		{
			BBDEBUGDECL_FIELD,
			"attackRange",
			"f",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_attackrange)
		},
		{
			BBDEBUGDECL_FIELD,
			"attackSpeed",
			"i",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_attackspeed)
		},
		{
			BBDEBUGDECL_FIELD,
			"attackDamage",
			"i",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_attackdamage)
		},
		{
			BBDEBUGDECL_FIELD,
			"health",
			":DoubleStat",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_health)
		},
		{
			BBDEBUGDECL_FIELD,
			"attackCD",
			"i",
			.field_offset=offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_attackcd)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Entity_Entity_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"($,:TMesh):Entity",
			.var_address=(void*)&__m_Entity_Entity_New_STTMesh
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Update",
			"()i",
			.var_address=(void*)&__m_Entity_Entity_Update
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Shoot",
			"()i",
			.var_address=(void*)&__m_Entity_Entity_Shoot
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPosition",
			"(f,f,f)i",
			.var_address=(void*)&__m_Entity_Entity_SetPosition_fff
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Move",
			"(f,f,f)i",
			.var_address=(void*)&__m_Entity_Entity_Move_fff
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Move",
			"(f)i",
			.var_address=(void*)&__m_Entity_Entity_Move_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Move",
			"()i",
			.var_address=(void*)&__m_Entity_Entity_Move
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Turn",
			"(f,f,f)i",
			.var_address=(void*)&__m_Entity_Entity_Turn_fff
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Turn",
			"(f)i",
			.var_address=(void*)&__m_Entity_Entity_Turn_f
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Find",
			"(:TEntity):Entity",
			.var_address=(void*)&_m_Entity_Entity_Find_TEntity_TTEntity
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Entity_Entity _m_Entity_Entity={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_Entity_Entity_scope,
	sizeof(struct _m_Entity_Entity_obj),
	(void (*)(BBOBJECT))__m_Entity_Entity_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_attackcd) - offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_name) + sizeof(BBINT)
	,0
	,offsetof(struct _m_Entity_Entity_obj,__m_entity_entity_name)
	,__m_Entity_Entity_Update
	,__m_Entity_Entity_Shoot
	,__m_Entity_Entity_SetPosition_fff
	,__m_Entity_Entity_Move_fff
	,__m_Entity_Entity_Move_f
	,__m_Entity_Entity_Move
	,__m_Entity_Entity_Turn_fff
	,__m_Entity_Entity_Turn_f
	,_m_Entity_Entity_Find_TEntity_TTEntity
};

struct _m_Entity_Entity_obj* _m_Entity_player=(struct _m_Entity_Entity_obj*)(&bbNullObject);
struct _m_minib3d_TCamera_obj* _m_Entity_cam=(struct _m_minib3d_TCamera_obj*)(&bbNullObject);
struct brl_linkedlist_TList_obj* _m_Entity_entityList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
struct brl_linkedlist_TList_obj* _m_Entity_projectileList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
void __m_Entity_DoubleStat_New_i(struct _m_Entity_DoubleStat_obj* o,BBINT bbt_maximum) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_DoubleStat;
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_actual = 0;
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_maximum = 0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
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
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 36, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_maximum =bbt_maximum;
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 37, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_actual =((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_maximum ;
	bbOnDebugLeaveScope();
}
struct _m_Entity_DoubleStat_obj* __m_Entity_DoubleStat_New_i_ObjectNew(BBClass * clas,BBINT bbt_maximum) {
	struct _m_Entity_DoubleStat_obj* o = bbObjectAtomicNewNC(clas);
	__m_Entity_DoubleStat_New_i(o, bbt_maximum);
	return o;
}
void __m_Entity_DoubleStat_New_ii(struct _m_Entity_DoubleStat_obj* o,BBINT bbt_actual,BBINT bbt_maximum2) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_DoubleStat;
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_actual = 0;
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_maximum = 0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"actual",
				"i",
				.var_address=&bbt_actual
			},
			{
				BBDEBUGDECL_LOCAL,
				"maximum",
				"i",
				.var_address=&bbt_maximum2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 41, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_actual =bbt_actual;
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 42, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_maximum =bbt_maximum2;
	bbOnDebugLeaveScope();
}
struct _m_Entity_DoubleStat_obj* __m_Entity_DoubleStat_New_ii_ObjectNew(BBClass * clas,BBINT bbt_actual,BBINT bbt_maximum2) {
	struct _m_Entity_DoubleStat_obj* o = bbObjectAtomicNewNC(clas);
	__m_Entity_DoubleStat_New_ii(o, bbt_actual, bbt_maximum2);
	return o;
}
void __m_Entity_DoubleStat_New(struct _m_Entity_DoubleStat_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_DoubleStat;
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_actual = 0;
	((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(o))->__m_entity_doublestat_maximum = 0;
}
struct BBDebugScope_5 _m_Entity_DoubleStat_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"DoubleStat",
	{
		{
			BBDEBUGDECL_FIELD,
			"actual",
			"i",
			.field_offset=offsetof(struct _m_Entity_DoubleStat_obj,__m_entity_doublestat_actual)
		},
		{
			BBDEBUGDECL_FIELD,
			"maximum",
			"i",
			.field_offset=offsetof(struct _m_Entity_DoubleStat_obj,__m_entity_doublestat_maximum)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Entity_DoubleStat_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i):DoubleStat",
			.var_address=(void*)&__m_Entity_DoubleStat_New_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i):DoubleStat",
			.var_address=(void*)&__m_Entity_DoubleStat_New_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Entity_DoubleStat _m_Entity_DoubleStat={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_Entity_DoubleStat_scope,
	sizeof(struct _m_Entity_DoubleStat_obj),
	(void (*)(BBOBJECT))__m_Entity_DoubleStat_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Entity_DoubleStat_obj,__m_entity_doublestat_maximum) - offsetof(struct _m_Entity_DoubleStat_obj,__m_entity_doublestat_actual) + sizeof(BBINT)
	,0
	,offsetof(struct _m_Entity_DoubleStat_obj,__m_entity_doublestat_actual)
};

void __m_Entity_Enemy_New_STTMesh(struct _m_Entity_Enemy_obj* o,BBSTRING bbt_name2,struct _m_minib3d_TMesh_obj* bbt_mesh2) {
	__m_Entity_Entity_New_STTMesh((struct _m_Entity_Entity_obj*)o,bbt_name2,(struct _m_minib3d_TMesh_obj*)bbt_mesh2);
	o->clas = &_m_Entity_Enemy;
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_speed = .00000000f;
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_delay = 0;
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_iswalking = 0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"name",
				"$",
				.var_address=&bbt_name2
			},
			{
				BBDEBUGDECL_LOCAL,
				"mesh",
				":TMesh",
				.var_address=&bbt_mesh2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 145, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 147, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackspeed =-50;
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 149, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
	((struct _m_Entity_Entity_obj*)o)->clas->m_Turn_f((struct _m_Entity_Entity_obj*)o,((BBFLOAT)brl_random_Rand(0,360)));
	struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 151, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_iswalking =1;
	bbOnDebugLeaveScope();
}
struct _m_Entity_Enemy_obj* __m_Entity_Enemy_New_STTMesh_ObjectNew(BBClass * clas,BBSTRING bbt_name2,struct _m_minib3d_TMesh_obj* bbt_mesh2) {
	struct _m_Entity_Enemy_obj* o = (struct _m_Entity_Enemy_obj*)bbObjectNewNC(clas);
	__m_Entity_Enemy_New_STTMesh(o, bbt_name2, bbt_mesh2);
	return o;
}
void __m_Entity_Enemy_New(struct _m_Entity_Enemy_obj* o) {
	__m_Entity_Entity_New((struct _m_Entity_Entity_obj*)o);
	o->clas = &_m_Entity_Enemy;
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_speed = .00000000f;
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_delay = 0;
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_iswalking = 0;
}
void __m_Entity_Enemy_Delete(struct _m_Entity_Enemy_obj* o) {
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Delete",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Enemy",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 194, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o));
	((struct _m_Entity_Enemy_obj*)o)->clas->m_Free((struct _m_Entity_Enemy_obj*)o);
	bbOnDebugLeaveScope();
	bbObjectDtor((BBOBJECT)o);
}
BBINT __m_Entity_Enemy_Update(struct _m_Entity_Enemy_obj* o){
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Update",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Enemy",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 155, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(&_m_Entity_Enemy)->super->m_Update((struct _m_Entity_Entity_obj*)o);
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 158, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_iswalking !=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 159, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_delay =(((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_delay -1);
		struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 161, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
		((struct _m_Entity_Entity_obj*)o)->clas->m_Move_f((struct _m_Entity_Entity_obj*)o,((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_speed );
		struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 163, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_delay <=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 164, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_speed =((BBFLOAT)brl_random_Rnd(0.00000000000000000,0.01));
			struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 165, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_delay =brl_random_Rand(100,500);
			struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 166, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
			((struct _m_Entity_Entity_obj*)o)->clas->m_Turn_fff((struct _m_Entity_Entity_obj*)o,0.000000000f,((BBFLOAT)brl_random_Rand(-90,90)),0.000000000f);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 171, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(_m_Entity_EntityDistance((struct _m_Entity_Entity_obj*)_m_Entity_player,(struct _m_Entity_Entity_obj*)((struct _m_Entity_Entity_obj*)bbObjectDowncast((BBOBJECT)o,(BBClass*)&_m_Entity_Entity)))<8.00000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 172, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_minib3d_PointEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),(struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f);
		struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 175, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(_m_Entity_EntityDistance((struct _m_Entity_Entity_obj*)_m_Entity_player,(struct _m_Entity_Entity_obj*)((struct _m_Entity_Entity_obj*)bbObjectDowncast((BBOBJECT)o,(BBClass*)&_m_Entity_Entity)))>((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_attackrange ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 176, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
			((struct _m_Entity_Entity_obj*)o)->clas->m_Move((struct _m_Entity_Entity_obj*)o);
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
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 178, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_Entity_Entity_obj*)bbNullObjectTest(o));
			((struct _m_Entity_Entity_obj*)o)->clas->m_Shoot((struct _m_Entity_Entity_obj*)o);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 182, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_iswalking =0;
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
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 184, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o))->__m_entity_enemy_ai_iswalking =1;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 188, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_health ))->__m_entity_doublestat_actual <=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 189, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o));
		((struct _m_Entity_Enemy_obj*)o)->clas->m_Free((struct _m_Entity_Enemy_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Enemy_Free(struct _m_Entity_Enemy_obj* o){
	((struct _m_Entity_Enemy_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Free",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Enemy",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 198, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_FreeEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)));
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 199, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_minib3d_FreeEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Text_TextSprite_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(o))->__m_entity_entity_nameplate ))->__m_text_textsprite_sprite ,(BBClass*)&_m_minib3d_TEntity)));
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 200, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_entityList))->clas->m_Remove_TObject((struct brl_linkedlist_TList_obj*)_m_Entity_entityList,(BBOBJECT)o);
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_7 _m_Entity_Enemy_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Enemy",
	{
		{
			BBDEBUGDECL_FIELD,
			"ai_speed",
			"f",
			.field_offset=offsetof(struct _m_Entity_Enemy_obj,__m_entity_enemy_ai_speed)
		},
		{
			BBDEBUGDECL_FIELD,
			"ai_delay",
			"i",
			.field_offset=offsetof(struct _m_Entity_Enemy_obj,__m_entity_enemy_ai_delay)
		},
		{
			BBDEBUGDECL_FIELD,
			"ai_isWalking",
			"i",
			.field_offset=offsetof(struct _m_Entity_Enemy_obj,__m_entity_enemy_ai_iswalking)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Entity_Enemy_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"($,:TMesh):Enemy",
			.var_address=(void*)&__m_Entity_Enemy_New_STTMesh
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Update",
			"()i",
			.var_address=(void*)&__m_Entity_Enemy_Update
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Free",
			"()i",
			.var_address=(void*)&__m_Entity_Enemy_Free
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Entity_Enemy _m_Entity_Enemy={
	&_m_Entity_Entity,
	bbObjectFree,
	(BBDebugScope*)&_m_Entity_Enemy_scope,
	sizeof(struct _m_Entity_Enemy_obj),
	(void (*)(BBOBJECT))__m_Entity_Enemy_New,
	(void (*)(BBOBJECT))__m_Entity_Enemy_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Entity_Enemy_obj,__m_entity_enemy_ai_iswalking) - offsetof(struct _m_Entity_Enemy_obj,__m_entity_enemy_ai_speed) + sizeof(BBINT)
	,0
	,offsetof(struct _m_Entity_Enemy_obj,__m_entity_enemy_ai_speed)
	,__m_Entity_Enemy_Update
	,__m_Entity_Entity_Shoot
	,__m_Entity_Entity_SetPosition_fff
	,__m_Entity_Entity_Move_fff
	,__m_Entity_Entity_Move_f
	,__m_Entity_Entity_Move
	,__m_Entity_Entity_Turn_fff
	,__m_Entity_Entity_Turn_f
	,_m_Entity_Entity_Find_TEntity_TTEntity
	,__m_Entity_Enemy_Free
};

void __m_Entity_Projectile_New_TEntityf(struct _m_Entity_Projectile_obj* o,struct _m_Entity_Entity_obj* bbt_entity,BBFLOAT bbt_speed) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_Projectile;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_age = 0;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_maxage = 0;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_speed = .00000000f;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh = (struct _m_minib3d_TMesh_obj*)(&bbNullObject);
	struct _m_minib3d_TMesh_obj* bbt_entityMesh=(struct _m_minib3d_TMesh_obj*)(&bbNullObject);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"entity",
				":Entity",
				.var_address=&bbt_entity
			},
			{
				BBDEBUGDECL_LOCAL,
				"speed",
				"f",
				.var_address=&bbt_speed
			},
			{
				BBDEBUGDECL_LOCAL,
				"entityMesh",
				":TMesh",
				.var_address=&bbt_entityMesh
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 211, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_entityMesh=(struct _m_minib3d_TMesh_obj*)((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_entity))->__m_entity_entity_mesh ;
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 212, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_speed =bbt_speed;
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 215, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh =(struct _m_minib3d_TMesh_obj*)_m_minib3d_CreateSphere(8,(struct _m_minib3d_TEntity_obj*)&bbNullObject);
	struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 216, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_minib3d_ScaleEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.2f,0.2f,0.2f,0);
	struct BBDebugStm __stmt_4 = {0x78fd078a7c4e747f, 217, 0};
	bbOnDebugEnterStm(&__stmt_4);
	_m_minib3d_EntityRadius((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.2f,0.0f);
	struct BBDebugStm __stmt_5 = {0x78fd078a7c4e747f, 218, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_minib3d_EntityColor((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),30.0000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_6 = {0x78fd078a7c4e747f, 221, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(bbt_entityMesh!=((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 222, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityPitch((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_entityMesh,(BBClass*)&_m_minib3d_TEntity)),0),_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_entityMesh,(BBClass*)&_m_minib3d_TEntity)),0),0.000000000f,0);
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
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 224, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityPitch((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),0),_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),0),0.000000000f,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {0x78fd078a7c4e747f, 228, 0};
	bbOnDebugEnterStm(&__stmt_7);
	_m_minib3d_PositionEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityX((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_entityMesh,(BBClass*)&_m_minib3d_TEntity)),0),(_m_minib3d_EntityY((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_entityMesh,(BBClass*)&_m_minib3d_TEntity)),0)+1.00000000f),_m_minib3d_EntityZ((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_entityMesh,(BBClass*)&_m_minib3d_TEntity)),0),0);
	struct BBDebugStm __stmt_8 = {0x78fd078a7c4e747f, 230, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_maxage =((BBINT)(((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_entity))->__m_entity_entity_attackrange /((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_speed ));
	struct BBDebugStm __stmt_9 = {0x78fd078a7c4e747f, 231, 0};
	bbOnDebugEnterStm(&__stmt_9);
	_m_minib3d_EntityType((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),2,0);
	struct BBDebugStm __stmt_10 = {0x78fd078a7c4e747f, 232, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_projectileList))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_Entity_projectileList,(BBOBJECT)o);
	bbOnDebugLeaveScope();
}
struct _m_Entity_Projectile_obj* __m_Entity_Projectile_New_TEntityf_ObjectNew(BBClass * clas,struct _m_Entity_Entity_obj* bbt_entity,BBFLOAT bbt_speed) {
	struct _m_Entity_Projectile_obj* o = (struct _m_Entity_Projectile_obj*)bbObjectNewNC(clas);
	__m_Entity_Projectile_New_TEntityf(o, bbt_entity, bbt_speed);
	return o;
}
void __m_Entity_Projectile_New(struct _m_Entity_Projectile_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Entity_Projectile;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_age = 0;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_maxage = 0;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_speed = .00000000f;
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh = (struct _m_minib3d_TMesh_obj*)(&bbNullObject);
}
void __m_Entity_Projectile_Delete(struct _m_Entity_Projectile_obj* o) {
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Delete",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Projectile",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 241, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o));
	((struct _m_Entity_Projectile_obj*)o)->clas->m_Free((struct _m_Entity_Projectile_obj*)o);
	bbOnDebugLeaveScope();
	bbObjectDtor((BBOBJECT)o);
}
BBINT __m_Entity_Projectile_Free(struct _m_Entity_Projectile_obj* o){
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Free",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Projectile",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 236, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_FreeEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)));
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 237, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_projectileList))->clas->m_Remove_TObject((struct brl_linkedlist_TList_obj*)_m_Entity_projectileList,(BBOBJECT)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_Entity_Projectile_Update(struct _m_Entity_Projectile_obj* o){
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o));
	struct _m_minib3d_TEntity_obj* bbt_target=(struct _m_minib3d_TEntity_obj*)(&bbNullObject);
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Update",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Projectile",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"target",
				":TEntity",
				.var_address=&bbt_target
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 245, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_MoveEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,0.000000000f,((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_speed );
	struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 246, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_age =(((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_age +1);
	struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 248, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_target=(struct _m_minib3d_TEntity_obj*)_m_minib3d_EntityCollided((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_mesh ,(BBClass*)&_m_minib3d_TEntity)),1);
	struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 250, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_target!=&bbNullObject){
		struct _m_Entity_Entity_obj* bbt_ent=(struct _m_Entity_Entity_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"ent",
					":Entity",
					.var_address=&bbt_ent
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 251, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ent=(struct _m_Entity_Entity_obj*)_m_Entity_Entity_Find_TEntity_TTEntity((struct _m_minib3d_TEntity_obj*)bbt_target);
		struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 252, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_health ))->__m_entity_doublestat_actual =(((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_health ))->__m_entity_doublestat_actual -10);
		struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 254, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_target!=((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity))){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 256, 0};
			bbOnDebugEnterStm(&__stmt_0);
			struct _m_Text_TextSprite_obj* bbt_;
			(((struct _m_Text_TextSprite_obj*)((struct _m_Text_TextSprite_obj*)bbNullObjectTest((bbt_ = ((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_nameplate ))))->clas)->m_SetText_Sif((struct _m_Text_TextSprite_obj*)bbt_,bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_name ,&_s11),bbStringFromInt(((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_health ))->__m_entity_doublestat_actual )),&_s12),bbStringFromInt(((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent))->__m_entity_entity_health ))->__m_entity_doublestat_maximum )),1000,5.00000000f);
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
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 259, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_hook_RunHooks(_m_Entity_HOOK_PROJECTILE_HIT_PLAYER,(BBOBJECT)&bbNullObject);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 262, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o));
		((struct _m_Entity_Projectile_obj*)o)->clas->m_Free((struct _m_Entity_Projectile_obj*)o);
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
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 263, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_age >=((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o))->__m_entity_projectile_maxage ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 265, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_Entity_Projectile_obj*)bbNullObjectTest(o));
			((struct _m_Entity_Projectile_obj*)o)->clas->m_Free((struct _m_Entity_Projectile_obj*)o);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_8 _m_Entity_Projectile_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Projectile",
	{
		{
			BBDEBUGDECL_FIELD,
			"age",
			"i",
			.field_offset=offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_age)
		},
		{
			BBDEBUGDECL_FIELD,
			"maxAge",
			"i",
			.field_offset=offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_maxage)
		},
		{
			BBDEBUGDECL_FIELD,
			"speed",
			"f",
			.field_offset=offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_speed)
		},
		{
			BBDEBUGDECL_FIELD,
			"mesh",
			":TMesh",
			.field_offset=offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_mesh)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Entity_Projectile_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(:Entity,f):Projectile",
			.var_address=(void*)&__m_Entity_Projectile_New_TEntityf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Free",
			"()i",
			.var_address=(void*)&__m_Entity_Projectile_Free
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Update",
			"()i",
			.var_address=(void*)&__m_Entity_Projectile_Update
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Entity_Projectile _m_Entity_Projectile={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_Entity_Projectile_scope,
	sizeof(struct _m_Entity_Projectile_obj),
	(void (*)(BBOBJECT))__m_Entity_Projectile_New,
	(void (*)(BBOBJECT))__m_Entity_Projectile_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_mesh) - offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_age) + sizeof(struct _m_minib3d_TMesh_obj*)
	,0
	,offsetof(struct _m_Entity_Projectile_obj,__m_entity_projectile_age)
	,__m_Entity_Projectile_Free
	,__m_Entity_Projectile_Update
};

BBFLOAT _m_Entity_EntityDistance(struct _m_Entity_Entity_obj* bbt_ent1,struct _m_Entity_Entity_obj* bbt_ent2){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"EntityDistance",
		{
			{
				BBDEBUGDECL_LOCAL,
				"ent1",
				":Entity",
				.var_address=&bbt_ent1
			},
			{
				BBDEBUGDECL_LOCAL,
				"ent2",
				":Entity",
				.var_address=&bbt_ent2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 5, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct _m_minib3d_TMesh_obj* bbt_;
	bbOnDebugLeaveScope();
	return (((struct _m_minib3d_TMesh_obj*)((struct _m_minib3d_TMesh_obj*)bbNullObjectTest((bbt_ = ((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent1))->__m_entity_entity_mesh ))))->clas)->m_EntityDistance_TTEntity((struct _m_minib3d_TEntity_obj*)bbt_,(struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_ent2))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)));
}
static int _bb_bmx_rpg_entity_inited = 0;
int _bb_bmx_rpg_entity(){
	if (!_bb_bmx_rpg_entity_inited) {
		_bb_bmx_rpg_entity_inited = 1;
		GC_add_roots(&_m_Entity_HOOK_PROJECTILE_HIT_PLAYER, &_m_Entity_projectileList + 1);
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
		_bb_bmx_rpg_text();
		bbObjectRegisterType((BBCLASS)&_m_Entity_Entity);
		bbObjectRegisterType((BBCLASS)&_m_Entity_DoubleStat);
		bbObjectRegisterType((BBCLASS)&_m_Entity_Enemy);
		bbObjectRegisterType((BBCLASS)&_m_Entity_Projectile);
		bbRegisterSource(0x4a404f1ae2c72fb0, "F:/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x5647aa7153e648b8, "F:/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		bbRegisterSource(0x78fd078a7c4e747f, "C:/Users/Kirill/Desktop/BMX RPG/Entity.bmx");
		struct BBDebugScope_5 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"Entity",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"HOOK_PROJECTILE_HIT_PLAYER",
					"i",
					.var_address=(void*)&_m_Entity_HOOK_PROJECTILE_HIT_PLAYER
				},
				{
					BBDEBUGDECL_GLOBAL,
					"player",
					":Entity",
					.var_address=(void*)&_m_Entity_player
				},
				{
					BBDEBUGDECL_GLOBAL,
					"cam",
					":TCamera",
					.var_address=(void*)&_m_Entity_cam
				},
				{
					BBDEBUGDECL_GLOBAL,
					"entityList",
					":TList",
					.var_address=(void*)&_m_Entity_entityList
				},
				{
					BBDEBUGDECL_GLOBAL,
					"projectileList",
					":TList",
					.var_address=(void*)&_m_Entity_projectileList
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x78fd078a7c4e747f, 9, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_Entity_HOOK_PROJECTILE_HIT_PLAYER=brl_hook_AllocHookId();
		struct BBDebugStm __stmt_1 = {0x78fd078a7c4e747f, 24, 0};
		bbOnDebugEnterStm(&__stmt_1);
		struct BBDebugStm __stmt_2 = {0x78fd078a7c4e747f, 25, 0};
		bbOnDebugEnterStm(&__stmt_2);
		struct BBDebugStm __stmt_3 = {0x78fd078a7c4e747f, 27, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_Entity_entityList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		struct BBDebugStm __stmt_4 = {0x78fd078a7c4e747f, 28, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_Entity_projectileList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}