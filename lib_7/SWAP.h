#pragma once

//void SWAP(char *r_S_a, char *r_S_b)
//{
//	char *c = r_S_a;
//	stop
//	r_S_a = r_S_b;
//	stop
//	r_S_b = c;
//	stop
//	c = 0;
//	stop
//};

template <typename T> void SWAP(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
};