/*
(10分)实验1.4 键盘输入与输出。分离数字。
实验目的：练习键盘输入数据，学会使用取余运算符，学会按固定列数输出数据。
编写一段程序，当用户输入一个5位的整数时，程序将其分离成单独的数字（提示：应用整除和余运算符）
，并将分离出的数字之间用“2个空格“分隔显示在屏幕上。
例如，如果输入为42339，则程序的输出结果应如实例输出中所示。*/
/*
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
vector<int> getBit(int i);
int main() {
	int num = 0;
	cout << "Enter a five-digit number:";
	cin >>num;
	vector<int> v = getBit(num);
	for (int i=v.size();i>0;i--)
	{
		cout << v[i-1]<< setw(3);
	}
}


vector<int> getBit(int i)
{
	vector<int>v;
	int remainder=0, dividend=i;
	while (dividend > 0)
	{
		remainder = dividend % 10;
		v.push_back(remainder);

		dividend = (dividend - remainder) / 10;
	}

	return v;
}*/