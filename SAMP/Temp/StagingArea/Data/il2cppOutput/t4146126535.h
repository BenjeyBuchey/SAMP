#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3499186955;
struct t4247812534;
struct t4191126325;
struct t3023322121;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4146126535  : public t3012272455
{
public:
	t3499186955* f2;
	int32_t f3;
	t4247812534 * f4;
	t4191126325 * f5;
	t3023322121 * f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4146126535, f2)); }
	inline t3499186955* fg2() const { return f2; }
	inline t3499186955** fag2() { return &f2; }
	inline void fs2(t3499186955* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4146126535, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4146126535, f4)); }
	inline t4247812534 * fg4() const { return f4; }
	inline t4247812534 ** fag4() { return &f4; }
	inline void fs4(t4247812534 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4146126535, f5)); }
	inline t4191126325 * fg5() const { return f5; }
	inline t4191126325 ** fag5() { return &f5; }
	inline void fs5(t4191126325 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t4146126535, f6)); }
	inline t3023322121 * fg6() const { return f6; }
	inline t3023322121 ** fag6() { return &f6; }
	inline void fs6(t3023322121 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
