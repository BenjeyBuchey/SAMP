#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2921084216;
struct t4229084514;
struct t3629084577;
struct t2502213349;

#include "t4229084514.h"
#include "t2614841296.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2921084216  : public t4229084514
{
public:
	t2921084216 * f2;
	t4229084514 * f3;
	t3629084577 * f4;
	t2502213349 * f5;
	int32_t f6;
	bool f7;
	bool f8;
	bool f9;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2921084216, f2)); }
	inline t2921084216 * fg2() const { return f2; }
	inline t2921084216 ** fag2() { return &f2; }
	inline void fs2(t2921084216 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2921084216, f3)); }
	inline t4229084514 * fg3() const { return f3; }
	inline t4229084514 ** fag3() { return &f3; }
	inline void fs3(t4229084514 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2921084216, f4)); }
	inline t3629084577 * fg4() const { return f4; }
	inline t3629084577 ** fag4() { return &f4; }
	inline void fs4(t3629084577 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2921084216, f5)); }
	inline t2502213349 * fg5() const { return f5; }
	inline t2502213349 ** fag5() { return &f5; }
	inline void fs5(t2502213349 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2921084216, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2921084216, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2921084216, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2921084216, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
