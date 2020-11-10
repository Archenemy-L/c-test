#include<iostream>

//选择第一个数为基准数，已基准为中心将小于它的排在前面，大于等于它的排在后面


int partition(int arr[], int low, int high)
{
	int i = low;
	int j = high;
	int base = arr[low];

	if (low < high)
	{
		while (i < j)
		{
			while (i < j&&arr[j] >= base)
			{
				j--;
			}
			if (i < j)//右边已经找到小于基数的数
			{
				arr[i++] = arr[j];
			}
			while (i < j && arr[i] < base)
			{
				i++;
			}
			if (i < j)//左边边已经找到大于基数的数
			{
				arr[j--] = arr[i];
			}
			arr[i] = base;
		}
		return i;
	}

}

void QuickSort(int *arr, int low, int high)
{
	if (low < high)
	{
		int index = partition(arr, low, high);

		QuickSort(arr, low, index - 1);
		QuickSort(arr, index + 1, high);
	}

}



int main()
{
	int beauties[] = { 163,161,158,165,171,170,163,159,162 };

	int len = sizeof(beauties) / sizeof(beauties[0]);

	QuickSort(beauties,0 , len-1);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", beauties[i]);
	}

	system("pause");
	return 0;
}