/*
实验7.3 C++字符串。回文测试。回文是顺读和倒读都一样的字符串。编写程序测试用户输入的英文字符串是不是回文。
忽略所有的空格的标点符号，并忽略字母的大写和小写形式。下面是回文的一些例子：
Able was I ere I saw Elba.
Madam, I’m Adam.
A man, a plan, a canal, Panama.
Racecar
I Love Me, Vol. I.

示例1：
Enter a candidate for palindrome test:
racecar
"racecar" is a palindrome.

示例2：
Enter a candidate for palindrome test:
A man, a plan, a canal, panama.
"A man, a plan, a canal, panama." is a palindrome.

示例3：
Enter a candidate for palindrome test:
Am I a palindrome?
"Am I a palindrome?" is not a palindrome.*/


//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//bool is_pal(const string& s);
////测试字符串s是否是回文，返回真或假
//string remove_punct(const string& s, const string& punct);
////将出现在punct中的标点符号从s中删除。
////string s 是可能带标点符号的原始英文字符串，string punct 是所有标点符号构成的字符串
////返回没有标点的字符串
//
//string make_lower(const string& s);
////将字符串s转换为小写形式
////返回字符串s的小写形式的新字符串
//
//string reverse(const string& s);
////将字符串反转
////返回反转后的新字符串
//
//int main()
//{
//    string str;
//    cout << "Enter a candidate for palindrome test:" << endl;
//    //todo  读入可能带空格的英文句子str, str非空
//    char str_cs[1000];
//    cin.getline(str_cs,1000);
//    str.append(str_cs);
//
//    if (is_pal(str))
//        cout << "\"" << str << "\" is a palindrome.";
//    else
//        cout << "\"" << str << "\" is not a palindrome.";
//    return 0;
//}
//bool is_pal(const string& s)
//{
//    string punct(",;:.?!'\" ");  //有一个空格的标点符号字符串
//
//    //cout << "\nDEBUG\t" << s;
//   //todo 调用remove_punct()删除s中的标点符号
//    string handled_str =remove_punct(s, punct);
//    //cout << "\nDEBUG\t" << handled_str;
//   //todo 调用make_lower()求小写形式
//    handled_str= make_lower(handled_str);
//    //cout << "\nDEBUG\t" << handled_str;
//   //todo 调用reverse()求小写形式的反转字符串
//    string reverse_str= reverse(handled_str);
//    //cout << "\nDEBUG\t" << reverse_str;
//    if ( /*反转前后字符串相等*/reverse_str==handled_str)
//        return true;
//    else
//        return false;
//}
//string remove_punct(const string& s, const string& punct)
//{
//    string no_punct; //没有标点的新字符串
//    int s_length = s.length();
//
//    //todo
//
//    for (/*i =0 to s_length-1*/int i=0;i<s_length;i++)
//    {
//        //todo 取出s中下标i开始的一个字符构成的子串a_char
//        string a_char = s.substr(i, 1);
//        //todo 如果 a_char 没有出现在punct中
//        if (punct.find(a_char) == string::npos)
//        {
//            no_punct += a_char;
//        }
//            //no_punct += a_char; //保留当前字符
//    }
//    return no_punct;
//}
//
//string make_lower(const string& s)
//{
//    //此方法SSE编译器不识别
//    //string lower_str(s);
//    //transform(lower_str.begin(), lower_str.end(), lower_str.begin(), tolower);
//
//    //此方法SSE中需引入头文件（cstring)
//    char* str = (char*)s.data();
//    return string(_strlwr(str));
//}
//
//string reverse(const string& s)
//{
//    string reverse_str(s);
//
//    //todo
//    for (int i = 0; i < s.size(); i++)
//    {
//        reverse_str.replace(s.size() - 1 - i, 1, 1, s.at(i));
//    }
//
//    return reverse_str;
//}




