/*
数值计算。实验目的：练习变量的使用，符号常量的定义，学会使用数学库函数，输出转义字符。
按照注释提示功能，将程序中下划线部分替换成适当的代码。

补充程序：
#include <iostream>
#include                           //将数学库函数包含进来
using namespace std;
                                         //定义圆周率常量PI，取值为3.14159
int main()
{
double x = 0, y = 0; //定义双精度型变量 x和y。
x =                                   //将60度角转换成弧度赋给变量x;
y =                      //使用sin()函数将x的正弦值赋给变量y
cout<<"y="<<y<<endl; //输出y
cout<<"y的平方根="<<                   <<endl; //输出y的平方根
cout<<                            ; //在电脑上响铃一次, 然后输出回车。*/
/*
#include <iostream>
#include<cmath>//将数学库函数包含进来
using namespace std;
//定义圆周率常量PI，取值为3.14159
const double PI = 3.14159;
int main()
{
    double x = 0, y = 0; //定义双精度型变量 x和y。
    x = 60.0/ 180 * PI;                                 //将60度角转换成弧度赋给变量x;
    y = sin(x);                   //使用sin()函数将x的正弦值赋给变量y
    cout << "y=" << y << endl; //输出y
    cout << "y的平方根=" << sqrt(y) << endl; //输出y的平方根
    cout << "\a\r"; //在电脑上响铃一次, 然后输出回车。
}*/