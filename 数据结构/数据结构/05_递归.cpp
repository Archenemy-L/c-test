#include<iostream>


using namespace std;

//�ݹ����Ƚϼ�࣬���ǻ����ռ���ڴ�ÿ�ε��ö������ݴ�
long Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * Factorial(n - 1);
	}
}
//ѭ������ײ�
long Factorial2(int n)
{
	long sum = n;
	for (int i = 1; i < n; i++)
	{
		sum = sum * i;
	}
	return sum;
}

int main05()
{

	long num = Factorial(5);

	cout << "�ײ㣺" << num << endl;

	long num2 = Factorial2(5);

	cout << "�ײ㣺" << num2 << endl;

	system("pause");
	return 0;
}