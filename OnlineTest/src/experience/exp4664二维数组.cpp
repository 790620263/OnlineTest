/*
实验5.4 二维数组和函数。学生成绩统计V2.0。
从键盘输入一个班（全班最多不超过30人）学生的学号和三门课的成绩，当输入学号为负值或人数超过30时，输入结束。编程实现以下要求：
通过终端输入学生学号与分数，并返回实际人数请在Input()函数实现；
计算每个学生的总分和平均分请在Total1()函数实现；
计算每门课的总分和平均分请在Total2()函数实现；
对每个学生按照总分由高到低排序请在Total3()函数中实现；
打印学生成绩表及每门课的总分和平均分请在Print()函数中实现；

Input函数原型如下：
int Input (long num[], float score[][3], int array_size);
参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数, array_size 是两个数组的大小。
返回值：返回班级的实际人数

Total1函数原型如下：
void Total1(float score[][3], float sum[], float aver[], int n);
参数说明：数组 sum 存放每个学生的总分，aver存放每个学生的平均分，数组 score 存放学生的分数，n 班级实际人数
返回值：无

Total2函数原型如下：
void Total2(float score[][3], float sum[], float aver[], int n);
参数说明：数组 sum 存放每门课的总分，aver存放每门课的平均分，数组 score 存放学生的分数，n 班级实际人数
返回值： 无

Total3函数原型如下：
void Total3(long num[],float score[][3],float sum[],float aver[],int n);
参数说明：数组 num 存放学生的学号，数组 score存放学生的分数，数组 sum存放每个学生的总分，数组aver存放每个学生的平均分，n班级实际人数
返回值： 无

Print函数原型如下：
void Print(long num[],float score[][3],float sum1[],float aver1[],float sum2[],float aver2[],int n){
参数说明：数组 num存放学生的学号，数组 score存放学生的分数，数组 sum1存放每个学生的总分，数组 aver1存放每个学生的平均分,数组 sum2存放每门课的总分，数组aver2存放每门课的平均分，n班级实际人数
返回值：无

输入要求：详见输入样例
输出要求：cout<<"Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1"<<endl;
cout<<"No\tSum2\tAver2"<<endl;

输入输出样例1：
输入：
201701 78 96 88
201702 66 88 69
201703 73 92 79
201704 87 76 88
201705 73 84 93
-1
输出：
Pos     Number  Grad1   Grad2   Grad3   Sum1    Aver1
1       201701  78      96      88      262     87.3333
2       201704  87      76      88      251     83.6667
3       201705  73      84      93      250     83.3333
4       201703  73      92      79      244     81.3333
5       201702  66      88      69      223     74.3333
No      Sum2    Aver2
1       377     75.4
2       436     87.2
3       417     83.4

输入输出样例2：
输入：
-1
输出：
Pos     Number  Grad1   Grad2   Grad3   Sum1    Aver1
No      Sum2    Aver2
1       0       0
2       0       0
3       0       0
*/


