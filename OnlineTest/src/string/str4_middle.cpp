/*
简单的口令检查程序
按下述要求编写口令检查程序（假设正确的口令为8888,正确口令"8888"为字符串）。
（1）若输入口令正确，则提示"You are welcome!\n"，程序结束。输入口令的提示信息为："Please enter password:"
（2）若输入口令不正确，则提示"Wrong password!\n"，同时检查口令是否已输入3次，若未输入3次，则提示"Please enter again:"，
且允许用户再次输入口令；若已输入3次，则提示"You have entered three times! You are not welcome!\n"，且不允许用户再输入口令，程序结束。

运行实例如下：
输入样例1：
Please enter password:123456↙
输出样例1：
Wrong password!↙
输入样例1：
Please enter again:2345↙
输出样例1：
Wrong password!↙
输入样例1：
Please enter again:1357↙
输出样例1：
Wrong password!↙
You have entered three times! You are not welcome!

输入样例2：
Input Password:8888↙
输出样例2：
You are welcome!↙
*/



//#include<iostream>
//#include<string>
//using namespace std;
//void login(const string& password)
//{
//    //to do
//    cout << "Please enter password:";
//    int time = 0;
//    while (time < 3)
//    {
//        string pw;
//        cin >> pw;
//
//        if (pw == password) {
//            cout << "You are welcome!" << endl;
//            return;
//        }
//        else
//        {
//            cout << "Wrong password!" << endl;
//            if (time == 2)
//            {
//                cout << "You have entered three times! You are not welcome!" << endl;
//                return;
//            }
//            cout << "Please enter again:";
//            time++;
//        }
//    }
//
//}
//
//int main()
//{
//    login("8888");
//}