/*
������ʵ��Ŀ�꣺��ϰ��д���غ�����
ʵ��Ҫ�󣺱�д�ݹ麯��getPower����x��y�η�����ͬһ��������������ͺ�ʵ��ʵ���������صĺ�����
int getPower(int x, int y) ;   //������ʽ����y<0ʱ����������0���������������ȷ�Ľ����
double getPower(double x, int y); //ʵ����ʽ������yΪ��ֵ���������ܷ�����ȷ�Ľ����
������и����������򣬵��ñ�д�ĺ����õ�ָ���������������������£�*/
//#include<iostream>
//using namespace std;
//int getPower(int x, int y);
//double getPower(double x, int y);
//int main()
//{
//    int a = 10, m = 3;
//    double b = 10;
//
//    cout << getPower(a, m) << endl;   //����int getPower(int x, int y);
//    cout << getPower(b, m) << endl;   //����double getPower(double x, int y);
//    cout << getPower(a, -m) << endl;  //����int getPower(int x, int y);
//    cout << getPower(b, -m) << endl;  //����double getPower(double x, int y);
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