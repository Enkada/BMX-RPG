#ifndef BMX_RPG_USERCONTROL_BMX_DEBUG_WIN32_X86_H
#define BMX_RPG_USERCONTROL_BMX_DEBUG_WIN32_X86_H

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
#include "Color.bmx.debug.win32.x86.h"
#include "Text.bmx.debug.win32.x86.h"
int _bb_bmx_rpg_usercontrol();
struct _m_UserControl_UserControl_obj;
struct _m_UserControl_Panel_obj;
struct _m_UserControl_Label_obj;
struct _m_UserControl_ProgressBar_obj;
extern struct brl_linkedlist_TList_obj* _m_UserControl_visibleControlList;
void __m_UserControl_UserControl_New_ii(struct _m_UserControl_UserControl_obj* o,BBINT bbt_x,BBINT bbt_y);
struct _m_UserControl_UserControl_obj* __m_UserControl_UserControl_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y);
void __m_UserControl_UserControl_New(struct _m_UserControl_UserControl_obj* o);
typedef BBINT (*_m_UserControl_UserControl_Update_m)(struct _m_UserControl_UserControl_obj*);
BBINT __m_UserControl_UserControl_Update(struct _m_UserControl_UserControl_obj*);
typedef BBINT (*_m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject__m)(struct _m_UserControl_UserControl_obj*,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT));
BBINT __m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject_(struct _m_UserControl_UserControl_obj*,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT));
typedef BBINT (*_m_UserControl_UserControl_Show_m)(struct _m_UserControl_UserControl_obj*);
BBINT __m_UserControl_UserControl_Show(struct _m_UserControl_UserControl_obj*);
typedef BBINT (*_m_UserControl_UserControl_Hide_m)(struct _m_UserControl_UserControl_obj*);
BBINT __m_UserControl_UserControl_Hide(struct _m_UserControl_UserControl_obj*);
typedef BBINT (*_m_UserControl_UserControl_SetText_S_m)(struct _m_UserControl_UserControl_obj*,BBSTRING);
BBINT __m_UserControl_UserControl_SetText_S(struct _m_UserControl_UserControl_obj*,BBSTRING);
typedef BBINT (*_m_UserControl_UserControl_SetValue_i_m)(struct _m_UserControl_UserControl_obj*,BBINT);
BBINT __m_UserControl_UserControl_SetValue_i(struct _m_UserControl_UserControl_obj*,BBINT);
typedef BBINT (*_m_UserControl_UserControl_SetFont_TTImageFont_m)(struct _m_UserControl_UserControl_obj*,struct brl_max2d_imagefont_TImageFont_obj*);
BBINT __m_UserControl_UserControl_SetFont_TTImageFont(struct _m_UserControl_UserControl_obj*,struct brl_max2d_imagefont_TImageFont_obj*);
typedef BBINT (*_m_UserControl_UserControl_SetForeground_TColor_m)(struct _m_UserControl_UserControl_obj*,struct _m_Color_Color_obj*);
BBINT __m_UserControl_UserControl_SetForeground_TColor(struct _m_UserControl_UserControl_obj*,struct _m_Color_Color_obj*);
typedef BBINT (*_m_UserControl_UserControl_SetBackground_TColor_m)(struct _m_UserControl_UserControl_obj*,struct _m_Color_Color_obj*);
BBINT __m_UserControl_UserControl_SetBackground_TColor(struct _m_UserControl_UserControl_obj*,struct _m_Color_Color_obj*);
typedef BBINT (*_m_UserControl_UserControl_SetColors_TColorTColor_m)(struct _m_UserControl_UserControl_obj*,struct _m_Color_Color_obj*,struct _m_Color_Color_obj*);
BBINT __m_UserControl_UserControl_SetColors_TColorTColor(struct _m_UserControl_UserControl_obj*,struct _m_Color_Color_obj*,struct _m_Color_Color_obj*);
typedef BBINT (*_m_UserControl_UserControl_SetSize_ii_m)(struct _m_UserControl_UserControl_obj*,BBINT,BBINT);
BBINT __m_UserControl_UserControl_SetSize_ii(struct _m_UserControl_UserControl_obj*,BBINT,BBINT);
typedef BBINT (*_m_UserControl_UserControl_Draw_m)(struct _m_UserControl_UserControl_obj*);
BBINT __m_UserControl_UserControl_Draw(struct _m_UserControl_UserControl_obj*);
struct BBClass__m_UserControl_UserControl {
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
	_m_UserControl_UserControl_Update_m m_Update;
	_m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject__m m_AddHook_F_iTObjectTObject_TObject_;
	_m_UserControl_UserControl_Show_m m_Show;
	_m_UserControl_UserControl_Hide_m m_Hide;
	_m_UserControl_UserControl_SetText_S_m m_SetText_S;
	_m_UserControl_UserControl_SetValue_i_m m_SetValue_i;
	_m_UserControl_UserControl_SetFont_TTImageFont_m m_SetFont_TTImageFont;
	_m_UserControl_UserControl_SetForeground_TColor_m m_SetForeground_TColor;
	_m_UserControl_UserControl_SetBackground_TColor_m m_SetBackground_TColor;
	_m_UserControl_UserControl_SetColors_TColorTColor_m m_SetColors_TColorTColor;
	_m_UserControl_UserControl_SetSize_ii_m m_SetSize_ii;
	_m_UserControl_UserControl_Draw_m m_Draw;
};

