#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t589897109;
struct t4087051103;
struct t2540829269;

#include "t2307454143.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2729491676  : public t2307454143
{
public:
	t589897109 * f4;
	t4087051103 * f5;
	t2540829269 * f6;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2729491676, f4)); }
	inline t589897109 * fg4() const { return f4; }
	inline t589897109 ** fag4() { return &f4; }
	inline void fs4(t589897109 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2729491676, f5)); }
	inline t4087051103 * fg5() const { return f5; }
	inline t4087051103 ** fag5() { return &f5; }
	inline void fs5(t4087051103 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2729491676, f6)); }
	inline t2540829269 * fg6() const { return f6; }
	inline t2540829269 ** fag6() { return &f6; }
	inline void fs6(t2540829269 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
