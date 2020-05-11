/*
选择控制结构。预测一个人的身高
每个做父母的都关心自己孩子成人后的身高，据有关生理卫生知识与数理统计分析表明，影响小孩成人后的身高的因素包括遗传、饮食习惯与体育锻炼等。小孩成人后的身高与其父母的身高和自身的性别密切相关。
设faHeight为其父身高，moHeight为其母身高，yourHeight为被测人身高。基础身高预测公式为：
男性成人时基础身高yourHeight= (faHeight+moHeight) × 0.54cm
女性成人时基础身高yourHeight= (faHeight× 0.923 +moHeight)/2cm
此外，如果喜爱体育锻炼，那么在基础身高上可增加身高2%；
如果还有良好的卫生饮食习惯，那么可继续增加身高1.5%；
要求：
1）编程从键盘输入用户的性别（用字符型变量gender存储，输入字符F或f表示女性，输入字符M或m表示男性）；
2）父母身高（用实型变量faHeight、moHeight存储，单位是厘米）；
3）是否喜爱体育锻炼（用字符型变量likeSport存储，输入字符Y或y表示喜爱，输入字符N或n表示不喜爱）；
4）是否有良好的饮食习惯等条件（用字符型变量goodDiet存储，输入字符Y或y表示良好，输入字符N或n表示不好）请利用给定公式和身高预测方法对身高进行预测，并以整数形式输出预测身高。

输入样例：（冒号后无空格）
Input your gender(m|f|M|F):f
Input your father's height(cm):174
Input your mother's height(cm):156
Do you like sports?(y|n|Y|N):y
Do you have good diet?(y|n|Y|N):n
输出样例：
Your Height will be:161
测试用例1：
输入：
m
174
156
y
n
输出：
Your Height will be:181

测试用例2：
输入：
M
198
150
N
Y
输出：
Your Height will be:190

参考程序模板：
#include<iostream>
using namespace std;
int main()
{
    float faHeight,moHeight,yourHeight;
    char gender, likeSport, goodDiet;
    cout<<"Input your gender(m|f|M|F):";

    cout<<"Input your father's height(cm):";

    cout<<"Input your mother's height(cm):";


    //根据性别计算基础身高
    if( gender == 'm' || gender=='M' )
    {
        //在此输入计算男生身高的代码

    }
    else
    {
        //在此输入计算女生身高的代码

    }

    //依据是否喜欢运动计算身高
    cout<<"Do you like sports?(y|n|Y|N):";
    cin>>likeSport;
    if( likeSport=='y'|| likeSport=='Y' )
    {
      //......
    }

    //依据是否有良好的饮食习惯计算身高
    cout<<"Do you have good diet?(y|n|Y|N):";


    cout<<"Your Height will be:"<<int(yourHeight);
    return 0;
}*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    float faHeight, moHeight, yourHeight;
//    char gender, likeSport, goodDiet;
//    cout << "Input your gender(m|f|M|F):";
//    cin >> gender;
//    cout << "Input your father's height(cm):";
//    cin >> faHeight;
//    cout << "Input your mother's height(cm):";
//    cin >> moHeight;
//
//    //根据性别计算基础身高
//    if (gender == 'm' || gender == 'M')
//    {
//        //在此输入计算男生身高的代码
//        yourHeight = (faHeight + moHeight) * 0.54;
//    }
//    else
//    {
//        //在此输入计算女生身高的代码
//        yourHeight = (faHeight* 0.923 + moHeight) / 2;
//    }
//
//    //依据是否喜欢运动计算身高
//    cout << "Do you like sports?(y|n|Y|N):";
//    cin >> likeSport;
//    if (likeSport == 'y' || likeSport == 'Y')
//    {
//        yourHeight *= 1.02;
//    }
//
//    //依据是否有良好的饮食习惯计算身高
//    cout << "Do you have good diet?(y|n|Y|N):";
//    cin >> goodDiet;
//    if (goodDiet == 'y' || goodDiet == 'Y')
//    {
//        yourHeight *= 1.015;
//    }
//
//    cout << "Your Height will be:" << int(yourHeight);
//    return 0;
//}