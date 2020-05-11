//注意:代码模板中的代码将会被复制到任何新创建的文件中，编辑代码模板中的代码，让他帮你自动增加固定代码吧
//利用指针编程实现将长度不超过40(MAXLENGTH=40)的字符串中大写字符改成小写字符的函数:
//char *mystrlwr(char *str)。

//输入提示："input a string:"
//输入语句：
//cin.getline(str, MAXLENGTH+1, '\n');
//输出格式："new string=%s\n"
//cout << "new string=" << result << endl;

//#include <iostream> 
//#include<string>
//using namespace std;
//#define MAXLENGTH 40
//
//char *mystrlwr(char *str){
//    char* begin=&str[0];
//    while (*str != '\0') {
//        if (*str <= 'Z' && *str>='A') {
//            *str = *str + 32;
//        }
//        str++;
//    }
//    return begin;
//    
//}
//int main(){
//    char str[MAXLENGTH + 2];
//    cout<<"input a string:";
//    cin.getline(str, MAXLENGTH+1, '\n');
//    cout << "new string=" << mystrlwr(str)<< endl;
//}