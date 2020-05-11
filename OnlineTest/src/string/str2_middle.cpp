/*
编写程序统计从键盘输入的一行文本中各个字母的个数。输入以回车键结束。不区分大小写，大写字母与相应的小写字母按照同一个字母看待。
***输入格式：调用cin.get()函数依次输入每个字符
***输出格式："字符(字符):整数\n"

输入输出实例：
输入：Hello World
输出：
A(a):0
B(b):0
C(c):0
D(d):1
E(e):1
F(f):0
G(g):0
H(h):1
I(i):0
J(j):0
K(k):0
L(l):3
M(m):0
N(n):0
O(o):2
P(p):0
Q(q):0
R(r):1
S(s):0
T(t):0
U(u):0
V(v):0
W(w):1
X(x):0
Y(y):0
Z(z):0
*/


//#include<iostream>
//using namespace std;
//int main()
//{
//	char c=0;
//	int num[26]{ 0 };
//
//
//	while ((c = cin.get()) != '\n')
//	{
//		if (c <= 'z' && c >= 'a')
//			c -= 32;
//		num[c - 'A']++;
//	}
//
//
//	char word = 'A';
//	for (int i = 0; i < 26; i++)
//	{
//		cout << word << '(' << char(word + 32) << "):" << num[i]<<endl;
//		word++;
//	}
//}