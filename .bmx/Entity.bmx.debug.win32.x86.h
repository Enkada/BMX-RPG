#ifndef BMX_RPG_ENTITY_BMX_DEBUG_WIN32_X86_H
#define BMX_RPG_ENTITY_BMX_DEBUG_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x86.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.win32.x86.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.debug.win32.x86.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.debug.win32.x86.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.debug.win32.x86.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.debug.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x86.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.win32.x86.h>
#include <brl.mod/bytebuffer.mod/.bmx/bytebuffer.bmx.debug.win32.x86.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.debug.win32.x86.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.debug.win32.x86.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.debug.win32.x86.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.debug.win32.x86.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.debug.win32.x86.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.win32.x86.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.debug.win32.x86.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.debug.win32.x86.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.debug.win32.x86.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.debug.win32.x86.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.debug.win32.x86.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.debug.win32.x86.h>
#include <brl.mod/map.mod/.bmx/map.bmx.debug.win32.x86.h>
#include <brl.mod/matrix.mod/.bmx/matrix.bmx.debug.win32.x86.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.win32.x86.h>
#include <brl.mod/maxunit.mod/.bmx/maxunit.bmx.debug.win32.x86.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.debug.win32.x86.h>
#include <brl.mod/objectlist.mod/.bmx/objectlist.bmx.debug.win32.x86.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.debug.win32.x86.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.debug.win32.x86.h>
#include <brl.mod/platform.mod/.bmx/platform.bmx.debug.win32.x86.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.debug.win32.x86.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.debug.win32.x86.h>
#include <brl.mod/randomdefault.mod/.bmx/randomdefault.bmx.debug.win32.x86.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.debug.win32.x86.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.debug.win32.x86.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.debug.win32.x86.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.debug.win32.x86.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.debug.win32.x86.h>
#include <brl.mod/uuid.mod/.bmx/uuid.bmx.debug.win32.x86.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.debug.win32.x86.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.debug.win32.x86.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.debug.win32.x86.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.debug.win32.x86.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.debug.win32.x86.h>
#include <pub.mod/nfd.mod/.bmx/nfd.bmx.debug.win32.x86.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.debug.win32.x86.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.debug.win32.x86.h>
#include <pub.mod/opengles3.mod/.bmx/opengles3.bmx.debug.win32.x86.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.debug.win32.x86.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.debug.win32.x86.h>
#include "../includes/.bmx/minib3d.bmx.debug.win32.x86.h"
#include "Text.bmx.debug.win32.x86.h"
int _bb_bmx_rpg_entity();
struct _m_Entity_Entity_obj;
struct _m_Entity_DoubleStat_obj;
struct _m_Entity_Enemy_obj;
struct _m_Entity_Projectile_obj;
extern BBINT _m_Entity_HOOK_PROJECTILE_HIT_PLAYER;
void __m_Entity_Entity_New_STTMesh(struct _m_Entity_Entity_obj* o,BBSTRING bbt_name,struct _m_minib3d_TMesh_obj* bbt_mesh);
struct _m_Entity_Entity_obj* __m_Entity_Entity_New_STTMesh_ObjectNew(BBClass * clas,BBSTRING bbt_name,struct _m_minib3d_TMesh_obj* bbt_mesh);
void __m_Entity_Entity_New(struct _m_Entity_Entity_obj* o);
typedef BBINT (*_m_Entity_Entity_Update_m)(struct _m_Entity_Entity_obj*);
BBINT __m_Entity_Entity_Update(struct _m_Entity_Entity_obj*);
typedef BBINT (*_m_Entity_Entity_Shoot_m)(struct _m_Entity_Entity_obj*);
BBINT __m_Entity_Entity_Shoot(struct _m_Entity_Entity_obj*);
typedef BBINT (*_m_Entity_Entity_SetPosition_fff_m)(struct _m_Entity_Entity_obj*,BBFLOAT,BBFLOAT,BBFLOAT);
BBINT __m_Entity_Entity_SetPosition_fff(struct _m_Entity_Entity_obj*,BBFLOAT,BBFLOAT,BBFLOAT);
typedef BBINT (*_m_Entity_Entity_Move_fff_m)(struct _m_Entity_Entity_obj*,BBFLOAT,BBFLOAT,BBFLOAT);
BBINT __m_Entity_Entity_Move_fff(struct _m_Entity_Entity_obj*,BBFLOAT,BBFLOAT,BBFLOAT);
typedef BBINT (*_m_Entity_Entity_Move_f_m)(struct _m_Entity_Entity_obj*,BBFLOAT);
BBINT __m_Entity_Entity_Move_f(struct _m_Entity_Entity_obj*,BBFLOAT);
typedef BBINT (*_m_Entity_Entity_Move_m)(struct _m_Entity_Entity_obj*);
BBINT __m_Entity_Entity_Move(struct _m_Entity_Entity_obj*);
typedef BBINT (*_m_Entity_Entity_Turn_fff_m)(struct _m_Entity_Entity_obj*,BBFLOAT,BBFLOAT,BBFLOAT);
BBINT __m_Entity_Entity_Turn_fff(struct _m_Entity_Entity_obj*,BBFLOAT,BBFLOAT,BBFLOAT);
typedef BBINT (*_m_Entity_Entity_Turn_f_m)(struct _m_Entity_Entity_obj*,BBFLOAT);
BBINT __m_Entity_Entity_Turn_f(struct _m_Entity_Entity_obj*,BBFLOAT);
typedef struct _m_Entity_Entity_obj* (*_m_Entity_Entity_Find_TEntity_TTEntity_f)(struct _m_minib3d_TEntity_obj*);
struct _m_Entity_Entity_obj* _m_Entity_Entity_Find_TEntity_TTEntity(struct _m_minib3d_TEntity_obj*);
struct BBClass__m_Entity_Entity {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_Entity_Entity_Update_m m_Update;
	_m_Entity_Entity_Shoot_m m_Shoot;
	_m_Entity_Entity_SetPosition_fff_m m_SetPosition_fff;
	_m_Entity_Entity_Move_fff_m m_Move_fff;
	_m_Entity_Entity_Move_f_m m_Move_f;
	_m_Entity_Entity_Move_m m_Move;
	_m_Entity_Entity_Turn_fff_m m_Turn_fff;
	_m_Entity_Entity_Turn_f_m m_Turn_f;
	_m_Entity_Entity_Find_TEntity_TTEntity_f f_Find_TEntity_TTEntity;
};

