#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t1734909569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t68139341  : public Il2CppObject
{
public:
	t1734909569  f0;
	t1734909569  f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t68139341, f0)); }
	inline t1734909569  fg0() const { return f0; }
	inline t1734909569 * fag0() { return &f0; }
	inline void fs0(t1734909569  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t68139341, f1)); }
	inline t1734909569  fg1() const { return f1; }
	inline t1734909569 * fag1() { return &f1; }
	inline void fs1(t1734909569  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