struct _m_UserControl_UserControl_obj {
	struct BBClass__m_UserControl_UserControl* clas;
	BBINT __m_usercontrol_usercontrol_x;
	BBINT __m_usercontrol_usercontrol_y;
	BBINT __m_usercontrol_usercontrol_w;
	BBINT __m_usercontrol_usercontrol_h;
	BBSTRING __m_usercontrol_usercontrol_text;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_foreground;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_background;
	struct brl_max2d_imagefont_TImageFont_obj* __m_usercontrol_usercontrol_font;
	BBINT __m_usercontrol_usercontrol_hookid;
	BBINT __m_usercontrol_usercontrol_value;
};
extern struct BBClass__m_UserControl_UserControl _m_UserControl_UserControl;
void __m_UserControl_Panel_New_iiii(struct _m_UserControl_Panel_obj* o,BBINT bbt_x2,BBINT bbt_y2,BBINT bbt_w,BBINT bbt_h);
struct _m_UserControl_Panel_obj* __m_UserControl_Panel_New_iiii_ObjectNew(BBClass * clas,BBINT bbt_x2,BBINT bbt_y2,BBINT bbt_w,BBINT bbt_h);
void __m_UserControl_Panel_New_ii(struct _m_UserControl_Panel_obj* o,BBINT bbt_x,BBINT bbt_y);
struct _m_UserControl_Panel_obj* __m_UserControl_Panel_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y);
void __m_UserControl_Panel_New(struct _m_UserControl_Panel_obj* o);
typedef BBINT (*_m_UserControl_Panel_Draw_m)(struct _m_UserControl_Panel_obj*);
BBINT __m_UserControl_Panel_Draw(struct _m_UserControl_Panel_obj*);
struct BBClass__m_UserControl_Panel {
	struct BBClass__m_UserControl_UserControl*  super;
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
	_m_UserControl_UserControl_Update_m m_Update;
	_m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject__m m_AddHook_F_iTObjectTObject_TObject_;
	_m_UserControl_UserControl_Show_m m_Show;
	_m_UserControl_UserControl_Hide_m m_Hide;
	_m_UserControl_UserControl_SetText_S_m m_SetText_S;
	_m_UserControl_UserControl_SetValue_i_m m_SetValue_i;
	_m_UserControl_UserControl_SetFont_TTImageFont_m m_SetFont_TTImageFont;
	_m_UserControl_UserControl_SetForeground_TColor_m m_SetForeground_TColor;
	_m_UserControl_UserControl_SetBackground_TColor_m m_SetBackground_TColor;
	_m_UserControl_UserControl_SetColors_TColorTColor_m m_SetColors_TColorTColor;
	_m_UserControl_UserControl_SetSize_ii_m m_SetSize_ii;
	_m_UserControl_Panel_Draw_m m_Draw;
};

struct _m_UserControl_Panel_obj {
	struct BBClass__m_UserControl_Panel* clas;
	BBINT __m_usercontrol_usercontrol_x;
	BBINT __m_usercontrol_usercontrol_y;
	BBINT __m_usercontrol_usercontrol_w;
	BBINT __m_usercontrol_usercontrol_h;
	BBSTRING __m_usercontrol_usercontrol_text;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_foreground;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_background;
	struct brl_max2d_imagefont_TImageFont_obj* __m_usercontrol_usercontrol_font;
	BBINT __m_usercontrol_usercontrol_hookid;
	BBINT __m_usercontrol_usercontrol_value;
};
extern struct BBClass__m_UserControl_Panel _m_UserControl_Panel;
void __m_UserControl_Label_New_iiS(struct _m_UserControl_Label_obj* o,BBINT bbt_x3,BBINT bbt_y3,BBSTRING bbt_text);
struct _m_UserControl_Label_obj* __m_UserControl_Label_New_iiS_ObjectNew(BBClass * clas,BBINT bbt_x3,BBINT bbt_y3,BBSTRING bbt_text);
void __m_UserControl_Label_New_ii(struct _m_UserControl_Label_obj* o,BBINT bbt_x,BBINT bbt_y);
struct _m_UserControl_Label_obj* __m_UserControl_Label_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y);
void __m_UserControl_Label_New(struct _m_UserControl_Label_obj* o);
typedef BBINT (*_m_UserControl_Label_Draw_m)(struct _m_UserControl_Label_obj*);
BBINT __m_UserControl_Label_Draw(struct _m_UserControl_Label_obj*);
struct BBClass__m_UserControl_Label {
	struct BBClass__m_UserControl_UserControl*  super;
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
	_m_UserControl_UserControl_Update_m m_Update;
	_m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject__m m_AddHook_F_iTObjectTObject_TObject_;
	_m_UserControl_UserControl_Show_m m_Show;
	_m_UserControl_UserControl_Hide_m m_Hide;
	_m_UserControl_UserControl_SetText_S_m m_SetText_S;
	_m_UserControl_UserControl_SetValue_i_m m_SetValue_i;
	_m_UserControl_UserControl_SetFont_TTImageFont_m m_SetFont_TTImageFont;
	_m_UserControl_UserControl_SetForeground_TColor_m m_SetForeground_TColor;
	_m_UserControl_UserControl_SetBackground_TColor_m m_SetBackground_TColor;
	_m_UserControl_UserControl_SetColors_TColorTColor_m m_SetColors_TColorTColor;
	_m_UserControl_UserControl_SetSize_ii_m m_SetSize_ii;
	_m_UserControl_Label_Draw_m m_Draw;
};

