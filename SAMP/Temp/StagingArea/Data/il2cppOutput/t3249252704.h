#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1125014;

#include "t3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3249252704  : public t3243288060
{
public:
	String_t* f17;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3249252704, f17)); }
	inline String_t* fg17() const { return f17; }
	inline String_t** fag17() { return &f17; }
	inline void fs17(String_t* value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}
};

struct t3249252704_SFs
{
public:
	t1125014 * f18;

public:
	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3249252704_SFs, f18)); }
	inline t1125014 * fg18() const { return f18; }
	inline t1125014 ** fag18() { return &f18; }
	inline void fs18(t1125014 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
