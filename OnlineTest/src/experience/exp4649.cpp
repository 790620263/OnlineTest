/*
ѡ����ƽṹ��Ԥ��һ���˵����
ÿ������ĸ�Ķ������Լ����ӳ��˺����ߣ����й���������֪ʶ������ͳ�Ʒ���������Ӱ��С�����˺����ߵ����ذ����Ŵ�����ʳϰ�������������ȡ�С�����˺��������丸ĸ����ߺ�������Ա�������ء�
��faHeightΪ�丸��ߣ�moHeightΪ��ĸ��ߣ�yourHeightΪ��������ߡ��������Ԥ�⹫ʽΪ��
���Գ���ʱ�������yourHeight= (faHeight+moHeight) �� 0.54cm
Ů�Գ���ʱ�������yourHeight= (faHeight�� 0.923 +moHeight)/2cm
���⣬���ϲ��������������ô�ڻ�������Ͽ��������2%��
����������õ�������ʳϰ�ߣ���ô�ɼ����������1.5%��
Ҫ��
1����̴Ӽ��������û����Ա����ַ��ͱ���gender�洢�������ַ�F��f��ʾŮ�ԣ������ַ�M��m��ʾ���ԣ���
2����ĸ��ߣ���ʵ�ͱ���faHeight��moHeight�洢����λ�����ף���
3���Ƿ�ϲ���������������ַ��ͱ���likeSport�洢�������ַ�Y��y��ʾϲ���������ַ�N��n��ʾ��ϲ������
4���Ƿ������õ���ʳϰ�ߵ����������ַ��ͱ���goodDiet�洢�������ַ�Y��y��ʾ���ã������ַ�N��n��ʾ���ã������ø�����ʽ�����Ԥ�ⷽ������߽���Ԥ�⣬����������ʽ���Ԥ����ߡ�

������������ð�ź��޿ո�
Input your gender(m|f|M|F):f
Input your father's height(cm):174
Input your mother's height(cm):156
Do you like sports?(y|n|Y|N):y
Do you have good diet?(y|n|Y|N):n
���������
Your Height will be:161
��������1��
���룺
m
174
156
y
n
�����
Your Height will be:181

��������2��
���룺
M
198
150
N
Y
�����
Your Height will be:190

�ο�����ģ�壺
#include<iostream>
using namespace std;
int main()
{
    float faHeight,moHeight,yourHeight;
    char gender, likeSport, goodDiet;
    cout<<"Input your gender(m|f|M|F):";

    cout<<"Input your father's height(cm):";

    cout<<"Input your mother's height(cm):";


    //�����Ա����������
    if( gender == 'm' || gender=='M' )
    {
        //�ڴ��������������ߵĴ���

    }
    else
    {
        //�ڴ��������Ů����ߵĴ���

    }

    //�����Ƿ�ϲ���˶��������
    cout<<"Do you like sports?(y|n|Y|N):";
    cin>>likeSport;
    if( likeSport=='y'|| likeSport=='Y' )
    {
      //......
    }

    //�����Ƿ������õ���ʳϰ�߼������
    cout<<"Do you have good diet?(y|n|Y|N):";


    cout<<"Your Height will be:"<<int(yourHeight);
    return 0;
}*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    float faHeight, moHeight, yourHeight;
//    char gender, likeSport, goodDiet;
//    cout << "Input your gender(m|f|M|F):";
//    cin >> gender;
//    cout << "Input your father's height(cm):";
//    cin >> faHeight;
//    cout << "Input your mother's height(cm):";
//    cin >> moHeight;
//
//    //�����Ա����������
//    if (gender == 'm' || gender == 'M')
//    {
//        //�ڴ��������������ߵĴ���
//        yourHeight = (faHeight + moHeight) * 0.54;
//    }
//    else
//    {
//        //�ڴ��������Ů����ߵĴ���
//        yourHeight = (faHeight* 0.923 + moHeight) / 2;
//    }
//
//    //�����Ƿ�ϲ���˶��������
//    cout << "Do you like sports?(y|n|Y|N):";
//    cin >> likeSport;
//    if (likeSport == 'y' || likeSport == 'Y')
//    {
//        yourHeight *= 1.02;
//    }
//
//    //�����Ƿ������õ���ʳϰ�߼������
//    cout << "Do you have good diet?(y|n|Y|N):";
//    cin >> goodDiet;
//    if (goodDiet == 'y' || goodDiet == 'Y')
//    {
//        yourHeight *= 1.015;
//    }
//
//    cout << "Your Height will be:" << int(yourHeight);
//    return 0;
//}