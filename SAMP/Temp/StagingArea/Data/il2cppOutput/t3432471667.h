#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1500525009;
struct t1191708721;
struct t471922321;
struct t3432810239;

#include "Il2CppObject.h"
#include "t1086268151.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3432471667  : public Il2CppObject
{
public:
	bool f0;
	bool f1;
	t1500525009 * f2;
	t1191708721 * f3;
	t471922321 * f4;
	t3432810239 * f5;
	int32_t f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3432471667, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3432471667, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3432471667, f2)); }
	inline t1500525009 * fg2() const { return f2; }
	inline t1500525009 ** fag2() { return &f2; }
	inline void fs2(t1500525009 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3432471667, f3)); }
	inline t1191708721 * fg3() const { return f3; }
	inline t1191708721 ** fag3() { return &f3; }
	inline void fs3(t1191708721 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3432471667, f4)); }
	inline t471922321 * fg4() const { return f4; }
	inline t471922321 ** fag4() { return &f4; }
	inline void fs4(t471922321 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3432471667, f5)); }
	inline t3432810239 * fg5() const { return f5; }
	inline t3432810239 ** fag5() { return &f5; }
	inline void fs5(t3432810239 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3432471667, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
