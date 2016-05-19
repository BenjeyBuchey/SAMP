#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t36593264;
struct t2121638921;
struct t1094164877;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2774051127  : public Il2CppObject
{
public:
	t36593264* f0;
	t2121638921 * f1;
	t1094164877* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2774051127, f0)); }
	inline t36593264* fg0() const { return f0; }
	inline t36593264** fag0() { return &f0; }
	inline void fs0(t36593264* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2774051127, f1)); }
	inline t2121638921 * fg1() const { return f1; }
	inline t2121638921 ** fag1() { return &f1; }
	inline void fs1(t2121638921 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2774051127, f2)); }
	inline t1094164877* fg2() const { return f2; }
	inline t1094164877** fag2() { return &f2; }
	inline void fs2(t1094164877* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
