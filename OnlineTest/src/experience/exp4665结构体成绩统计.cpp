/*
)实验6.1 结构体与数组。学生成绩统计V3.0.
从键盘输入一个班（全班最多不超过30人）学生的学号、姓名和某门课的成绩，当输入成绩为负值或人数超过30时，输入结束。编程统计不及格人数并打印不及格学生名单;编程统计成绩在全班平均分及平均分之上的学生人数，并打印这些学生的名单。要求：

输入的学生学号及分数请在Input()函数实现；
统计不及格人数及打印不及格学生名单请在Total1()函数实现；
统计成绩在全班平均分及平均分之上的学生人数及打印这些学生的名单请在Total2()函数实现；
定义结构体类型 student存储学号、姓名和成绩。
Input函数原型如下：
int Input(struct student score[]);
参数说明：数组score存放学生的学号、姓名和成绩.
返回值：返回班级的实际人数.

5. Total1函数原型如下：
void Total1(struct student score[], int n);
参数说明：数组score存放学生的学号、姓名和成绩，n班级实际人数.
返回值：无

6. Total2函数原型如下：
void Total2(struct student score[],int n);
参数说明：参数说明：数组score存放学生的学号、姓名和成绩，n班级实际人数.
返回值：无

输入要求：详见输入样例
输出要求：cout<<"Num\tName\tScore"<<endl;

输入输出样例1：
输入样例:
Enter the student number,name and the score:
19001 Amy 78
19002 John 86
19003 Steven 65
19004 Snow 56
19005 Alice 98
19006 Smith 78
19007 Adva 90
19008 Bob -1

输出样例:
Enter the student number,name and the score:
The number of fail is:1
Num Name Score
19004 Snow 56
The average score is 78.7143
The number above average score is:3
Num Name Score
19002 John 86
19005 Alice 98
19007 Adva 90

输入输出样例2：
Enter the student number,name and the score:
2017001 John -1
The number of fail is:0
Num Name Score
The average score is 0
The number above average score is:0
Num Name Score*/



//#include<iostream>
//#include<string>
//using namespace std;
//const int array_size = 30;
//
////结构体内部数据类型未定义
//struct student {
//    long num = 0L;
//    string name = "";
//    float score = 0.0;
//};
//
////函数说明：输入的学生学号及分数
////参数说明：数组score存放学生的学号、姓名和成绩.
////返回值：返回班级的实际人数.
//int Input(struct student score[]) {
//    cout << "Enter the student number,name and the score:" << endl;
//    long anum = 0L;
//    string aname="";
//    float ascore=0.0;
//
//    for (int i = 0; i < array_size; i++)
//    {
//        cin >> anum >> aname >> ascore;
//        if (ascore < 0 && abs(ascore) < 1 + 1e-5)return i;
//        score[i].name = aname;
//        score[i].num = anum;
//        score[i].score = ascore;
//    }
//    return array_size;
//};
//
////函数说明：统计不及格人数及打印不及格学生名单
////参数说明：数组score存放学生的学号、姓名和成绩，n班级实际人数.
////返回值：无
//void Total1(struct student score[], int n) {
//    //变量声明：total:不及格人数
//    int total = 0;
//    //TODO: 统计不及格人数
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score < 60)total++;
//    }
//
//    cout << "The number of fail is:" << total << endl;
//    cout << "Num\tName\tScore" << endl;
//
//    //TODO: 打印不及格学生名单
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score < 60)
//            cout << score[i].num << '\t' << score[i].name << '\t' << score[i].score<<endl;
//    }
//};
//
////函数说明：统计成绩在全班平均分及平均分之上的学生人数及打印这些学生的名单
////参数说明：参数说明：数组score存放学生的学号、姓名和成绩，n班级实际人数.
////返回值：无
//void Total2(struct student score[], int n) {
//    //变量声明：average:平均分; sum：总分；total:高于平均分的人数
//    float average = 0.0, sum = 0.0;
//    int total = 0;
//    //TODO: 计算平均分
//    for (int i = 0; i < n; i++)
//    {
//        sum += score[i].score;
//    }
//    if (n > 0) average = sum / n;
//    cout << "The average score is " << average << endl;
//
//    //TODO: 统计平均分以上学生人数
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score > average)total++;
//    }
//    cout << "The number above average score is:" << total << endl;
//    cout << "Num\tName\tScore" << endl;
//
//    //TODO: 打印平均分以上学生名单
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score > average)
//            cout << score[i].num << '\t' << score[i].name << '\t' << score[i].score<<endl;
//    }
//};
//
//int main()
//{
//    struct student score[array_size];
//    int n=Input(score);
//    Total1(score, n);
//    Total2(score, n);
//}