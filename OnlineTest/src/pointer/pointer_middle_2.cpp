/*
��Ŀ������һ��Ŀ���ַ���dest�ʹ�������ַ���src���Լ�����λ��index.���ʵ����dest��ָ��λ��index�������src,
���ز���֮���dest����ӡ.���磺destΪ��hello,c!,srcΪ:love,indexΪ4���򷵻�destΪ��hellloveo,c!.
Ҫ��
 �÷���ָ��ĺ���ʵ�֡�char *insert(char *dest,char *src,int index). 
 indexΪ��С��0��int��dest,src����󳤶Ȳ�����50���ַ���.���indexС��0�򳬹�dest���ȣ�����ʾ�������index illegal!�����˳�����
 �������������
�������У�
abcdef xx
3
���У���һ�зֱ�Ϊdest��src ���м��ÿո�������ڶ���ΪҪ�����λ��
���һ�У�
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