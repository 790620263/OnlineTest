/*
ʵ��5.4 ��ά����ͺ�����ѧ���ɼ�ͳ��V2.0��
�Ӽ�������һ���ࣨȫ����಻����30�ˣ�ѧ����ѧ�ź����ſεĳɼ���������ѧ��Ϊ��ֵ����������30ʱ��������������ʵ������Ҫ��
ͨ���ն�����ѧ��ѧ���������������ʵ����������Input()����ʵ�֣�
����ÿ��ѧ�����ֺܷ�ƽ��������Total1()����ʵ�֣�
����ÿ�ſε��ֺܷ�ƽ��������Total2()����ʵ�֣�
��ÿ��ѧ�������ܷ��ɸߵ�����������Total3()������ʵ�֣�
��ӡѧ���ɼ���ÿ�ſε��ֺܷ�ƽ��������Print()������ʵ�֣�

Input����ԭ�����£�
int Input (long num[], float score[][3], int array_size);
����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ķ���, array_size ����������Ĵ�С��
����ֵ�����ذ༶��ʵ������

Total1����ԭ�����£�
void Total1(float score[][3], float sum[], float aver[], int n);
����˵�������� sum ���ÿ��ѧ�����ܷ֣�aver���ÿ��ѧ����ƽ���֣����� score ���ѧ���ķ�����n �༶ʵ������
����ֵ����

Total2����ԭ�����£�
void Total2(float score[][3], float sum[], float aver[], int n);
����˵�������� sum ���ÿ�ſε��ܷ֣�aver���ÿ�ſε�ƽ���֣����� score ���ѧ���ķ�����n �༶ʵ������
����ֵ�� ��

Total3����ԭ�����£�
void Total3(long num[],float score[][3],float sum[],float aver[],int n);
����˵�������� num ���ѧ����ѧ�ţ����� score���ѧ���ķ��������� sum���ÿ��ѧ�����ܷ֣�����aver���ÿ��ѧ����ƽ���֣�n�༶ʵ������
����ֵ�� ��

Print����ԭ�����£�
void Print(long num[],float score[][3],float sum1[],float aver1[],float sum2[],float aver2[],int n){
����˵�������� num���ѧ����ѧ�ţ����� score���ѧ���ķ��������� sum1���ÿ��ѧ�����ܷ֣����� aver1���ÿ��ѧ����ƽ����,���� sum2���ÿ�ſε��ܷ֣�����aver2���ÿ�ſε�ƽ���֣�n�༶ʵ������
����ֵ����

����Ҫ�������������
���Ҫ��cout<<"Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1"<<endl;
cout<<"No\tSum2\tAver2"<<endl;

�����������1��
���룺
201701 78 96 88
201702 66 88 69
201703 73 92 79
201704 87 76 88
201705 73 84 93
-1
�����
Pos     Number  Grad1   Grad2   Grad3   Sum1    Aver1
1       201701  78      96      88      262     87.3333
2       201704  87      76      88      251     83.6667
3       201705  73      84      93      250     83.3333
4       201703  73      92      79      244     81.3333
5       201702  66      88      69      223     74.3333
No      Sum2    Aver2
1       377     75.4
2       436     87.2
3       417     83.4

�����������2��
���룺
-1
�����
Pos     Number  Grad1   Grad2   Grad3   Sum1    Aver1
No      Sum2    Aver2
1       0       0
2       0       0
3       0       0
*/


