#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t2121638921;
struct t3875263730;
struct t1512127021;
struct t3919018054;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t678461618  : public Il2CppObject
{
public:

public:
};

struct t678461618_SFs
{
public:
	Il2CppObject * f0;
	t2121638921 * f1;
	t3875263730 * f2;
	t1512127021 * f3;
	t3919018054 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t678461618_SFs, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t678461618_SFs, f1)); }
	inline t2121638921 * fg1() const { return f1; }
	inline t2121638921 ** fag1() { return &f1; }
	inline void fs1(t2121638921 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t678461618_SFs, f2)); }
	inline t3875263730 * fg2() const { return f2; }
	inline t3875263730 ** fag2() { return &f2; }
	inline void fs2(t3875263730 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t678461618_SFs, f3)); }
	inline t1512127021 * fg3() const { return f3; }
	inline t1512127021 ** fag3() { return &f3; }
	inline void fs3(t1512127021 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t678461618_SFs, f4)); }
	inline t3919018054 * fg4() const { return f4; }
	inline t3919018054 ** fag4() { return &f4; }
	inline void fs4(t3919018054 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
