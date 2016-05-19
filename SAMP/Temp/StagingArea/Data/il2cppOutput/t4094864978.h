#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1861067185;
struct t36593264;
struct t114296061;
struct t190145395;

#include "t2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4094864978  : public t2513933869
{
public:
	String_t* f16;
	t1861067185 * f17;
	bool f18;
	t36593264* f19;
	t114296061 * f20;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t4094864978, f16)); }
	inline String_t* fg16() const { return f16; }
	inline String_t** fag16() { return &f16; }
	inline void fs16(String_t* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t4094864978, f17)); }
	inline t1861067185 * fg17() const { return f17; }
	inline t1861067185 ** fag17() { return &f17; }
	inline void fs17(t1861067185 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t4094864978, f18)); }
	inline bool fg18() const { return f18; }
	inline bool* fag18() { return &f18; }
	inline void fs18(bool value)
	{
		f18 = value;
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t4094864978, f19)); }
	inline t36593264* fg19() const { return f19; }
	inline t36593264** fag19() { return &f19; }
	inline void fs19(t36593264* value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t4094864978, f20)); }
	inline t114296061 * fg20() const { return f20; }
	inline t114296061 ** fag20() { return &f20; }
	inline void fs20(t114296061 * value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}
};

struct t4094864978_SFs
{
public:
	t190145395 * f21;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t4094864978_SFs, f21)); }
	inline t190145395 * fg21() const { return f21; }
	inline t190145395 ** fag21() { return &f21; }
	inline void fs21(t190145395 * value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
