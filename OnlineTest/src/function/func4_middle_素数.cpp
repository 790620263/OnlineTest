/*
根据用户输入的正整数n判断该数是否为素数。不是素数时，从小到大输出n的所有不重复的因子。
完成一个数的判断后，询问用户是否继续判断下一个数，如果用户输入“Y”或“y”那么进行下一次判断；如果输入其它字符，那么结束程序。
提示，素数是大于1且只能被1和自身整除的正整数。
要求将素数判断过程编写为函数IsPrime,函数原型如下：
bool IsPrime(unsigned int n);
函数功能：判断n 是否为素数，如果不是素数，从小到大输出n的所有不重复的因子。
函数返回值: n是素数时返回true，不是素数时返回 false。
数字n输入提示信息："Please input a positive integer n:"
数字n输入格式：一个整数
因子输出格式：一个整数，后面跟一个换行符
结论输出格式："一个整数 is prime."（后接换行符） 和 "一个整数 is not prime."（后接换行符）
询问输入提示信息："Do you want to judge another integer(y/n)?"
询问输入格式：一个字符
运行实例：
Please input a positive integer n:7
7 is prime.
Do you want to judge another integer(y/n)?y
Please input a positive integer n:10
2
5
10 is not prime.
Do you want to judge another integer(y/n)?n
*/

//#include<iostream>
//#include<ctime>
//using namespace std;
//int IsPrime(unsigned int x) {
//	for (unsigned int i = 2; i < x / 2 + 1; i++)
//	{
//		if (x % i == 0)return false;
//	}
//	return true;
//}
//void printSub(int num)
//{
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//			cout << i << endl;
//	}
//}
//void judge()
//{
//	cout << "Please input a positive integer n:";
//	int n;
//	cin >> n;
//	if (IsPrime(n))
//		cout << n << " is prime.\n";
//	else
//	{
//		printSub(n);
//		cout << n << " is not prime.\n";
//	}
//
//	cout << "Do you want to judge another integer(y/n)?";
//	char c;
//	cin >> c;
//	if (c == 'y' || c == 'Y')
//		judge();
//	else return;
//}
//int main()
//{
//	judge();
//}