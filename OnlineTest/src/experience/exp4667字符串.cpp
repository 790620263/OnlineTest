/*
实验7.2 C++字符串
身份验证是很多系统在进行安全性和可靠性控制时经常采用的一种方法。通过用户登陆或身份验证对用户权限进行控制，保证系统数据的安全性和运行的可靠性。
来开发一个用户注册与验证模拟程序模拟一下这个过程。
程序运行要求用户注册用户和密码，密码要求8位字符以上，且必须包含字母和数字。输入两次密码进行确认。
设置成功后，让用户使用新密码重新登录，登录失败，重新登录，直到成功或者超过3次为止。不要修改输入输出格式，直接使用模板的输入输出格式即可。

示例1：
please input your name:zy
please input your password:987654321
your password must include number and letters
please input your password:1q2w
Password length must be greater than 8
please input your password:123q4567
please enter your password again:123q4567
Register Success!
your name is zy
input password to login,you have three times:123
your password is not right,please try again:123q4567
Login Success!

示例二：
please input your name:zy
please input your password:1q2w3e4r
please enter your password again:234
the password must be same
please input your password:1q2w3e4r
please enter your password again:1q2w3e4r
Register Success!
your name is zy
input password to login,you have three times:123
your password is not right,please try again:123
your password is not right,please try again:123
Fail to login,time is up!
*/


//#include<iostream>
//#include<string>
//using namespace std;
//bool isContain_num_letter(string& str)
//{
//    bool contain_num = false;
//    bool contain_letter = false;
//    string::reverse_iterator it = str.rbegin();//返回一个迭代器，指向第一个字符
//    while (it != str.rend())//str.end()返回一个迭代器，指向字符串的末尾。（最后一个字符的下一个位置）
//    {
//        char c = *it;
//        if ((c <= 'z' && c >= 'a')||(c <= 'Z' && c >= 'A'))
//        {
//            contain_letter = true;
//        }
//        if (c <= '9' && c >= '0')
//        {
//            contain_num = true;
//        }
//
//        if (contain_letter && contain_num)return true;
//
//        it++;
//    }
//    return false;
//}
//void set_password(string& usename, string& password)
//{
//    cout << "please input your name:";
//    cin >> usename;
//    do {
//        cout << "please input your password:";
//        cin >> password;
//        if (!isContain_num_letter(password))//没有同时包含字母数字
//        {
//            cout << "your password must include number and letters" << endl;
//        }
//        else
//        {
//            if (password.size() < 8)//长度小于9
//            {
//                cout << "Password length must be greater than 8" << endl;
//            }
//            else
//            {
//                cout << "please enter your password again:";
//                string re_pw;
//                cin >> re_pw;
//                if (re_pw != password)//输入不一致
//                {
//                    cout << "the password must be same" << endl;
//                }
//                else
//                {
//                    cout << "Register Success!" << endl;
//                    break;
//                }
//            }
//        }
//    } while (true);
//}
//
//void login(const string& usename, const string& password)
//{
//    //to do
//    cout << "your name is " << usename << endl;
//    cout << "input password to login,you have three times:";
//    int time = 0;
//    while (time<3)
//    {
//        string pw;
//        cin >> pw;
//
//        if (pw == password) {
//            cout << "Login Success!" << endl;
//            return;
//        }
//        else
//        {
//            if (time == 2)
//            {
//                cout << "Fail to login,time is up!" << endl;
//                return;
//            }
//            cout << "your password is not right,please try again:";
//            time++;
//        }
//    }
//   
//}
//
//int main()
//{
//    string usename, password;
//    set_password(usename, password);
//    login(usename, password);
//    return 0;
//}