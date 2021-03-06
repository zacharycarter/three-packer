/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\dropbox\2015\nim\packer\example\nimcache\sdl2_image.o c:\dropbox\2015\nim\packer\example\nimcache\sdl2_image.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct sdlversion132554 sdlversion132554;
typedef struct surface132715 surface132715;
typedef struct rwops141244 rwops141244;
typedef struct textureptrHEX3Aobjecttype132579 textureptrHEX3Aobjecttype132579;
typedef struct rendererptrHEX3Aobjecttype132578 rendererptrHEX3Aobjecttype132578;
typedef struct pixelformat132709 pixelformat132709;
typedef struct rect132277 rect132277;
typedef struct blitmapptrHEX3Aobjecttype132757 blitmapptrHEX3Aobjecttype132757;
typedef struct mem141246 mem141246;
typedef struct palette132707 palette132707;
typedef struct color132705 color132705;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(sdlversion132554*, TY146215) (void);
typedef N_CDECL_PTR(int, TY146221) (int flags);
typedef N_CDECL_PTR(void, TY146227) (void);
typedef N_CDECL_PTR(surface132715*, TY146232) (rwops141244* src, int freesrc, NCSTRING type_146235);
typedef N_CDECL_PTR(surface132715*, TY146240) (NCSTRING file);
typedef N_CDECL_PTR(surface132715*, TY146246) (rwops141244* src, int freesrc);
typedef N_CDECL_PTR(textureptrHEX3Aobjecttype132579*, TY146253) (rendererptrHEX3Aobjecttype132578* renderer, NCSTRING file);
typedef N_CDECL_PTR(textureptrHEX3Aobjecttype132579*, TY146260) (rendererptrHEX3Aobjecttype132578* renderer, rwops141244* src, int freesrc);
typedef N_CDECL_PTR(textureptrHEX3Aobjecttype132579*, TY146268) (rendererptrHEX3Aobjecttype132578* renderer, rwops141244* src, int freesrc, NCSTRING type_146272);
typedef N_CDECL_PTR(int, TY146277) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146283) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146289) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146295) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146301) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146307) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146313) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146319) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146325) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146331) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146337) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146343) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146349) (rwops141244* src);
typedef N_CDECL_PTR(int, TY146355) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146361) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146367) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146373) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146379) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146385) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146391) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146397) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146403) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146409) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146415) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146421) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146427) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146433) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146439) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146445) (rwops141244* src);
typedef N_CDECL_PTR(surface132715*, TY146451) (NCSTRING* xpm);
struct  sdlversion132554  {
NU8 Major;
NU8 Minor;
NU8 Patch;
};
struct rect132277 {
int Field0;
int Field1;
int Field2;
int Field3;
};
struct  surface132715  {
NU32 Flags;
pixelformat132709* Format;
NI32 W;
NI32 H;
NI32 Pitch;
void* Pixels;
void* Userdata;
NI32 Locked;
void* Lockdata;
rect132277 Cliprect;
blitmapptrHEX3Aobjecttype132757* Map;
int Refcount;
};
typedef struct {
N_NIMCALL_PTR(NI64, ClPrc) (rwops141244* context, void* ClEnv);
void* ClEnv;
} TY141272;
typedef struct {
N_NIMCALL_PTR(NI64, ClPrc) (rwops141244* context, NI64 offset, int whence, void* ClEnv);
void* ClEnv;
} TY141276;
typedef struct {
N_NIMCALL_PTR(size_t, ClPrc) (rwops141244* context, void* destination, size_t size, size_t maxnum, void* ClEnv);
void* ClEnv;
} TY141282;
typedef struct {
N_NIMCALL_PTR(int, ClPrc) (rwops141244* context, void* ClEnv);
void* ClEnv;
} TY141296;
struct  mem141246  {
NU8* Base;
NU8* Here;
NU8* Stop;
};
struct  rwops141244  {
TY141272 Size;
TY141276 Seek;
TY141282 Read;
TY141282 Write;
TY141296 Close;
int Kind;
mem141246 Mem;
};
struct  textureptrHEX3Aobjecttype132579  {
char dummy;
};
struct  rendererptrHEX3Aobjecttype132578  {
char dummy;
};
typedef NU8 TY132739[2];
struct  pixelformat132709  {
NU32 Format;
palette132707* Palette;
NU8 Bitsperpixel;
NU8 Bytesperpixel;
TY132739 Padding;
NU32 Rmask;
NU32 Gmask;
NU32 Bmask;
NU32 Amask;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
int Refcount;
pixelformat132709* Next;
};
struct  blitmapptrHEX3Aobjecttype132757  {
char dummy;
};
struct  palette132707  {
int Ncolors;
color132705* Colors;
NU32 Version;
int Refcount;
};
struct color132705 {
NU8 Field0;
NU8 Field1;
NU8 Field2;
NU8 Field3;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
STRING_LITERAL(TMP359, "SDL2_image.dll", 14);
STRING_LITERAL(TMP360, "SDL2_image.dll", 14);
static void* TMP358;
TY146215 Dl_146214;
TY146221 Dl_146220;
TY146227 Dl_146226;
TY146232 Dl_146231;
TY146240 Dl_146239;
TY146246 Dl_146245;
TY146253 Dl_146252;
TY146260 Dl_146259;
TY146268 Dl_146267;
TY146277 Dl_146276;
TY146283 Dl_146282;
TY146289 Dl_146288;
TY146295 Dl_146294;
TY146301 Dl_146300;
TY146307 Dl_146306;
TY146313 Dl_146312;
TY146319 Dl_146318;
TY146325 Dl_146324;
TY146331 Dl_146330;
TY146337 Dl_146336;
TY146343 Dl_146342;
TY146349 Dl_146348;
TY146355 Dl_146354;
TY146361 Dl_146360;
TY146367 Dl_146366;
TY146373 Dl_146372;
TY146379 Dl_146378;
TY146385 Dl_146384;
TY146391 Dl_146390;
TY146397 Dl_146396;
TY146403 Dl_146402;
TY146409 Dl_146408;
TY146415 Dl_146414;
TY146421 Dl_146420;
TY146427 Dl_146426;
TY146433 Dl_146432;
TY146439 Dl_146438;
TY146445 Dl_146444;
TY146451 Dl_146450;
extern TFrame* frameptr_16242;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16242 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16242;
	frameptr_16242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_18801();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16242 = (*frameptr_16242).prev;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_imageInit)(void) {
	nimfr("image", "image.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_imageDatInit)(void) {
if (!((TMP358 = nimLoadLibrary((NimStringDesc*) &TMP359))
)) nimLoadLibraryError((NimStringDesc*) &TMP360);
	Dl_146214 = (TY146215) nimGetProcAddr(TMP358, "IMG_Linked_Version");
	Dl_146220 = (TY146221) nimGetProcAddr(TMP358, "IMG_Init");
	Dl_146226 = (TY146227) nimGetProcAddr(TMP358, "IMG_Quit");
	Dl_146231 = (TY146232) nimGetProcAddr(TMP358, "IMG_LoadTyped_RW");
	Dl_146239 = (TY146240) nimGetProcAddr(TMP358, "IMG_Load");
	Dl_146245 = (TY146246) nimGetProcAddr(TMP358, "IMG_Load_RW");
	Dl_146252 = (TY146253) nimGetProcAddr(TMP358, "IMG_LoadTexture");
	Dl_146259 = (TY146260) nimGetProcAddr(TMP358, "IMG_LoadTexture_RW");
	Dl_146267 = (TY146268) nimGetProcAddr(TMP358, "IMG_LoadTextureTyped_RW");
	Dl_146276 = (TY146277) nimGetProcAddr(TMP358, "IMG_isICO");
	Dl_146282 = (TY146283) nimGetProcAddr(TMP358, "IMG_isCUR");
	Dl_146288 = (TY146289) nimGetProcAddr(TMP358, "IMG_isBMP");
	Dl_146294 = (TY146295) nimGetProcAddr(TMP358, "IMG_isGIF");
	Dl_146300 = (TY146301) nimGetProcAddr(TMP358, "IMG_isJPG");
	Dl_146306 = (TY146307) nimGetProcAddr(TMP358, "IMG_isLBM");
	Dl_146312 = (TY146313) nimGetProcAddr(TMP358, "IMG_isPCX");
	Dl_146318 = (TY146319) nimGetProcAddr(TMP358, "IMG_isPNG");
	Dl_146324 = (TY146325) nimGetProcAddr(TMP358, "IMG_isPNM");
	Dl_146330 = (TY146331) nimGetProcAddr(TMP358, "IMG_isTIF");
	Dl_146336 = (TY146337) nimGetProcAddr(TMP358, "IMG_isXCF");
	Dl_146342 = (TY146343) nimGetProcAddr(TMP358, "IMG_isXPM");
	Dl_146348 = (TY146349) nimGetProcAddr(TMP358, "IMG_isXV");
	Dl_146354 = (TY146355) nimGetProcAddr(TMP358, "IMG_isWEBP");
	Dl_146360 = (TY146361) nimGetProcAddr(TMP358, "IMG_LoadICO_RW");
	Dl_146366 = (TY146367) nimGetProcAddr(TMP358, "IMG_LoadCUR_RW");
	Dl_146372 = (TY146373) nimGetProcAddr(TMP358, "IMG_LoadBMP_RW");
	Dl_146378 = (TY146379) nimGetProcAddr(TMP358, "IMG_LoadGIF_RW");
	Dl_146384 = (TY146385) nimGetProcAddr(TMP358, "IMG_LoadJPG_RW");
	Dl_146390 = (TY146391) nimGetProcAddr(TMP358, "IMG_LoadLBM_RW");
	Dl_146396 = (TY146397) nimGetProcAddr(TMP358, "IMG_LoadPCX_RW");
	Dl_146402 = (TY146403) nimGetProcAddr(TMP358, "IMG_LoadPNG_RW");
	Dl_146408 = (TY146409) nimGetProcAddr(TMP358, "IMG_LoadPNM_RW");
	Dl_146414 = (TY146415) nimGetProcAddr(TMP358, "IMG_LoadTGA_RW");
	Dl_146420 = (TY146421) nimGetProcAddr(TMP358, "IMG_LoadTIF_RW");
	Dl_146426 = (TY146427) nimGetProcAddr(TMP358, "IMG_LoadXCF_RW");
	Dl_146432 = (TY146433) nimGetProcAddr(TMP358, "IMG_LoadXPM_RW");
	Dl_146438 = (TY146439) nimGetProcAddr(TMP358, "IMG_LoadXV_RW");
	Dl_146444 = (TY146445) nimGetProcAddr(TMP358, "IMG_LoadWEBP_RW");
	Dl_146450 = (TY146451) nimGetProcAddr(TMP358, "IMG_ReadXPMFromArray");
}

