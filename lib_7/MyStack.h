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
	int pop()
	{
		if (cnt > -1)
		{
			cout << m_ar[cnt - 1] << endl;
			m_ar[cnt - 1] = 0;
			cnt--;
		}
		else
		{
			throw "Out of range";
		}
	}
};
 