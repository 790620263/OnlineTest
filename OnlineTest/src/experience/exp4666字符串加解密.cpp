/*
实验7.1 C++字符串。
编写一段简单的程序实现加密与解密。函数encrypt将一个字符串引用作为参数，并通过将字符串中的每一个值加1来改变其值。
函数decrypt将字符串引用作为参数，并通过将字符串中的每一个值减1来改变其值。函数main调用函数encrypt和decrypt，
并将加密字符串和解密字符串打印出来，如实例输出中所示。

实例输出
Encrypt string is:uijt!jt!b!tfdsfu”
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