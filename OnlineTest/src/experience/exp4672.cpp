/*
9.1 类和对象。任务描述：
一、定义一个描述角度的类CAngle，包含的内容如下：
(1)私有成员变量value，表示角度，类型为double；
(2)公有成员函数SetValue，实现功能是使用形参为value赋值。 声明为：void SetValue（double）；
(3)公有成员函数GetCos，实现功能计算余弦值，并作为返回值返回。 声明为 double GetCos（void）；
二、编写主程序实现如下功能：定义一个CAngle类的对象deg，调用成员函数根据用户输入的角度设置对象deg角度，最后调用成员函数计算并输出deg的余弦值。（π取3.1415）
输入输出样例：红色是用户输入，其它为输出
输入角度：30
角度的余弦为0.866033*/

/*
#include <iostream>
//包含必要的头文件
#include<cmath>
using namespace std;
//添加代码定义常量PI
const double PI = 3.1415;
//添加代码定义类CAngle
class CAngle
{
private:
	double value;
public:
	void SetValue(double v)
	{
		value = v;
	};
	double GetCos(){
		value = value /180*PI;
		return cos(value);
	};
};

int main() {
	//添加代码定义一个Cangle类的对象deg
	CAngle deg;
	//在下面的程序中适当位置补充代码 调用成员函数根据用户输入的角度设置对象deg角度
	//最后调用成员函数计算并输出deg的余弦，然后输出回车符。

	cout << "输入角度：";
	double v;
	cin >> v;
	deg.SetValue(v);

	cout << "角度的余弦为";
	cout << deg.GetCos() << endl;
	return 0;
}*/