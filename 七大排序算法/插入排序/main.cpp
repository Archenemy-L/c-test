#include<iostream>


/*≤Â»Î≈≈–Ú*/


void InsertSort(int arr[], int len)
{
	int preIndex = 0, current = 0;

	for (int i = 1; i < len; i++)
	{
		preIndex = i - 1;
		current = arr[i];

		while (preIndex >= 0 && arr[preIndex] > current)
		{
			arr[preIndex + 1] = arr[preIndex];
			preIndex--;
		}
		arr[preIndex + 1] = current;
	}
	
}


int main()
{
	int beauties[] = { 163,161,158,165,171,170,163,159,162 };

	int len = sizeof(beauties) / sizeof(beauties[0]);

	InsertSort(beauties, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", beauties[i]);
	}


	system("pause");
	return 0;
}