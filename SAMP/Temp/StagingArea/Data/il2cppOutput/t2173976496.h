#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2173976496 
{
public:
	t2956870243* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2173976496, f0)); }
	inline t2956870243* fg0() const { return f0; }
	inline t2956870243** fag0() { return &f0; }
	inline void fs0(t2956870243* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Xml.Schema.StringArrayValueType
struct t2173976496_marshaled_pinvoke
{
	char** f0;
};
// Native definition for marshalling of: System.Xml.Schema.StringArrayValueType
struct t2173976496_marshaled_com
{
	uint16_t** f0;
};
