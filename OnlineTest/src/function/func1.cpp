/*
输出 2~n之间所有素数，并求和，n由键盘输入。素数是只能被1和自身整除的整数。要求编写函数判断自然数x是否为素数，函数原型为：
int IsPrime(unsigned int x); //x是素数返回1，不是素数返回0。
输入提示信息：
"Please input n(n>1): "
输出提示信息：
"Sum of prime numbers is "

程序运行示例：
Please input n(n>1): 10
2
3
5
7
Sum of prime numbers is 17*/
/*#include<iostream>
#include<ctime>
using namespace std;
int IsPrime(unsigned int x) {
	for (unsigned int i = 2; i < x/2+1; i++)
	{
		if (x % i == 0)return false;
	}
	return true;
}
int main()
{
	time_t t1 = time(0);


	int n;
	long sum = 0;
	cout << "Please input n(n>1): ";
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			cout << i << endl;
			sum += i;
		}
	}

	cout << "Sum of prime numbers is " << sum;

	time_t t2 = time(0);

	cout << endl<<t1<<"\t"<<t2 <<"\t" <<t2-t1<<endl;
}*/