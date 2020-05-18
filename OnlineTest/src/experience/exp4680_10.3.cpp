/*
实验10.3 继承和虚函数 员工类 问题描述
某公司有老板Boss、雇员Employee、小时工HourlyWorker和营销人员CommWorker，他们的薪金计算方法如下：
  老板实行年薪制，默认一年15万；雇员按月计酬，方法是基本工资+奖金（默认基本工资4500元/月，默认奖金3000元/月）；小时工按工作时间计算报酬，方法是工作小时*每小时单价（默认13元/小时）；营销人员按月计酬，方法是基本工资+销售利润*15%（默认基本工资4500元/月）。
  每类人员都有职务、姓名、职工编号、年龄、性别、工资等数据。设计计算各类人员报酬的程序，用虚函数getPay()计算各类人员的应得报酬，用虚函数print()打印输出各位工作人员的基本数据。
要求：
1.先定义基类Person，具有数据成员：姓名、职工编号、年龄、性别和薪酬方式，成员函数getPay()和print()以及构造函数。然后由Person类派生老板Boss、雇员Employee、小时工HourlyWorker和营销人员CommWorker。
2.根据给定的主程序和运行结果，自行设计其它程序细节，例如三种薪酬方式（年薪、月薪、时薪）的具体表示，成员的名字和数据类型等。

输入输出样例1：
Please input position:Boss↙
Please input name:小明↙
Please input id:123↙
Please input age:20↙
Please input sex:male↙
123
小明
20
male
Boss
\$150000

输入输出样例2：
Please input position:CommWorker↙
Please input name:John↙
Please input id:12003↙
Please input age:23↙
Please input sex:male↙
Please input money:150↙
12003
John
23
male
CommWorker
\$4522.5
*/
//#include<iostream>
//using namespace std;
//
//class Person {
//protected:
//	string name;
//	string id;
//	int age;
//	string sex;
//public:
//	virtual float getPay()=0;
//	virtual void print()=0;
//	Person(string name, int age, string id, string sex) {
//		this->name = name;
//		this->age = age;
//		this->id = id;
//		this->sex = sex;
//	}
//};
//class Boss :public Person {
//public :
//	Boss(string name, int age, string id, string sex) 
//		:Person(name,age,id,sex) {
//	}
//	float getPay() {
//		return 150000;
//	}
//	void print();
//};
//void Boss::print() {
//	cout << id << endl << name << endl << age << endl << sex << endl << "Boss"
//		<< endl << '\$' << getPay() << endl;
//}
//
//class Employee :public Person {
//protected:
//	int salary=4500, bonus=3000;
//public:
//	Employee(string name, int age, string id, string sex)
//		:Person(name, age, id, sex) {
//	}
//	float getPay() {
//		return salary + bonus;
//	}
//	void print();
//};
//void Employee::print() {
//	cout << id << endl << name << endl << age << endl << sex << endl << "Employee"
//		<< endl << '\$' << getPay() << endl;
//}
//
//class HourlyWorker :public Person {
//protected:
//	int hours;
//	int pay_perh = 13;
//public:
//	HourlyWorker(string name, int age, string id, string sex,int hours) 
//		:Person(name, age, id, sex){
//		this->hours = hours;
//	}
//	float getPay() {
//		return hours * pay_perh;
//	}
//	void print();
//};
//void HourlyWorker::print() {
//	cout << id << endl << name << endl << age << endl << sex << endl << "HourlyWorker"
//		<< endl << '\$' << getPay() << endl;
//}
//
//class CommWorker :public Person {
//protected:
//	int profit;
//	int salary=4500;
//public:
//	CommWorker(string name, int age, string id, string sex, int profit) 
//		:Person(name, age, id, sex) {
//		this->profit = profit;
//	}
//	float getPay() {
//		return salary + 0.15 * profit;
//	}
//	void print();
//};
//void CommWorker::print() {
//	cout << id << endl << name << endl << age << endl << sex << endl << "CommWorker"
//		<< endl << '\$' << getPay() << endl;
//}
//
////用于输出的main函数
//int main()
//{
//	string Position;
//	string Name;
//	string id;
//	int Age;
//	string Sex;
//	int hours;
//	int profit;
//	cout << "Please input position:";
//	cin >> Position;
//	cout << "Please input name:";
//	cin >> Name;
//	cout << "Please input id:";
//	cin >> id;
//	cout << "Please input age:";
//	cin >> Age;
//	cout << "Please input sex:";
//	cin >> Sex;
//	if (Position.compare("Boss") == 0) {
//
//		Boss boss(Name, Age, id, Sex);
//		boss.print();
//	}
//	else if (Position.compare("Employee") == 0) {
//		Employee employee(Name, Age, id, Sex);
//		employee.print();
//	}
//	else if (Position.compare("HourlyWorker") == 0) {
//		cout << "Please input working hours:";
//		cin >> hours;
//		HourlyWorker hourlyWorker(Name, Age, id, Sex, hours);
//		hourlyWorker.print();
//	}
//	else {
//		cout << "Please input sales profit:";
//		cin >> profit;
//		CommWorker commWorker(Name, Age, id, Sex, profit);
//		commWorker.print();
//	}
//	return 0;
//}