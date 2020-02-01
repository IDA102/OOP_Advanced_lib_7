#pragma once

template <typename T, int size> class MyArray
{
	T m_ar[size];
public:
	T& operator[] (int i) { return m_ar[i]; }
};
