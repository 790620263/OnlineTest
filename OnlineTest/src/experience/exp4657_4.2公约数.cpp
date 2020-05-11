/*
 4.2函数。实验目标：学会利用引用传递返回多个函数值。
实验要求：编写函数gcd_lcm求两个整数的最大公约数和最小公倍数，编写主函数根据用户输入的两个整数调用函数gcd_lcm求解并输出它们的最大公约数的最小公倍数。

输出语句格式：
cout<<"Please input two integers: ";
cout<<"The GCD of them is "<<...<<endl;
cout<<"The LCM of them is "<<...<<endl;

输入输出实例1：
Pleae input two integers: 12 24
The GCD of them is 12
The LCM of them is 24

输入输出实例2：
Pleae input two integers: 12 56
The GCD of them is 4
The LCM of them is 168*/
//#include <iostream>
//#include<cmath>
//using namespace std;
////only necessary output statments are given here
//void gcd_lcm(int num1, int num2, int& gcd, int& lcm);
//void gcd_lcm_way2(int num1, int num2, int& gcd, int& lcm)
//{
//    gcd = 0;
//    int smaller = num1 < num2 ? num1 : num2;
//    for (int i = 1; i <= smaller; i++)
//    {
//        if (num1 % i == 0 && num2 % i == 0)
//        {
//            gcd = i;
//        }
//    }
//
//    lcm = num1 * num2 / gcd;//最小公倍数=这几个数的乘积除以他们的最大公因数
//}
//int main()
//{
//    int num1, num2,GCD,LCM;
//    int &gcd=GCD, &lcm=LCM;
//    //to add other statements you need
//    std::cout << "Please input two integers: ";
//    cin >> num1 >> num2;
//    gcd_lcm_way2(num1, num2, gcd,lcm);
//    //to add other statements you need
//    std::cout << "The GCD of them is " << gcd << endl;
//    std::cout << "The LCM of them is " << lcm << endl;
//    return 0;
//}
//void gcd_lcm(int num1, int num2, int& gcd, int& lcm)
//{
//    int reminder, divisor,divident;//除数，被除数
//    divisor = num1 < num2 ? num1 : num2;
//    divident = num1 > num2 ? num1 : num2;
//    reminder = divident % divisor;
//    while (reminder != 0)
//    {
//        divident = divisor;
//        divisor = reminder;
//        reminder = divident % divisor;
//    }
//    gcd = divisor;
//
//    lcm = num1 * num2 / gcd;//最小公倍数=这几个数的乘积除以他们的最大公因数
//}
