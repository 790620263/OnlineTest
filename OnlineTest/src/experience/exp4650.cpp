/*
实验2.3 选择控制结构。任务说明：请用switch判断语句编程设计一个简单的计算器程序。
要求:
(1) 用户按以下形式从键盘输入表达式：操作数①  运算符op  操作数②
(2) 然后计算表达式的值
① 用户输入的运算符为算术运算符：加（+）、减（-）、乘（*）、除（/）。用字符变量 op 表示；op不合法时，输出“Invalid operator！”；当除数为0时，输出“Divided by zero!”
② 操作数① 和操作数② 为浮点型数据，分别用浮点型变量data1、data2 表示。
③ 程序运行结果如下所示：
1+2↙
1+2=3
注：以上红色字体为键盘输入的数据，蓝色字体为屏幕显示的结果。
输入要求：见输入样例，提示信息冒号后无空格。
输出要求：见输出样例
输入输出样例：以下红色字体为键盘输入的数据，蓝色字体为屏幕显示的结果。
sample ①：
please input the equation:
1+1↙
1+1=2
sample ② ：
please input the equation:
2*3.2↙
2*3.2=6.4
sample ③：
please input the equation:
4=1↙
Invalid operator!
sample ④：
please input the equation:
6/2↙
6/2=3
sample ⑤：
please input the equation:
6/0↙
Divided by zero!

参考程序模板：
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
       //其它情况代码

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
//       //其它情况代码
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