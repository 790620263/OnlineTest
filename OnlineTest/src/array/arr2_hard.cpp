/*
Ӣ�ۿ���С���ǳ������ռ����ָɴ��������Ӣ�ۿ���Ϊ������������һ���¶�ֻ�Ըɴ�����һ����ʳ��
������Щϡ��Ӣ�ۿ������̫���ռ����ˡ�����ĳ�̳�����һ��Ӣ�ۿ��һ����ֻҪ�������ű��������Ӣ�ۿ�����Ϳ��Ի������ŵ�Ӣ�ۿ���
С����֪���������Ի�������Ӣ�ۿ����»�����Ӣ�ۿ��������ٴζһ���
����һ��һά���飬�����С������������
������ʾ��Ϣ��"���������ݷ�Χ(��1~10000֮��):",  "����������:"
�������ݸ�ʽ��һ��������һ������
������ݸ�ʽ��һ�����飬ÿ�������ּ��һ��'\t'
�������н��ʾ����
���������ݷ�Χ(��1~10000֮��):6
����������:3 1 2 4 4 5
1 2 3 4 4 5*/
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> sort_vint_minTOmax(vector<int> v);
//int getConnNum(vector<int> v);
//int main()
//{
//	int n;
//	cout << "���������ݷ�Χ(��1~10000֮��):";
//	cin >>n;
//	cout << "����������:";
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
//	cout << "���������ݷ�Χ(��1~10000֮��):";
//	cin >> n;
//	cout << "����������:";
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