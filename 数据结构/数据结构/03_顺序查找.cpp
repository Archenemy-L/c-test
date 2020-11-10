#include<iostream>

using namespace std;

//顺序查找，在数组没排序时使用，效率很低
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
		cout << "未找到数据" << endl;
	}
	else
	{
		cout << "找到数据，下标为：" << num << endl;
	}

	system("pause");
	return 0;
}