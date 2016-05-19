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


#include "codegen/il2cpp-codegen.h"


struct t335952622;
struct t335952622_marshaled_pinvoke;

extern "C" void t335952622_marshal_pinvoke(const t335952622& unmarshaled, t335952622_marshaled_pinvoke& marshaled);
extern "C" void t335952622_marshal_pinvoke_back(const t335952622_marshaled_pinvoke& marshaled, t335952622& unmarshaled);
extern "C" void t335952622_marshal_pinvoke_cleanup(t335952622_marshaled_pinvoke& marshaled);

struct t335952622;
struct t335952622_marshaled_com;

extern "C" void t335952622_marshal_com(const t335952622& unmarshaled, t335952622_marshaled_com& marshaled);
extern "C" void t335952622_marshal_com_back(const t335952622_marshaled_com& marshaled, t335952622& unmarshaled);
extern "C" void t335952622_marshal_com_cleanup(t335952622_marshaled_com& marshaled);
