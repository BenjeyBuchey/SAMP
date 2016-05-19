#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t646701464;

#include "Il2CppArray.h"
#include "t646701464.h"

#pragma once
struct t1826368777  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t646701464 * m_Items[1];

public:
	inline t646701464 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t646701464 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t646701464 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
