#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3388063069;
struct t3591325611;

#include "t4246869879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2454691284  : public t4246869879
{
public:
	Il2CppObject * f2;
	t3591325611 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2454691284, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2454691284, f3)); }
	inline t3591325611 * fg3() const { return f3; }
	inline t3591325611 ** fag3() { return &f3; }
	inline void fs3(t3591325611 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
