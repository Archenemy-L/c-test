#include<iostream>

//½»»»
void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		bool sorted = true;
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				sorted = false;
			}
		}
		if (sorted)break;
	}
}

int main()
{
	int beauties[] = { 163,161,158,165,171,170,163,159,162 };

	int len = sizeof(beauties) / sizeof(beauties[0]);

	BubbleSort(beauties, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", beauties[i]);
	}

	system("pause");
	return 0;
}