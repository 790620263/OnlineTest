/*
ʵ��7.1 C++�ַ�����
��дһ�μ򵥵ĳ���ʵ�ּ�������ܡ�����encrypt��һ���ַ���������Ϊ��������ͨ�����ַ����е�ÿһ��ֵ��1���ı���ֵ��
����decrypt���ַ���������Ϊ��������ͨ�����ַ����е�ÿһ��ֵ��1���ı���ֵ������main���ú���encrypt��decrypt��
���������ַ����ͽ����ַ�����ӡ��������ʵ���������ʾ��

ʵ�����
Encrypt string is:uijt!jt!b!tfdsfu��
Decrypt string is:this is a secret!*/

//#include <iostream>
//using namespace std;
//void encrypt(string& e);
//void decrypt(string& e);
//int main()
//{
//	// Initialize an input string
//	string s = "this is a secret!";
//
//	encrypt(s);
//	cout << "Encrypt string is:" << s << "\n";
//	decrypt(s);
//	cout << "Decrypt string is:" << s << endl;
//	return 0;
//}
//
//void encrypt(string& e)
//{
//	string::reverse_iterator it = e.rbegin();
//	while (it != e.rend())
//	{
//		char &c=(*it);
//		c++;
//		it++;
//	}
//}
//
//void decrypt(string& e)
//{
//	string::reverse_iterator it = e.rbegin();
//	while (it != e.rend())
//	{
//		char &c = (*it);
//		c--;
//		it++;
//	}
//}