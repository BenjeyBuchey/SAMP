#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2776692961;
struct t1527309539;
struct t1099177929;

#include "t2411292415.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1846354915  : public t2411292415
{
public:
	t2776692961 * f1;
	t1527309539 * f2;
	int64_t f3;
	t1099177929 * f4;
	bool f5;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1846354915, f1)); }
	inline t2776692961 * fg1() const { return f1; }
	inline t2776692961 ** fag1() { return &f1; }
	inline void fs1(t2776692961 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1846354915, f2)); }
	inline t1527309539 * fg2() const { return f2; }
	inline t1527309539 ** fag2() { return &f2; }
	inline void fs2(t1527309539 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1846354915, f3)); }
	inline int64_t fg3() const { return f3; }
	inline int64_t* fag3() { return &f3; }
	inline void fs3(int64_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1846354915, f4)); }
	inline t1099177929 * fg4() const { return f4; }
	inline t1099177929 ** fag4() { return &f4; }
	inline void fs4(t1099177929 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1846354915, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
