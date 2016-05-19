#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t2577235966;
struct t539097040;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t539097040  : public Il2CppObject
{
public:
	Il2CppObject * f0;
	t2577235966 * f1;
	t539097040 * f2;
	t539097040 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t539097040, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t539097040, f1)); }
	inline t2577235966 * fg1() const { return f1; }
	inline t2577235966 ** fag1() { return &f1; }
	inline void fs1(t2577235966 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t539097040, f2)); }
	inline t539097040 * fg2() const { return f2; }
	inline t539097040 ** fag2() { return &f2; }
	inline void fs2(t539097040 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t539097040, f3)); }
	inline t539097040 * fg3() const { return f3; }
	inline t539097040 ** fag3() { return &f3; }
	inline void fs3(t539097040 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