//#include<iostream>
//using namespace std;
//
////����˵����ͨ���ն�����ѧ��ѧ���������������ʵ������
////����˵�������� num ���ѧ����ѧ�ţ����� score ���ѧ���ķ���, array_size ����������Ĵ�С
////����ֵ�����ذ༶��ʵ������
//int Input(long num[], float score[][3], int array_size) {
//    //TODO: ͨ���ն�����ѧ��ѧ�źͷ���
//    int anum;
//    float ascore[3];
//    for (int i = 0; i < array_size; i++)
//    {
//        cin >> anum;
//        if (anum == -1)return i;//iΪѧ������
//        for (int j = 0; j < 3; j++)
//        {
//            cin >> ascore[j];
//        }
//        num[i] = anum;
//        for (int j = 0; j < 3; j++)
//        {
//            score[i][j]=ascore[j];
//        }
//    }
//    return array_size;
//};
//
////����˵��������ÿ��ѧ�����ֺܷ�ƽ����
////����˵�������� score���ѧ���ķ��������� sum���ÿ��ѧ�����ܷ֣�����aver���ÿ��ѧ����ƽ����,n�༶ʵ������
////����ֵ����
//void Total1(float score[][3], float sum[], float aver[], int n) {
//    //TODO: ����ÿ��ѧ���ֺܷ�ƽ����
//    for (int i = 0; i < n; i++)
//    {
//        sum[i] = score[i][0] + score[i][1] + score[i][2];
//        aver[i] = sum[i] / 3;
//    }
//};
//
////����˵��������ÿ�ſε��ֺܷ�ƽ����
////����˵�������� score���ѧ���ķ��������� sum���ÿ�ſε��ܷ֣�����aver���ÿ�ſε�ƽ���֣�n�༶ʵ������
////����ֵ����
//void Total2(float score[][3], float sum[], float aver[], int n) {
//    //TODO:����ÿ�ſ��ֺܷ�ƽ����
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            sum[j] += score[i][j];
//        }
//    }
//    for (int j = 0; j < 3; j++)
//    {
//        if (n > 0)
//        {
//            aver[j] = sum[j] / n;
//        }
//    }
//};
//
////����˵������ÿ��ѧ�������ܷ��ɸߵ�������
////����˵�������� num ���ѧ����ѧ�ţ����� score���ѧ���ķ��������� sum���ÿ��ѧ�����ܷ֣�����aver���ÿ��ѧ����ƽ���֣�n�༶ʵ������
////����ֵ�� ��
//void Total3(long num[], float score[][3], float sum[], float aver[], int n) {
//    //TODO: �����ܷ�����
//    for (int i = 1; i < n; i++)
//    {
//        //����sum��ͬʱ��score��num��aver��ͬ������
//        float tmp_sum = sum[i];
//        long tmp_num = num[i];
//        float tmp_score[3] = { score[i][0],score[i][1],score[i][2]};
//        float tmp_aver = aver[i];
//
//        int j = i - 1;
//        while (j >= 0&&sum[j]<tmp_sum)
//        {
//            //���Ƶ�j��
//        	sum[j + 1] = sum[j];
//            num[j + 1] = num[j];
//            for (int k = 0; k < 3; k++)
//            {
//                score[j + 1][k] = score[j][k];
//            }
//            aver[j + 1] = aver[j];
//
//        	j--;
//        }
//        //����
//        sum[j + 1] = tmp_sum;
//        num[j + 1] = tmp_num;
//        for (int k = 0; k < 3; k++)
//        {
//            score[j + 1][k] = tmp_score[k];
//        }
//        aver[j + 1] = tmp_aver;
//
//    }
//};
////����˵������ӡѧ���ɼ���ÿ�ſε��ֺܷ�ƽ����
////����˵�������� num���ѧ����ѧ�ţ����� score���ѧ���ķ��������� sum1���ÿ��ѧ�����ܷ֣����� aver1���ÿ��ѧ����ƽ����,���� sum2���ÿ�ſε��ܷ֣�����aver2���ÿ�ſε�ƽ���֣�n�༶ʵ������
////����ֵ����
//void Print(long num[], float score[][3], float sum1[], float aver1[], float sum2[], float aver2[], int n) {
//    //TODO: ��ӡ�ɼ���ÿ�ſ��ֺܷ�ƽ����
//    cout << "Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1" << endl;
//    //TODO: ��ӡ�ɼ���
//    for (int i = 0; i < n; i++)
//    {
//        cout << i + 1 << '\t' << num[i] << '\t' << score[i][0] << '\t' << score[i][1] << '\t' << score[i][2] << '\t' << sum1[i] << '\t' << aver1[i]<<endl;
//    }
//    cout << "No\tSum2\tAver2" << endl;
//    //TODO: ��ӡÿ�ſ��ֺܷ�ƽ����
//    for (int i = 0; i < 3; i++)
//    {
//        cout << i + 1 <<'\t'<< sum2[i] << '\t' << aver2[i]<<endl;
//    }
//
//};
//
//int main()
//{
//    const int array_size = 30;
//    int n = array_size;//�༶����
//    long num[array_size]; //���� num���ѧ����ѧ��
//    float score[array_size][3]; //���� score���ѧ���ķ���
//    float sum1[array_size]; float aver1[array_size];//���� sum1���ÿ��ѧ�����ܷ֣����� aver1���ÿ��ѧ����ƽ����
//    float sum2[array_size]; float aver2[array_size];//���� sum2���ÿ�ſε��ܷ֣�����aver2���ÿ�ſε�ƽ����
//
//    //��ʼ��
//    for (int i = 0; i < array_size; i++)
//    {
//        sum1[i] = 0;
//        sum2[i] = 0;
//        num[i] = 0;
//        for (int k = 0; k < 3; k++)
//        {
//            score[i][k] = 0;
//        }
//        aver1[i] = 0;
//        aver2[i] = 0;
//    }
//
//
//    n=Input(num, score, array_size);
//
//    Total1(score, sum1, aver1, n);
//    Total2(score, sum2, aver2, n);
//    Total3(num,score, sum1, aver1, n);
//    Print(num, score, sum1, aver1, sum2, aver2, n);
//}