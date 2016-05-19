#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t497901645;
struct t2121638921;

#include "t1537136389.h"
#include "t3569926873.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3603453350  : public t1537136389
{
public:
	int32_t f1;
	t2121638921 * f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3603453350, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3603453350, f2)); }
	inline t2121638921 * fg2() const { return f2; }
	inline t2121638921 ** fag2() { return &f2; }
	inline void fs2(t2121638921 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t3603453350_SFs
{
public:
	t497901645 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3603453350_SFs, f0)); }
	inline t497901645 * fg0() const { return f0; }
	inline t497901645 ** fag0() { return &f0; }
	inline void fs0(t497901645 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
