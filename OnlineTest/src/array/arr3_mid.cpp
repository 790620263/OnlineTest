/*
下面的两个数组代表生产8个产品时的固定成本和可变成本：
     float fixed[]   =  { 11.31, 12.12, 13.67, 11.91, 12.30, 11.8, 11.00, 12.00 } ;
    float variable[] = { 1.12, 1.13, 3.14, 1.35, 2.20, 1.28, 1.00, 2.10 } ;
写一个程序输入编号为1到8的产品号以及生产的数量，输出生产这种产品的总成本。
注：总成本=固定成本+产品个数*可变成本

**输入提示信息：
      "请输入产品号（1-8）：" , 输入产品号i，回车确认
      "请输入该种产品的生产数量："，输入生产数量n，回车确认

**输出格式要求："生产编号为i，数量为n的产品的总成本为cost\n"
    其中i为产品号，n为生产数量，cost为总成本
    总成本要求保留2位小数
          cout << setiosflags(iosv::fixed) << setprecision(2)*/
//#include<iostream>
//#include<iomanip>
//using namespace std;
//float getCost(int i, int num)
//{
//    float fixed[] = { 11.31, 12.12, 13.67, 11.91, 12.30, 11.8, 11.00, 12.00 };
//    float variable[] = { 1.12, 1.13, 3.14, 1.35, 2.20, 1.28, 1.00, 2.10 };
//    return fixed[i - 1] + variable[i - 1] * num;
//}
//int main()
//{
//    cout << "请输入产品号（1-8）：";
//    int i,num;
//    cin >> i;
//    cout << "请输入该种产品的生产数量：";
//    cin >> num;
//    cout<< fixed<< showpoint << setprecision(2);
//    cout << "生产编号为"<<i<<"，数量为n的产品的总成本为" << getCost(i, num) << endl;
//}