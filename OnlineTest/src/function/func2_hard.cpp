/*
[����3]�밴��ĿҪ���д�����ӡ���[a,b]֮���������������ͳ�Ƹ����������ĸ���(count)��
����a��b��������ͨ���������루������ʱӦ����b>a>1���˹��жϣ������ݵĴ�ӡ���Ҳ����������ɣ�
�ж�һ�����Ƿ����������� fun(n) ����ʵ�֣���n��������������ֵΪ1�����򷵻�ֵΪ0��fun����ԭ�����£�
     int fun(int n);
***������ʾ��Ϣ��"Input a and b:\n"
***�����������**��
cin >> a;
cin.ignore(1);
cin >> b;

***����������**��
cout << current_prime << endl;
***���ͳ�ƽ�����**��
cout << "Prime number is:" << count << endl;*/
/*
#include<iostream>
using namespace std;
int fun(int n)
{
    for (int i = 2; i < n/2+1; i++)
    {
        if (n % i == 0)return 0;
    }
    return 1;
}
int main()
{
    cout << "Input a and b:\n";
    int a, b,count=0;
    cin >> a;
    cin.ignore(1);
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (fun(i) == 1)
        {
            cout << i << endl;
            count++;
        }
    }
    cout << "Prime number is:" << count << endl; 
}*/