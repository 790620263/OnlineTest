/*
�����û������������n�жϸ����Ƿ�Ϊ��������������ʱ����С�������n�����в��ظ������ӡ�
���һ�������жϺ�ѯ���û��Ƿ�����ж���һ����������û����롰Y����y����ô������һ���жϣ�������������ַ�����ô��������
��ʾ�������Ǵ���1��ֻ�ܱ�1��������������������
Ҫ�������жϹ��̱�дΪ����IsPrime,����ԭ�����£�
bool IsPrime(unsigned int n);
�������ܣ��ж�n �Ƿ�Ϊ���������������������С�������n�����в��ظ������ӡ�
��������ֵ: n������ʱ����true����������ʱ���� false��
����n������ʾ��Ϣ��"Please input a positive integer n:"
����n�����ʽ��һ������
���������ʽ��һ�������������һ�����з�
���������ʽ��"һ������ is prime."����ӻ��з��� �� "һ������ is not prime."����ӻ��з���
ѯ��������ʾ��Ϣ��"Do you want to judge another integer(y/n)?"
ѯ�������ʽ��һ���ַ�
����ʵ����
Please input a positive integer n:7
7 is prime.
Do you want to judge another integer(y/n)?y
Please input a positive integer n:10
2
5
10 is not prime.
Do you want to judge another integer(y/n)?n
*/

//#include<iostream>
//#include<ctime>
//using namespace std;
//int IsPrime(unsigned int x) {
//	for (unsigned int i = 2; i < x / 2 + 1; i++)
//	{
//		if (x % i == 0)return false;
//	}
//	return true;
//}
//void printSub(int num)
//{
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//			cout << i << endl;
//	}
//}
//void judge()
//{
//	cout << "Please input a positive integer n:";
//	int n;
//	cin >> n;
//	if (IsPrime(n))
//		cout << n << " is prime.\n";
//	else
//	{
//		printSub(n);
//		cout << n << " is not prime.\n";
//	}
//
//	cout << "Do you want to judge another integer(y/n)?";
//	char c;
//	cin >> c;
//	if (c == 'y' || c == 'Y')
//		judge();
//	else return;
//}
//int main()
//{
//	judge();
//}