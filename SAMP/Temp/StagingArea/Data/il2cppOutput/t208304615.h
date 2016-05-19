#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t1058295580;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t208304615  : public Il2CppObject
{
public:

public:
};

struct t208304615_SFs
{
public:
	Il2CppObject * f0;
	t1058295580 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t208304615_SFs, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t208304615_SFs, f1)); }
	inline t1058295580 * fg1() const { return f1; }
	inline t1058295580 ** fag1() { return &f1; }
	inline void fs1(t1058295580 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
