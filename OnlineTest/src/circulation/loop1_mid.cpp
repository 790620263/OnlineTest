/*
����һ����ת��Ϊ��������ʽ��

����ʵ�����£�
��������1��
Input number:1�L
�������1��
number of decimal form:1�L
    it's binary form: 00000000000000000000000000000001*/
/*
#include<iostream>
#include<vector>
using namespace std;
vector<int> toK(int x, int k);
int main()
{
    int integer;
    cout << "Input number:";
    cin >> integer;
    cout << "number of decimal form:" << integer<<endl<<"    it's binary form: ";
    vector<int> v = toK(integer, 2);
    for (int i = 0; i < 32-v.size(); i++)
    {
        cout << 0;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
}
vector<int> toK(int x,int k)
{
    //v1,2,3...=����ʮ����...
    vector<int> v;
    int a, b;
    a = x; b = 0;
    while (a > 0)
    {
        b = a % k;
        a = (a - b) / k;
        v.push_back(b);
    }

    return v;
}*/