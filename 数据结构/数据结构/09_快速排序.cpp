#include<iostream>

using namespace std;


template<class T>
void QuickSort(T *list,const int left,const int right)
{
	if (left < right)
	{
		int i = left, j = right + 1;
		int pivot = list[left];//pivot枢轴

		do 
		{
			//从左边开始找大于枢轴的元素，i记录下标
			do
			{
				i++;
			} while (list[i] < pivot);

			//从右边开始找小于枢轴的元素，j记录下标
			do
			{
				j--;
			} while (list[j] > pivot);

			//判断i是在j左边还是右边，左边则交换
			if (i < j)
			{
				swap(list[i], list[j]);
			}
		} while (i < j);

		//循环结束后i=j，把枢轴换到中间
		swap(list[left], list[j]);

		//左半边排序
		QuickSort(list, left, j - 1);
		//右半边排序
		QuickSort(list, j + 1, right);
	}

}


int main09()
{
	int n[] = { 1,3,5,7,9,0,2,4,6,8 };

	QuickSort(n, 0, 9);
	for (int i = 0; i < size(n); i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}