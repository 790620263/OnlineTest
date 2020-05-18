/*
实验9.3 类和对象 管理图书订单
任务描述：
定义一个网上购书订单类BookOrder，包含的内容如下：
(1) 私有成员变量BookID，表示图书编号，类型为string；
(2) 私有成员变量Quantity，表示图书的数量，类型为int；
(3) 公有成员变量price，表示图书的单价，类型为double；
(4) 公有成员函数BookInit，实现使用参数为成员变量赋值；
(5) 公有成员函数BookInfo，实现显示订单信息，包括图书编号、单价、 数量、总价。
(6) 可以根据任务要求自行设计其它需要的成员函数。

编写主程序实现如下功能：
(1) 创建图书订单类的一个对象bookOrder；
(2) 交互地由用户输入订单信息，包括图书编号、数量、单价；
(3) 调用成员函数BookInit使用用户输入的信息设置bookOrder的成员变量的值；
(4) 调用成员函数BookInfo显示图书订单bookOrder的内容；
(5) 根据用户输入的该图书编号的折扣，计算折扣后单价，修改图书订单bookOrder的单价为现有单价；
(6) 再次调用成员函数BookInfo显示图书订单bookOrder的内容。

输入输出样例：↙表示回车。
输入图书编号：001↙
输入数量和单价：2 3↙
图书编号：001
数量：2
单价：3
输入该编号图书折扣(0-1之间)：0.5↙
单价调整后：
图书编号：001
数量：2
单价：1.5

*/

//#include<iostream>
//#include<string>
//using namespace std;
//class BookOrder {
//    //图书编号
//    string bookid;
//    //数量
//    int quantity;
//public:
//    double price;
//    void BookInit(string s, int num, double p) {
//        //在此处添加代码声明其它类成员
//        this->bookid = s;
//        this->quantity = num;
//        this->price = p;
//    }
//    void BookInfo() {
//
//        cout << "图书编号："<<bookid;
//        cout << endl;
//            //在此处添加代码输出图书编号，然后换行
//        cout << "数量："<<quantity;
//        cout << endl;
//            //在此处添加代码输出图书数量，然后换行
//        cout << "单价："<<price;
//        cout << endl;
//            //在此处添加代码输出图书单价，然后换行
//    }
//};
//int main()
//{
//    //在此处添加代码  声明类对象 bkorder
//    BookOrder bkoreder;
//    //在此处添加代码 声明其它变量
//    int n;
//    string id;
//    double pri;
//    cout << "输入图书编号：";
//    //在此处添加代码读入图书编号
//    cin >> id;
//    cout << "输入数量和单价：";
//    cin >> n >> pri;
//    //在此处添加代码读入数量和单价
//
//    //在此处添加代码 创建图书订单类的一个对象bookOrder；
//    bkoreder =* new BookOrder();
//    //在此处添加代码 对bookOrder图书信息进行初始化
//    bkoreder.BookInit(id, n, pri);
//    //在此处添加代码调用成员函数BookInfo输出图书信息
//    bkoreder.BookInfo();
//    float count;
//    cout << "输入该编号图书折扣(0-1之间)：";
//    cin >> count;
//    //添加代码 修改图书订单bookOrder的单价为折扣后单价；
//    bkoreder.price *= count;
//    cout << "单价调整后：" << endl;
//    //再次调用成员函数BookInfo显示图书订单bookOrder的内容。
//    bkoreder.BookInfo();
//    return 0;
//}