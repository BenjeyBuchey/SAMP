#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3010826356;
struct t247020293;

#include "t1843383027.h"
#include "t104824479.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t703612581  : public t1843383027
{
public:
	t3010826356 * f3;
	int32_t f4;
	bool f5;
	t247020293 * f6;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t703612581, f3)); }
	inline t3010826356 * fg3() const { return f3; }
	inline t3010826356 ** fag3() { return &f3; }
	inline void fs3(t3010826356 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t703612581, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t703612581, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t703612581, f6)); }
	inline t247020293 * fg6() const { return f6; }
	inline t247020293 ** fag6() { return &f6; }
	inline void fs6(t247020293 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
