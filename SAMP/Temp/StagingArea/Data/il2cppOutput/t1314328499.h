#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4283035960;
struct t958751973;
struct t703612581;
struct t2131414094;
struct t3431720054;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1314328499  : public Il2CppObject
{
public:
	t4283035960 * f0;
	t958751973 * f1;
	t703612581 * f2;
	t2131414094 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1314328499, f0)); }
	inline t4283035960 * fg0() const { return f0; }
	inline t4283035960 ** fag0() { return &f0; }
	inline void fs0(t4283035960 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1314328499, f1)); }
	inline t958751973 * fg1() const { return f1; }
	inline t958751973 ** fag1() { return &f1; }
	inline void fs1(t958751973 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1314328499, f2)); }
	inline t703612581 * fg2() const { return f2; }
	inline t703612581 ** fag2() { return &f2; }
	inline void fs2(t703612581 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1314328499, f3)); }
	inline t2131414094 * fg3() const { return f3; }
	inline t2131414094 ** fag3() { return &f3; }
	inline void fs3(t2131414094 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t1314328499_SFs
{
public:
	t3431720054* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1314328499_SFs, f4)); }
	inline t3431720054* fg4() const { return f4; }
	inline t3431720054** fag4() { return &f4; }
	inline void fs4(t3431720054* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
