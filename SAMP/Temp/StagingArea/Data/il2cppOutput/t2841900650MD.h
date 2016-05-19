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


struct t2841900650;
struct t2841900650_marshaled_pinvoke;

extern "C" void t2841900650_marshal_pinvoke(const t2841900650& unmarshaled, t2841900650_marshaled_pinvoke& marshaled);
extern "C" void t2841900650_marshal_pinvoke_back(const t2841900650_marshaled_pinvoke& marshaled, t2841900650& unmarshaled);
extern "C" void t2841900650_marshal_pinvoke_cleanup(t2841900650_marshaled_pinvoke& marshaled);

struct t2841900650;
struct t2841900650_marshaled_com;

extern "C" void t2841900650_marshal_com(const t2841900650& unmarshaled, t2841900650_marshaled_com& marshaled);
extern "C" void t2841900650_marshal_com_back(const t2841900650_marshaled_com& marshaled, t2841900650& unmarshaled);
extern "C" void t2841900650_marshal_com_cleanup(t2841900650_marshaled_com& marshaled);
