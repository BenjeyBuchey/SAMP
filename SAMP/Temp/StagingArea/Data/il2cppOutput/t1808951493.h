#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1656433431;
struct t3685212854;

#include "t1843383027.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1808951493  : public t1843383027
{
public:
	t1656433431 * f3;
	t3685212854 * f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1808951493, f3)); }
	inline t1656433431 * fg3() const { return f3; }
	inline t1656433431 ** fag3() { return &f3; }
	inline void fs3(t1656433431 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1808951493, f4)); }
	inline t3685212854 * fg4() const { return f4; }
	inline t3685212854 ** fag4() { return &f4; }
	inline void fs4(t3685212854 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
