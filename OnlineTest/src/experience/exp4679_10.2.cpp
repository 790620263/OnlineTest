/*
实验10.2 继承 立体图形类。
大千世界所有的高维图形都可以由最基本的简单低维图形组成，我们可以运用所学的C++语言继承的思想对现实世界图像进行抽象。定义基类点类：Point，圆类Circle继承自Point，圆锥体类Cone和圆柱体类Cylinder继承自Circle。其中，（所有数据都采用双精度）
1. 点类Point具有：
保护数据成员：X和Y，分别用于存储点的横纵坐标。
公有成员函数：
Point (double x=0, double y=0)，功能：构造函数，设置点的横纵坐标为x和y，且当创建对象不提供参数时，默认设置横纵坐标均为0.
void getXY()，功能：从键盘键入点的横纵坐标。
void showCoordinate()，功能：输出点的坐标。
2. 圆类Circle公有继承于基类Point具有：
继承保护数据成员：X和Y，分别用于存储圆心的横纵坐标。
增加保护数据成员：radius，存储圆的半径。
新增公有成员函数：
Circle (double x=0, double y=0, double r=0) 构造函数，设置圆心的横纵坐标为x(默认值为0)和y(默认值为0)，半径为r(默认值为0).
void setXYradius()，功能：从键盘输入数据设置圆点横纵坐标及圆的半径。
double getArea()，功能：计算并返回圆的面积。
3. 圆柱体类Cylinder保护继承自Circle类，具有
新增保护数据成员: height, 记录圆柱体的高。
增加公有成员函数：
Cylinder(double x=0,double y=0,double r=0,double h=0)，构造函数，设置圆柱体底面的圆心是(x, y) (默认值为0,0)，半径为r(默认值为0), 高为h(默认值为0)。
void setData()：功能从键盘输入数据设置圆心横纵坐标，圆的半径及高。
double getArea()：功能：计算并返回圆柱体的表面积。
double getVolume()：功能：计算并返回圆柱体的体积。
4. 圆锥体公有继承自Circle类，具有：
新增保护数据成员: height, 记录圆锥体的高。
增加公有成员函数：
Cone(double x=0,double y=0,double r=0,double h=0):Circle(x,y,r) 构造函数，功能同圆柱体。
void setData()：功能同圆柱体。
double getArea()：功能：计算并返回圆锥体的表面积。
double getVolume()：功能：计算并返回圆锥体的体积。

编写主程序验证类的正确性：
1）键盘输入Point的X,Y坐标，Circle半径，Cone和Cylinder的高度；
2）按要求输出坐标，圆面积，圆柱体和圆锥体表面积，体积。
[输入输出提示：]
屏幕提示：Please input X:，用户通过键盘输入X坐标（圆柱，圆锥，圆都需要 分别输入）；
屏幕提示：Please input Y:。用户通过键盘输入Y坐标（圆柱，圆锥，圆都 需要分别输入）；
屏幕提示：Please input radius：，用户通过键盘输入半径长（圆柱，圆锥， 圆都需要分别输入）；
屏幕提示：Please input the cylinder's height:，用户通过键盘输入圆柱的高度 （仅圆柱）；
屏幕提示：Please input the cone's height:，用户通过键盘输入圆锥的高度 （仅圆锥）；
3) 程序执行结果如下：以下红色字体表示从键盘输入的数据，蓝色字体表示屏幕显示的内容，↙表示回车键，哭脸是冒号和左圆括号。
Please input X:12↙
Please input Y:12↙
Please input radius:12↙
Please input X:12↙
Please input Y:12↙
Please input radius:12↙
Please input the cylinder's height:12↙
Please input X:12↙
Please input Y:12↙
Please input radius:12↙
Please input the cone's height:12↙
The coordinate of the point is伤心12,12).
The area of the circle is:452.389
The area of the cylinder is:1809.56
The volume of the cylinder is:5428.67
The area of the cone is:1092.16
The volume of the cone is:1809.56

*/
//#include <iostream>
//#include <cmath>
//using namespace std;
//const double PI = 3.141592653;
//
////补全基类Point 类体
//class Point {
//protected:
//    double X, Y;
//public:
//    Point(double x = 0, double y = 0){
//        this->X = x;
//        this->Y = y;
//    };
//    void getXY() {
//        cout << "Please input X:";
//        cin >> X;
//        cout << "Please input Y:";
//        cin >> Y;
//    };
//    void showCoordinate() {
//        cout << "The coordinate of the point is:(" << X << ',' << Y << ")." << endl;
//    };
//};
//
//
////以下是圆类的定义
///* TODO: write code to define a class 'Circle' inherits from a specific base class */ 
//class Circle:public Point{
//protected:
//    double radius;
//public:
//    Circle(double x = 0, double y = 0, double r = 0) :
//        Point(x, y) {
//        X = x; Y = y; radius = r;
//    }
//    void setXYradius() {
//        Circle::getXY();
//        cout << "Please input radius:";
//        cin >> radius;
//    }
//    double getArea() {
//        return PI * radius * radius;
//    }
//};
//
////以下是圆柱体类的定义
//
////补全圆柱体类的定义
//class Cylinder :Circle {
//protected:
//    double height;
//public:
//    Cylinder(double x = 0, double y = 0, double r = 0, double h = 0) {
//        Circle(x, y,r);
//        height = h;
//    }
//    void setData() {
//        Circle::setXYradius();
//        cout << "Please input the cylinder's height:";
//        cin >> height;
//
//    };
//    double getArea() {
//        //write code here
//        return PI * radius  *2*(radius + height);
//    }
//    /* implement function getVolume */
//    double getVolume() {
//        //write code here
//        return PI * radius * radius * height;
//
//    }
//};
//
//    /* TODO: write code to define a class Cone inherits from a specific base class */ 
//class Cone:public Circle{
//
//    /* TODO:write the definition for variables */
//protected:
//    //write here
//    double height;
//public:
//    //write here
///*TODO: write the definition for Cone's constructor */
//    Cone(double x = 0, double y = 0, double r = 0, double h = 0) :Circle(x, y, r)
//    {
//        Circle(x, y,r);
//        height = h;
//    }
////write code here
///* implement function setHeight */
//    void setData() {
//        //write code here
//        Circle::setXYradius();
//        cout << "Please input the cone's height:";
//        //write code here
//        cin >> height;
//    }
//    /* implement function getArea */
//    double getArea() {
//        //write code here
//        return PI * radius *( radius + sqrt(radius * radius + height * height));
//    }
//    /* implement function getVolume */
//    double getVolume() {
//        //write code here
//        return PI  * radius * radius * height / 3.0;
//
//    }
//};
//
//    int main() {
//        Circle _circle;
//        Cylinder _cylinder;
//        Cone _cone;
//        /*call function to initialize and input the variables of object _circle,_cylinder and _cone */
//        //write code here
//        _circle.setXYradius();
//        _cylinder.setData();
//        _cone.setData();
//        /*print messages*/
//        _circle.showCoordinate();
//        cout << "The area of the circle is:" << _circle.getArea() << endl;
//        cout << "The area of the cylinder is:" << _cylinder.getArea() << endl;
//        cout << "The volume of the cylinder is:" << _cylinder.getVolume() << endl;
//        cout << "The area of the cone is:" << _cone.getArea() << endl;
//        cout << "The volume of the cone is:" << _cone.getVolume() << endl;
//    }
