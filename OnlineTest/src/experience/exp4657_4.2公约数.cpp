/*
 4.2������ʵ��Ŀ�꣺ѧ���������ô��ݷ��ض������ֵ��
ʵ��Ҫ�󣺱�д����gcd_lcm���������������Լ������С����������д�����������û�����������������ú���gcd_lcm��Ⲣ������ǵ����Լ������С��������

�������ʽ��
cout<<"Please input two integers: ";
cout<<"The GCD of them is "<<...<<endl;
cout<<"The LCM of them is "<<...<<endl;

�������ʵ��1��
Pleae input two integers: 12 24
The GCD of them is 12
The LCM of them is 24

�������ʵ��2��
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
//    lcm = num1 * num2 / gcd;//��С������=�⼸�����ĳ˻��������ǵ��������
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
//    int reminder, divisor,divident;//������������
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
//    lcm = num1 * num2 / gcd;//��С������=�⼸�����ĳ˻��������ǵ��������
//}
