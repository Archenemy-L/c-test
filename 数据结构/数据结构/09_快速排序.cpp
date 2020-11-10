#include<iostream>

using namespace std;


template<class T>
void QuickSort(T *list,const int left,const int right)
{
	if (left < right)
	{
		int i = left, j = right + 1;
		int pivot = list[left];//pivot����

		do 
		{
			//����߿�ʼ�Ҵ��������Ԫ�أ�i��¼�±�
			do
			{
				i++;
			} while (list[i] < pivot);

			//���ұ߿�ʼ��С�������Ԫ�أ�j��¼�±�
			do
			{
				j--;
			} while (list[j] > pivot);

			//�ж�i����j��߻����ұߣ�����򽻻�
			if (i < j)
			{
				swap(list[i], list[j]);
			}
		} while (i < j);

		//ѭ��������i=j�������ỻ���м�
		swap(list[left], list[j]);

		//��������
		QuickSort(list, left, j - 1);
		//�Ұ������
		QuickSort(list, j + 1, right);
	}

}


int main09()
{
	int n[] = { 1,3,5,7,9,0,2,4,6,8 };

	QuickSort(n, 0, 9);
	for (int i = 0; i < size(n); i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}