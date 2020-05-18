/*
实验10.1 继承 交通工具类。问题描述
  在不同的需求背景下，对相同的类的抽象可以是不同的，本实验我们再设计一个不同的交通工具类族。
   一个汽车类vehicle，包含保护类型数据成员重量weight和车轮数量wheel，包含公有成员函数void set(int we,int wh)分别设置重量和车轮数量，公有成员函数void display()输出汽车的重量和车轮数量。
由类vehicle派生出类car和类truck，类Car增加保护类型数据成员载客数量busload，增加公有成员函数void set1(int m)设置载客数量,重定义公有成员函数void display()显示轿车的重量、车轮数量和载客数量。
类truck增加保护类型数据成员载重量deadweight，增加公有成员函数void set2(int m)设置载重量，定义公有成员函数void display()显示卡车的重量、车轮数量和载重量。然后编写主程序测试这些类。以上所有数据均是整数。
输入输出样例：
Input the weight:2
Input the wheel:4
Input the the busload:40
Input the deadweight:10
The vehicle:
The weight is 2
The wheel is 4
The car:
The weight is 2
The wheel is 4
The busload is 40
The truck:
The weight is 2
The wheel is 4
The deadweight is 10
*/
//#include <iostream>
//using namespace std;
//
////补充代实现类vehicle  的定义
//class vehicle
//{
//protected:
//	int weight = 0;
//	int wheel = 0;
//public:
//	void set(int we, int wh) {
//		this->weight = we;
//		this->wheel = wh;
//	}
//	void display() {
//		cout << "The weight is " << weight << endl;
//		cout << "The wheel is " << wheel << endl;
//	}
//
//};
//
//class car:vehicle
//{
//protected:
//	int busload = 0;
//public:
//	void set1(int we, int wh,int m) {
//		set(we, wh);
//		busload = m;
//	}
//	void display() {
//		//补充代码实现类car 的定义
//		cout << "The weight is " << weight << endl;
//		cout << "The wheel is " << wheel << endl;
//		cout << "The busload is " << busload << endl;
//	}
//
//};
//
//
////补充代码实现类truck 的定义
//class truck:vehicle
//{
//protected:
//	int deadweight = 0;
//public:
//	void set2(int we, int wh, int m) {
//		set(we, wh);
//		deadweight = m;
//	}
//	void display() {
//		cout << "The weight is " << weight << endl;
//		cout << "The wheel is " << wheel << endl;
//		cout << "The deadweight is " << deadweight << endl;
//	}
//
//
//};
//
//
//int main() {
//	vehicle v1;
//	car car1;
//	truck truck1;
//	int weight, wheel, busload, deadweight;
//	cout << "Input the weight:";
//	cin >> weight;
//	cout << "Input the wheel:";
//	cin >> wheel;
//	cout << "Input the the busload:";
//	cin >> busload;
//	cout << "Input the deadweight:";
//	cin >> deadweight;
//	v1.set(weight, wheel);
//	car1.set1(weight, wheel, busload);
//	truck1.set2(weight, wheel, deadweight);
//	cout << "The vehicle:" << endl;
//	v1.display();
//	cout << "The car:" << endl;
//	car1.display();
//	cout << "The truck:" << endl;
//	truck1.display();
//	return 0;
//}