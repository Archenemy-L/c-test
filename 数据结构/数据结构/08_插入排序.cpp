#include<iostream>

using namespace std;

//用for循环遍历整个数组，定义temp存储当前取出的元素，使in的值等于out
//用while循环判断取出元素out之前的所有元素是否大于等于当前取出元素
//大于则元素往当前位置后一位存放，while循环后所有大于取出元素的元素都往后移了一格
//in会等于比取出元素小的后一位下标，并且使取出元素移动到in的位置
template<class T>
void InsertioSort(T *list, int n)
{
	//in存储当前对比元素的下标
	//out存取当前取出元素的下标
	int in, out;

	for (out = 1; out < n; ++out)
	{
		//temp记录当前取出元素的值
		T temp = list[out];
		in = out;
		//让每一个out下标之前的元素和取出元素对比
		while (in > 0 && list[in-1] >= temp)
		{
			list[in] = list[in - 1];
			--in;
		}
		//while循环结束后把取出元素赋值给当前in下标的元素
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