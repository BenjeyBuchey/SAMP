#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1466594591;
struct Type_t;
struct String_t;

#include "t498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1466594591  : public t498693649
{
public:
	Type_t * f2;
	String_t* f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1466594591, f2)); }
	inline Type_t * fg2() const { return f2; }
	inline Type_t ** fag2() { return &f2; }
	inline void fs2(Type_t * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1466594591, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t1466594591_SFs
{
public:
	t1466594591 * f0;
	t1466594591 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1466594591_SFs, f0)); }
	inline t1466594591 * fg0() const { return f0; }
	inline t1466594591 ** fag0() { return &f0; }
	inline void fs0(t1466594591 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1466594591_SFs, f1)); }
	inline t1466594591 * fg1() const { return f1; }
	inline t1466594591 ** fag1() { return &f1; }
	inline void fs1(t1466594591 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
