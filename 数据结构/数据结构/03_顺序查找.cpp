#include<iostream>

using namespace std;

//˳����ң�������û����ʱʹ�ã�Ч�ʺܵ�
template<class T>
int SequentialSearch(T *list, const int n, const T x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (list[i] == x)
		{
			return i;
		}
	}
	if (i == n)
	{
		return -1;
	}
}


int main03()
{

	int n[] = { 1,3,5,7,8,9,6,4,2,0 };

	int num = SequentialSearch(n, size(n), 5);

	if (num == -1)
	{
		cout << "δ�ҵ�����" << endl;
	}
	else
	{
		cout << "�ҵ����ݣ��±�Ϊ��" << num << endl;
	}

	system("pause");
	return 0;
}