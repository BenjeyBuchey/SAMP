#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2864573480;
struct String_t;
struct t497901645;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2549954 
{
public:
	t2864573480 * f0;
	String_t* f1;
	t497901645 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2549954, f0)); }
	inline t2864573480 * fg0() const { return f0; }
	inline t2864573480 ** fag0() { return &f0; }
	inline void fs0(t2864573480 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2549954, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2549954, f2)); }
	inline t497901645 * fg2() const { return f2; }
	inline t497901645 ** fag2() { return &f2; }
	inline void fs2(t497901645 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
