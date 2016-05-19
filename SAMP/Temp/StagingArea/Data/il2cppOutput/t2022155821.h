#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3218765880;
struct t3253021914;
struct t886430410;

#include "t3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2022155821  : public t3592213601
{
public:
	t3218765880 * f5;
	bool f6;
	t3253021914 * f7;
	Il2CppObject * f8;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2022155821, f5)); }
	inline t3218765880 * fg5() const { return f5; }
	inline t3218765880 ** fag5() { return &f5; }
	inline void fs5(t3218765880 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2022155821, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2022155821, f7)); }
	inline t3253021914 * fg7() const { return f7; }
	inline t3253021914 ** fag7() { return &f7; }
	inline void fs7(t3253021914 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2022155821, f8)); }
	inline Il2CppObject * fg8() const { return f8; }
	inline Il2CppObject ** fag8() { return &f8; }
	inline void fs8(Il2CppObject * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
