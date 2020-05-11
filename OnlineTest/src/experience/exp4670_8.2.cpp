/*
实验8.2 指针 求数组中正负数及零的个数。题目描述：
输入一个数字n，动态申请长度为n的数组，输入n个数字，分别求出这n个数字中正数、负数、零的个数。

示例输出
Input array size n:10
Input array:15 -2.5 2.9 3.1415 95 -45 0 15 -6.6 -50
Positive number:5
Negative number:4*/
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int numP = 0, numN = 0, numZ = 0;
//	cout << "Input array size n:";
//	cin >> n;
//	// 动态申请长度为n的数组
//	float *arr = new float[n];
//	cout << "Input array:";
//	// 输入数组中的元素
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	// TO DO: 判断正数、负数、零的个数
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > 0)numP++;
//		else if (arr[i] < 0)numN++;
//		else numZ++;
//	}
//	cout << "Positive number:" << numP << endl;
//	cout << "Negative number:" << numN << endl;
//	cout << "Zero:" << numZ << endl;
//
//	// TO DO: 释放空间
//	delete[] arr;
//	return 0;
//}
