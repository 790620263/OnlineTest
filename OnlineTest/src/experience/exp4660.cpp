/*
 ѭ�����ƽṹ��ʵ��Ŀ�ģ�ʹ��ѭ��ʵ���������ݺϷ��Լ�顣���ʵ����� m~n֮����������������ͣ�m��n�ɼ������롣������ֻ�ܱ�1�����������Ĵ���1���������� Ҫ������ܶ��û���������ݽ�����ȷ�Լ�飬����������m��n���Ǵ���1��������������m<=n��
������ʾ��Ϣ��
"Please input the number m:"
"Please input the numbers n:"
���������ʾ��Ϣ��
"The input number must be an integer larger than 1!Input again!"
"n must be not smaller than m! Input again!"
�����ʽ��
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
//        } while (m <= 1 && cout << "The input number must be an integer larger than 1!Input again!" << endl);  //���m<=1, ����������m��
//
//        //add code to input n 
//        do {
//            cout << "Please input the number n:";
//            cin >> n;
//        } while (n <= 1 && cout << "The input number must be an integer larger than 1!Input again!" << endl);  //���n<=1, ����������n��
//    } while ( /* add code here */m>n&& cout <<"n must be not smaller than m! Input again!" << endl);   //��֤m<=n��������������m��n��
//
//    int sum = 0;
//    for (int i = m; i <= n; i++)
//    {
//        //�ж���i�Ƿ�Ϊ����, ����͡� 
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