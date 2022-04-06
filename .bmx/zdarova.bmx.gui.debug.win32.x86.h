#ifndef BMX_RPG_ZDAROVA_BMX_GUI_DEBUG_WIN32_X86_H
#define BMX_RPG_ZDAROVA_BMX_GUI_DEBUG_WIN32_X86_H

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
#include "Entity.bmx.debug.win32.x86.h"
#include "UserControl.bmx.debug.win32.x86.h"
int _bb_main();
extern BBINT _m_zdarova_width;
extern BBINT _m_zdarova_height;
extern BBINT _m_zdarova_depth;
extern BBINT _m_zdarova_mode;
extern BBINT _m_zdarova_isCameraLocked;
extern struct _m_minib3d_TPivot_obj* _m_zdarova_camPivot;
extern BBINT _m_zdarova_old_ms;
extern BBINT _m_zdarova_renders;
extern BBINT _m_zdarova_fps;
extern struct _m_UserControl_Panel_obj* _m_zdarova_player_panelHealth;
extern struct _m_UserControl_Label_obj* _m_zdarova_player_labelHealth;
extern struct _m_UserControl_ProgressBar_obj* _m_zdarova_player_barHealth;
BBOBJECT _m_zdarova_UpdatePlayerHealth(BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context);
BBINT _m_zdarova_Controls();
BBINT _m_zdarova_UpdateProjectiles();
BBINT _m_zdarova_UpdateEntities();
BBINT _m_zdarova_UpdateVisibleControl();
BBINT _m_zdarova_Draw2D();
BBINT _m_zdarova_ShowDebugInfo();
BBINT _m_zdarova_HandleEvents();

#endif
