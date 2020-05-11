/*实验9.2 类和对象。圆形类设计。 为了编写几何图形圆类Circle，需要先编写点类Point。最后编写主函数测试这些类。
Point类包含数据成员横轴坐标x和纵轴坐标y；成员函数包括获取点横坐标函数Getx，获取点纵坐标函数GetY，设置点坐标函数Set，打印形如（1,1）的信息地print方法。
Circle类包括两个属性：圆心O（点类来实现）和半径R。成员函数包括：圆心位置获取函数GetO、半径获取函数GetR、半径位置设置函数SetR、圆的位置移动函数MoveTo以及圆的信息打印函数Display等。

要求：
1）Point类和Circle类不能直接访问成员变量的值，通过Get方法获取成员变量的值。
2） 创建圆对象时，如果给定的半径小于等于零时，显示错误信息（见输入输出样例），并将半径设置为零。
3）使用SetR和MoveTo函数可以正确设置成员变量的值。当设置半径小于等于零时，显示错误信息（见输入输出样例），并保持半径原值不变。
3）输出格式见输入输出样例和程序模板，不要修改模板中的cout语句的格式。
4）使用正确的方法将浮点数与0进行比较。

输入输出样例1：
Please input the x coordinate of the circle center:1
Please input the y coordinate of the circle center:2
Please input the radius of the circle:3
The center location is:(1,2)
The radius is:3
Please input the x coordinate of the circle center you want to modify:4
Please input the y coordinate of the circle center you want to modify:5
Please input the radius of the circle you want to modify:6
List circle information as follows:
The center is:(4,5)
The radius is:6

输入输出样例2：
Please input the x coordinate of the circle center:1
Please input the y coordinate of the circle center:2
Please input the radius of the circle: 0
Error: The radius must be a float number over 0!
The center location is: (1,2)
The radius is: 0
Please input the x coordinate of the circle center you want to modify: 4
Please input the y coordinate of the circle center you want to modify: 5
Please input the radius of the circle you want to modify: -1
Error: The radius must be a float number over 0!
List circle information as follows:
The center is:(4,5)
The radius is:0

输入输出样例3：
Please input the x coordinate of the circle center:1
Please input the y coordinate of the circle center:2
Please input the radius of the circle:3
The center location is:(1,2)
The radius is:3
Please input the x coordinate of the circle center you want to modify:4
Please input the y coordinate of the circle center you want to modify:5
Please input the radius of the circle you want to modify:-1
Error: The radius must be a float number over 0!
List circle information as follows:
The center is:(4,5)
The radius is:3*/

// 头文件定义
//#include<iostream>
//using namespace std;
//
//class Point {
//private:
//	//添加代码定义横坐标x
////添加代码定义纵坐标y
//	float x = 0, y = 0;
//public:
//	Point(float,float);		//构造函数，形参为坐标值
//
//	Point() {};		//默认构造函数，无参数
//
//	float Getx();		//Get方法获取坐标x
//
//	float Gety();		//Get方法获取坐标y
//
//	void Set(float,float);		//Set方法，设置坐标x，坐标y
//
//	void Print();		//输出点的坐标，格式为(1,1)并输出换行
//};
////此处添加代码实现Point类各成员方法（ 例如Point::Getx(){...} ）
//Point::Point(float tempx, float tempy)
//{
//	x = tempx;
//	y = tempy;
//}
//float Point::Getx()
//{
//	return Point::x;
//}
//float Point::Gety()
//{
//	return Point::y;
//}
//void Point::Set(float tempx,  float tempy)
//{
//	x = tempx;
//	y = tempy;
//}
//void Point::Print()
//{
//	cout << "(" << Point::x << "," << Point::y << ")" << endl;;
//}
//class Circle {
//private:
//	//添加代码定义坐标点center，类型为点类型
////添加代码定义半径radius
//	Point center;
//	float radius = 0;
//public:
//	Circle(Point p, float r)
//	{
//		this->center = p;
//		this->radius = r;
//		if (r < 1e-5)
//		{
//			cout << "Error:The radius must be a float number over 0! " << endl;
//			this->radius = 0;
//		}
//		
//	};		//构造函数，参数为坐标点p，半径r，自行添加数据类型
////错误时输出：
////cout << "Error:The radius must be a float number over 0! " << endl;
//
//	/*此处定义方法返回值类型*/Point GetO() {
//		//获取圆心方法，调用圆心point类的print方法
//		this->center.Print();
//		return center;
//	}
//
//	/*此处定义方法返回值类型*/float GetR()
//	{
//		return radius;
//	};		//获取半径，返回r
//
//	//此处添加代码定义修改圆心方法
//	void MoveTo(Point p)
//	{
//		center = p;
//	}
////错误时输出
////cout << "Error:The radius must be a float number over 0! " << endl;
//
//	//此处添加代码定义修改半径方法
//	void setR(float r)
//	{
//		if (r < 1e-5)
//		{
//			cout << "Error:The radius must be a float number over 0! " << endl;
//		}else
//		this->radius = r;
//	}
//
//	void print() {
//		cout << "List circle information as follows:" << endl;
//		cout << "The center is:";
//		GetO();
//		cout << "The radius is:" << GetR() << endl;
//	}
//};
////此处添加代码实现Point类各成员方法
//
//int main()
//{
//	//添加代码定义变量坐标x,坐标y,半径r
//	float x, y, r;
//	cout << "Please input the x coordinate of the circle center:";
//	//输入x
//	cin >> x;
//	cout << "Please input the y coordinate of the circle center:";
//	//输入y
//	cin >> y;
//	cout << "Please input the radius of the circle:";
//	//输入r
//	cin >> r;
//
//	//添加代码调用Point类和Circle类构造函数创建实例点p，圆c
//	Point p(x, y); Circle c(p, r);
//	cout << "The center location is:" << "(" << p.Getx() << "," << p.Gety() << ")" << endl;
//	cout << "The radius is:" << c.GetR() << endl;
//
//	cout << "Please input the x coordinate of the circle center you want to modify:";
//	//输入x
//	cin >> x;
//	cout << "Please input the y coordinate of the circle center you want to modify:";
//	//输入y
//	cin >> y;
//	cout << "Please input the radius of the circle you want to modify:";
//	//输入r
//	cin >> r;
//
//	//添加代码修改圆心
//	c.MoveTo(*(new Point(x, y)));
//	//添加代码修改半径
//	c.setR(r);
//	c.print();			//输出圆信息
//
//	return 0;
//}