/*
��� 2~n֮����������������ͣ�n�ɼ������롣������ֻ�ܱ�1������������������Ҫ���д�����ж���Ȼ��x�Ƿ�Ϊ����������ԭ��Ϊ��
int IsPrime(unsigned int x); //x����������1��������������0��
������ʾ��Ϣ��
"Please input n(n>1): "
�����ʾ��Ϣ��
"Sum of prime numbers is "

��������ʾ����
Please input n(n>1): 10
2
3
5
7
Sum of prime numbers is 17*/
/*#include<iostream>
#include<ctime>
using namespace std;
int IsPrime(unsigned int x) {
	for (unsigned int i = 2; i < x/2+1; i++)
	{
		if (x % i == 0)return false;
	}
	return true;
}
int main()
{
	time_t t1 = time(0);


	int n;
	long sum = 0;
	cout << "Please input n(n>1): ";
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			cout << i << endl;
			sum += i;
		}
	}

	cout << "Sum of prime numbers is " << sum;

	time_t t2 = time(0);

	cout << endl<<t1<<"\t"<<t2 <<"\t" <<t2-t1<<endl;
}*/