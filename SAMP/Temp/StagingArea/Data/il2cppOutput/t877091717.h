#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3781852593;
struct t3875263730;
struct t2956870243;
struct t190145395;

#include "t1314328499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t877091717  : public t1314328499
{
public:
	Il2CppObject* f5;
	bool f6;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t877091717, f5)); }
	inline Il2CppObject* fg5() const { return f5; }
	inline Il2CppObject** fag5() { return &f5; }
	inline void fs5(Il2CppObject* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t877091717, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

struct t877091717_SFs
{
public:
	t3875263730 * f7;
	t2956870243* f8;
	t190145395 * f9;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t877091717_SFs, f7)); }
	inline t3875263730 * fg7() const { return f7; }
	inline t3875263730 ** fag7() { return &f7; }
	inline void fs7(t3875263730 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t877091717_SFs, f8)); }
	inline t2956870243* fg8() const { return f8; }
	inline t2956870243** fag8() { return &f8; }
	inline void fs8(t2956870243* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t877091717_SFs, f9)); }
	inline t190145395 * fg9() const { return f9; }
	inline t190145395 ** fag9() { return &f9; }
	inline void fs9(t190145395 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