struct _m_UserControl_Label_obj {
	struct BBClass__m_UserControl_Label* clas;
	BBINT __m_usercontrol_usercontrol_x;
	BBINT __m_usercontrol_usercontrol_y;
	BBINT __m_usercontrol_usercontrol_w;
	BBINT __m_usercontrol_usercontrol_h;
	BBSTRING __m_usercontrol_usercontrol_text;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_foreground;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_background;
	struct brl_max2d_imagefont_TImageFont_obj* __m_usercontrol_usercontrol_font;
	BBINT __m_usercontrol_usercontrol_hookid;
	BBINT __m_usercontrol_usercontrol_value;
};
extern struct BBClass__m_UserControl_Label _m_UserControl_Label;
void __m_UserControl_ProgressBar_New_iiiii(struct _m_UserControl_ProgressBar_obj* o,BBINT bbt_x4,BBINT bbt_y4,BBINT bbt_w2,BBINT bbt_h2,BBINT bbt_maximum);
struct _m_UserControl_ProgressBar_obj* __m_UserControl_ProgressBar_New_iiiii_ObjectNew(BBClass * clas,BBINT bbt_x4,BBINT bbt_y4,BBINT bbt_w2,BBINT bbt_h2,BBINT bbt_maximum);
void __m_UserControl_ProgressBar_New_ii(struct _m_UserControl_ProgressBar_obj* o,BBINT bbt_x,BBINT bbt_y);
struct _m_UserControl_ProgressBar_obj* __m_UserControl_ProgressBar_New_ii_ObjectNew(BBClass * clas,BBINT bbt_x,BBINT bbt_y);
void __m_UserControl_ProgressBar_New(struct _m_UserControl_ProgressBar_obj* o);
typedef BBINT (*_m_UserControl_ProgressBar_Draw_m)(struct _m_UserControl_ProgressBar_obj*);
BBINT __m_UserControl_ProgressBar_Draw(struct _m_UserControl_ProgressBar_obj*);
struct BBClass__m_UserControl_ProgressBar {
	struct BBClass__m_UserControl_UserControl*  super;
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
	_m_UserControl_UserControl_Update_m m_Update;
	_m_UserControl_UserControl_AddHook_F_iTObjectTObject_TObject__m m_AddHook_F_iTObjectTObject_TObject_;
	_m_UserControl_UserControl_Show_m m_Show;
	_m_UserControl_UserControl_Hide_m m_Hide;
	_m_UserControl_UserControl_SetText_S_m m_SetText_S;
	_m_UserControl_UserControl_SetValue_i_m m_SetValue_i;
	_m_UserControl_UserControl_SetFont_TTImageFont_m m_SetFont_TTImageFont;
	_m_UserControl_UserControl_SetForeground_TColor_m m_SetForeground_TColor;
	_m_UserControl_UserControl_SetBackground_TColor_m m_SetBackground_TColor;
	_m_UserControl_UserControl_SetColors_TColorTColor_m m_SetColors_TColorTColor;
	_m_UserControl_UserControl_SetSize_ii_m m_SetSize_ii;
	_m_UserControl_ProgressBar_Draw_m m_Draw;
};

struct _m_UserControl_ProgressBar_obj {
	struct BBClass__m_UserControl_ProgressBar* clas;
	BBINT __m_usercontrol_usercontrol_x;
	BBINT __m_usercontrol_usercontrol_y;
	BBINT __m_usercontrol_usercontrol_w;
	BBINT __m_usercontrol_usercontrol_h;
	BBSTRING __m_usercontrol_usercontrol_text;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_foreground;
	struct _m_Color_Color_obj* __m_usercontrol_usercontrol_background;
	struct brl_max2d_imagefont_TImageFont_obj* __m_usercontrol_usercontrol_font;
	BBINT __m_usercontrol_usercontrol_hookid;
	BBINT __m_usercontrol_usercontrol_value;
	BBFLOAT __m_usercontrol_progressbar_maximum;
};
extern struct BBClass__m_UserControl_ProgressBar _m_UserControl_ProgressBar;

#endif
