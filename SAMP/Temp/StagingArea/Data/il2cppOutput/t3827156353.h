#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3827156353;
struct String_t;
struct t323128660;

#include "t3696384587.h"
#include "t2298884609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3827156353  : public t3696384587
{
public:
	String_t* f28;
	int32_t f29;
	t323128660 * f30;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t3827156353, f28)); }
	inline String_t* fg28() const { return f28; }
	inline String_t** fag28() { return &f28; }
	inline void fs28(String_t* value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}

	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t3827156353, f29)); }
	inline int32_t fg29() const { return f29; }
	inline int32_t* fag29() { return &f29; }
	inline void fs29(int32_t value)
	{
		f29 = value;
	}

	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t3827156353, f30)); }
	inline t323128660 * fg30() const { return f30; }
	inline t323128660 ** fag30() { return &f30; }
	inline void fs30(t323128660 * value)
	{
		f30 = value;
		Il2CppCodeGenWriteBarrier(&f30, value);
	}
};

struct t3827156353_SFs
{
public:
	t3827156353 * f27;

public:
	inline static int32_t fog27() { return static_cast<int32_t>(offsetof(t3827156353_SFs, f27)); }
	inline t3827156353 * fg27() const { return f27; }
	inline t3827156353 ** fag27() { return &f27; }
	inline void fs27(t3827156353 * value)
	{
		f27 = value;
		Il2CppCodeGenWriteBarrier(&f27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
