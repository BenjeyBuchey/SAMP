#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;
struct t3232213908;
struct t3218765880;
struct t3416858730;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3408046266  : public Il2CppObject
{
public:
	t3875263730 * f0;
	t3232213908 * f1;
	t3218765880 * f2;
	t3416858730* f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3408046266, f0)); }
	inline t3875263730 * fg0() const { return f0; }
	inline t3875263730 ** fag0() { return &f0; }
	inline void fs0(t3875263730 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3408046266, f1)); }
	inline t3232213908 * fg1() const { return f1; }
	inline t3232213908 ** fag1() { return &f1; }
	inline void fs1(t3232213908 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3408046266, f2)); }
	inline t3218765880 * fg2() const { return f2; }
	inline t3218765880 ** fag2() { return &f2; }
	inline void fs2(t3218765880 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3408046266, f3)); }
	inline t3416858730* fg3() const { return f3; }
	inline t3416858730** fag3() { return &f3; }
	inline void fs3(t3416858730* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
