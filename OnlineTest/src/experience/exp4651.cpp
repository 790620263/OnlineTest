/*
ѡ����ƽṹ���ܶ�Ӧ���е��û�ע�ỷ�ڣ����û����õ�����Ĺ�����Ҫ����������д�д��ĸ�����߱��������ֺ���ĸ�ȡ����д��������û��Ӽ��������һ���ַ��жϲ�����ַ������͡������У��»��ߡ�������ż������д��ĸ��Сд��ĸ���հ׺����������пհ��ַ�ָTab������ �Ϳո�
��ʾ����֪�������ַ���ASCII�룬���Խ���ת��Ϊintֵ��ӡ���������磬���з�'\n'��ASCII����int('\n') = 10��
��������»���_�������the character is:underlined
������������������the character is:odd number
�������ż���������the character is:even number
��������д��ĸ�������the character is:upper case
�������Сд��ĸ�������the character is:lower case
�������հ��ַ��������the character is:blank
������������������the character is:others

����������
please input your character:4
���������
the character is:even number
����������
please input your character:H
���������
the character is:upper case

�ο�����ģ�壺
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"please input your character:";
    ch=cin.get(); //��get���Եõ��������͵��ַ��������ʽ��CMS����ĿҪ��
    cout<<"the character is:";
    if (ch>='A' ||ch<='Z')  //���� if(ch>=65 || ch<=90)
    {
      //to do
    }
   //to do
    return 0;
}*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    char ch;
//    cout << "please input your character:";
//    ch = cin.get(); //��get���Եõ��������͵��ַ��������ʽ��CMS����ĿҪ��
//    if (ch == '_')
//    {
//    cout << "the character is:underlined";
//    }
//    else if (ch >= '0' && ch <= '9') {
//        if (ch == '1' || ch == '3' || ch == '5' || ch == '7' || ch == '9')
//        {
//            cout << "the character is:odd number";
//        }
//        else if (ch == '2' || ch == '4' || ch == '6' || ch == '8' || ch == '0')
//        {
//            cout << "the character is:even number";
//        }
//    }
//    else if (ch >= 'A' && ch <= 'Z')  //���� if(ch>=65 && ch<=90)
//    {
//        cout << "the character is:upper case";
//    }
//    else if (ch >= 'a' && ch <= 'z')
//    {
//        cout << "the character is:lower case";
//    }
//    else if(ch==' '||ch=='\t'||ch=='\n')
//    {
//        cout << "the character is:blank";
//    }
//    else
//    {
//        cout << "the character is:others";
//    }
//    return 0;
//}