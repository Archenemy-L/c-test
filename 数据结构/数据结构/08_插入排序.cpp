#include<iostream>

using namespace std;

//��forѭ�������������飬����temp�洢��ǰȡ����Ԫ�أ�ʹin��ֵ����out
//��whileѭ���ж�ȡ��Ԫ��out֮ǰ������Ԫ���Ƿ���ڵ��ڵ�ǰȡ��Ԫ��
//������Ԫ������ǰλ�ú�һλ��ţ�whileѭ�������д���ȡ��Ԫ�ص�Ԫ�ض���������һ��
//in����ڱ�ȡ��Ԫ��С�ĺ�һλ�±꣬����ʹȡ��Ԫ���ƶ���in��λ��
template<class T>
void InsertioSort(T *list, int n)
{
	//in�洢��ǰ�Ա�Ԫ�ص��±�
	//out��ȡ��ǰȡ��Ԫ�ص��±�
	int in, out;

	for (out = 1; out < n; ++out)
	{
		//temp��¼��ǰȡ��Ԫ�ص�ֵ
		T temp = list[out];
		in = out;
		//��ÿһ��out�±�֮ǰ��Ԫ�غ�ȡ��Ԫ�ضԱ�
		while (in > 0 && list[in-1] >= temp)
		{
			list[in] = list[in - 1];
			--in;
		}
		//whileѭ���������ȡ��Ԫ�ظ�ֵ����ǰin�±��Ԫ��
		list[in] = temp;
	}

}


int main08()
{
	int n[] = { 2,4,6,8,0,1,3,5,7,9 };
	InsertioSort(n, size(n));

	for (auto i : n)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}