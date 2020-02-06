#pragma once
#include "H.h"
template <typename T> class MyStack2_List
{
	class Node
	{
		friend class MyStack2_List;
		Node *pNext = 0;
		T *m_Data = 0;
		~Node()
		{
			delete m_Data;
			m_Data = 0;
		};
		Node()
		{
			Node *pNext = 0;
			T *m_Data = 0;
		};
		Node(Node *p, const T *ps, const size_t m_size)
		{
			Node *prom = p;
			for (size_t i = 0; i < m_size; i++)
			{
				prom = prom->pNext;
			}
			prom->pNext = this;
			this->m_Data = new T(*ps);// Не забыть скопировать нормально
		};
	};
	size_t m_size = 0;
	Node Head;
public:
	MyStack2_List()
	{
		m_size = 0;
		Head.pNext = 0;
	};
	void push(T &r_data)
	{
		new Node(&Head, &r_data, m_size);
		m_size++;
	};
	T& pop()
	{
		Node *prom = Head.pNext;
		stop
		Head.pNext = (*prom).pNext;
		T *prom2 = (*prom).m_Data;
		(*prom).m_Data = 0;
		(*prom).~Node();
		m_size--;
		return (*prom2);
	};
	operator [];
};