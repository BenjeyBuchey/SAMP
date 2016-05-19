#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1073980956;

#include "t498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1073980956  : public t498693649
{
public:
	String_t* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1073980956, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

struct t1073980956_SFs
{
public:
	t1073980956 * f1;
	t1073980956 * f2;
	t1073980956 * f3;
	t1073980956 * f4;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1073980956_SFs, f1)); }
	inline t1073980956 * fg1() const { return f1; }
	inline t1073980956 ** fag1() { return &f1; }
	inline void fs1(t1073980956 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1073980956_SFs, f2)); }
	inline t1073980956 * fg2() const { return f2; }
	inline t1073980956 ** fag2() { return &f2; }
	inline void fs2(t1073980956 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1073980956_SFs, f3)); }
	inline t1073980956 * fg3() const { return f3; }
	inline t1073980956 ** fag3() { return &f3; }
	inline void fs3(t1073980956 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1073980956_SFs, f4)); }
	inline t1073980956 * fg4() const { return f4; }
	inline t1073980956 ** fag4() { return &f4; }
	inline void fs4(t1073980956 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
