/*
实验5.3 一维数组 学生成绩统计V1.0。从键盘输入一个班（全班最多不超过30人）学生的学号和某门课的成绩，当输入成绩为负值或人数超过30时，输入结束。编程统计不及格人数并打印不及格学生名单;编程统计成绩在全班平均分及平均分之上的学生人数，并打印这些学生的名单。要求：
输入的学生学号及成绩请在Input()函数实现；
统计不及格人数及打印不及格学生名单请在Total1()函数实现；
统计成绩在全班平均分及平均分之上的学生人数及打印这些学生的名单请在Total2()函数实现；

Input函数原型如下：
int Input(long num[], float score[], int array_size);
参数说明：数组 num 存放学生的学号，数组 score 存放学生的成绩, array_size是两个数组的大小。
返回值：返回班级的实际人数

5. Total1函数原型如下：
void Total1(long num[], float score[], int n);
参数说明：数组 num 存放学生的学号，数组 score 存放学生的成绩，n 为班级实际人数。
返回值：无

6. Total2函数原型如下：
void Total2(long num[],float score[],int n);
参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数，n 为班级实际人数。

输入输出样例：
Input sample:
Enter the student number and the score:
19001 78
19002 86
19003 65
19004 56
19005 98
19006 78
19007 90
19008 -1
Output sample:
19004
The score<60 is:1
19002
19005
19007
The score>=averge is:3
 */


//#include <iostream>
//#include <cmath>
//using namespace std;
//int Input(long num[], float score[], int array_size);
////函数说明：通过终端输入学生学号与分数，并返回实际人数
////参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数
////返回值：返回班级的实际人数
//
//void Total1(long num[], float score[], int n);
////函数说明：统计不及格人数及打印不及格学生名单
////参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数，n 班级实际人数
////返回值：无
//
//void Total2(long num[], float score[], int n);
////函数说明：统计成绩在全班平均分及平均分之上的学生人数及打印这些学生的名单
////参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数，n 班级实际人数
////返回值：无
//
////主函数
//int main()
//{
//    //TODO: ......
//    const int array_size = 30;
//    int n = array_size;//班级人数
//    long num[array_size]; float score[array_size];
//
//    n=Input(num, score, array_size);
//
//    Total1(num, score, n);
//    Total2(num, score, n);
//    return 0;
//}
//
//int Input(long num[], float score[], int array_size)
//{
//    //TODO: 通过终端输入学生学号和分数
//    cout << "Enter the student number and the score:" << endl;
//    int anum;float ascore;
//    for (int i = 0; i < array_size; i++)
//    {
//        cin >> anum >> ascore;
//        if (ascore < 0 && abs(ascore) < 1 + 1e-5)return i;//i为学生人数
//        num[i] = anum;
//        score[i] = ascore;
//    }
//    return array_size;
//}
//
//void Total1(long num[], float score[], int n)
//{
//    //变量声明：total:不及格人数
//    int total = 0;
//
//    //TODO: 统计不及格人数及打印不及格学生名单
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i] < 60)
//        {
//            cout << num[i] << endl;
//            total++;
//       }
//    }
//
//    cout << "The score<60 is:" << total << endl;
//}
//void Total2(long num[], float score[], int n)
//{
//    //变量声明：total:大于均分人数
//    int total = 0;
//    float total_score = 0;
//
//    //TODO: 统计总分，计算平均分
//    for (int i = 0; i < n; i++)
//    {
//        total_score += score[i];
//    }
//    float average = total_score / n;
//    //TODO: 打印平均分之上同学的名单
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i]>average)
//        {
//            cout << num[i] << endl;
//            total++;
//        }
//    }
//    cout << "The score>=average is:" << total << endl;
//}