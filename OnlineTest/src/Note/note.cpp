#include<string>
#include<iostream>
#include<cstring>
void 大写转小写(const string &s) {
	//此方法SSE编译器不识别
	//string lower_str(s);
	//transform(lower_str.begin(), lower_str.end(), lower_str.begin(), tolower);

	//此方法SSE中需引入头文件（cstring)
	char* str = (char*)s.data();
	return string(_strlwr(str));
};
void 字符串迭代器(string str) {
	string::reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{
		char& c = (*it);
		//TODO
		it++;
	}
};
void 随机数()
{
	//ctime库的time()返回1970至今的毫秒数
	//srand(long l)初始化随机数种子
	srand(time(NULL));
	//rand用到cstdlib库
	int rndNum = rand();//产生一个0-32767的整数
}
void 声明一个大小预先不确定的数组(int size)
{
	int* arr = new arr[size];
}