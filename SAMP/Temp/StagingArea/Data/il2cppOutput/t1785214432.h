#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t190145395;

#include "t2367485949.h"
#include "t2248092307.h"
#include "t902094975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1785214432  : public t2367485949
{
public:
	bool f6;
	bool f7;
	bool f8;
	int32_t f9;
	int32_t f10;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1785214432, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1785214432, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1785214432, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1785214432, f9)); }
	inline int32_t fg9() const { return f9; }
	inline int32_t* fag9() { return &f9; }
	inline void fs9(int32_t value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1785214432, f10)); }
	inline int32_t fg10() const { return f10; }
	inline int32_t* fag10() { return &f10; }
	inline void fs10(int32_t value)
	{
		f10 = value;
	}
};

struct t1785214432_SFs
{
public:
	t190145395 * f11;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1785214432_SFs, f11)); }
	inline t190145395 * fg11() const { return f11; }
	inline t190145395 ** fag11() { return &f11; }
	inline void fs11(t190145395 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
