/*
[试题3]请按题目要求编写程序打印输出[a,b]之间的所有素数，并统计该区间素数的个数(count)。
其中a和b在主函数通过键盘输入（且输入时应满足b>a>1，人工判断），数据的打印输出也在主函数完成，
判断一个数是否是素数调用 fun(n) 函数实现，若n是素数函数返回值为1，否则返回值为0。fun函数原型如下：
     int fun(int n);
***输入提示信息："Input a and b:\n"
***输入数据语句**：
cin >> a;
cin.ignore(1);
cin >> b;

***输出素数语句**：
cout << current_prime << endl;
***输出统计结果语句**：
cout << "Prime number is:" << count << endl;*/
/*
#include<iostream>
using namespace std;
int fun(int n)
{
    for (int i = 2; i < n/2+1; i++)
    {
        if (n % i == 0)return 0;
    }
    return 1;
}
int main()
{
    cout << "Input a and b:\n";
    int a, b,count=0;
    cin >> a;
    cin.ignore(1);
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (fun(i) == 1)
        {
            cout << i << endl;
            count++;
        }
    }
    cout << "Prime number is:" << count << endl; 
}*/