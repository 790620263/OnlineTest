/*
�ú������ʵ����� m~n֮����������������ͣ�m��n�ɼ������롣������ֻ�ܱ�1�����������Ĵ���1���������� 
Ҫ������ܶ��û���������ݽ�����ȷ�Լ�飬����������m��n���Ǵ���1��������������m<=n��
1. Ҫ���д����InputNumber ʵ���û�����һ�����������������ĺϷ��Խ��м�飬������벻�ɹ�(���磺�����ַ���)�����������Ϸ������Ǵ���1�������������������룬ֱ��������ȷΪֹ��
����ԭ�ͣ�
unsigned int InputNumber(char ch);
��ʽ������ch����������������ʾ��Ϣ��
����ֵ��������ȷ������ֵ��
������ʾ��Ϣ��cout << "Please input the number " << ch << "(>1):"
�����ʽ��һ������
���������ʾ��Ϣ��"The input must be an integer larger than 1!"����ӻ��з���
��ʾ������cin.fail()�ķ���ֵ���ж��Ƿ�ɹ��������ݣ�ʹ��cin.ignore����������롣
2. Ҫ���д����IsPrime�ж���Ȼ��x�Ƿ�Ϊ���������x�������򷵻�1��������������0��
����ԭ�ͣ�
int IsPrime(unsigned int n);
����ֵ�����x�������򷵻�1��������������0��

3. Ҫ���д����PrimeSum ���m��n֮�������������������ǵĺ͡�
����ԭ�ͣ�
int PrimeSum(unsigned int m, unsigned int n);
����ֵ��m��n֮�����������ĺ͡�
ÿ�������������ʽ��һ����������ӻ��з�

�������������£�
int main()
{
    int m = 0,n = 0,sum = 0,i = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
        if (m > n) {
            cout << "n must be not smaller than m! Input again!" << endl;
        }
    }while(m > n);   //��֤m<=n
    sum = PrimeSum(m,n);
    cout << "sum of prime numbers:" << sum;
    return 0;
}*/

//#include<iostream>
//using namespace std;
//unsigned int InputNumber(char ch)
//{
//    bool success =false ;
//    int num;
//   while(true)
//    {
//        cout << "Please input the number " << ch << "(>1):";
//        cin >> num;
//        success =! cin.fail();
//        if (success && num > 1)
//        {
//            break;
//        }
//        cin.clear();
//        cin.ignore(1024,'\n');
//        cout << "The input must be an integer larger than 1!" << endl;
//   }
//    return num;
//}
//int IsPrime(unsigned int n) {
//    int upper =sqrt(n);
//    for (int i = 2; i < n / 2 + 1; i++)
//    {
//        if (n % i == 0)return 0;
//    }
//    return 1;
//}
//int PrimeSum(unsigned int m, unsigned int n) {
//    int sum = 0;
//    for (int i = m; i <= n; i++)
//    {
//        if (IsPrime(i) == 1)
//        {
//            cout << i << endl;
//            sum += i;
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int m = 0, n = 0, sum = 0, i = 0;
//    do
//    {
//        m = InputNumber('m');
//        n = InputNumber('n');
//        if (m > n) {
//            cout << "n must be not smaller than m! Input again!" << endl;
//        }
//    } while (m > n);   //��֤m<=n
//    sum = PrimeSum(m, n);
//    cout << "sum of prime numbers:" << sum;
//    return 0;
//}