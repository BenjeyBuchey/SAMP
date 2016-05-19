#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3827156278;
struct t2121638921;

#include "t707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t298485745  : public t707140448
{
public:
	t3827156278 * f3;
	t2121638921 * f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t298485745, f3)); }
	inline t3827156278 * fg3() const { return f3; }
	inline t3827156278 ** fag3() { return &f3; }
	inline void fs3(t3827156278 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t298485745, f4)); }
	inline t2121638921 * fg4() const { return f4; }
	inline t2121638921 ** fag4() { return &f4; }
	inline void fs4(t2121638921 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
