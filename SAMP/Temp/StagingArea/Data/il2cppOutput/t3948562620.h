#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1707658058;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3948562620  : public Il2CppObject
{
public:
	t1707658058 * f0;
	int64_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3948562620, f0)); }
	inline t1707658058 * fg0() const { return f0; }
	inline t1707658058 ** fag0() { return &f0; }
	inline void fs0(t1707658058 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3948562620, f1)); }
	inline int64_t fg1() const { return f1; }
	inline int64_t* fag1() { return &f1; }
	inline void fs1(int64_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
