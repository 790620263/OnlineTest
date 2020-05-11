/*
数值计算。逆序数的拆分计算。
从键盘输入一个4位数的整数，编程计算并输出它的逆序数（忽略整数前的正负号）。例如，输入-1234，忽略负号，由1234分离出其千位1、百位2、十位3、个位4，然后计算4*1000+3*100+2*10+1 = 4321，并输出4321。再将得到的逆序数4321拆分为两个2位数的正整数43和21，计算并输出拆分后的两个数的平方和的结果。

以下是程序的输出示例：
Input x:
-1234↙
y=4321
a=43,b=21
result=2290

输出格式：
输入提示信息："Input x:\n"
逆序数输出格式："y=逆序数\n"
逆序数拆分后的输出格式："a=2位数1,b=2位数2\n"
平方和的输出格式："result=平方和\n" */
/*#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int> getBit(int x);
int main()
{
	int x;
	cout << "Input x:"<<"\n";
	cin >> x;
	x = abs(x);

	vector<int> v = getBit(x);
	cout << "y=";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	cout << "\n";

	cout << "a=" << v[0] << v[1] << ",b=" << v[2] << v[3] << "\n";
	cout << "result=" << (v[0] * 10 + v[1]) * (v[0] * 10 + v[1]) + (v[2] * 10 + v[3]) * (v[2] * 10 + v[3]) << "\n";
}
vector<int> getBit(int i)
{
	vector<int>v;
	int remainder = 0, dividend = i;
	while (dividend > 0)
	{
		remainder = dividend % 10;
		v.push_back(remainder);

		dividend = (dividend - remainder) / 10;
	}

	return v;
}*/
