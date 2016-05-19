#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct t70725885;
struct t121960543;
struct Il2CppObject;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t492925748  : public Il2CppObject
{
public:

public:
};

struct t492925748_SFs
{
public:
	Type_t * f0;
	t70725885 * f1;
	t121960543 * f2;
	Il2CppObject * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t492925748_SFs, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t492925748_SFs, f1)); }
	inline t70725885 * fg1() const { return f1; }
	inline t70725885 ** fag1() { return &f1; }
	inline void fs1(t70725885 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t492925748_SFs, f2)); }
	inline t121960543 * fg2() const { return f2; }
	inline t121960543 ** fag2() { return &f2; }
	inline void fs2(t121960543 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t492925748_SFs, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
