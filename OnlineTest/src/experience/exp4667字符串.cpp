/*
ʵ��7.2 C++�ַ���
�����֤�Ǻܶ�ϵͳ�ڽ��а�ȫ�ԺͿɿ��Կ���ʱ�������õ�һ�ַ�����ͨ���û���½�������֤���û�Ȩ�޽��п��ƣ���֤ϵͳ���ݵİ�ȫ�Ժ����еĿɿ��ԡ�
������һ���û�ע������֤ģ�����ģ��һ��������̡�
��������Ҫ���û�ע���û������룬����Ҫ��8λ�ַ����ϣ��ұ��������ĸ�����֡����������������ȷ�ϡ�
���óɹ������û�ʹ�����������µ�¼����¼ʧ�ܣ����µ�¼��ֱ���ɹ����߳���3��Ϊֹ����Ҫ�޸����������ʽ��ֱ��ʹ��ģ������������ʽ���ɡ�

ʾ��1��
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

ʾ������
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
//    string::reverse_iterator it = str.rbegin();//����һ����������ָ���һ���ַ�
//    while (it != str.rend())//str.end()����һ����������ָ���ַ�����ĩβ�������һ���ַ�����һ��λ�ã�
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
//        if (!isContain_num_letter(password))//û��ͬʱ������ĸ����
//        {
//            cout << "your password must include number and letters" << endl;
//        }
//        else
//        {
//            if (password.size() < 8)//����С��9
//            {
//                cout << "Password length must be greater than 8" << endl;
//            }
//            else
//            {
//                cout << "please enter your password again:";
//                string re_pw;
//                cin >> re_pw;
//                if (re_pw != password)//���벻һ��
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