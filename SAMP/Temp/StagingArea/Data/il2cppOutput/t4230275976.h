#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2723933819;
struct String_t;
struct t3685212854;

#include "t1656433431.h"
#include "t707383895.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4230275976  : public t1656433431
{
public:
	t2723933819 * f0;
	int32_t f1;
	String_t* f2;
	t3685212854 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4230275976, f0)); }
	inline t2723933819 * fg0() const { return f0; }
	inline t2723933819 ** fag0() { return &f0; }
	inline void fs0(t2723933819 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4230275976, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4230275976, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4230275976, f3)); }
	inline t3685212854 * fg3() const { return f3; }
	inline t3685212854 ** fag3() { return &f3; }
	inline void fs3(t3685212854 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
