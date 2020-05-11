/*
 循环控制结构。实验目的，使用循环实现输入数据合法性检查。编程实现输出 m~n之间所有素数，并求和，m和n由键盘输入。素数是只能被1和自身整除的大于1的正整数。 要求程序能对用户输入的数据进行正确性检查，满足条件：m和n都是大于1的正整数，并且m<=n。
输入提示信息：
"Please input the number m:"
"Please input the numbers n:"
输入错误提示信息：
"The input number must be an integer larger than 1!Input again!"
"n must be not smaller than m! Input again!"
输出格式：
2
3
5
sum of prime numbers:10*/
//#include<iostream>
//#include <cmath>
//using namespace std;
//int fun(int n)
//{
//    for (int i = 2; i < n / 2 + 1; i++)
//    {
//        if (n % i == 0)return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int m = 0, n = 0;
//    do
//    {
//        do {
//            cout << "Please input the number m:";
//            cin >> m;
//        } while (m <= 1 && cout << "The input number must be an integer larger than 1!Input again!" << endl);  //如果m<=1, 则重新输入m。
//
//        //add code to input n 
//        do {
//            cout << "Please input the number n:";
//            cin >> n;
//        } while (n <= 1 && cout << "The input number must be an integer larger than 1!Input again!" << endl);  //如果n<=1, 则重新输入n。
//    } while ( /* add code here */m>n&& cout <<"n must be not smaller than m! Input again!" << endl);   //保证m<=n，否则重新输入m和n。
//
//    int sum = 0;
//    for (int i = m; i <= n; i++)
//    {
//        //判断数i是否为素数, 并求和。 
//
//        if (fun(i))
//        {
//            sum += i;
//            cout << i << endl;
//        }
//        //......
//
//    }
//    cout << "sum of prime numbers:" << sum;
//    return 0;
//}