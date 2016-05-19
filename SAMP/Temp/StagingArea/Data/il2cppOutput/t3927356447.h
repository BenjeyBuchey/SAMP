#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2121638921;
struct t1621224067;
struct t4057835773;

#include "t2055500882.h"
#include "t339033936.h"
#include "t3143999580.h"
#include "t763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3927356447  : public t2055500882
{
public:
	t339033936  f1;
	int32_t f2;
	t763862892  f3;
	t763862892  f4;
	t763862892  f5;
	t2121638921 * f6;
	t1621224067 * f7;
	t4057835773 * f8;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3927356447, f1)); }
	inline t339033936  fg1() const { return f1; }
	inline t339033936 * fag1() { return &f1; }
	inline void fs1(t339033936  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3927356447, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3927356447, f3)); }
	inline t763862892  fg3() const { return f3; }
	inline t763862892 * fag3() { return &f3; }
	inline void fs3(t763862892  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3927356447, f4)); }
	inline t763862892  fg4() const { return f4; }
	inline t763862892 * fag4() { return &f4; }
	inline void fs4(t763862892  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3927356447, f5)); }
	inline t763862892  fg5() const { return f5; }
	inline t763862892 * fag5() { return &f5; }
	inline void fs5(t763862892  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3927356447, f6)); }
	inline t2121638921 * fg6() const { return f6; }
	inline t2121638921 ** fag6() { return &f6; }
	inline void fs6(t2121638921 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3927356447, f7)); }
	inline t1621224067 * fg7() const { return f7; }
	inline t1621224067 ** fag7() { return &f7; }
	inline void fs7(t1621224067 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3927356447, f8)); }
	inline t4057835773 * fg8() const { return f8; }
	inline t4057835773 ** fag8() { return &f8; }
	inline void fs8(t4057835773 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
