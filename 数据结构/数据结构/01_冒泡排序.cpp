#include<iostream>

using namespace std;

//ÿ�α��������ж���������Ԫ�ش�С��С�ķ�ǰ��
//�������һ�������Ԫ�ػ��ŵ���������棬ͬʱ�´α�������-1
template<class T>
void BubbleSort(T list[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				T temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

}

int main01()
{
	int n[] = { 1,2,0,5,9,7,3,4,6,8 };
	BubbleSort(n, size(n));
	for (int i = 0; i < size(n); i++)
	{
		cout << n[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}
