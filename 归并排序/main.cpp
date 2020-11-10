#include<iostream>

//采用分治思想
//每次循环把n个元素分解成n/2个子序列
//用合并排序法堆两个子序列递归排序
//合并两个已排序的子序列

// 6,5,3,1,8,7,2,4 
// 分解
// 6,5,3,1   8,7,2,4 
// 6,5  3,1  8,7  2,4 
// 6  5  3  1  8  7  2  4 
// 合并排序
// 5,6  1,3 7,8  2,4
// 1,3,5,6  2,4,7,8
// 1,2,3,4,5,6,7,8


void mergeAdd_demo(int arr[], int left, int mid, int right)
{
	int temp[64] = { 0 };
	int i = left;	//指向左边数组最小的元素位置
	int j = mid;	//指向右边数组最小的元素位置
	int k = 0;		//临时数组下标

	while (i<mid && j<=right)
	{
		if (arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
		}
	}

	while (i < mid)
	{
		temp[k++] = arr[i++];
	}

	while (j <= right)
	{
		temp[k++] = arr[j++];
	}

	//把temp中得到内容拷贝到arr数组中
	memcpy(arr + left, temp, sizeof(int)*(right - left + 1));
}

void mergeAdd(int arr[], int left, int mid, int right,int *temp)
{
	int i = left;	//指向左边数组最小的元素位置
	int j = mid;	//指向右边数组最小的元素位置
	int k = 0;		//临时数组下标

	while (i < mid && j <= right)
	{
		if (arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
		}
	}

	while (i < mid)
	{
		temp[k++] = arr[i++];
	}

	while (j <= right)
	{
		temp[k++] = arr[j++];
	}

	//把temp中得到内容拷贝到arr数组中
	memcpy(arr + left, temp, sizeof(int)*(right - left + 1));
}

//细分成单个数据，两两进行归并
void mergeSort(int arr[], int left, int right, int *temp)
{
	int mid = 0;
	if (left < right)
	{
		mid = left + (right - left) / 2;
		mergeSort(arr, left, mid, temp);
		mergeSort(arr, mid + 1, right, temp);
		mergeAdd(arr, left, mid + 1, right, temp);
	}
}


int main()
{
	int beauties[] = { 6,5,3,1,8,7,2,4 };
	int len = sizeof(beauties) / sizeof(beauties[0]);
	int *temp = new int[len];

	mergeSort(beauties, 0, len - 1, temp);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", beauties[i]);
	}

	system("pause");
	return 0;
}