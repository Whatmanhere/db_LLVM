#define LUAVM_SHUFFLE3(s, a1, a2, a3) a3 s a2 s a1
#define LUAVM_SHUFFLE4(s, a1, a2, a3, a4) a4 s a2 s a3 s a1
#define LUAVM_SHUFFLE5(s, a1, a2, a3, a4, a5) a5 s a2 s a4 s a3 s a1
#define LUAVM_SHUFFLE6(s, a1, a2, a3, a4, a5, a6) a2 s a6 s a4 s a1 s a5 s a3
#define LUAVM_SHUFFLE7(s, a1, a2, a3, a4, a5, a6, a7) a2 s a3 s a4 s a1 s a5 s a6 s a7
#define LUAVM_SHUFFLE8(s, a1, a2, a3, a4, a5, a6, a7, a8) a8 s a2 s a7 s a1 s a4 s a6 s a5 s a3
#define LUAVM_SHUFFLE9(s, a1, a2, a3, a4, a5, a6, a7, a8, a9) a4 s a5 s a9 s a8 s a7 s a6 s a1 s a3 s a2
