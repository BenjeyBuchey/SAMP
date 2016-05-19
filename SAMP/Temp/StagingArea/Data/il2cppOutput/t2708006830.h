#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t171953869;
struct t3257378130;
struct t4199006061;

#include "t1178954575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2708006830  : public t1178954575
{
public:
	t171953869 * f21;
	int32_t f22;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t2708006830, f21)); }
	inline t171953869 * fg21() const { return f21; }
	inline t171953869 ** fag21() { return &f21; }
	inline void fs21(t171953869 * value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}

	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t2708006830, f22)); }
	inline int32_t fg22() const { return f22; }
	inline int32_t* fag22() { return &f22; }
	inline void fs22(int32_t value)
	{
		f22 = value;
	}
};

struct t2708006830_SFs
{
public:
	t3257378130 * f23;
	t4199006061 * f24;

public:
	inline static int32_t fog23() { return static_cast<int32_t>(offsetof(t2708006830_SFs, f23)); }
	inline t3257378130 * fg23() const { return f23; }
	inline t3257378130 ** fag23() { return &f23; }
	inline void fs23(t3257378130 * value)
	{
		f23 = value;
		Il2CppCodeGenWriteBarrier(&f23, value);
	}

	inline static int32_t fog24() { return static_cast<int32_t>(offsetof(t2708006830_SFs, f24)); }
	inline t4199006061 * fg24() const { return f24; }
	inline t4199006061 ** fag24() { return &f24; }
	inline void fs24(t4199006061 * value)
	{
		f24 = value;
		Il2CppCodeGenWriteBarrier(&f24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
