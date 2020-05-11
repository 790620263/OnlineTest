/*
用函数编程实现输出 m~n之间所有素数，并求和，m和n由键盘输入。素数是只能被1和自身整除的大于1的正整数。 
要求程序能对用户输入的数据进行正确性检查，满足条件：m和n都是大于1的正整数，并且m<=n。
1. 要求编写函数InputNumber 实现用户输入一个正整数，并对数的合法性进行检查，如果读入不成功(例如：输入字符串)，或者数不合法即不是大于1的正整数，则重新输入，直到输入正确为止。
函数原型：
unsigned int InputNumber(char ch);
形式参数：ch，用于生成输入提示信息。
返回值：返回正确的输入值。
输入提示信息：cout << "Please input the number " << ch << "(>1):"
输入格式：一个整数
输入错误提示信息："The input must be an integer larger than 1!"（后接换行符）
提示：测试cin.fail()的返回值来判断是否成功读入数据，使用cin.ignore清除错误输入。
2. 要求编写函数IsPrime判断自然数x是否为素数，如果x是素数则返回1，不是素数返回0。
函数原型：
int IsPrime(unsigned int n);
返回值：如果x是素数则返回1，不是素数返回0。

3. 要求编写函数PrimeSum 输出m到n之间所有素数并返回它们的和。
函数原型：
int PrimeSum(unsigned int m, unsigned int n);
返回值：m到n之间所有素数的和。
每个素数的输出格式：一个整数，后接换行符

主函数定义如下：
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
    }while(m > n);   //保证m<=n
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
//    } while (m > n);   //保证m<=n
//    sum = PrimeSum(m, n);
//    cout << "sum of prime numbers:" << sum;
//    return 0;
//}