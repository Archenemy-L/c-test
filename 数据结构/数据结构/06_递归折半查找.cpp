#include<iostream>

using namespace std;


//ÿ�εݹ��൱�ڽ�����һ��ѭ���������м�ֵ����ʹ�м�ֵ��Ҫ���ҵ����Ա�
//�����ҵ�ֵ�����м�ֵ����ֵ���ڵ�ǰ�м�ֵ��1
//�����ҵ�ֵС���м�ֵ����ֵ���ڵ�ǰ�м�ֵ��1
int BinarySearch_R(int *list, const int left, const int right, const int x)
{
	if (left <= right)
	{
		int mid = (left + right) / 2;
		if (x < list[mid])
		{
			return BinarySearch_R(list, left, mid-1, x);
		}
		else if (x > list[mid])
		{
			return BinarySearch_R(list, mid+1, right, x);
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main06()
{
	int n[] = { 0,1,2,3,4,5,6,7,8,9 };
	int num = BinarySearch_R(n, 0, size(n), 7);
	
	if (num != -1)
	{
		cout << "�ҵ��±�Ϊ��" << num << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}



	system("pause");
	return 0;
}