/*
)ʵ��6.1 �ṹ�������顣ѧ���ɼ�ͳ��V3.0.
�Ӽ�������һ���ࣨȫ����಻����30�ˣ�ѧ����ѧ�š�������ĳ�ſεĳɼ���������ɼ�Ϊ��ֵ����������30ʱ��������������ͳ�Ʋ�������������ӡ������ѧ������;���ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ������������ӡ��Щѧ����������Ҫ��

�����ѧ��ѧ�ż���������Input()����ʵ�֣�
ͳ�Ʋ�������������ӡ������ѧ����������Total1()����ʵ�֣�
ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ����������ӡ��Щѧ������������Total2()����ʵ�֣�
����ṹ������ student�洢ѧ�š������ͳɼ���
Input����ԭ�����£�
int Input(struct student score[]);
����˵��������score���ѧ����ѧ�š������ͳɼ�.
����ֵ�����ذ༶��ʵ������.

5. Total1����ԭ�����£�
void Total1(struct student score[], int n);
����˵��������score���ѧ����ѧ�š������ͳɼ���n�༶ʵ������.
����ֵ����

6. Total2����ԭ�����£�
void Total2(struct student score[],int n);
����˵��������˵��������score���ѧ����ѧ�š������ͳɼ���n�༶ʵ������.
����ֵ����

����Ҫ�������������
���Ҫ��cout<<"Num\tName\tScore"<<endl;

�����������1��
��������:
Enter the student number,name and the score:
19001 Amy 78
19002 John 86
19003 Steven 65
19004 Snow 56
19005 Alice 98
19006 Smith 78
19007 Adva 90
19008 Bob -1

�������:
Enter the student number,name and the score:
The number of fail is:1
Num Name Score
19004 Snow 56
The average score is 78.7143
The number above average score is:3
Num Name Score
19002 John 86
19005 Alice 98
19007 Adva 90

�����������2��
Enter the student number,name and the score:
2017001 John -1
The number of fail is:0
Num Name Score
The average score is 0
The number above average score is:0
Num Name Score*/



//#include<iostream>
//#include<string>
//using namespace std;
//const int array_size = 30;
//
////�ṹ���ڲ���������δ����
//struct student {
//    long num = 0L;
//    string name = "";
//    float score = 0.0;
//};
//
////����˵���������ѧ��ѧ�ż�����
////����˵��������score���ѧ����ѧ�š������ͳɼ�.
////����ֵ�����ذ༶��ʵ������.
//int Input(struct student score[]) {
//    cout << "Enter the student number,name and the score:" << endl;
//    long anum = 0L;
//    string aname="";
//    float ascore=0.0;
//
//    for (int i = 0; i < array_size; i++)
//    {
//        cin >> anum >> aname >> ascore;
//        if (ascore < 0 && abs(ascore) < 1 + 1e-5)return i;
//        score[i].name = aname;
//        score[i].num = anum;
//        score[i].score = ascore;
//    }
//    return array_size;
//};
//
////����˵����ͳ�Ʋ�������������ӡ������ѧ������
////����˵��������score���ѧ����ѧ�š������ͳɼ���n�༶ʵ������.
////����ֵ����
//void Total1(struct student score[], int n) {
//    //����������total:����������
//    int total = 0;
//    //TODO: ͳ�Ʋ���������
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score < 60)total++;
//    }
//
//    cout << "The number of fail is:" << total << endl;
//    cout << "Num\tName\tScore" << endl;
//
//    //TODO: ��ӡ������ѧ������
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score < 60)
//            cout << score[i].num << '\t' << score[i].name << '\t' << score[i].score<<endl;
//    }
//};
//
////����˵����ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ����������ӡ��Щѧ��������
////����˵��������˵��������score���ѧ����ѧ�š������ͳɼ���n�༶ʵ������.
////����ֵ����
//void Total2(struct student score[], int n) {
//    //����������average:ƽ����; sum���ܷ֣�total:����ƽ���ֵ�����
//    float average = 0.0, sum = 0.0;
//    int total = 0;
//    //TODO: ����ƽ����
//    for (int i = 0; i < n; i++)
//    {
//        sum += score[i].score;
//    }
//    if (n > 0) average = sum / n;
//    cout << "The average score is " << average << endl;
//
//    //TODO: ͳ��ƽ��������ѧ������
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score > average)total++;
//    }
//    cout << "The number above average score is:" << total << endl;
//    cout << "Num\tName\tScore" << endl;
//
//    //TODO: ��ӡƽ��������ѧ������
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i].score > average)
//            cout << score[i].num << '\t' << score[i].name << '\t' << score[i].score<<endl;
//    }
//};
//
//int main()
//{
//    struct student score[array_size];
//    int n=Input(score);
//    Total1(score, n);
//    Total2(score, n);
//}