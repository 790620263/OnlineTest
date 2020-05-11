/*
将任一整数转换为二进制形式。

运行实例如下：
输入样例1：
Input number:1↙
输出样例1：
number of decimal form:1↙
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
    //v1,2,3...=个，十，百...
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