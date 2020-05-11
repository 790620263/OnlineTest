//数值151是一个回文素数。因为151既是一个素数也是一个回文数（回文数是从前向后读和从后向前读都一样的数）。写一个程序找出所有在[a, b]区间内的回文素数(5 <= a < b <= 1000, 000, 000)。
//
//	输入
//	第一行："%d %d"
//
//	输出
//	符合条件的回文素数，一个数一行。
//
//	输入样例
//	5 500
//	输出样例
//	5
//	7
//	11
//	101
//	131
//	151
//	181
//	191
//	313
//	353
//	373
//	383
/*
#include <stdio.h>
#include<math.h>
using namespace std;

int pow10(int);
bool isPrime(int);
int pow10(int bit)
{
	int result = 1;
	for (int i = 0; i < bit; i++)
	{
		result = result * 10;
	}
	return result;
}
bool isPrime(int num)
{
	int i = 2;
	while(i < num)
	{
		if (num % i == 0)
		{
			return false;
		}
		i++;
	}
	return true;
}

int main()
{
	
	int num[12];
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a >= 5 && a < b && b <= 1000000000) {
		int i = a - 1;
		while(i <= b)
		{
			i++;
			//printf("%d is prime? %d\n", i, isPrime(i));
			if (isPrime(i)) {
				//获取位数
				int bit = 1, tmp = i;
				while ((tmp = tmp / 10) >= 1) bit++;

				//获取各数位的数字

				int reminder = 0, temp = i;
				int j = bit - 1;//0个，1十
				while (j >= 0)
				{

					reminder = temp % pow10(j);
					num[j] = temp / pow10(j);
					temp = reminder;
					j--;
				}

				bool isVaildNum = true;
				j = 0;
				while (j < bit)
				{
					if (num[j] != num[bit - 1 - j])
					{
						isVaildNum = false;
						break;
					}

					j++;
				}

				if (isVaildNum)
				{
					printf("%d\n", i);
				}
			}
		}
	}
}
*/