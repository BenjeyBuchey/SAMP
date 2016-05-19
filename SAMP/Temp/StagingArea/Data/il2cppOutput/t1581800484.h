#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t4109843382;
struct t1869977386;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1581800484  : public Il2CppObject
{
public:

public:
};

struct t1581800484_SFs
{
public:
	Il2CppObject * f0;
	bool f1;
	t4109843382 * f4;
	t1869977386 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1581800484_SFs, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1581800484_SFs, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1581800484_SFs, f4)); }
	inline t4109843382 * fg4() const { return f4; }
	inline t4109843382 ** fag4() { return &f4; }
	inline void fs4(t4109843382 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1581800484_SFs, f5)); }
	inline t1869977386 * fg5() const { return f5; }
	inline t1869977386 ** fag5() { return &f5; }
	inline void fs5(t1869977386 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t1581800484_TSFs
{
public:
	int32_t f2;
	int32_t f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1581800484_TSFs, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1581800484_TSFs, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
