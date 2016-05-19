#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t1586393048;
struct t2995724695;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3624531974  : public Il2CppObject
{
public:
	uint32_t f0;
	uint32_t f1;
	Il2CppObject * f2;
	t1586393048 * f3;
	t2995724695 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3624531974, f0)); }
	inline uint32_t fg0() const { return f0; }
	inline uint32_t* fag0() { return &f0; }
	inline void fs0(uint32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3624531974, f1)); }
	inline uint32_t fg1() const { return f1; }
	inline uint32_t* fag1() { return &f1; }
	inline void fs1(uint32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3624531974, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3624531974, f3)); }
	inline t1586393048 * fg3() const { return f3; }
	inline t1586393048 ** fag3() { return &f3; }
	inline void fs3(t1586393048 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3624531974, f4)); }
	inline t2995724695 * fg4() const { return f4; }
	inline t2995724695 ** fag4() { return &f4; }
	inline void fs4(t2995724695 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
