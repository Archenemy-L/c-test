#include<iostream>


/*希尔排序*/
//无需大幅移动数据即可完成整个数组的排序
//相当于插入排序的优化


void ShellSort(int arr[], int len)
{
	int gap = len / 2;
	for (; gap > 0; gap = gap / 2)
	{
		for (int i = gap; i < len; i++)
		{
			int current = arr[i];
			int j = 0;
			for (j = i - gap; j >= 0 && arr[j] > current; j -= gap)
			{
				arr[j + gap] = arr[j];
			}
			arr[j + gap] = current;
		}
	}

}



int main()
{
	int beauties[] = { 163,161,158,165,171,170,163,1,2 };

	int len = sizeof(beauties) / sizeof(beauties[0]);

	ShellSort(beauties, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", beauties[i]);
	}


	system("pause");
	return 0;
}