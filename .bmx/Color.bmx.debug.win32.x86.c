#include "Color.bmx.debug.win32.x86.h"
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
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void __m_Color_Color_New_iiif(struct _m_Color_Color_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b,BBFLOAT bbt_a) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Color_Color;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_r = 0;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_g = 0;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_b = 0;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_a = .00000000f;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"i",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				"i",
				.var_address=&bbt_g
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				"i",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"a",
				"f",
				.var_address=&bbt_a
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x31709623ee728e54, 8, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_r =bbt_r;
	struct BBDebugStm __stmt_1 = {0x31709623ee728e54, 9, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_g =bbt_g;
	struct BBDebugStm __stmt_2 = {0x31709623ee728e54, 10, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_b =bbt_b;
	struct BBDebugStm __stmt_3 = {0x31709623ee728e54, 11, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_a =bbt_a;
	bbOnDebugLeaveScope();
}
struct _m_Color_Color_obj* __m_Color_Color_New_iiif_ObjectNew(BBClass * clas,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b,BBFLOAT bbt_a) {
	struct _m_Color_Color_obj* o = bbObjectAtomicNewNC(clas);
	__m_Color_Color_New_iiif(o, bbt_r, bbt_g, bbt_b, bbt_a);
	return o;
}
void __m_Color_Color_New(struct _m_Color_Color_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Color_Color;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_r = 0;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_g = 0;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_b = 0;
	((struct _m_Color_Color_obj*)bbNullObjectTest(o))->__m_color_color_a = .00000000f;
}
struct _m_Color_Color_obj* _m_Color_Color_Red;
struct _m_Color_Color_obj* _m_Color_Color_White;
struct _m_Color_Color_obj* _m_Color_Color_Black;
struct BBDebugScope_9 _m_Color_Color_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Color",
	{
		{
			BBDEBUGDECL_FIELD,
			"r",
			"i",
			.field_offset=offsetof(struct _m_Color_Color_obj,__m_color_color_r)
		},
		{
			BBDEBUGDECL_FIELD,
			"g",
			"i",
			.field_offset=offsetof(struct _m_Color_Color_obj,__m_color_color_g)
		},
		{
			BBDEBUGDECL_FIELD,
			"b",
			"i",
			.field_offset=offsetof(struct _m_Color_Color_obj,__m_color_color_b)
		},
		{
			BBDEBUGDECL_FIELD,
			"a",
			"f",
			.field_offset=offsetof(struct _m_Color_Color_obj,__m_color_color_a)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"Red",
			":Color",
			.var_address=(void*)&_m_Color_Color_Red
		},
		{
			BBDEBUGDECL_GLOBAL,
			"White",
			":Color",
			.var_address=(void*)&_m_Color_Color_White
		},
		{
			BBDEBUGDECL_GLOBAL,
			"Black",
			":Color",
			.var_address=(void*)&_m_Color_Color_Black
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Color_Color_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,i,f):Color",
			.var_address=(void*)&__m_Color_Color_New_iiif
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Color_Color _m_Color_Color={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_Color_Color_scope,
	sizeof(struct _m_Color_Color_obj),
	(void (*)(BBOBJECT))__m_Color_Color_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Color_Color_obj,__m_color_color_a) - offsetof(struct _m_Color_Color_obj,__m_color_color_r) + sizeof(BBFLOAT)
	,0
	,offsetof(struct _m_Color_Color_obj,__m_color_color_r)
};

BBINT _m_Color_SetColor(struct _m_Color_Color_obj* bbt_color){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
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
	struct BBDebugStm __stmt_0 = {0x31709623ee728e54, 20, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_SetAlpha(((struct _m_Color_Color_obj*)bbNullObjectTest(bbt_color))->__m_color_color_a );
	struct BBDebugStm __stmt_1 = {0x31709623ee728e54, 21, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_SetBlend(3);
	struct BBDebugStm __stmt_2 = {0x31709623ee728e54, 22, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_SetColor(((struct _m_Color_Color_obj*)bbNullObjectTest(bbt_color))->__m_color_color_r ,((struct _m_Color_Color_obj*)bbNullObjectTest(bbt_color))->__m_color_color_g ,((struct _m_Color_Color_obj*)bbNullObjectTest(bbt_color))->__m_color_color_b );
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_bmx_rpg_color_inited = 0;
int _bb_bmx_rpg_color(){
	if (!_bb_bmx_rpg_color_inited) {
		_bb_bmx_rpg_color_inited = 1;
		GC_add_roots(&_m_Color_Color_Red, &_m_Color_Color_Black + 1);
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
		bbObjectRegisterType((BBCLASS)&_m_Color_Color);
		bbRegisterSource(0x31709623ee728e54, "C:/Users/Kirill/Desktop/BMX RPG/Color.bmx");
		bbRegisterSource(0x4a404f1ae2c72fb0, "F:/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x5647aa7153e648b8, "F:/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		_m_Color_Color_Red=(&bbNullObject);
		_m_Color_Color_White=(&bbNullObject);
		_m_Color_Color_Black=(&bbNullObject);
		_m_Color_Color_Red=(struct _m_Color_Color_obj*)__m_Color_Color_New_iiif_ObjectNew((struct _m_Color_Color_obj*)&_m_Color_Color,255,0,0,1.00000000f);
		_m_Color_Color_White=(struct _m_Color_Color_obj*)__m_Color_Color_New_iiif_ObjectNew((struct _m_Color_Color_obj*)&_m_Color_Color,255,255,255,1.00000000f);
		_m_Color_Color_Black=(struct _m_Color_Color_obj*)__m_Color_Color_New_iiif_ObjectNew((struct _m_Color_Color_obj*)&_m_Color_Color,0,0,0,1.00000000f);
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"Color",
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}