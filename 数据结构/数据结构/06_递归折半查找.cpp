#include<iostream>

using namespace std;


//每次递归相当于进行了一次循环，设置中间值并且使中间值和要查找的数对比
//若查找的值大于中间值则上值等于当前中间值加1
//若查找的值小于中间值则下值等于当前中间值减1
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
		cout << "找到下标为：" << num << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}



	system("pause");
	return 0;
}