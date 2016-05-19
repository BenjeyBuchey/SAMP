#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3494006030;
struct t2956870243;
struct String_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4205702573  : public Il2CppObject
{
public:
	t3494006030* f0;
	t2956870243* f1;
	String_t* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4205702573, f0)); }
	inline t3494006030* fg0() const { return f0; }
	inline t3494006030** fag0() { return &f0; }
	inline void fs0(t3494006030* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4205702573, f1)); }
	inline t2956870243* fg1() const { return f1; }
	inline t2956870243** fag1() { return &f1; }
	inline void fs1(t2956870243* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4205702573, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
