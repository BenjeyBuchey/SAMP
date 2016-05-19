#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t361062656;
struct t4215077909;
struct Il2CppObject;
struct t2399218676;

#include "t2055500882.h"
#include "t763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t690682146  : public t2055500882
{
public:
	t361062656 * f1;
	t4215077909 * f2;
	t763862892  f3;
	Il2CppObject * f4;
	bool f5;
	t361062656 * f6;
	t2399218676 * f7;
	int32_t f8;
	bool f9;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t690682146, f1)); }
	inline t361062656 * fg1() const { return f1; }
	inline t361062656 ** fag1() { return &f1; }
	inline void fs1(t361062656 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t690682146, f2)); }
	inline t4215077909 * fg2() const { return f2; }
	inline t4215077909 ** fag2() { return &f2; }
	inline void fs2(t4215077909 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t690682146, f3)); }
	inline t763862892  fg3() const { return f3; }
	inline t763862892 * fag3() { return &f3; }
	inline void fs3(t763862892  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t690682146, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t690682146, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t690682146, f6)); }
	inline t361062656 * fg6() const { return f6; }
	inline t361062656 ** fag6() { return &f6; }
	inline void fs6(t361062656 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t690682146, f7)); }
	inline t2399218676 * fg7() const { return f7; }
	inline t2399218676 ** fag7() { return &f7; }
	inline void fs7(t2399218676 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t690682146, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t690682146, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
