/*
дһ����������һ��ʮ���������������Ӧ��ʮ��������
���������ʾ�����£�
����ʮ����������
3a
ʮ������58
������
y
����ʮ����������
2f
ʮ������47
������
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
//		//char�ַ�ת��Ϊ��λ����ֵ
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
//		cout << "����ʮ����������"<<endl;
//		string num_str;
//		cin >> num_str;
//		int num = toDec(num_str);
//		cout << "ʮ������" << num <<endl<< "������"<<endl;
//
//		char conn;
//		cin >> conn;
//		if (conn == 'n')break;
//	}
//}