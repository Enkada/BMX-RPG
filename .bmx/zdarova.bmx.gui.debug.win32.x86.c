#include "zdarova.bmx.gui.debug.win32.x86.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s17={
	&bbStringClass,
	0x6c196c819c083974,
	6,
	{32,124,32,89,58,32}
};
static BBString _s18={
	&bbStringClass,
	0x7f9b67a9e855a528,
	6,
	{32,124,32,90,58,32}
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
static BBString _s12={
	&bbStringClass,
	0x5d3ac3fa2af8bf8,
	4,
	{67,117,98,101}
};
static BBString _s15={
	&bbStringClass,
	0x6f88bee3459d55f4,
	5,
	{70,80,83,58,32}
};
static BBString _s14={
	&bbStringClass,
	0x55ecaae30e204d51,
	4,
	{72,80,58,32}
};
static BBString _s13={
	&bbStringClass,
	0xd91c1768e348b601,
	14,
	{80,76,65,89,69,82,32,72,69,65,76,84,72,58}
};
static BBString _s11={
	&bbStringClass,
	0x750015c0a1d83436,
	6,
	{80,108,97,121,101,114}
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
static BBString _s16={
	&bbStringClass,
	0x3124896fa0eb6db2,
	3,
	{88,58,32}
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
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
BBINT _m_zdarova_width=1280;
BBINT _m_zdarova_height=720;
BBINT _m_zdarova_depth=16;
BBINT _m_zdarova_mode=0;
BBINT _m_zdarova_isCameraLocked=0;
struct _m_minib3d_TPivot_obj* _m_zdarova_camPivot=(struct _m_minib3d_TPivot_obj*)(&bbNullObject);
BBINT _m_zdarova_old_ms=0;
BBINT _m_zdarova_renders=0;
BBINT _m_zdarova_fps=0;
struct _m_UserControl_Panel_obj* _m_zdarova_player_panelHealth=(struct _m_UserControl_Panel_obj*)(&bbNullObject);
struct _m_UserControl_Label_obj* _m_zdarova_player_labelHealth=(struct _m_UserControl_Label_obj*)(&bbNullObject);
struct _m_UserControl_ProgressBar_obj* _m_zdarova_player_barHealth=(struct _m_UserControl_ProgressBar_obj*)(&bbNullObject);
BBOBJECT _m_zdarova_UpdatePlayerHealth(BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"UpdatePlayerHealth",
		{
			{
				BBDEBUGDECL_LOCAL,
				"id",
				"i",
				.var_address=&bbt_id
			},
			{
				BBDEBUGDECL_LOCAL,
				"data",
				":Object",
				.var_address=&bbt_data
			},
			{
				BBDEBUGDECL_LOCAL,
				"context",
				":Object",
				.var_address=&bbt_context
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 114, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_UserControl_Label_obj*)bbNullObjectTest(_m_zdarova_player_labelHealth))->clas->m_SetText_S((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_labelHealth,bbStringConcat(&_s14,bbStringFromInt(((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_health ))->__m_entity_doublestat_actual )));
	struct BBDebugStm __stmt_1 = {0x977de33c09218640, 115, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(_m_zdarova_player_barHealth))->clas->m_SetValue_i((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_barHealth,((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_health ))->__m_entity_doublestat_actual );
	bbOnDebugLeaveScope();
	return (BBOBJECT)(&bbNullObject);
}
BBINT _m_zdarova_Controls(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Controls",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 141, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(brl_polledinput_KeyHit(13)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 141, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_blitz_DebugStop();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x977de33c09218640, 144, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->clas->m_Move_fff((struct _m_Entity_Entity_obj*)_m_Entity_player,((((BBFLOAT)brl_polledinput_KeyDown(68))*((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_speed )-(((BBFLOAT)brl_polledinput_KeyDown(65))*((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_speed )),0.000000000f,((((BBFLOAT)brl_polledinput_KeyDown(87))*((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_speed )-(((BBFLOAT)brl_polledinput_KeyDown(83))*((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_speed )));
	struct BBDebugStm __stmt_2 = {0x977de33c09218640, 145, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_minib3d_PositionEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityX((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0),(_m_minib3d_EntityY((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0)+1.00000000f),_m_minib3d_EntityZ((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0),0);
	struct BBDebugStm __stmt_3 = {0x977de33c09218640, 147, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(!(_m_zdarova_isCameraLocked!=0)){
		BBFLOAT bbt_MXS=0;
		BBFLOAT bbt_MYS=0;
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"MXS",
					"f",
					.var_address=&bbt_MXS
				},
				{
					BBDEBUGDECL_LOCAL,
					"MYS",
					"f",
					.var_address=&bbt_MYS
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 149, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_MXS=.00000000f;
		struct BBDebugStm __stmt_1 = {0x977de33c09218640, 149, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_MYS=.00000000f;
		struct BBDebugStm __stmt_2 = {0x977de33c09218640, 150, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_MXS=((((((BBFLOAT)(brl_polledinput_MouseX()-(_m_zdarova_width/2)))-bbt_MXS)/4.00000000f)+bbt_MXS)*.5f);
		struct BBDebugStm __stmt_3 = {0x977de33c09218640, 151, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_MYS=((((((BBFLOAT)(brl_polledinput_MouseY()-(_m_zdarova_height/2)))-bbt_MYS)/4.00000000f)+bbt_MYS)*.5f);
		struct BBDebugStm __stmt_4 = {0x977de33c09218640, 154, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_system_MoveMouse((_m_zdarova_width/2),(_m_zdarova_height/2));
		struct BBDebugStm __stmt_5 = {0x977de33c09218640, 157, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_minib3d_TurnEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),bbt_MYS,0.000000000f,0.000000000f,0);
		struct BBDebugStm __stmt_6 = {0x977de33c09218640, 158, 0};
		bbOnDebugEnterStm(&__stmt_6);
		_m_minib3d_TurnEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_zdarova_camPivot,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,-bbt_MXS,0.000000000f,0);
		struct BBDebugStm __stmt_7 = {0x977de33c09218640, 159, 0};
		bbOnDebugEnterStm(&__stmt_7);
		if(_m_minib3d_EntityPitch((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),0)>90.0000000f){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x977de33c09218640, 159, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),90.0000000f,_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_zdarova_camPivot,(BBClass*)&_m_minib3d_TEntity)),0),0.000000000f,0);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_8 = {0x977de33c09218640, 160, 0};
		bbOnDebugEnterStm(&__stmt_8);
		if(_m_minib3d_EntityPitch((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),0)<-90.0000000f){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x977de33c09218640, 160, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),-90.0000000f,_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_zdarova_camPivot,(BBClass*)&_m_minib3d_TEntity)),0),0.000000000f,0);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_9 = {0x977de33c09218640, 161, 0};
		bbOnDebugEnterStm(&__stmt_9);
		_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityPitch((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),0),_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_zdarova_camPivot,(BBClass*)&_m_minib3d_TEntity)),0),0.000000000f,0);
		struct BBDebugStm __stmt_10 = {0x977de33c09218640, 162, 0};
		bbOnDebugEnterStm(&__stmt_10);
		_m_minib3d_RotateEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),_m_minib3d_EntityPitch((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0),_m_minib3d_EntityYaw((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_zdarova_camPivot,(BBClass*)&_m_minib3d_TEntity)),0),0.000000000f,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {0x977de33c09218640, 167, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(brl_polledinput_MouseDown(1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 168, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->clas->m_Shoot((struct _m_Entity_Entity_obj*)_m_Entity_player);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {0x977de33c09218640, 171, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(brl_polledinput_KeyHit(49)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 172, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_zdarova_isCameraLocked=(!(_m_zdarova_isCameraLocked!=0));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_zdarova_UpdateProjectiles(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"UpdateProjectiles",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 190, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_projectileList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_Entity_projectileList);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct _m_Entity_Projectile_obj* bbt_proj=(struct _m_Entity_Projectile_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"proj",
					":Projectile",
					.var_address=&bbt_proj
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_proj=(struct _m_Entity_Projectile_obj*)((struct _m_Entity_Projectile_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&_m_Entity_Projectile));
		if(bbt_proj==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 191, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Projectile_obj*)bbNullObjectTest(bbt_proj))->clas->m_Update((struct _m_Entity_Projectile_obj*)bbt_proj);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_zdarova_UpdateEntities(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"UpdateEntities",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 177, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_Entity_entityList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_Entity_entityList);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct _m_Entity_Entity_obj* bbt_entity=(struct _m_Entity_Entity_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"entity",
					":Entity",
					.var_address=&bbt_entity
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_entity=(struct _m_Entity_Entity_obj*)((struct _m_Entity_Entity_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&_m_Entity_Entity));
		if(bbt_entity==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 178, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_entity))->clas->m_Update((struct _m_Entity_Entity_obj*)bbt_entity);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_zdarova_UpdateVisibleControl(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"UpdateVisibleControl",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 183, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_UserControl_visibleControlList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_UserControl_visibleControlList);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct _m_UserControl_UserControl_obj* bbt_control=(struct _m_UserControl_UserControl_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"control",
					":UserControl",
					.var_address=&bbt_control
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_control=(struct _m_UserControl_UserControl_obj*)((struct _m_UserControl_UserControl_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&_m_UserControl_UserControl));
		if(bbt_control==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 184, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_UserControl_UserControl_obj*)bbNullObjectTest(bbt_control))->clas->m_Update((struct _m_UserControl_UserControl_obj*)bbt_control);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_zdarova_Draw2D(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Draw2D",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 119, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_minib3d_BeginMax2D();
	struct BBDebugStm __stmt_1 = {0x977de33c09218640, 121, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_zdarova_UpdateVisibleControl();
	struct BBDebugStm __stmt_2 = {0x977de33c09218640, 123, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_minib3d_EndMax2D();
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_zdarova_ShowDebugInfo(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ShowDebugInfo",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x977de33c09218640, 127, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_zdarova_renders=(_m_zdarova_renders+1);
	struct BBDebugStm __stmt_1 = {0x977de33c09218640, 128, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((bbMilliSecs()-_m_zdarova_old_ms)>=1000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 129, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_zdarova_old_ms=bbMilliSecs();
		struct BBDebugStm __stmt_1 = {0x977de33c09218640, 130, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_zdarova_fps=_m_zdarova_renders;
		struct BBDebugStm __stmt_2 = {0x977de33c09218640, 131, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_zdarova_renders=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x977de33c09218640, 134, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_minib3d_Text(0,0,bbStringConcat(&_s15,bbStringFromInt(_m_zdarova_fps)));
	struct BBDebugStm __stmt_3 = {0x977de33c09218640, 135, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_minib3d_Text(0,10,bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s16,bbStringFromFloat(_m_minib3d_EntityX((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0))),&_s17),bbStringFromFloat(_m_minib3d_EntityY((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0))),&_s18),bbStringFromFloat(_m_minib3d_EntityZ((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_mesh ,(BBClass*)&_m_minib3d_TEntity)),0))));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_zdarova_HandleEvents(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"HandleEvents",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_zdarova_width, &_m_zdarova_player_barHealth + 1);
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
		_bb_bmx_rpg_entity();
		_bb_bmx_rpg_usercontrol();
		bbRegisterSource(0x4a404f1ae2c72fb0, "F:/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x5647aa7153e648b8, "F:/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		bbRegisterSource(0x977de33c09218640, "C:/Users/Kirill/Desktop/BMX RPG/zdarova.bmx");
		struct _m_minib3d_TLight_obj* bbt_light=(struct _m_minib3d_TLight_obj*)(&bbNullObject);
		struct _m_minib3d_TMesh_obj* bbt_grid=(struct _m_minib3d_TMesh_obj*)(&bbNullObject);
		struct _m_minib3d_TMesh_obj* bbt_playerMesh=(struct _m_minib3d_TMesh_obj*)(&bbNullObject);
		struct BBDebugScope_15 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"zdarova",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"width",
					"i",
					.var_address=(void*)&_m_zdarova_width
				},
				{
					BBDEBUGDECL_GLOBAL,
					"height",
					"i",
					.var_address=(void*)&_m_zdarova_height
				},
				{
					BBDEBUGDECL_GLOBAL,
					"depth",
					"i",
					.var_address=(void*)&_m_zdarova_depth
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mode",
					"i",
					.var_address=(void*)&_m_zdarova_mode
				},
				{
					BBDEBUGDECL_GLOBAL,
					"isCameraLocked",
					"i",
					.var_address=(void*)&_m_zdarova_isCameraLocked
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camPivot",
					":TPivot",
					.var_address=(void*)&_m_zdarova_camPivot
				},
				{
					BBDEBUGDECL_GLOBAL,
					"old_ms",
					"i",
					.var_address=(void*)&_m_zdarova_old_ms
				},
				{
					BBDEBUGDECL_GLOBAL,
					"renders",
					"i",
					.var_address=(void*)&_m_zdarova_renders
				},
				{
					BBDEBUGDECL_GLOBAL,
					"fps",
					"i",
					.var_address=(void*)&_m_zdarova_fps
				},
				{
					BBDEBUGDECL_GLOBAL,
					"player_panelHealth",
					":Panel",
					.var_address=(void*)&_m_zdarova_player_panelHealth
				},
				{
					BBDEBUGDECL_GLOBAL,
					"player_labelHealth",
					":Label",
					.var_address=(void*)&_m_zdarova_player_labelHealth
				},
				{
					BBDEBUGDECL_GLOBAL,
					"player_barHealth",
					":ProgressBar",
					.var_address=(void*)&_m_zdarova_player_barHealth
				},
				{
					BBDEBUGDECL_LOCAL,
					"light",
					":TLight",
					.var_address=&bbt_light
				},
				{
					BBDEBUGDECL_LOCAL,
					"grid",
					":TMesh",
					.var_address=&bbt_grid
				},
				{
					BBDEBUGDECL_LOCAL,
					"playerMesh",
					":TMesh",
					.var_address=&bbt_playerMesh
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x977de33c09218640, 8, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct BBDebugStm __stmt_1 = {0x977de33c09218640, 8, 0};
		bbOnDebugEnterStm(&__stmt_1);
		struct BBDebugStm __stmt_2 = {0x977de33c09218640, 8, 0};
		bbOnDebugEnterStm(&__stmt_2);
		struct BBDebugStm __stmt_3 = {0x977de33c09218640, 8, 0};
		bbOnDebugEnterStm(&__stmt_3);
		struct BBDebugStm __stmt_4 = {0x977de33c09218640, 11, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_minib3d_Graphics3D(_m_zdarova_width,_m_zdarova_height,_m_zdarova_depth,_m_zdarova_mode,60,-1);
		struct BBDebugStm __stmt_5 = {0x977de33c09218640, 12, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_minib3d_ClearTextureFilters();
		struct BBDebugStm __stmt_6 = {0x977de33c09218640, 19, 0};
		bbOnDebugEnterStm(&__stmt_6);
		_m_Entity_cam=(struct _m_minib3d_TCamera_obj*)_m_minib3d_CreateCamera((struct _m_minib3d_TEntity_obj*)&bbNullObject);
		struct BBDebugStm __stmt_7 = {0x977de33c09218640, 20, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_minib3d_CameraFogMode((struct _m_minib3d_TCamera_obj*)_m_Entity_cam,1);
		struct BBDebugStm __stmt_8 = {0x977de33c09218640, 21, 0};
		bbOnDebugEnterStm(&__stmt_8);
		_m_minib3d_CameraFogColor((struct _m_minib3d_TCamera_obj*)_m_Entity_cam,146.000000f,195.000000f,206.000000f);
		struct BBDebugStm __stmt_9 = {0x977de33c09218640, 22, 0};
		bbOnDebugEnterStm(&__stmt_9);
		_m_minib3d_CameraFogRange((struct _m_minib3d_TCamera_obj*)_m_Entity_cam,0.000000000f,100.000000f);
		struct BBDebugStm __stmt_10 = {0x977de33c09218640, 23, 0};
		bbOnDebugEnterStm(&__stmt_10);
		_m_minib3d_CameraZoom((struct _m_minib3d_TCamera_obj*)_m_Entity_cam,.8f);
		struct BBDebugStm __stmt_11 = {0x977de33c09218640, 24, 0};
		bbOnDebugEnterStm(&__stmt_11);
		_m_minib3d_PositionEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,1.00000000f,0.000000000f,0);
		struct BBDebugStm __stmt_12 = {0x977de33c09218640, 26, 0};
		bbOnDebugEnterStm(&__stmt_12);
		struct BBDebugStm __stmt_13 = {0x977de33c09218640, 29, 0};
		bbOnDebugEnterStm(&__stmt_13);
		_m_zdarova_camPivot=(struct _m_minib3d_TPivot_obj*)_m_minib3d_CreatePivot((struct _m_minib3d_TEntity_obj*)&bbNullObject);
		struct BBDebugStm __stmt_14 = {0x977de33c09218640, 30, 0};
		bbOnDebugEnterStm(&__stmt_14);
		_m_minib3d_EntityParent((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_zdarova_camPivot,(BBClass*)&_m_minib3d_TEntity)),(struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)_m_Entity_cam,(BBClass*)&_m_minib3d_TEntity)),1);
		struct BBDebugStm __stmt_15 = {0x977de33c09218640, 33, 0};
		bbOnDebugEnterStm(&__stmt_15);
		bbt_light=(struct _m_minib3d_TLight_obj*)_m_minib3d_CreateLight(1,(struct _m_minib3d_TEntity_obj*)&bbNullObject);
		struct BBDebugStm __stmt_16 = {0x977de33c09218640, 36, 0};
		bbOnDebugEnterStm(&__stmt_16);
		bbt_grid=(struct _m_minib3d_TMesh_obj*)_m_minib3d_CreateCube((struct _m_minib3d_TEntity_obj*)&bbNullObject);
		struct BBDebugStm __stmt_17 = {0x977de33c09218640, 37, 0};
		bbOnDebugEnterStm(&__stmt_17);
		_m_minib3d_ScaleEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_grid,(BBClass*)&_m_minib3d_TEntity)),100.000000f,1.00000000f,100.000000f,0);
		struct BBDebugStm __stmt_18 = {0x977de33c09218640, 38, 0};
		bbOnDebugEnterStm(&__stmt_18);
		_m_minib3d_MoveEntity((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_grid,(BBClass*)&_m_minib3d_TEntity)),0.000000000f,-2.00000000f,0.000000000f);
		struct BBDebugStm __stmt_19 = {0x977de33c09218640, 41, 0};
		bbOnDebugEnterStm(&__stmt_19);
		bbt_playerMesh=(struct _m_minib3d_TMesh_obj*)_m_minib3d_CreateCube((struct _m_minib3d_TEntity_obj*)&bbNullObject);
		struct BBDebugStm __stmt_20 = {0x977de33c09218640, 42, 0};
		bbOnDebugEnterStm(&__stmt_20);
		_m_minib3d_EntityRadius((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_playerMesh,(BBClass*)&_m_minib3d_TEntity)),1.67f,0.0f);
		struct BBDebugStm __stmt_21 = {0x977de33c09218640, 43, 0};
		bbOnDebugEnterStm(&__stmt_21);
		_m_Entity_player=(struct _m_Entity_Entity_obj*)__m_Entity_Entity_New_STTMesh_ObjectNew((struct _m_Entity_Entity_obj*)&_m_Entity_Entity,&_s11,(struct _m_minib3d_TMesh_obj*)bbt_playerMesh);
		struct BBDebugStm __stmt_22 = {0x977de33c09218640, 44, 0};
		bbOnDebugEnterStm(&__stmt_22);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_speed =0.1f;
		struct BBDebugStm __stmt_23 = {0x977de33c09218640, 45, 0};
		bbOnDebugEnterStm(&__stmt_23);
		((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_attackspeed =30;
		struct BBDebugStm __stmt_24 = {0x977de33c09218640, 48, 0};
		bbOnDebugEnterStm(&__stmt_24);
		{
			BBINT bbt_i=1;
			for(;(bbt_i<=30);bbt_i=(bbt_i+1)){
				struct _m_minib3d_TMesh_obj* bbt_cube=(struct _m_minib3d_TMesh_obj*)(&bbNullObject);
				struct _m_Entity_Entity_obj* bbt_entityCube=(struct _m_Entity_Entity_obj*)(&bbNullObject);
				struct BBDebugScope_3 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"i",
							"i",
							.var_address=&bbt_i
						},
						{
							BBDEBUGDECL_LOCAL,
							"cube",
							":TMesh",
							.var_address=&bbt_cube
						},
						{
							BBDEBUGDECL_LOCAL,
							"entityCube",
							":Entity",
							.var_address=&bbt_entityCube
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x977de33c09218640, 49, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_cube=(struct _m_minib3d_TMesh_obj*)_m_minib3d_CreateCube((struct _m_minib3d_TEntity_obj*)&bbNullObject);
				struct BBDebugStm __stmt_1 = {0x977de33c09218640, 50, 0};
				bbOnDebugEnterStm(&__stmt_1);
				_m_minib3d_EntityColor((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_cube,(BBClass*)&_m_minib3d_TEntity)),((BBFLOAT)brl_random_Rand(0,255)),((BBFLOAT)brl_random_Rand(0,255)),((BBFLOAT)brl_random_Rand(0,255)));
				struct BBDebugStm __stmt_2 = {0x977de33c09218640, 51, 0};
				bbOnDebugEnterStm(&__stmt_2);
				_m_minib3d_EntityAlpha((struct _m_minib3d_TEntity_obj*)((struct _m_minib3d_TEntity_obj*)bbObjectDowncast((BBOBJECT)bbt_cube,(BBClass*)&_m_minib3d_TEntity)),0.9f);
				struct BBDebugStm __stmt_3 = {0x977de33c09218640, 53, 0};
				bbOnDebugEnterStm(&__stmt_3);
				bbt_entityCube=(struct _m_Entity_Entity_obj*)((struct _m_Entity_Entity_obj*)bbObjectDowncast((BBOBJECT)__m_Entity_Enemy_New_STTMesh_ObjectNew((struct _m_Entity_Enemy_obj*)&_m_Entity_Enemy,bbStringConcat(&_s12,bbStringFromInt(bbt_i)),(struct _m_minib3d_TMesh_obj*)bbt_cube),(BBClass*)&_m_Entity_Entity));
				struct BBDebugStm __stmt_4 = {0x977de33c09218640, 54, 0};
				bbOnDebugEnterStm(&__stmt_4);
				((struct _m_Entity_Entity_obj*)bbNullObjectTest(bbt_entityCube))->clas->m_SetPosition_fff((struct _m_Entity_Entity_obj*)bbt_entityCube,((BBFLOAT)brl_random_Rand(-50,50)),0.000000000f,((BBFLOAT)brl_random_Rand(-50,50)));
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_25 = {0x977de33c09218640, 58, 0};
		bbOnDebugEnterStm(&__stmt_25);
		_m_zdarova_old_ms=bbMilliSecs();
		struct BBDebugStm __stmt_26 = {0x977de33c09218640, 59, 0};
		bbOnDebugEnterStm(&__stmt_26);
		struct BBDebugStm __stmt_27 = {0x977de33c09218640, 60, 0};
		bbOnDebugEnterStm(&__stmt_27);
		struct BBDebugStm __stmt_28 = {0x977de33c09218640, 62, 0};
		bbOnDebugEnterStm(&__stmt_28);
		brl_system_MoveMouse(0,0);
		struct BBDebugStm __stmt_29 = {0x977de33c09218640, 63, 0};
		bbOnDebugEnterStm(&__stmt_29);
		brl_system_HideMouse();
		struct BBDebugStm __stmt_30 = {0x977de33c09218640, 65, 0};
		bbOnDebugEnterStm(&__stmt_30);
		_m_minib3d_Collisions(1,1,2,3);
		struct BBDebugStm __stmt_31 = {0x977de33c09218640, 66, 0};
		bbOnDebugEnterStm(&__stmt_31);
		_m_minib3d_Collisions(2,1,1,1);
		struct BBDebugStm __stmt_32 = {0x977de33c09218640, 74, 0};
		bbOnDebugEnterStm(&__stmt_32);
		_m_zdarova_player_panelHealth=(struct _m_UserControl_Panel_obj*)__m_UserControl_Panel_New_iiii_ObjectNew((struct _m_UserControl_Panel_obj*)&_m_UserControl_Panel,50,50,420,60);
		struct BBDebugStm __stmt_33 = {0x977de33c09218640, 75, 0};
		bbOnDebugEnterStm(&__stmt_33);
		((struct _m_UserControl_Panel_obj*)bbNullObjectTest(_m_zdarova_player_panelHealth))->clas->m_SetBackground_TColor((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_panelHealth,(struct _m_Color_Color_obj*)__m_Color_Color_New_iiif_ObjectNew((struct _m_Color_Color_obj*)&_m_Color_Color,30,30,30,0.5f));
		struct BBDebugStm __stmt_34 = {0x977de33c09218640, 76, 0};
		bbOnDebugEnterStm(&__stmt_34);
		((struct _m_UserControl_Panel_obj*)bbNullObjectTest(_m_zdarova_player_panelHealth))->clas->m_Show((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_panelHealth);
		struct BBDebugStm __stmt_35 = {0x977de33c09218640, 77, 0};
		bbOnDebugEnterStm(&__stmt_35);
		_m_zdarova_player_labelHealth=(struct _m_UserControl_Label_obj*)__m_UserControl_Label_New_iiS_ObjectNew((struct _m_UserControl_Label_obj*)&_m_UserControl_Label,60,60,&_s13);
		struct BBDebugStm __stmt_36 = {0x977de33c09218640, 78, 0};
		bbOnDebugEnterStm(&__stmt_36);
		((struct _m_UserControl_Label_obj*)bbNullObjectTest(_m_zdarova_player_labelHealth))->clas->m_Show((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_labelHealth);
		struct BBDebugStm __stmt_37 = {0x977de33c09218640, 79, 0};
		bbOnDebugEnterStm(&__stmt_37);
		_m_zdarova_player_barHealth=(struct _m_UserControl_ProgressBar_obj*)__m_UserControl_ProgressBar_New_iiiii_ObjectNew((struct _m_UserControl_ProgressBar_obj*)&_m_UserControl_ProgressBar,60,80,400,20,((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_health ))->__m_entity_doublestat_maximum );
		struct BBDebugStm __stmt_38 = {0x977de33c09218640, 80, 0};
		bbOnDebugEnterStm(&__stmt_38);
		((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(_m_zdarova_player_barHealth))->clas->m_SetColors_TColorTColor((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_barHealth,(struct _m_Color_Color_obj*)__m_Color_Color_New_iiif_ObjectNew((struct _m_Color_Color_obj*)&_m_Color_Color,21,31,21,1.00000000f),(struct _m_Color_Color_obj*)__m_Color_Color_New_iiif_ObjectNew((struct _m_Color_Color_obj*)&_m_Color_Color,43,102,43,1.00000000f));
		struct BBDebugStm __stmt_39 = {0x977de33c09218640, 81, 0};
		bbOnDebugEnterStm(&__stmt_39);
		((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(_m_zdarova_player_barHealth))->clas->m_SetValue_i((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_barHealth,((struct _m_Entity_DoubleStat_obj*)bbNullObjectTest(((struct _m_Entity_Entity_obj*)bbNullObjectTest(_m_Entity_player))->__m_entity_entity_health ))->__m_entity_doublestat_maximum );
		struct BBDebugStm __stmt_40 = {0x977de33c09218640, 82, 0};
		bbOnDebugEnterStm(&__stmt_40);
		((struct _m_UserControl_ProgressBar_obj*)bbNullObjectTest(_m_zdarova_player_barHealth))->clas->m_Show((struct _m_UserControl_UserControl_obj*)_m_zdarova_player_barHealth);
		struct BBDebugStm __stmt_41 = {0x977de33c09218640, 83, 0};
		bbOnDebugEnterStm(&__stmt_41);
		brl_hook_AddHook(_m_Entity_HOOK_PROJECTILE_HIT_PLAYER,_m_zdarova_UpdatePlayerHealth,(BBOBJECT)&bbNullObject,0);
		struct BBDebugStm __stmt_42 = {0x977de33c09218640, 90, 0};
		bbOnDebugEnterStm(&__stmt_42);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x977de33c09218640, 93, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_zdarova_Controls();
			struct BBDebugStm __stmt_1 = {0x977de33c09218640, 95, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_zdarova_UpdateProjectiles();
			struct BBDebugStm __stmt_2 = {0x977de33c09218640, 96, 0};
			bbOnDebugEnterStm(&__stmt_2);
			_m_zdarova_UpdateEntities();
			struct BBDebugStm __stmt_3 = {0x977de33c09218640, 98, 0};
			bbOnDebugEnterStm(&__stmt_3);
			_m_minib3d_UpdateWorld(1.0f);
			struct BBDebugStm __stmt_4 = {0x977de33c09218640, 99, 0};
			bbOnDebugEnterStm(&__stmt_4);
			_m_minib3d_RenderWorld();
			struct BBDebugStm __stmt_5 = {0x977de33c09218640, 101, 0};
			bbOnDebugEnterStm(&__stmt_5);
			_m_zdarova_Draw2D();
			struct BBDebugStm __stmt_6 = {0x977de33c09218640, 103, 0};
			bbOnDebugEnterStm(&__stmt_6);
			_m_zdarova_ShowDebugInfo();
			struct BBDebugStm __stmt_7 = {0x977de33c09218640, 105, 0};
			bbOnDebugEnterStm(&__stmt_7);
			brl_graphics_Flip(1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_43 = {0x977de33c09218640, 107, 0};
		bbOnDebugEnterStm(&__stmt_43);
		bbEnd();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}