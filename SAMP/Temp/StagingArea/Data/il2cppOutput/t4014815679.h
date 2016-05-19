#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2577235966;
struct t539097040;
struct t2995724695;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4014815679 
{
public:
	t2577235966 * f0;
	t539097040 * f1;
	int32_t f2;
	uint32_t f3;
	t2995724695 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4014815679, f0)); }
	inline t2577235966 * fg0() const { return f0; }
	inline t2577235966 ** fag0() { return &f0; }
	inline void fs0(t2577235966 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4014815679, f1)); }
	inline t539097040 * fg1() const { return f1; }
	inline t539097040 ** fag1() { return &f1; }
	inline void fs1(t539097040 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4014815679, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4014815679, f3)); }
	inline uint32_t fg3() const { return f3; }
	inline uint32_t* fag3() { return &f3; }
	inline void fs3(uint32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4014815679, f4)); }
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
