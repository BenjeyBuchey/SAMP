#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2006592603;
struct t2915428732;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t707140448  : public Il2CppObject
{
public:
	int32_t f1;
	t2915428732 * f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t707140448, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t707140448, f2)); }
	inline t2915428732 * fg2() const { return f2; }
	inline t2915428732 ** fag2() { return &f2; }
	inline void fs2(t2915428732 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t707140448_SFs
{
public:
	t2006592603 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t707140448_SFs, f0)); }
	inline t2006592603 * fg0() const { return f0; }
	inline t2006592603 ** fag0() { return &f0; }
	inline void fs0(t2006592603 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
