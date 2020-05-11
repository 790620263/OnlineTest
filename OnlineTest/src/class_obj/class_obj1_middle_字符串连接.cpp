/*
按照给定的类编程实现两个字符串的连接(不允许使用字符串连接函数strcat)。和字符串的显示
类的定义如下：
class CProcChar
{
public:
	void myStrcay(char *p, char *q);
	void myStrPnt(char *p);
};

要求：
1.将字符数组b中存放的字符串连接到字符数组a中；
2.在主函数读入两个字符串（读入的字符串应该包括空格）；
3.连接之后的字符串在主函数中使用类中的myStrPnt输出；
4.字符串长度size。
5.不需要输入及输出提示信息，直接从键盘直接输入信息，并将结里输出。
举例：
*输入：
Hi!
good morning!
*输出：
Hi!good morning!
*/

//#include<iostream>
//#include<cstring>
//#include <stdlib.h>
//using namespace std;
//class CProcChar
//{
//public:
//	void myStrcay(char* p, char* q) {
//		char* np=(char *)realloc(p,(strlen(p) + strlen(q)+1)* sizeof(char));
//		np[strlen(p) + strlen(q)] = '\0';
//		int plen = 0;
//		while (*p != '\0')
//		{
//			np[plen] = *p;
//			p++; plen++;
//		}
//		while (*q != '\0')
//		{
//			np[plen] = *q;
//			q++; plen++;
//		}
//	}
//	void myStrPnt(char* p) {
//		cout << p;
//	}
//};
//int main()
//{
//	const int size=80;
//	char *p=new char[size], q[size+1];
//	cin.getline(p,size);
//	cin.getline(q, size);
//
//
//	CProcChar c;
//	c.myStrcay(p, q);
//	c.myStrPnt(p);
//}