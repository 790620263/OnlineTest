/*
ʵ��8.3 ָ�������һά��̬���顣ͳ��Ӣ��ɼ���
��������༶��ÿ���༶����������ȣ�Ҫ����������5���༶��������Ȼ������ʾ����ÿ���༶ѧ����Ӣ��ɼ������ͳ��ÿ���༶����ѧ����������
��Ϊ�˾��������ڴ�ռ��ʹ�ã�Ҫ��̬����ÿ���༶�ķ������飬��ʹ��ָ��������ʵ�֣�����ֻ������������Ϊint���ɣ���

ʾ�����
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
//	int* score[N], i;		// score���ÿ���༶�ķ���ָ��
//	int numPerClass[N];		// ���ÿ���༶������
//	int numOfPass[N] = { 0 };		// ��Ŵ���60�ֵ�����
//	cout << "Input the number of each class:";
//	// ����ÿ���༶������������ռ�
//	for (int i = 0; i < N; i++)
//	{
//		cin >> numPerClass[i];
//		score[i] = new int[numPerClass[i]];
//	}
//	for (i = 0; i < N; i++)
//	{
//		cout << "Input the score of " << numPerClass[i] << " student(s) in class " << i + 1 << ":";
//		// �������
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
//		// �ͷſռ�
//		delete[] score[i];
//		return 0;
//}
