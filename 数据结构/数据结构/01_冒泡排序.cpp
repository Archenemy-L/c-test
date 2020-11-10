#include<iostream>

using namespace std;

//每次遍历数组判断相邻两个元素大小，小的放前面
//遍历完第一遍后最大的元素会排到数组最后面，同时下次遍历次数-1
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
