#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1125014;
struct t646701464;

#include "t3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3390146040  : public t3243288060
{
public:

public:
};

struct t3390146040_SFs
{
public:
	t1125014 * f17;
	t646701464 * f18;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3390146040_SFs, f17)); }
	inline t1125014 * fg17() const { return f17; }
	inline t1125014 ** fag17() { return &f17; }
	inline void fs17(t1125014 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3390146040_SFs, f18)); }
	inline t646701464 * fg18() const { return f18; }
	inline t646701464 ** fag18() { return &f18; }
	inline void fs18(t646701464 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
