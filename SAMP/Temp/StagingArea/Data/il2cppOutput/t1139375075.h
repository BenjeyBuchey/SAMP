#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t271056291;
struct t1206202648;
struct Il2CppObject;
struct t1313359703;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1139375075  : public Il2CppObject
{
public:
	t271056291 * f0;
	t1206202648 * f1;
	Il2CppObject * f2;
	bool f3;
	bool f4;
	Il2CppObject* f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1139375075, f0)); }
	inline t271056291 * fg0() const { return f0; }
	inline t271056291 ** fag0() { return &f0; }
	inline void fs0(t271056291 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1139375075, f1)); }
	inline t1206202648 * fg1() const { return f1; }
	inline t1206202648 ** fag1() { return &f1; }
	inline void fs1(t1206202648 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1139375075, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1139375075, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1139375075, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1139375075, f5)); }
	inline Il2CppObject* fg5() const { return f5; }
	inline Il2CppObject** fag5() { return &f5; }
	inline void fs5(Il2CppObject* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
