#pragma once

template <typename T, int size> class MyArray
{
	int cnt = 0;
	int cnt2 = 0;
	T m_ar[size];
public:
	T& operator[] (int i)
	{
		if ((i > -1) & (i < size)) return m_ar[i];
		else cout << "Ты не пройдёшь!!!" << endl;
	}
	void push(const T &data)
	{
		if (cnt < size) 
		{
			m_ar[cnt] = data;
			cnt++;
		}
		else
		{
			throw "Out of range";
		}
	}
	T pop()
	{
		if (cnt > -1)
		{
			cnt--;
			return m_ar[cnt];
		}
		else
		{
			throw "Out of range";
		}
	}
};
 