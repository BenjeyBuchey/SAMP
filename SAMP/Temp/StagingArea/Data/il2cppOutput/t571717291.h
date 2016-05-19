#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3562928333;
struct t3705263098;

#include "t1329997280.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t571717291  : public t1329997280
{
public:
	t3562928333 * f4;
	t3705263098 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t571717291, f4)); }
	inline t3562928333 * fg4() const { return f4; }
	inline t3562928333 ** fag4() { return &f4; }
	inline void fs4(t3562928333 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t571717291, f5)); }
	inline t3705263098 * fg5() const { return f5; }
	inline t3705263098 ** fag5() { return &f5; }
	inline void fs5(t3705263098 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
