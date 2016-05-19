#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t707140448;

#include "t707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1657411047  : public t707140448
{
public:
	t707140448 * f3;
	t707140448 * f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1657411047, f3)); }
	inline t707140448 * fg3() const { return f3; }
	inline t707140448 ** fag3() { return &f3; }
	inline void fs3(t707140448 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1657411047, f4)); }
	inline t707140448 * fg4() const { return f4; }
	inline t707140448 ** fag4() { return &f4; }
	inline void fs4(t707140448 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
