#include<iostream>

using namespace std;


//ÿһ�α�����¼��С���±꣬Ȼ��Ϳ�ͷԪ�ؽ���������������ð��������
//һ�α���ֻ����һ�ν���
template<class T>
void SelectSort(T list[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (list[j] < list[min])
			{
				min = j;
			}
		}
		T temp = list[min];
		list[min] = list[i];
		list[i] = temp;
	}

}




int main02()
{
	int n[] = { 1,2,0,5,9,7,3,4,6,8 };
	SelectSort(n, size(n));
	for (int i = 0; i < size(n); i++)
	{
		cout << n[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}