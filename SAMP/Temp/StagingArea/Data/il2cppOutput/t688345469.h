#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2550797893;
struct t3624531974;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t688345469 
{
public:
	t2550797893 * f0;
	t3624531974 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t688345469, f0)); }
	inline t2550797893 * fg0() const { return f0; }
	inline t2550797893 ** fag0() { return &f0; }
	inline void fs0(t2550797893 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t688345469, f1)); }
	inline t3624531974 * fg1() const { return f1; }
	inline t3624531974 ** fag1() { return &f1; }
	inline void fs1(t3624531974 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
