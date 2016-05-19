#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t571717291;
struct t3218765880;
struct t3253021914;
struct t886430410;

#include "t3253021914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3562928333  : public t3253021914
{
public:
	t571717291 * f6;
	t3218765880 * f7;
	t3253021914 * f8;
	bool f9;
	Il2CppObject * f10;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3562928333, f6)); }
	inline t571717291 * fg6() const { return f6; }
	inline t571717291 ** fag6() { return &f6; }
	inline void fs6(t571717291 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3562928333, f7)); }
	inline t3218765880 * fg7() const { return f7; }
	inline t3218765880 ** fag7() { return &f7; }
	inline void fs7(t3218765880 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3562928333, f8)); }
	inline t3253021914 * fg8() const { return f8; }
	inline t3253021914 ** fag8() { return &f8; }
	inline void fs8(t3253021914 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3562928333, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3562928333, f10)); }
	inline Il2CppObject * fg10() const { return f10; }
	inline Il2CppObject ** fag10() { return &f10; }
	inline void fs10(Il2CppObject * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
