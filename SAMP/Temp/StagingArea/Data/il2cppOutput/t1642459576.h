#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2238201602;
struct t781474633;
struct t11523773;
struct t77258700;

#include "t1763168354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1642459576  : public t1763168354
{
public:
	t2238201602 * f17;
	t781474633* f18;
	t11523773* f19;
	t77258700* f20;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t1642459576, f17)); }
	inline t2238201602 * fg17() const { return f17; }
	inline t2238201602 ** fag17() { return &f17; }
	inline void fs17(t2238201602 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t1642459576, f18)); }
	inline t781474633* fg18() const { return f18; }
	inline t781474633** fag18() { return &f18; }
	inline void fs18(t781474633* value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t1642459576, f19)); }
	inline t11523773* fg19() const { return f19; }
	inline t11523773** fag19() { return &f19; }
	inline void fs19(t11523773* value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t1642459576, f20)); }
	inline t77258700* fg20() const { return f20; }
	inline t77258700** fag20() { return &f20; }
	inline void fs20(t77258700* value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
