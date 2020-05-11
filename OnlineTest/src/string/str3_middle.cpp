/*
从一个字符串删除元音字母，例如，如果输入的字符串是“C programming”，那么输出将是“C prgrmmng”。
**输入格式要求： 使用getline(cin, str)
提示信息："Enter a string to delete vowels\n"
**输出格式要求："String after deleting vowels: "
程序运行示例如下：
Enter a string to delete vowels
c programming↙
String after deleting vowels: c prgrmmng
*/

//#include<iostream>
//#include<string>
//using namespace std;
//string del(string str) {
//	string result;
//	char todel[10] = { 'a','e','i','o','u','A','E','I','O','U' };
//	bool add;
//	for (int i = 0; i < str.size(); i++)
//	{
//		add = true;
//		for (int j = 0; j < 10; j++)
//		{
//			if (todel[j] == str.at(i))
//			{
//				add = false; break;
//			}
//
//		}
//		if (add)result.append(1,str.at(i));
//	}
//	return result;
//
//}
//int main() {
//	cout << "Enter a string to delete vowels\n";
//	string str;
//	getline(cin, str);
//	cout << "String after deleting vowels: " << del(str);
//}