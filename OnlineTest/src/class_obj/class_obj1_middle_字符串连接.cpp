/*
���ո���������ʵ�������ַ���������(������ʹ���ַ������Ӻ���strcat)�����ַ�������ʾ
��Ķ������£�
class CProcChar
{
public:
	void myStrcay(char *p, char *q);
	void myStrPnt(char *p);
};

Ҫ��
1.���ַ�����b�д�ŵ��ַ������ӵ��ַ�����a�У�
2.�����������������ַ�����������ַ���Ӧ�ð����ո񣩣�
3.����֮����ַ�������������ʹ�����е�myStrPnt�����
4.�ַ�������size��
5.����Ҫ���뼰�����ʾ��Ϣ��ֱ�ӴӼ���ֱ��������Ϣ���������������
������
*���룺
Hi!
good morning!
*�����
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