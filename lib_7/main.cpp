#include "H.h"
//����������

//�������: 
	//		������� �������,
	//		������� �������,

void SWAP(MyString &r_S_a, MyString &r_S_b)
{
	char *c = r_S_a.m_pStr;
	r_S_a.m_pStr = r_S_b.m_pStr;
	r_S_b.m_pStr = c;
	c = 0;
};
//���������� �������

template <typename T>
 ostream& operator<<(ostream &os,  MyStack2_List<T> &ms) 
{
	 int cnt = ms.m_size-1;
	 for (; cnt > -1; cnt--)
	 {
		 cout << ms[cnt] << endl;
	 }
	return os;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
		//����. ������� �������.
		//�������� ������ ������� ������������ ������� ����
		//�������� - Swap(). ��������� ����������������� ����������
		//������� � ������� ������������ ���� ��������� ����.
		//��������� 1: ���������� ������� ���������� ��������� � .h-����.

		int iX = 1, iY = -1;
		SWAP(iX, iY);
 		stop

		double dX = 0.5, dY = -5.5;
		SWAP(dX, dY);
		stop

		//��������� 2: ���������, ��� ����� �����������, ��� ����,
		//			����� ��������� ����� ������� � ��������� MyString
		//			�� ������ ���������, �� � ����������
		MyString str1("One"), str2("Two");
		SWAP(str1, str2);
		stop
			/////////////////////////////////////////////////////////////////////

				//����. ������� �������.
				//������� 1.
				//�������� ������ ������ MyStack ��� �������� ��������� ������ ���� T.
				//���������: 1.�������� ����� ���-�� ������� - ������� � ������� ���������
				//			��� �������� ��������������� ������������� � ������ ���������
				//			�������� ������, 
				//			2.��� ������� ������������� ������� ����� ����� ���� �����������
				//			��������-��������� �������
				//			3.������������� ���������� �� ������ �������� "push" � "pop". ���
				//			����, ����� ������������� ���������� ���������� ���� �������� 
				//			������ ���� �� ������������ ���������� � ��������� ��������
				//			4. ������������� ���������� operator[] ����� �������, ����� ������������
				//			��� ������/�������� �������� ������ ��� ���������, ������� �� ����������


				//� ������� ������� MyStack �������� ���� �� 5 ��������� int - iStack �
				//���� �� 10 ��������� MyString - strStack � ������������������� � ���������
				//push() � pop(), operator[]
		MyArray<int, 4> iStack;
		stop
			try
		{//������ � ����
			for (int i = 0 ; i < 4 ; i++)
			{
				iStack.push(i);
			}
			stop
			for (int i = 0; i < 4 ; i++)
			{//���������� �� �����
				iStack.pop();
			}
			stop
		}
		catch(const char *error)
		{
			cout << error << endl;
		}
		stop
		//��������� ��������������
		int i = iStack[8];
		stop
		//������� 2. ���������� ������ ����� - MyStack2 ����� �������, ����� 
		//��� �������� ��������� ������������� ����������� ������.
		//���������� ����������� ����������� �������� ����� � ��� �������, � ������� �� ������� (push())
		//������������
		{
		MyStack2_List<int>	q;
		stop
		for (int i = 0; i < 5; i++)//PUSH
		{
			int w = i + 1;
			q.push(w);
		}
		stop
		for (int i = 0; i < 5; i++)//POP
		{
			int *g = q.pop();
			delete g; //��� ��� ������������ � ����� � ����������� ������,��� ����.
		}
		stop
			//�������� []
			for (int i = 0; i < 3; i++)//PUSH
			{
				int w = i + 10;
				q.push(w);
			}
			int w = q[0];
			stop
			w = q[1];
			stop
			w = q[3];
			stop
			w = q[3];
			stop
			//����� � �����
			cout << "-------------------------------------------------------------" << endl;
			cout << q << endl;
			stop
		}
	return 0;
}