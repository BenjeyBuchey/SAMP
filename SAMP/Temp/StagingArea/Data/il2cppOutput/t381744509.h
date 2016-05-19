#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4091064516;
struct t3905177107;
struct t573960898;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t381744509  : public Il2CppObject
{
public:
	t4091064516 * f0;
	t3905177107 * f1;
	t573960898 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t381744509, f0)); }
	inline t4091064516 * fg0() const { return f0; }
	inline t4091064516 ** fag0() { return &f0; }
	inline void fs0(t4091064516 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t381744509, f1)); }
	inline t3905177107 * fg1() const { return f1; }
	inline t3905177107 ** fag1() { return &f1; }
	inline void fs1(t3905177107 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t381744509, f2)); }
	inline t573960898 * fg2() const { return f2; }
	inline t573960898 ** fag2() { return &f2; }
	inline void fs2(t573960898 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
