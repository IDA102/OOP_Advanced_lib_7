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
			Node *prom = p->pNext;
			p->pNext = this;
			this->m_Data = new T(*ps);
			this->pNext = prom;
			prom = 0;
		};
		friend ostream& operator<< <T>(ostream &os,MyStack2_List &ms);
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
	T* pop()
	{		//������ Head ���������� �� ����(�� 2 �������)
		Node *prom = Head.pNext;
		Head.pNext = (*prom).pNext;
		
		T *prom2 = (*prom).m_Data;//������ ������ �� Node'a
		(*prom).m_Data = 0;

		delete prom;//������ Node 
		m_size--;

		//��������� ��� �� �� ������� ���������, �� ������� ������. �� ��� ��������!
		return prom2;//��������� ��������� �� ������, ��� �� ������������ ����������� �� ���!!!
		//� ������ ��� ���� ���.  ��� �� ����!!! � ��� �� POP!!!
	};
	T& operator [] (int i)
	{
		if ((i > -1) && (i < m_size))
		{
			Node *prom = Head.pNext;
			for (int q = 0 ; q < m_size ; q++)
			{
				if (q == i)
				{
					return (*prom->m_Data);
				}
				else prom = prom->pNext;
			}
		}
		else { cout << "�� �� �������!!!" << endl; }
	};
	~MyStack2_List()
	{
		for (size_t i = 0 ; i < m_size ; i++)
		{
			Node *prom = Head.pNext;
			Head.pNext = prom->pNext;
			delete prom;
		}
	}
	friend ostream& operator<< <T> (ostream &os,MyStack2_List &ms);
};