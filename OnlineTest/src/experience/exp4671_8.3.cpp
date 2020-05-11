/*
实验8.3 指针数组和一维动态数组。统计英语成绩。
现有五个班级，每个班级的人数不相等，要求首先输入5个班级的人数，然后按照提示输入每个班级学生的英语成绩，最后统计每个班级及格学生的数量。
（为了尽量减少内存空间的使用，要求动态申请每个班级的分数数组，可使用指针数组来实现，分数只有整数，声明为int即可）。

示例输出
Input the number of each class:4 7 10 7 5
Input the score of 4 student(s) in class 1:96 70 72 41
Input the score of 7 student(s) in class 2:98 66 75 99 56 97 75
Input the score of 10 student(s) in class 3:75 43 67 93 70 53 98 49 77 75
Input the score of 7 student(s) in class 4:93 66 45 74 46 59 70
Input the score of 5 student(s) in class 5:95 75 42 42 71
3 student(s) in class 1 have passed English examination.
6 student(s) in class 2 have passed English examination.
7 student(s) in class 3 have passed English examination.
4 student(s) in class 4 have passed English examination.
3 student(s) in class 5 have passed English examination.*/

//#include <iostream>
//#define N	5
//using namespace std;
//int main()
//{
//	int* score[N], i;		// score存放每个班级的分数指针
//	int numPerClass[N];		// 存放每个班级的人数
//	int numOfPass[N] = { 0 };		// 存放大于60分的人数
//	cout << "Input the number of each class:";
//	// 输入每个班级的人数、分配空间
//	for (int i = 0; i < N; i++)
//	{
//		cin >> numPerClass[i];
//		score[i] = new int[numPerClass[i]];
//	}
//	for (i = 0; i < N; i++)
//	{
//		cout << "Input the score of " << numPerClass[i] << " student(s) in class " << i + 1 << ":";
//		// 输入分数
//		for (int j = 0; j < numPerClass[i]; j++)
//		{
//			cin >> score[i][j];
//			if (score[i][j] >= 60)
//				numOfPass[i]++;
//		}
//	}
//	for (i = 0; i < N; i++)
//		cout << numOfPass[i] << " student(s) in class " << i + 1 << " have passed English examination." << endl;
//
//	for (i = 0; i < N; i++)
//		// 释放空间
//		delete[] score[i];
//		return 0;
//}
