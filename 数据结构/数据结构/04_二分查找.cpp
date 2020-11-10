#include<iostream>

using namespace std;

//���ݱ���������ÿ��ѭ�������ݷֳ������ж�����λ��
//��¼��ͷ�±��β���±꣬���������±�����м��±�
//�ж��м��±�洢��ֵ�Ƿ���Ҫ���ҵ�
//�����򷵻��±�ֵ�����ڻ�С������¼�¼�Ŀ�ͷ��β���±�
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
		cout << "�ҵ��±�Ϊ��" << num << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}


	system("pause");
	return 0;
}