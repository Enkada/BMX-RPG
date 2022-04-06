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
import "Color.bmx"
TextSprite^Object{
.sprite:TSprite&
.font:TImageFont&
-New()="__m_Text_TextSprite_New"
-New(text$)="_m_Text_TextSprite_New_S"
-New(mesh:TMesh,name$,font:TImageFont="bbNullObject")="_m_Text_TextSprite_New_TTMeshSTTImageFont"
-SetText%(text$,w%=1000,scale#=5.00000000#)="_m_Text_TextSprite_SetText_Sif"
}="_m_Text_TextSprite"
Split:TList(str$,separator$)="_m_Text_Split"
DrawText%(text$,x%,y%,center%)="_m_Text_DrawText"
TextRect%(text$,x%,y%,w%,center%=0)="_m_Text_TextRect"
FONT_COURIER_20:TImageFont&=mem:p("_m_Text_FONT_COURIER_20")
FONT_COURIER_48:TImageFont&=mem:p("_m_Text_FONT_COURIER_48")