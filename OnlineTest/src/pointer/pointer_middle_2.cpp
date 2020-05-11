/*
题目：给定一个目标字符串dest和待插入的字符串src，以及插入位置index.编程实现在dest的指定位置index后面插入src,
返回插入之后的dest并打印.比如：dest为：hello,c!,src为:love,index为4，则返回dest为：hellloveo,c!.
要求：
 用返回指针的函数实现。char *insert(char *dest,char *src,int index). 
 index为不小于0的int，dest,src是最大长度不超过50的字符串.如果index小于0或超过dest长度，均提示输出：“index illegal!”，退出程序。
 输入输出样例：
输入两行：
abcdef xx
3
其中，第一行分别为dest和src ，中间用空格隔开；第二行为要插入的位置
输出一行：
abcxxdef
*/
//#include<iostream>
//#include<cstring>
//using namespace std;
//char* insert(char* dest, char* src, int index)
//{
//    int dl = strlen(dest);
//    int sl = strlen(src);
//    char* str = new char[dl +sl+1];
//    char* begin = str;
//    for (int i = 0; i < dl+sl; i++)
//    {
//        if (i < index)
//            str[i] = dest[i];
//        else if (i < index + sl)
//            str[i] = src[i - index];
//        else str[i] = dest[i - sl];
//    }
//    str[dl + sl] = '\0';
//    return begin;
//}
//int main() {
//    const int size = 50;
//    char dest[size+1];
//    char src[size+1];
//    int index;
//    cin >> dest >> src;
//    cin.ignore(1000, '\n');
//    cin >> index;
//    if (index<0 || index>size)
//        cout << "index illegal!"<<endl;
//    else
//    {
//        char * str= insert(dest, src, index);
//        cout << str;
//        delete str;
//    }
//    delete dest;
//    delete src;
//
//
//
//}