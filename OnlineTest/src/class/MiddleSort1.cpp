/*
插入排序（Insertion Sort）。用函数编程实现在一个按升序排序的数组中查找x应插入的位置，将x插入数组中，使数组元素仍按升序排列。
**输入格式要求："%d"  提示信息："Input array size:"  "Input array:" "Input x:"
**输出格式要求："After insert %d:\n" "%4d"
程序运行示例如下：
Input array size:5
Input array:1  3  5  7  9
Input x:4
After insert 4:
   1   3   4   5   7   9
*/
/*
#include<stdio.h>
#include<stdlib.h>//要使用malloc是要包含此头文件
int main()
{
	printf("Input array size:");
	int size;
	scanf_s("%d", &size);
	int *arr = (int*)malloc(sizeof(int) * (size+1));
	//或者將arr當成方法的返回值

	int i,x;
	printf("Input array:");
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Input x:");
	scanf_s("%d", &x);

	int j = size - 1;
	while (j >= 0 && arr[j] > x)
	{
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = x;

	printf("After insert %d:\n", x);
	for (i = 0; i < size + 1; i++)
	{
		printf("%4d", arr[i]);
	}
}*/