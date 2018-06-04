#pragma once
#include "Vector.h"

template<typename T>
class EnhantedVector :public Vector<T>
{
public:
	T& operator[](size_t index)throw() {
		if (index >= cur_size)
			throw("index is too high");
		else
			return els[index];
	}


};