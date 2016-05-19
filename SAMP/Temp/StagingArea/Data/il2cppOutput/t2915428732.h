#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;
struct t471922321;
struct t1623036922;
struct t2963160318;
struct t190145395;

#include "Il2CppObject.h"
#include "t2298884609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2915428732  : public Il2CppObject
{
public:
	t3875263730 * f0;
	int32_t f1;
	t471922321 * f2;
	t1623036922 * f3;
	t2963160318 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2915428732, f0)); }
	inline t3875263730 * fg0() const { return f0; }
	inline t3875263730 ** fag0() { return &f0; }
	inline void fs0(t3875263730 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2915428732, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2915428732, f2)); }
	inline t471922321 * fg2() const { return f2; }
	inline t471922321 ** fag2() { return &f2; }
	inline void fs2(t471922321 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2915428732, f3)); }
	inline t1623036922 * fg3() const { return f3; }
	inline t1623036922 ** fag3() { return &f3; }
	inline void fs3(t1623036922 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2915428732, f4)); }
	inline t2963160318 * fg4() const { return f4; }
	inline t2963160318 ** fag4() { return &f4; }
	inline void fs4(t2963160318 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

struct t2915428732_SFs
{
public:
	t190145395 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2915428732_SFs, f5)); }
	inline t190145395 * fg5() const { return f5; }
	inline t190145395 ** fag5() { return &f5; }
	inline void fs5(t190145395 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
