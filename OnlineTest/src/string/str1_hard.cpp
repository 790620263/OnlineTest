/*
写一函数，输入一个十六进制数，输出相应的十进制数。
程序的运行示例如下：
输入十六进制数：
3a
十进制数58
继续吗？
y
输入十六进制数：
2f
十进制数47
继续吗？
n*/
//#include<vector>
//#include<iostream>
//using namespace std;
//int toDec(string hex)
//{
//	int multiple = 1;
//	int num = 0;
//	int size = hex.size();
//	for (int i = size-1; i >=0; i--)
//	{
//		int bit = hex[i];
//		//char字符转化为该位的数值
//		if (bit <= '9' && bit >= '0')
//		{
//			bit = bit - 48;
//		}
//		else if (bit <= 'F' && bit >= 'A')
//		{
//			bit = bit - 55;//A==10
//		}
//		else
//		{
//			bit = bit - 87;
//		}
//
//		num = num + bit * multiple;
//		multiple *= 16;
//	}
//	return num;
//}
//int main()
//{
//	while (true)
//	{
//		cout << "输入十六进制数："<<endl;
//		string num_str;
//		cin >> num_str;
//		int num = toDec(num_str);
//		cout << "十进制数" << num <<endl<< "继续吗？"<<endl;
//
//		char conn;
//		cin >> conn;
//		if (conn == 'n')break;
//	}
//}