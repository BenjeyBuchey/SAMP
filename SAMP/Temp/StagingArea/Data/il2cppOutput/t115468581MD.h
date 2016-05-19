#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t115468581.h"
#include "String_t.h"

extern "C"  void m1413447022 (t115468581 * __this, String_t* p0, String_t* p1, String_t* p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t115468581;
struct t115468581_marshaled_pinvoke;

extern "C" void t115468581_marshal_pinvoke(const t115468581& unmarshaled, t115468581_marshaled_pinvoke& marshaled);
extern "C" void t115468581_marshal_pinvoke_back(const t115468581_marshaled_pinvoke& marshaled, t115468581& unmarshaled);
extern "C" void t115468581_marshal_pinvoke_cleanup(t115468581_marshaled_pinvoke& marshaled);

struct t115468581;
struct t115468581_marshaled_com;

extern "C" void t115468581_marshal_com(const t115468581& unmarshaled, t115468581_marshaled_com& marshaled);
extern "C" void t115468581_marshal_com_back(const t115468581_marshaled_com& marshaled, t115468581& unmarshaled);
extern "C" void t115468581_marshal_com_cleanup(t115468581_marshaled_com& marshaled);
