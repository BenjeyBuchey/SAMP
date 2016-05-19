#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t2776692961.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t113002885  : public t2776692961
{
public:
	String_t* f36;

public:
	inline static int32_t fog36() { return static_cast<int32_t>(offsetof(t113002885, f36)); }
	inline String_t* fg36() const { return f36; }
	inline String_t** fag36() { return &f36; }
	inline void fs36(String_t* value)
	{
		f36 = value;
		Il2CppCodeGenWriteBarrier(&f36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
