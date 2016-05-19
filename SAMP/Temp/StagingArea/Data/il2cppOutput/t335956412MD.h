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


struct t335956412;
struct t335956412_marshaled_pinvoke;

extern "C" void t335956412_marshal_pinvoke(const t335956412& unmarshaled, t335956412_marshaled_pinvoke& marshaled);
extern "C" void t335956412_marshal_pinvoke_back(const t335956412_marshaled_pinvoke& marshaled, t335956412& unmarshaled);
extern "C" void t335956412_marshal_pinvoke_cleanup(t335956412_marshaled_pinvoke& marshaled);

struct t335956412;
struct t335956412_marshaled_com;

extern "C" void t335956412_marshal_com(const t335956412& unmarshaled, t335956412_marshaled_com& marshaled);
extern "C" void t335956412_marshal_com_back(const t335956412_marshaled_com& marshaled, t335956412& unmarshaled);
extern "C" void t335956412_marshal_com_cleanup(t335956412_marshaled_com& marshaled);
