#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t93518347.h"
#include "t136131901.h"
#include "t1687590042.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t93518347 
{
public:
	int32_t f1;
	uint16_t f2;
	int32_t f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t93518347, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t93518347, f2)); }
	inline uint16_t fg2() const { return f2; }
	inline uint16_t* fag2() { return &f2; }
	inline void fs2(uint16_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t93518347, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

struct t93518347_SFs
{
public:
	t93518347  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t93518347_SFs, f0)); }
	inline t93518347  fg0() const { return f0; }
	inline t93518347 * fag0() { return &f0; }
	inline void fs0(t93518347  value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.ConsoleKeyInfo
struct t93518347_marshaled_pinvoke
{
	int32_t f1;
	char f2;
	int32_t f3;
};
// Native definition for marshalling of: System.ConsoleKeyInfo
struct t93518347_marshaled_com
{
	int32_t f1;
	char f2;
	int32_t f3;
};
