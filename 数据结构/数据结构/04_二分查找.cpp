#include<iostream>

using namespace std;

//数据必须先排序，每次循环把数据分成两半判断数据位置
//记录开头下标和尾部下标，利用两个下标计算中间下标
//判断中间下标存储的值是否是要查找的
//等于则返回下标值，大于或小于则更新记录的开头和尾部下标
template<class T>
int BinarySearch(T *list, const int n, const T x)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x == list[mid])
		{
			return mid;
		}
		else if (x > list[mid])
		{
			low = mid + 1;
		}
		else if (x < list[mid])
		{
			high = mid - 1;
		}
	}
	return -1;

}


int main04()
{
	int n[] = { 0,1,2,3,4,5,6,7,8,9 };

	int num = BinarySearch(n, size(n), 1);

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