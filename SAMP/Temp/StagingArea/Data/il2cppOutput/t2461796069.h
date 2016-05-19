#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2411292415;

#include "t2420574324.h"
#include "t985135799.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2461796069  : public t2420574324
{
public:
	t2411292415 * f12;
	int32_t f13;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t2461796069, f12)); }
	inline t2411292415 * fg12() const { return f12; }
	inline t2411292415 ** fag12() { return &f12; }
	inline void fs12(t2411292415 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t2461796069, f13)); }
	inline int32_t fg13() const { return f13; }
	inline int32_t* fag13() { return &f13; }
	inline void fs13(int32_t value)
	{
		f13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
