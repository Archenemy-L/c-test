#include<iostream>

//���÷���˼��
//ÿ��ѭ����n��Ԫ�طֽ��n/2��������
//�úϲ����򷨶����������еݹ�����
//�ϲ������������������

// 6,5,3,1,8,7,2,4 
// �ֽ�
// 6,5,3,1   8,7,2,4 
// 6,5  3,1  8,7  2,4 
// 6  5  3  1  8  7  2  4 
// �ϲ�����
// 5,6  1,3 7,8  2,4
// 1,3,5,6  2,4,7,8
// 1,2,3,4,5,6,7,8


void mergeAdd_demo(int arr[], int left, int mid, int right)
{
	int temp[64] = { 0 };
	int i = left;	//ָ�����������С��Ԫ��λ��
	int j = mid;	//ָ���ұ�������С��Ԫ��λ��
	int k = 0;		//��ʱ�����±�

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

	//��temp�еõ����ݿ�����arr������
	memcpy(arr + left, temp, sizeof(int)*(right - left + 1));
}

void mergeAdd(int arr[], int left, int mid, int right,int *temp)
{
	int i = left;	//ָ�����������С��Ԫ��λ��
	int j = mid;	//ָ���ұ�������С��Ԫ��λ��
	int k = 0;		//��ʱ�����±�

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

	//��temp�еõ����ݿ�����arr������
	memcpy(arr + left, temp, sizeof(int)*(right - left + 1));
}

//ϸ�ֳɵ������ݣ��������й鲢
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