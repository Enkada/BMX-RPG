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
import "Text.bmx"
BASE_SPEED#=0.05#
BASE_ATTACK_RANGE#=4.00000000#
BASE_ATTACK_CD%=50
BASE_ATTACK_DAMAGE%=10
BASE_HEALTH%=100
BASE_PROJECTILE_RADIUS#=0.2#
TYPE_ENTITY%=1
TYPE_PROJECTILE%=2
Entity^Object{
.name$&
.mesh:TMesh&
.namePlate:TextSprite&
.speed#&
.attackRange#&
.attackSpeed%&
.attackDamage%&
.health:DoubleStat&
.attackCD%&
-New()="__m_Entity_Entity_New"
-New(name$,mesh:TMesh)="_m_Entity_Entity_New_STTMesh"
-Update%()="_m_Entity_Entity_Update"
-Shoot%()="_m_Entity_Entity_Shoot"
-SetPosition%(x#,y#,z#)="_m_Entity_Entity_SetPosition_fff"
-Move%(x#,y#,z#)="_m_Entity_Entity_Move_fff"
-Move%(z#)="_m_Entity_Entity_Move_f"
-Move%()="_m_Entity_Entity_Move"
-Turn%(x#,y#,z#)="_m_Entity_Entity_Turn_fff"
-Turn%(y#)="_m_Entity_Entity_Turn_f"
+Find:Entity(mesh:TEntity)="_m_Entity_Entity_Find_TEntity_TTEntity"
}="_m_Entity_Entity"
DoubleStat^Object{
.actual%&
.maximum%&
-New()="__m_Entity_DoubleStat_New"
-New(maximum%)="_m_Entity_DoubleStat_New_i"
-New(actual%,maximum%)="_m_Entity_DoubleStat_New_ii"
}="_m_Entity_DoubleStat"
Enemy^Entity{
.ai_speed#&
.ai_delay%&
.ai_isWalking%&
-New()="__m_Entity_Enemy_New"
-Delete()="__m_Entity_Enemy_Delete"
-New(name$,mesh:TMesh)="_m_Entity_Enemy_New_STTMesh"
-Update%()="_m_Entity_Enemy_Update"
-Free%()="_m_Entity_Enemy_Free"
}="_m_Entity_Enemy"
Projectile^Object{
.age%&
.maxAge%&
.speed#&
.mesh:TMesh&
-New()="__m_Entity_Projectile_New"
-Delete()="__m_Entity_Projectile_Delete"
-New(entity:Entity,speed#=0.1#)="_m_Entity_Projectile_New_TEntityf"
-Free%()="_m_Entity_Projectile_Free"
-Update%()="_m_Entity_Projectile_Update"
}="_m_Entity_Projectile"
EntityDistance#(ent1:Entity,ent2:Entity)="_m_Entity_EntityDistance"
HOOK_PROJECTILE_HIT_PLAYER%&=mem:p("_m_Entity_HOOK_PROJECTILE_HIT_PLAYER")
player:Entity&=mem:p("_m_Entity_player")
cam:TCamera&=mem:p("_m_Entity_cam")
entityList:TList&=mem:p("_m_Entity_entityList")
projectileList:TList&=mem:p("_m_Entity_projectileList")