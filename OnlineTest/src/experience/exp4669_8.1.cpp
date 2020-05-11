/*
实验8.1 指针 求有序数组中和为某个值的两个数。题目描述：
输入一个不定长的有序整数数组（升序排列），求和为某个值的两个数字，并将这两个数字输出，如果有多对数字满足要求，输出一对即可，如果不存在，输出Not found。
具体程序流程，输入一个数字n，表示将要输入的不定长数组的长度，然后输入一个长度为n的有序整数数组array，再输入一个数字sum，求array中的两个数，使得这两个数的和为sum。要求只能使用一层循环，应用指针实现。
提示：可以使用两个指针来实现，第一个指针指向数组头，第二个指针指向数组尾，计算两个指针指向的数字的和是否等于目标数字，如果不是，根据与目标数字比较大小来判断移动哪一个指针的位置，直到找到了符合条件的两个指针或两个指针碰面为止。

输入输出样例
第一种情况 : 成功
Input n : 5
Input array : 2 5 7 10 15
Input sum : 9
These two numbers are 2 and 7

第二种情况：不成功
Input n : 8
Input array : 2 3 5 7 10 13 20 25
Input sum : 43
Not found

参考程序模板：
*/
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, sum;
//	cout << "Input n:";
//	cin >> n;
//
//	int* array;
//	//动态申请长度为n的数组
//	array = new int[n] {0};
//	cout << "Input array:";
//	//输入n个整数到数组array中
//	for (int i = 0; i < n; i++)
//		cin >> array[i];
//	cout << "Input sum:";
//	cin >> sum;	//输入要求的两个数的和sum
//
//	int* p, * q;	//定义两个指针分别指向数组头和数组尾
//	p = array;
//	//对q指针赋值，使其指向数组尾
//	q = &array[n - 1];
//
//	bool found = false;
//	while ( p<&array[n-1]/* 跳出循环的条件 */)
//	{
//		q = &array[n - 1];
//		// TO DO: 核心逻辑，恰当的移动指针
//		while (q > p)
//		{
//			if (*p + *q == sum)
//			{
//				found = true;
//				break;
//			}
//			q--;
//		}
//
//		if (found)
//		{
//			break;
//		}
//
//		p++;
//	}
//	if ( found/* 找到了两个数字 */)
//		cout << "These two numbers are " << *p << " and " << *q << endl;
//	else
//		cout << "Not found" << endl;
//
//	delete[] array;
//	return 0;
//}
