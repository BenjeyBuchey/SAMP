#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1324217559  : public Type_t
{
public:
	Type_t * f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1324217559, f8)); }
	inline Type_t * fg8() const { return f8; }
	inline Type_t ** fag8() { return &f8; }
	inline void fs8(Type_t * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
