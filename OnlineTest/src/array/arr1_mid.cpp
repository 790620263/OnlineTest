/*
用动态数组编程输入任意m个班学生（每班n个学生）的某门课的成绩，计算最高分，并指出具有该最高分成绩的学生是第几个班的第几个学生。其中，m和n的值由用户从键盘任意输入（不限定m和n的上限值）。
输入提示信息：
"Input array size m,n:"
"Input 整数*整数 array:\n"
输入格式："整数(班级数) 整数(每班学生数)"
输出提示信息和格式："maxScore =整数, class = 整数, number = 整数"
例如，输入：
Input array size m n:3 4
Input 3*4 array:
80 82 63 74
60 81 75 68
87 91 78 92
输出:
maxScore = 92, class = 3, number = 4*/

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int m, n;
//	cout<< "Input array size m n:";
//	cin >> m >> n;
//	cout << "Input " << m << "*" << n << " array:" << endl;
//	vector<vector<int>> v;
//	for (int i = 0; i < m; i++)
//	{
//		vector<int> vi;
//		for (int j = 0; j < n; j++)
//		{
//			int num;
//			cin >> num;
//			vi.push_back(num);
//		}
//		v.push_back(vi);
//	}
//	int maxScore=0;
//	for (int i = 0; i < m; i++)
//	{
//		vector<int> vi=v[i];
//		for (int j = 0; j < n; j++)
//		{
//			if (maxScore < vi[j])
//			{
//				maxScore = vi[j];
//			}
//		}
//	}
//	cout << "maxScore = " << maxScore << ", class = " << m << ", number = " << n;
//}
