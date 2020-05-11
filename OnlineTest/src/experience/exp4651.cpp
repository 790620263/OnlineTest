/*
选择控制结构。很多应用中的用户注册环节，对用户设置的密码的构成有要求，例如必须有大写字母，或者必须有数字和字母等。请编写程序根据用户从键盘输入的一个字符判断并输出字符的类型。类型有：下划线、奇数、偶数、大写字母、小写字母、空白和其它。其中空白字符指Tab、换行 和空格。
提示：不知道特殊字符的ASCII码，可以将其转化为int值打印出来，例如，换行符'\n'的ASCII码是int('\n') = 10。
如果输入下划线_，则输出the character is:underlined
如果输入奇数，则输出the character is:odd number
如果输入偶数，则输出the character is:even number
如果输入大写字母，则输出the character is:upper case
如果输入小写字母，则输出the character is:lower case
如果输入空白字符，则输出the character is:blank
如果输入其他，则输出the character is:others

输入样例：
please input your character:4
输出样例：
the character is:even number
输入样例：
please input your character:H
输出样例：
the character is:upper case

参考程序模板：
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"please input your character:";
    ch=cin.get(); //用get可以得到特殊类型的字符，输出格式见CMS上题目要求
    cout<<"the character is:";
    if (ch>='A' ||ch<='Z')  //或者 if(ch>=65 || ch<=90)
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
//    ch = cin.get(); //用get可以得到特殊类型的字符，输出格式见CMS上题目要求
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
//    else if (ch >= 'A' && ch <= 'Z')  //或者 if(ch>=65 && ch<=90)
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