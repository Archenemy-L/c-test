#include<iostream>

using namespace std;


//每一次遍历记录最小的下标，然后和开头元素交换，交换次数比冒泡排序少
//一次遍历只进行一次交换
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