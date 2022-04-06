import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.base64
import brl.basic
import brl.bmploader
import brl.bytebuffer
import brl.clipboard
import brl.collections
import brl.d3d7max2d
import brl.d3d9max2d
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.map
import brl.matrix
import brl.maxlua
import brl.maxunit
import brl.maxutil
import brl.objectlist
import brl.oggloader
import brl.openalaudio
import brl.platform
import brl.pngloader
import brl.quaternion
import brl.randomdefault
import brl.retro
import brl.tgaloader
import brl.threadpool
import brl.timer
import brl.timerdefault
import brl.uuid
import brl.volumes
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.glad
import pub.nfd
import pub.nx
import pub.opengles
import pub.opengles3
import pub.vulkan
import pub.xmmintrin
import "includes/minib3d.bmx"
import "Entity.bmx"
import "UserControl.bmx"
UpdatePlayerHealth:Object(id%,data:Object,context:Object)="_m_zdarova_UpdatePlayerHealth"
Controls%()="_m_zdarova_Controls"
UpdateProjectiles%()="_m_zdarova_UpdateProjectiles"
UpdateEntities%()="_m_zdarova_UpdateEntities"
UpdateVisibleControl%()="_m_zdarova_UpdateVisibleControl"
Draw2D%()="_m_zdarova_Draw2D"
ShowDebugInfo%()="_m_zdarova_ShowDebugInfo"
HandleEvents%()="_m_zdarova_HandleEvents"
width%&=mem:p("_m_zdarova_width")
height%&=mem:p("_m_zdarova_height")
depth%&=mem:p("_m_zdarova_depth")
mode%&=mem:p("_m_zdarova_mode")
isCameraLocked%&=mem:p("_m_zdarova_isCameraLocked")
camPivot:TPivot&=mem:p("_m_zdarova_camPivot")
old_ms%&=mem:p("_m_zdarova_old_ms")
renders%&=mem:p("_m_zdarova_renders")
fps%&=mem:p("_m_zdarova_fps")
player_panelHealth:Panel&=mem:p("_m_zdarova_player_panelHealth")
player_labelHealth:Label&=mem:p("_m_zdarova_player_labelHealth")
player_barHealth:ProgressBar&=mem:p("_m_zdarova_player_barHealth")