struct _m_Entity_Entity_obj {
	struct BBClass__m_Entity_Entity* clas;
	BBSTRING __m_entity_entity_name;
	struct _m_minib3d_TMesh_obj* __m_entity_entity_mesh;
	struct _m_Text_TextSprite_obj* __m_entity_entity_nameplate;
	BBFLOAT __m_entity_entity_speed;
	BBFLOAT __m_entity_entity_attackrange;
	BBINT __m_entity_entity_attackspeed;
	BBINT __m_entity_entity_attackdamage;
	struct _m_Entity_DoubleStat_obj* __m_entity_entity_health;
	BBINT __m_entity_entity_attackcd;
};
extern struct BBClass__m_Entity_Entity _m_Entity_Entity;
extern struct _m_Entity_Entity_obj* _m_Entity_player;
extern struct _m_minib3d_TCamera_obj* _m_Entity_cam;
extern struct brl_linkedlist_TList_obj* _m_Entity_entityList;
extern struct brl_linkedlist_TList_obj* _m_Entity_projectileList;
void __m_Entity_DoubleStat_New_i(struct _m_Entity_DoubleStat_obj* o,BBINT bbt_maximum);
struct _m_Entity_DoubleStat_obj* __m_Entity_DoubleStat_New_i_ObjectNew(BBClass * clas,BBINT bbt_maximum);
void __m_Entity_DoubleStat_New_ii(struct _m_Entity_DoubleStat_obj* o,BBINT bbt_actual,BBINT bbt_maximum2);
struct _m_Entity_DoubleStat_obj* __m_Entity_DoubleStat_New_ii_ObjectNew(BBClass * clas,BBINT bbt_actual,BBINT bbt_maximum2);
void __m_Entity_DoubleStat_New(struct _m_Entity_DoubleStat_obj* o);
struct BBClass__m_Entity_DoubleStat {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
};

