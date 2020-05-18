/*
实验9.4 构造和析造函数 CPU类。问题描述：
    编写程序，定义一个CPU类，包含等级（rank）、频率（frequency）、电压（voltage）等属性，有2个公有成员函数run、stop。其中，rank为char类型，frequency为单位是MHz的整形数、voltage为浮点型的电压值。观察构造函数、析构函数、成员函数的调用顺序。
要求:
1）当输入频率或电压小于等于0时，输出错误信息（信息见输入输出样例和模板）。
2）请使用模板中提供的cout输出语句，注意输出格式的一致性，中文信息输出使用中文标点，英文信息输出使用英文标点。
3）模板中仅提供函数名和参数个数。请自行添加函数参数类型和返回值类型和函数实现。

输入输出样例1:
Please input the rank of the CPU:A
Please input the frequency of the CPU:20
Please input the voltage of the CPU:220.0
构造了一个CPU：
CPU等级：A 主频：20 电压：220
CPU 开始运行！
CPU 停止运行！
析构了一个CPU！
输入输出样例2：
Please input the rank of the CPU:B
Please input the frequency of the CPU:-10
Please input the voltage of the CPU:100.0
Input Error:The frequency must be a number over 0!
输入输出样例3：
Please input the rank of the CPU:C
Please input the frequency of the CPU:15
Please input the voltage of the CPU:0
Input Error:The voltage must be a number over 0!
*/
//using namespace std;
//#include<iostream>
//class CPU {
//private:
//	//定义等级rank
//	char rank;
//	//定义频率frequency
//	int freq;
//	//定义电压voltage
//	double v;
//
//public:
//	CPU(/*定义参数*/char rank,int freq,double v) {
//		//添加代码给类成员变量赋值
//		this->rank = rank;
//		this->freq = freq;
//		this->v = v;
//		cout << "构造了一个CPU：" << endl;
//		cout << "CPU等级：" << rank << " 主频：" << freq;
//		cout << " 电压：" << v << endl;
//	}
//
//	~CPU() {
//		cout << "析构了一个CPU！" << endl;
//	}
//
//	/*此处定义方法返回值类型*/ void Run() {
//		cout << "CPU 开始运行！" << endl;
//	}
//
//	/*此处定义方法返回值类型*/void  Stop() {
//		cout << "CPU 停止运行！" << endl;
//	}
//};
//
//int main()
//{
//	//定义等级
//	//定义频率
//	//定义电压
//	char rank;
//	int freq;
//	double v;
//
//	cout << "Please input the rank of the CPU:";
//	//添加代码输入等级
//	cin >> rank;
//	cout << "Please input the frequency of the CPU:";
//	//添加代码输入频率
//	cin >> freq;
//	cout << "Please input the voltage of the CPU:";
//	//添加代码输入电压
//	cin >> v;
//
////参数检查，参数非法输出提示信息并退出主函数
//	if (freq <= 0)
//	{
//		cout << "Input Error:The frequency must be a number over 0!" << endl;
//		return 0;
//	}
//	if (v <= 0)
//	{
//		cout << "Input Error:The voltage must be a number over 0!" << endl;
//		return 0;
//	}
//
//	//创建类的实例
//	CPU c = *new CPU(rank, freq, v);
//	//调用实例的Run()方法;
//	c.Run();
////调用实例的Stop()方法;
//	c.Stop();
//	return 0;
//}