/*
函数。实验目标：练习编写重载函数。
实验要求：编写递归函数getPower计算x的y次方，在同一个程序中针对整型和实型实现两个重载的函数：
int getPower(int x, int y) ;   //整型形式，当y<0时，函数返回0，其它情况返回正确的结果。
double getPower(double x, int y); //实数形式，无论y为何值，函数都能返回正确的结果。
最后运行给定的主程序，调用编写的函数得到指定的输出结果。主程序如下：*/
//#include<iostream>
//using namespace std;
//int getPower(int x, int y);
//double getPower(double x, int y);
//int main()
//{
//    int a = 10, m = 3;
//    double b = 10;
//
//    cout << getPower(a, m) << endl;   //调用int getPower(int x, int y);
//    cout << getPower(b, m) << endl;   //调用double getPower(double x, int y);
//    cout << getPower(a, -m) << endl;  //调用int getPower(int x, int y);
//    cout << getPower(b, -m) << endl;  //调用double getPower(double x, int y);
//}
//int getPower(int x, int y) {
//    int result;
//    if (y >= 0)
//    {
//        result = x;
//        for (int i = 0; i < y-1; i++)
//        {
//            result = result * x;
//        }
//    }
//    else
//    {
//        y = -y;
//        result = 1;
//        for (int i = 0; i < y; i++)
//        {
//            result = result / x;
//        }
//    }
//    return result;
//}
//double getPower(double x, int y) {
//    double result;
//    if (y >= 0)
//    {
//        result= x;
//        for (int i = 0; i < y-1; i++)
//        {
//            result = result * x;
//        }
//    }
//    else
//    {
//        y = -y;
//        result = 1;
//        for (int i = 0; i < y; i++)
//        {
//            result = result / x;
//        }
//    }
//    return result;
//}