//#include<iostream>
//using namespace std;
//
////函数说明：通过终端输入学生学号与分数，并返回实际人数
////参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数, array_size 是两个数组的大小
////返回值：返回班级的实际人数
//int Input(long num[], float score[][3], int array_size) {
//    //TODO: 通过终端输入学生学号和分数
//    int anum;
//    float ascore[3];
//    for (int i = 0; i < array_size; i++)
//    {
//        cin >> anum;
//        if (anum == -1)return i;//i为学生人数
//        for (int j = 0; j < 3; j++)
//        {
//            cin >> ascore[j];
//        }
//        num[i] = anum;
//        for (int j = 0; j < 3; j++)
//        {
//            score[i][j]=ascore[j];
//        }
//    }
//    return array_size;
//};
//
////函数说明：计算每个学生的总分和平均分
////参数说明：数组 score存放学生的分数，数组 sum存放每个学生的总分，数组aver存放每个学生的平均分,n班级实际人数
////返回值：无
//void Total1(float score[][3], float sum[], float aver[], int n) {
//    //TODO: 计算每个学生总分和平均分
//    for (int i = 0; i < n; i++)
//    {
//        sum[i] = score[i][0] + score[i][1] + score[i][2];
//        aver[i] = sum[i] / 3;
//    }
//};
//
////函数说明：计算每门课的总分和平均分
////参数说明：数组 score存放学生的分数，数组 sum存放每门课的总分，数组aver存放每门课的平均分，n班级实际人数
////返回值：无
//void Total2(float score[][3], float sum[], float aver[], int n) {
//    //TODO:计算每门课总分和平均分
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            sum[j] += score[i][j];
//        }
//    }
//    for (int j = 0; j < 3; j++)
//    {
//        if (n > 0)
//        {
//            aver[j] = sum[j] / n;
//        }
//    }
//};
//
////函数说明：对每个学生按照总分由高到低排序
////参数说明：数组 num 存放学生的学号，数组 score存放学生的分数，数组 sum存放每个学生的总分，数组aver存放每个学生的平均分，n班级实际人数
////返回值： 无
//void Total3(long num[], float score[][3], float sum[], float aver[], int n) {
//    //TODO: 按照总分排序
//    for (int i = 1; i < n; i++)
//    {
//        //排序sum，同时对score，num，aver作同样调整
//        float tmp_sum = sum[i];
//        long tmp_num = num[i];
//        float tmp_score[3] = { score[i][0],score[i][1],score[i][2]};
//        float tmp_aver = aver[i];
//
//        int j = i - 1;
//        while (j >= 0&&sum[j]<tmp_sum)
//        {
//            //后移第j项
//        	sum[j + 1] = sum[j];
//            num[j + 1] = num[j];
//            for (int k = 0; k < 3; k++)
//            {
//                score[j + 1][k] = score[j][k];
//            }
//            aver[j + 1] = aver[j];
//
//        	j--;
//        }
//        //插入
//        sum[j + 1] = tmp_sum;
//        num[j + 1] = tmp_num;
//        for (int k = 0; k < 3; k++)
//        {
//            score[j + 1][k] = tmp_score[k];
//        }
//        aver[j + 1] = tmp_aver;
//
//    }
//};
////函数说明：打印学生成绩表及每门课的总分和平均分
////参数说明：数组 num存放学生的学号，数组 score存放学生的分数，数组 sum1存放每个学生的总分，数组 aver1存放每个学生的平均分,数组 sum2存放每门课的总分，数组aver2存放每门课的平均分，n班级实际人数
////返回值：无
//void Print(long num[], float score[][3], float sum1[], float aver1[], float sum2[], float aver2[], int n) {
//    //TODO: 打印成绩表及每门课总分和平均分
//    cout << "Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1" << endl;
//    //TODO: 打印成绩表
//    for (int i = 0; i < n; i++)
//    {
//        cout << i + 1 << '\t' << num[i] << '\t' << score[i][0] << '\t' << score[i][1] << '\t' << score[i][2] << '\t' << sum1[i] << '\t' << aver1[i]<<endl;
//    }
//    cout << "No\tSum2\tAver2" << endl;
//    //TODO: 打印每门课总分和平均分
//    for (int i = 0; i < 3; i++)
//    {
//        cout << i + 1 <<'\t'<< sum2[i] << '\t' << aver2[i]<<endl;
//    }
//
//};
//
//int main()
//{
//    const int array_size = 30;
//    int n = array_size;//班级人数
//    long num[array_size]; //数组 num存放学生的学号
//    float score[array_size][3]; //数组 score存放学生的分数
//    float sum1[array_size]; float aver1[array_size];//数组 sum1存放每个学生的总分，数组 aver1存放每个学生的平均分
//    float sum2[array_size]; float aver2[array_size];//数组 sum2存放每门课的总分，数组aver2存放每门课的平均分
//
//    //初始化
//    for (int i = 0; i < array_size; i++)
//    {
//        sum1[i] = 0;
//        sum2[i] = 0;
//        num[i] = 0;
//        for (int k = 0; k < 3; k++)
//        {
//            score[i][k] = 0;
//        }
//        aver1[i] = 0;
//        aver2[i] = 0;
//    }
//
//
//    n=Input(num, score, array_size);
//
//    Total1(score, sum1, aver1, n);
//    Total2(score, sum2, aver2, n);
//    Total3(num,score, sum1, aver1, n);
//    Print(num, score, sum1, aver1, sum2, aver2, n);
//}