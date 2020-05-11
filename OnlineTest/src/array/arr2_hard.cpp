/*
英雄卡。小明非常迷恋收集各种干脆面里面的英雄卡，为此他曾经连续一个月都只吃干脆面这一种零食，
但是有些稀有英雄卡真的是太难收集到了。后来某商场搞了一次英雄卡兑换活动，只要你有三张编号连续的英雄卡，你就可以换任意编号的英雄卡。
小明想知道他最多可以换到几张英雄卡（新换来的英雄卡不可以再次兑换）
输入一个一维数组，将其从小到大排序后输出
输入提示信息："请输入数据范围(在1~10000之间):",  "请输入数据:"
输入数据格式：一个整数，一个数组
输出数据格式：一个数组，每两个数字间隔一个'\t'
程序运行结果示例：
请输入数据范围(在1~10000之间):6
请输入数据:3 1 2 4 4 5
1 2 3 4 4 5*/
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> sort_vint_minTOmax(vector<int> v);
//int getConnNum(vector<int> v);
//int main()
//{
//	int n;
//	cout << "请输入数据范围(在1~10000之间):";
//	cin >>n;
//	cout << "请输入数据:";
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//	int num = getConnNum(v);
//	cout << num;
//}
//int getConnNum(vector<int> v_unsorted)
//{
//	vector<int> v = sort_vint_minTOmax(v_unsorted);
//	int num = 0;
//	int index = 0;
//	while (index < v.size() - 2)
//	{
//		if (v[index + 2] == v[index + 1] + 1 && v[index + 1] == v[index] + 1)
//		{
//			index += 3;
//			num++;
//		}
//		else
//		{
//			index++;
//		}
//	}
//	return num;
//}
//vector<int> sort_vint_minTOmax(vector<int> v)
//{
//	for (int i = 1; i < v.size(); i++)
//	{
//		int tmp = v[i];
//		int j = i - 1;
//		while (j >= 0&&v[j]>tmp)
//		{
//			v[j + 1] = v[j];
//			j--;
//		}
//		v[j+1] = tmp;
//	}
//	return v;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> sort_vint_minTOmax(vector<int> v);
//int main()
//{
//	int n;
//	cout << "请输入数据范围(在1~10000之间):";
//	cin >> n;
//	cout << "请输入数据:";
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//	v = sort_vint_minTOmax(v);
//	for (int i = 0; i < n; i++)
//	{
//		cout << v[i]<<'\t';
//	}
//}
//vector<int> sort_vint_minTOmax(vector<int> v)
//{
//	for (int i = 1; i < v.size(); i++)
//	{
//		int tmp = v[i];
//		int j = i - 1;
//		while (j >= 0 && v[j] > tmp)
//		{
//			v[j + 1] = v[j];
//			j--;
//		}
//		v[j + 1] = tmp;
//	}
//	return v;
//}