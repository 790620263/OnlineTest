/*
ʵ��2.1 ѡ����ƽṹ������䡣�����û��������������0-6ת���������������Ӧ��ϵ��0-Sunday, 1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday,  5-Friday, 6-Saturday. ��������n���������n-Invalid number!"
�������������
���룺
Input a number:0
�����
0-Sunday
���룺
Input a number:1
�����
1-Monday
���룺
Input a number:9
�����
9-Invalid number!
�ο�����ģ�壺
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Input a number:";
    //�ڴ˴�����num
    cout<<num<<'-';

    switch(/*���Ա��ʽ)
    {
    case 0:
        cout << "Sunday";
        break;
        /*�ڴ˴����������֧



        cout << "Invalid number!";
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "Input a number:";
    //�ڴ˴�����num
    cin >> num;
    cout << num << '-';

    switch (num)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;


    default:
        cout << "Invalid number!";
    }
    return 0;
}*/