/*
ʵ��5.3 һά���� ѧ���ɼ�ͳ��V1.0���Ӽ�������һ���ࣨȫ����಻����30�ˣ�ѧ����ѧ�ź�ĳ�ſεĳɼ���������ɼ�Ϊ��ֵ����������30ʱ��������������ͳ�Ʋ�������������ӡ������ѧ������;���ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ������������ӡ��Щѧ����������Ҫ��
�����ѧ��ѧ�ż��ɼ�����Input()����ʵ�֣�
ͳ�Ʋ�������������ӡ������ѧ����������Total1()����ʵ�֣�
ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ����������ӡ��Щѧ������������Total2()����ʵ�֣�

Input����ԭ�����£�
int Input(long num[], float score[], int array_size);
����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ĳɼ�, array_size����������Ĵ�С��
����ֵ�����ذ༶��ʵ������

5. Total1����ԭ�����£�
void Total1(long num[], float score[], int n);
����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ĳɼ���n Ϊ�༶ʵ��������
����ֵ����

6. Total2����ԭ�����£�
void Total2(long num[],float score[],int n);
����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ķ�����n Ϊ�༶ʵ��������

�������������
Input sample:
Enter the student number and the score:
19001 78
19002 86
19003 65
19004 56
19005 98
19006 78
19007 90
19008 -1
Output sample:
19004
The score<60 is:1
19002
19005
19007
The score>=averge is:3
 */


//#include <iostream>
//#include <cmath>
//using namespace std;
//int Input(long num[], float score[], int array_size);
////����˵����ͨ���ն�����ѧ��ѧ���������������ʵ������
////����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ķ���
////����ֵ�����ذ༶��ʵ������
//
//void Total1(long num[], float score[], int n);
////����˵����ͳ�Ʋ�������������ӡ������ѧ������
////����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ķ�����n �༶ʵ������
////����ֵ����
//
//void Total2(long num[], float score[], int n);
////����˵����ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ����������ӡ��Щѧ��������
////����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ķ�����n �༶ʵ������
////����ֵ����
//
////������
//int main()
//{
//    //TODO: ......
//    const int array_size = 30;
//    int n = array_size;//�༶����
//    long num[array_size]; float score[array_size];
//
//    n=Input(num, score, array_size);
//
//    Total1(num, score, n);
//    Total2(num, score, n);
//    return 0;
//}
//
//int Input(long num[], float score[], int array_size)
//{
//    //TODO: ͨ���ն�����ѧ��ѧ�źͷ���
//    cout << "Enter the student number and the score:" << endl;
//    int anum;float ascore;
//    for (int i = 0; i < array_size; i++)
//    {
//        cin >> anum >> ascore;
//        if (ascore < 0 && abs(ascore) < 1 + 1e-5)return i;//iΪѧ������
//        num[i] = anum;
//        score[i] = ascore;
//    }
//    return array_size;
//}
//
//void Total1(long num[], float score[], int n)
//{
//    //����������total:����������
//    int total = 0;
//
//    //TODO: ͳ�Ʋ�������������ӡ������ѧ������
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i] < 60)
//        {
//            cout << num[i] << endl;
//            total++;
//       }
//    }
//
//    cout << "The score<60 is:" << total << endl;
//}
//void Total2(long num[], float score[], int n)
//{
//    //����������total:���ھ�������
//    int total = 0;
//    float total_score = 0;
//
//    //TODO: ͳ���ܷ֣�����ƽ����
//    for (int i = 0; i < n; i++)
//    {
//        total_score += score[i];
//    }
//    float average = total_score / n;
//    //TODO: ��ӡƽ����֮��ͬѧ������
//    for (int i = 0; i < n; i++)
//    {
//        if (score[i]>average)
//        {
//            cout << num[i] << endl;
//            total++;
//        }
//    }
//    cout << "The score>=average is:" << total << endl;
//}