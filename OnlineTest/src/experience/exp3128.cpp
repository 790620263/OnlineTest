/*
��ֵ���㡣�������Ĳ�ּ��㡣
�Ӽ�������һ��4λ������������̼��㲢�����������������������ǰ�������ţ������磬����-1234�����Ը��ţ���1234�������ǧλ1����λ2��ʮλ3����λ4��Ȼ�����4*1000+3*100+2*10+1 = 4321�������4321���ٽ��õ���������4321���Ϊ����2λ����������43��21�����㲢�����ֺ����������ƽ���͵Ľ����

�����ǳ�������ʾ����
Input x:
-1234�L
y=4321
a=43,b=21
result=2290

�����ʽ��
������ʾ��Ϣ��"Input x:\n"
�����������ʽ��"y=������\n"
��������ֺ�������ʽ��"a=2λ��1,b=2λ��2\n"
ƽ���͵������ʽ��"result=ƽ����\n" */
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
