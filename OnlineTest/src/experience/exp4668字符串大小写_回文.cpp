/*
ʵ��7.3 C++�ַ��������Ĳ��ԡ�������˳���͵�����һ�����ַ�������д��������û������Ӣ���ַ����ǲ��ǻ��ġ�
�������еĿո�ı����ţ���������ĸ�Ĵ�д��Сд��ʽ�������ǻ��ĵ�һЩ���ӣ�
Able was I ere I saw Elba.
Madam, I��m Adam.
A man, a plan, a canal, Panama.
Racecar
I Love Me, Vol. I.

ʾ��1��
Enter a candidate for palindrome test:
racecar
"racecar" is a palindrome.

ʾ��2��
Enter a candidate for palindrome test:
A man, a plan, a canal, panama.
"A man, a plan, a canal, panama." is a palindrome.

ʾ��3��
Enter a candidate for palindrome test:
Am I a palindrome?
"Am I a palindrome?" is not a palindrome.*/


//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//bool is_pal(const string& s);
////�����ַ���s�Ƿ��ǻ��ģ���������
//string remove_punct(const string& s, const string& punct);
////��������punct�еı����Ŵ�s��ɾ����
////string s �ǿ��ܴ������ŵ�ԭʼӢ���ַ�����string punct �����б����Ź��ɵ��ַ���
////����û�б����ַ���
//
//string make_lower(const string& s);
////���ַ���sת��ΪСд��ʽ
////�����ַ���s��Сд��ʽ�����ַ���
//
//string reverse(const string& s);
////���ַ�����ת
////���ط�ת������ַ���
//
//int main()
//{
//    string str;
//    cout << "Enter a candidate for palindrome test:" << endl;
//    //todo  ������ܴ��ո��Ӣ�ľ���str, str�ǿ�
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
//    string punct(",;:.?!'\" ");  //��һ���ո�ı������ַ���
//
//    //cout << "\nDEBUG\t" << s;
//   //todo ����remove_punct()ɾ��s�еı�����
//    string handled_str =remove_punct(s, punct);
//    //cout << "\nDEBUG\t" << handled_str;
//   //todo ����make_lower()��Сд��ʽ
//    handled_str= make_lower(handled_str);
//    //cout << "\nDEBUG\t" << handled_str;
//   //todo ����reverse()��Сд��ʽ�ķ�ת�ַ���
//    string reverse_str= reverse(handled_str);
//    //cout << "\nDEBUG\t" << reverse_str;
//    if ( /*��תǰ���ַ������*/reverse_str==handled_str)
//        return true;
//    else
//        return false;
//}
//string remove_punct(const string& s, const string& punct)
//{
//    string no_punct; //û�б������ַ���
//    int s_length = s.length();
//
//    //todo
//
//    for (/*i =0 to s_length-1*/int i=0;i<s_length;i++)
//    {
//        //todo ȡ��s���±�i��ʼ��һ���ַ����ɵ��Ӵ�a_char
//        string a_char = s.substr(i, 1);
//        //todo ��� a_char û�г�����punct��
//        if (punct.find(a_char) == string::npos)
//        {
//            no_punct += a_char;
//        }
//            //no_punct += a_char; //������ǰ�ַ�
//    }
//    return no_punct;
//}
//
//string make_lower(const string& s)
//{
//    //�˷���SSE��������ʶ��
//    //string lower_str(s);
//    //transform(lower_str.begin(), lower_str.end(), lower_str.begin(), tolower);
//
//    //�˷���SSE��������ͷ�ļ���cstring)
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




