/*
(10��)ʵ��1.4 ����������������������֡�
ʵ��Ŀ�ģ���ϰ�����������ݣ�ѧ��ʹ��ȡ���������ѧ�ᰴ�̶�����������ݡ�
��дһ�γ��򣬵��û�����һ��5λ������ʱ�����������ɵ��������֣���ʾ��Ӧ�����������������
�����������������֮���á�2���ո񡰷ָ���ʾ����Ļ�ϡ�
���磬�������Ϊ42339��������������Ӧ��ʵ���������ʾ��*/
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