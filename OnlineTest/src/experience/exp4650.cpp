/*
ʵ��2.3 ѡ����ƽṹ������˵��������switch�ж���������һ���򵥵ļ���������
Ҫ��:
(1) �û���������ʽ�Ӽ���������ʽ����������  �����op  ��������
(2) Ȼ�������ʽ��ֵ
�� �û�����������Ϊ������������ӣ�+��������-�����ˣ�*��������/�������ַ����� op ��ʾ��op���Ϸ�ʱ�������Invalid operator������������Ϊ0ʱ�������Divided by zero!��
�� �������� �Ͳ������� Ϊ���������ݣ��ֱ��ø����ͱ���data1��data2 ��ʾ��
�� �������н��������ʾ��
1+2�L
1+2=3
ע�����Ϻ�ɫ����Ϊ������������ݣ���ɫ����Ϊ��Ļ��ʾ�Ľ����
����Ҫ�󣺼�������������ʾ��Ϣð�ź��޿ո�
���Ҫ�󣺼��������
����������������º�ɫ����Ϊ������������ݣ���ɫ����Ϊ��Ļ��ʾ�Ľ����
sample �٣�
please input the equation:
1+1�L
1+1=2
sample �� ��
please input the equation:
2*3.2�L
2*3.2=6.4
sample �ۣ�
please input the equation:
4=1�L
Invalid operator!
sample �ܣ�
please input the equation:
6/2�L
6/2=3
sample �ݣ�
please input the equation:
6/0�L
Divided by zero!

�ο�����ģ�壺
#include<iostream>
using namespace std;
int main()
{
    float data1,data2,result;
    char op;
    cout<<"please input the equation:"<<endl;
    cin>>data1>>op>>data2;
    switch(op)
    {
        case '+':
            result = data1+data2;
            break;
       //�����������

          case '/' :
            if (       )
            {
                   cout<<"Divided by zero!"<<endl;
                    return 0;
            }
            else{
                //to do
            }
            //to do
        default:
            cout<<"Invalid operator!"<<endl;
            return 0;
    }
    cout<<data1<<op<<data2<<"="<<result<<endl;
    return 0;
}*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    float data1,data2,result;
//    char op;
//    cout<<"please input the equation:"<<endl;
//    cin>>data1>>op>>data2;
//    switch(op)
//    {
//        case '+':
//            result = data1+data2;
//            break;
//       //�����������
//
//          case '/' :
//            if (abs(data2)<1e-5)
//            {
//                   cout<<"Divided by zero!"<<endl;
//                    return 0;
//            }
//            else{
//                result = data1 / data2;
//            }
//            break;
//          case '*':
//              result = data1 * data2;
//              break;
//          case '-':
//              result = data1 - data2;
//              break;
//        default:
//            cout<<"Invalid operator!"<<endl;
//            return 0;
//    }
//    cout<<data1<<op<<data2<<"="<<result<<endl;
//    return 0;
//}