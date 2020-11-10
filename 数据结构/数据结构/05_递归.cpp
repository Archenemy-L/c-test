#include<iostream>


using namespace std;

//递归代码比较简洁，但是会大量占用内存每次调用都会有暂存
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
//循环解决阶层
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

	cout << "阶层：" << num << endl;

	long num2 = Factorial2(5);

	cout << "阶层：" << num2 << endl;

	system("pause");
	return 0;
}