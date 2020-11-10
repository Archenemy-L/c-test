#include<iostream>

using namespace std;

//ÿ�εݹ�õ�������ÿ�����������ϣ������

template<class T>
void Permutations(T *list,const int begin,const int end)
{
	if (begin == end)
	{
		for (int i = 0; i <= end; i++)
		{
			cout << list[i];
		}
		cout << endl;
	}
	else
	{
		for (int i = begin; i <= end; i++)
		{
			swap(list[begin], list[i]);
			Permutations(list, begin + 1, end);
			swap(list[begin], list[i]);
		}
	}

}

int main07()
{
	char s[] = "abc";
	Permutations(s, 0, 2);

	system("pause");
	return 0;
}