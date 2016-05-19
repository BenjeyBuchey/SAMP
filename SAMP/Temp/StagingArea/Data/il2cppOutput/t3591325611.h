#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3591325611;
struct t2121638921;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3591325611  : public Il2CppObject
{
public:
	t2121638921 * f1;
	bool f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3591325611, f1)); }
	inline t2121638921 * fg1() const { return f1; }
	inline t2121638921 ** fag1() { return &f1; }
	inline void fs1(t2121638921 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3591325611, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}
};

struct t3591325611_SFs
{
public:
	t3591325611 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3591325611_SFs, f0)); }
	inline t3591325611 * fg0() const { return f0; }
	inline t3591325611 ** fag0() { return &f0; }
	inline void fs0(t3591325611 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