struct _m_Entity_DoubleStat_obj {
	struct BBClass__m_Entity_DoubleStat* clas;
	BBINT __m_entity_doublestat_actual;
	BBINT __m_entity_doublestat_maximum;
};
extern struct BBClass__m_Entity_DoubleStat _m_Entity_DoubleStat;
void __m_Entity_Enemy_New_STTMesh(struct _m_Entity_Enemy_obj* o,BBSTRING bbt_name2,struct _m_minib3d_TMesh_obj* bbt_mesh2);
struct _m_Entity_Enemy_obj* __m_Entity_Enemy_New_STTMesh_ObjectNew(BBClass * clas,BBSTRING bbt_name2,struct _m_minib3d_TMesh_obj* bbt_mesh2);
void __m_Entity_Enemy_New(struct _m_Entity_Enemy_obj* o);
void __m_Entity_Enemy_Delete(struct _m_Entity_Enemy_obj* o);
typedef BBINT (*_m_Entity_Enemy_Update_m)(struct _m_Entity_Enemy_obj*);
BBINT __m_Entity_Enemy_Update(struct _m_Entity_Enemy_obj*);
typedef BBINT (*_m_Entity_Enemy_Free_m)(struct _m_Entity_Enemy_obj*);
BBINT __m_Entity_Enemy_Free(struct _m_Entity_Enemy_obj*);
struct BBClass__m_Entity_Enemy {
	struct BBClass__m_Entity_Entity*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_Entity_Enemy_Update_m m_Update;
	_m_Entity_Entity_Shoot_m m_Shoot;
	_m_Entity_Entity_SetPosition_fff_m m_SetPosition_fff;
	_m_Entity_Entity_Move_fff_m m_Move_fff;
	_m_Entity_Entity_Move_f_m m_Move_f;
	_m_Entity_Entity_Move_m m_Move;
	_m_Entity_Entity_Turn_fff_m m_Turn_fff;
	_m_Entity_Entity_Turn_f_m m_Turn_f;
	_m_Entity_Entity_Find_TEntity_TTEntity_f f_Find_TEntity_TTEntity;
	_m_Entity_Enemy_Free_m m_Free;
};

struct _m_Entity_Enemy_obj {
	struct BBClass__m_Entity_Enemy* clas;
	BBSTRING __m_entity_entity_name;
	struct _m_minib3d_TMesh_obj* __m_entity_entity_mesh;
	struct _m_Text_TextSprite_obj* __m_entity_entity_nameplate;
	BBFLOAT __m_entity_entity_speed;
	BBFLOAT __m_entity_entity_attackrange;
	BBINT __m_entity_entity_attackspeed;
	BBINT __m_entity_entity_attackdamage;
	struct _m_Entity_DoubleStat_obj* __m_entity_entity_health;
	BBINT __m_entity_entity_attackcd;
	BBFLOAT __m_entity_enemy_ai_speed;
	BBINT __m_entity_enemy_ai_delay;
	BBINT __m_entity_enemy_ai_iswalking;
};
extern struct BBClass__m_Entity_Enemy _m_Entity_Enemy;
void __m_Entity_Projectile_New_TEntityf(struct _m_Entity_Projectile_obj* o,struct _m_Entity_Entity_obj* bbt_entity,BBFLOAT bbt_speed);
struct _m_Entity_Projectile_obj* __m_Entity_Projectile_New_TEntityf_ObjectNew(BBClass * clas,struct _m_Entity_Entity_obj* bbt_entity,BBFLOAT bbt_speed);
void __m_Entity_Projectile_New(struct _m_Entity_Projectile_obj* o);
void __m_Entity_Projectile_Delete(struct _m_Entity_Projectile_obj* o);
typedef BBINT (*_m_Entity_Projectile_Free_m)(struct _m_Entity_Projectile_obj*);
BBINT __m_Entity_Projectile_Free(struct _m_Entity_Projectile_obj*);
typedef BBINT (*_m_Entity_Projectile_Update_m)(struct _m_Entity_Projectile_obj*);
BBINT __m_Entity_Projectile_Update(struct _m_Entity_Projectile_obj*);
struct BBClass__m_Entity_Projectile {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_Entity_Projectile_Free_m m_Free;
	_m_Entity_Projectile_Update_m m_Update;
};

struct _m_Entity_Projectile_obj {
	struct BBClass__m_Entity_Projectile* clas;
	BBINT __m_entity_projectile_age;
	BBINT __m_entity_projectile_maxage;
	BBFLOAT __m_entity_projectile_speed;
	struct _m_minib3d_TMesh_obj* __m_entity_projectile_mesh;
};
extern struct BBClass__m_Entity_Projectile _m_Entity_Projectile;
BBFLOAT _m_Entity_EntityDistance(struct _m_Entity_Entity_obj* bbt_ent1,struct _m_Entity_Entity_obj* bbt_ent2);

#endif
