#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3228139021;
struct t3705263098;
struct t3592213601;
struct t91357118;
struct t190145395;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3592213601  : public Il2CppObject
{
public:
	t3705263098 * f1;
	t3592213601 * f2;
	t91357118 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3592213601, f1)); }
	inline t3705263098 * fg1() const { return f1; }
	inline t3705263098 ** fag1() { return &f1; }
	inline void fs1(t3705263098 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3592213601, f2)); }
	inline t3592213601 * fg2() const { return f2; }
	inline t3592213601 ** fag2() { return &f2; }
	inline void fs2(t3592213601 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3592213601, f3)); }
	inline t91357118 * fg3() const { return f3; }
	inline t91357118 ** fag3() { return &f3; }
	inline void fs3(t91357118 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t3592213601_SFs
{
public:
	t3228139021 * f0;
	t190145395 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3592213601_SFs, f0)); }
	inline t3228139021 * fg0() const { return f0; }
	inline t3228139021 ** fag0() { return &f0; }
	inline void fs0(t3228139021 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3592213601_SFs, f4)); }
	inline t190145395 * fg4() const { return f4; }
	inline t190145395 ** fag4() { return &f4; }
	inline void fs4(t190145395 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
