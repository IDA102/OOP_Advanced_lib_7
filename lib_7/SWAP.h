#pragma once

template <typename T> void SWAP(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}