#include<iostream>


using namespace std;


//交换两个变量的值
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void SelectSort1(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int max = 0;
		for (int j = 1; j < len - i; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j;
			}
		}
		if (max != (len - i - 1))
		{
			swap(&arr[max], &arr[len - i - 1]);//和最后一个交换
		}
	}
	
}

void SelectSort2(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[min], &arr[i]);//和第一个交换
	}


}


int main()
{
	int beauties[] = { 163,161,158,165,171,170,163,159,162 };

	int len = sizeof(beauties) / sizeof(beauties[0]);

	SelectSort1(beauties, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", beauties[i]);
	}


	system("pause");
	return 0;
}