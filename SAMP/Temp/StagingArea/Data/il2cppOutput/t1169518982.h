#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t2841900650.h"
#include "t3157283584.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1169518982 
{
public:
	t2841900650  f0;
	t2841900650  f1;
	int16_t f2;
	t3157283584  f3;
	t2841900650  f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1169518982, f0)); }
	inline t2841900650  fg0() const { return f0; }
	inline t2841900650 * fag0() { return &f0; }
	inline void fs0(t2841900650  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1169518982, f1)); }
	inline t2841900650  fg1() const { return f1; }
	inline t2841900650 * fag1() { return &f1; }
	inline void fs1(t2841900650  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1169518982, f2)); }
	inline int16_t fg2() const { return f2; }
	inline int16_t* fag2() { return &f2; }
	inline void fs2(int16_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1169518982, f3)); }
	inline t3157283584  fg3() const { return f3; }
	inline t3157283584 * fag3() { return &f3; }
	inline void fs3(t3157283584  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1169518982, f4)); }
	inline t2841900650  fg4() const { return f4; }
	inline t2841900650 * fag4() { return &f4; }
	inline void fs4(t2841900650  value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.ConsoleScreenBufferInfo
struct t1169518982_marshaled_pinvoke
{
	t2841900650_marshaled_pinvoke f0;
	t2841900650_marshaled_pinvoke f1;
	int16_t f2;
	t3157283584_marshaled_pinvoke f3;
	t2841900650_marshaled_pinvoke f4;
};
// Native definition for marshalling of: System.ConsoleScreenBufferInfo
struct t1169518982_marshaled_com
{
	t2841900650_marshaled_com f0;
	t2841900650_marshaled_com f1;
	int16_t f2;
	t3157283584_marshaled_com f3;
	t2841900650_marshaled_com f4;
};
