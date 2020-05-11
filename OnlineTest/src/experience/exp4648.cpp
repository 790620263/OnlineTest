/*
实验2.1 选择控制结构开关语句。根据用户输入的整型数字0-6转换成星期输出。对应关系：0-Sunday, 1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday,  5-Friday, 6-Saturday. 其它数字n输入输出“n-Invalid number!"
输入输出样例：
输入：
Input a number:0
输出：
0-Sunday
输入：
Input a number:1
输出：
1-Monday
输入：
Input a number:9
输出：
9-Invalid number!
参考程序模板：
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Input a number:";
    //在此处读入num
    cout<<num<<'-';

    switch(/*测试表达式)
    {
    case 0:
        cout << "Sunday";
        break;
        /*在此处添加其它分支



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
    //在此处读入num
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