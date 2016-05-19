#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3499186955;
struct t397276188;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t258389418  : public t3012272455
{
public:
	t3499186955* f2;
	t397276188 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t258389418, f2)); }
	inline t3499186955* fg2() const { return f2; }
	inline t3499186955** fag2() { return &f2; }
	inline void fs2(t3499186955* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t258389418, f3)); }
	inline t397276188 * fg3() const { return f3; }
	inline t397276188 ** fag3() { return &f3; }
	inline void fs3(t397276188 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
