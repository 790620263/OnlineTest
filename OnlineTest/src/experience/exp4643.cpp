/*
实验1.2 数值计算。实验目的：练习变量的定义，变量的赋值，变量的输出，算术运算的正确使用及表达式的正确构造。
按照提示，将程序中下划线部分替换成适当的代码。
注意：全角中文标点与半角英文标点的区别，例如：最后两行输出中的冒号为全角中文，而逗号为半角英文。
程序1-3如下：
#include <                  >
#include <                    >  //将数学函数库包含进来
using namespace               ;
main()
{
        int                                      ; //定义3个整型变量a,b,c 并初始化为0。
                                          ; //定义1个单精度浮点型变量f, 并初始化为0。
                                     ; //定义1个字符型变量ch, 不进行初始化。

       cout<<"a="<<a<<endl;          // 输出a的值。
       cout<<"b="<<       <<endl;      // 输出b的值。
       cout<<                      <<endl;    // 输出c的值。
       cout<<                      <<endl;     // 输出f的值。
       cout<<                       <<endl;    //输出ch的值。观察未赋值就输出的变量的值。在提交作业前将此行注释掉，否则无法通过测试用例。

       //将三角形的3个边长7，8，9分别赋值给变量a,b,c。
         a=           ;
                         ;
                         ;
      //计算机三角形的面积并存储在变量f中。
      f =                                                                                  ;
      //输出三角形边长a=X,b=X,c=X
      cout<<"三角形边长分别是："<<"a="<<a<<",b="<<b<<                        <<endl;
      //输出三角形面积 f = X
      cout<<"三角形面积是："<<                <<           <<endl;
}
示例
a=0
b=0
c=0
f=0
三角形边长分别是：a=7,b=8,c=9
三角形面积是：f=26.8328*/
/*
#include<iostream>
#include<cmath> //将数学函数库包含进来
using namespace std;
int main()
{
    int a=0,b=0,c=0; //定义3个整型变量a,b,c 并初始化为0。
    float f=0; //定义1个单精度浮点型变量f, 并初始化为0。
    char ch; //定义1个字符型变量ch, 不进行初始化。

    cout << "a=" << a << endl;          // 输出a的值。
    cout << "b="<<b<<endl;      // 输出b的值。
    cout<< "c=" << c                    <<endl;    // 输出c的值。
    cout<< "f=" << f              <<endl;     // 输出f的值。
    //cout<<     ch                  <<endl;    //输出ch的值。观察未赋值就输出的变量的值。在提交作业前将此行注释掉，否则无法通过测试用例。

    //将三角形的3个边长7，8，9分别赋值给变量a,b,c。
    a = 7;
    b=8;
    c=9;
    //计算机三角形的面积并存储在变量f中。
    float p = (a + b + c) / 2.0;
    f = sqrt(p*(p-a)*(p-b)*(p-c));
    //输出三角形边长a=X,b=X,c=X
    cout << "三角形边长分别是：" << "a=" << a << ",b=" << b<< ",c=" << c <<endl;
    //输出三角形面积 f = X
    cout << "三角形面积是："<<        "f="        <<      f     <<endl;
}*/