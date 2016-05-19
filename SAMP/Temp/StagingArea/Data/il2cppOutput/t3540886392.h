#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3416858730;
struct String_t;
struct t2274547107;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3540886392  : public Il2CppObject
{
public:
	String_t* f1;
	t2274547107 * f2;
	t2274547107 * f3;
	String_t* f4;
	bool f5;
	bool f6;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3540886392, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3540886392, f2)); }
	inline t2274547107 * fg2() const { return f2; }
	inline t2274547107 ** fag2() { return &f2; }
	inline void fs2(t2274547107 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3540886392, f3)); }
	inline t2274547107 * fg3() const { return f3; }
	inline t2274547107 ** fag3() { return &f3; }
	inline void fs3(t2274547107 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3540886392, f4)); }
	inline String_t* fg4() const { return f4; }
	inline String_t** fag4() { return &f4; }
	inline void fs4(String_t* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3540886392, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3540886392, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

struct t3540886392_SFs
{
public:
	t3416858730* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3540886392_SFs, f0)); }
	inline t3416858730* fg0() const { return f0; }
	inline t3416858730** fag0() { return &f0; }
	inline void fs0(t3416858730* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
