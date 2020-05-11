/*输入5个整数，将它们存入数组a中，再输入1个数x，然后在数组中查找x，输出该数在数组中首次出现的下标，如果找不到，则输出"Not Found"。
**输入格式要求："%d" 提示信息："Enter 5 integers: "  "Enter x: "
**输出格式要求："Index is %d\n" "Not Found"
程序运行示例如下：
Enter 5 integers: 2 9 8 1 9
Enter x: 9
Index is 1
程序运行示例如下：
Enter 5 integers: 2 9 8 1 6
Enter x: 7
Not Found
*/
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int a[6],x;
//	printf("Enter 5 integers: ");
//	scanf_s("%d%d%d%d%d", &a[0],&a[1],&a[2],&a[3],&a[4]);
//	printf("Enter x: ");
//	scanf_s("%d", &x);
//	int i = 0;
//	bool isFound = false;
//	while (i < 5)
//	{
//		if (a[i] == x)
//		{
//			isFound = true;
//			break;
//		}
//		i++;
//	}
//	if (isFound)
//	{
//		printf("Index is %d\n", i);
//	}
//	else
//	{
//		printf("Not Found");
//	}
//}