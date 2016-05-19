#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;

#include "t276412187.h"
#include "t2711684451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1391668572  : public t276412187
{
public:
	t2711684451  f10;
	t58506160* f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1391668572, f10)); }
	inline t2711684451  fg10() const { return f10; }
	inline t2711684451 * fag10() { return &f10; }
	inline void fs10(t2711684451  value)
	{
		f10 = value;
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1391668572, f11)); }
	inline t58506160* fg11() const { return f11; }
	inline t58506160** fag11() { return &f11; }
	inline void fs11(t58506160* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
