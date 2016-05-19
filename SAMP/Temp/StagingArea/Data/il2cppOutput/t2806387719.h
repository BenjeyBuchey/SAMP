#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t2121638921;

#include "t1395379180.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2806387719  : public t1395379180
{
public:
	String_t* f15;
	String_t* f16;
	t2121638921 * f17;
	bool f18;
	bool f19;
	bool f20;

public:
	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t2806387719, f15)); }
	inline String_t* fg15() const { return f15; }
	inline String_t** fag15() { return &f15; }
	inline void fs15(String_t* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t2806387719, f16)); }
	inline String_t* fg16() const { return f16; }
	inline String_t** fag16() { return &f16; }
	inline void fs16(String_t* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t2806387719, f17)); }
	inline t2121638921 * fg17() const { return f17; }
	inline t2121638921 ** fag17() { return &f17; }
	inline void fs17(t2121638921 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t2806387719, f18)); }
	inline bool fg18() const { return f18; }
	inline bool* fag18() { return &f18; }
	inline void fs18(bool value)
	{
		f18 = value;
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t2806387719, f19)); }
	inline bool fg19() const { return f19; }
	inline bool* fag19() { return &f19; }
	inline void fs19(bool value)
	{
		f19 = value;
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t2806387719, f20)); }
	inline bool fg20() const { return f20; }
	inline bool* fag20() { return &f20; }
	inline void fs20(bool value)
	{
		f20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
