#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t8663200;
struct t3416858730;

#include "t2590121.h"
#include "t67634583.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t8663200  : public t2590121
{
public:

public:
};

struct t8663200_SFs
{
public:
	t8663200 * f55;
	t3416858730* f56;
	int32_t f57;
	int32_t f58;
	int32_t f59;
	int32_t f60;

public:
	inline static int32_t fog55() { return static_cast<int32_t>(offsetof(t8663200_SFs, f55)); }
	inline t8663200 * fg55() const { return f55; }
	inline t8663200 ** fag55() { return &f55; }
	inline void fs55(t8663200 * value)
	{
		f55 = value;
		Il2CppCodeGenWriteBarrier(&f55, value);
	}

	inline static int32_t fog56() { return static_cast<int32_t>(offsetof(t8663200_SFs, f56)); }
	inline t3416858730* fg56() const { return f56; }
	inline t3416858730** fag56() { return &f56; }
	inline void fs56(t3416858730* value)
	{
		f56 = value;
		Il2CppCodeGenWriteBarrier(&f56, value);
	}

	inline static int32_t fog57() { return static_cast<int32_t>(offsetof(t8663200_SFs, f57)); }
	inline int32_t fg57() const { return f57; }
	inline int32_t* fag57() { return &f57; }
	inline void fs57(int32_t value)
	{
		f57 = value;
	}

	inline static int32_t fog58() { return static_cast<int32_t>(offsetof(t8663200_SFs, f58)); }
	inline int32_t fg58() const { return f58; }
	inline int32_t* fag58() { return &f58; }
	inline void fs58(int32_t value)
	{
		f58 = value;
	}

	inline static int32_t fog59() { return static_cast<int32_t>(offsetof(t8663200_SFs, f59)); }
	inline int32_t fg59() const { return f59; }
	inline int32_t* fag59() { return &f59; }
	inline void fs59(int32_t value)
	{
		f59 = value;
	}

	inline static int32_t fog60() { return static_cast<int32_t>(offsetof(t8663200_SFs, f60)); }
	inline int32_t fg60() const { return f60; }
	inline int32_t* fag60() { return &f60; }
	inline void fs60(int32_t value)
	{
		f60 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
