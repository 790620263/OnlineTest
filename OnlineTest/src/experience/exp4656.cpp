/*
实验4.1 函数。编写质数判断。问题描述，如果一个整数只能被两个不同的因数——1和其自身整除，就称这个整数位质数。例如，2、3、5和7都是质数，而4、6、8就不是（注意，1不是质数）。
请编写一个函数，确定一个数是否为质数。在程序中调用此函数来确定并打印1~10000之间的所有质数。
输出格式：
每数宽度为6，每行输出10个数。

实例输出：
The prime numbers from 1 to 10000 are:
     2     3     5     7    11    13    17    19    23    29
    31    37    41    43    47    53    59    61    67    71
    73    79    83    89    97   101   103   107   109   113
    ...
  9643  9649  9661  9677  9679  9689  9697  9719  9721  9733
  9739  9743  9749  9767  9769  9781  9787  9791  9803  9811
  9817  9829  9833  9839  9851  9857  9859  9871  9883  9887
  9901  9907  9923  9929  9931  9941  9949  9967  9973
There were 1229 prime numbers*/


//#include <iostream>
//#include<cmath>
//using namespace std;
//#include <iomanip>
//
//  /* write prototype for function prime */
//bool prime(int n);
//int main()
//{
//	int count = 0;
//
//	cout << "The prime numbers from 1 to 10000 are:\n";
//
//	for (int loop = 2; loop <= 10000; ++loop) {
//		if (prime(loop)) {
//			++count;
//			cout << setw(6) << loop;
//
//			if (count % 10 == 0)
//				cout << '\n';
//		}
//	}
//	cout << '\n' << "There were " << count
//		<< " prime numbers\n";
//	return 0;
//}
//
//bool prime(int n)
//{
//	int upper = sqrt(n);
//	for (int i = 2; i<=upper; i++)
//		if (n%i==0)
//			return false;
//
//	return true; //number is prime
//}
