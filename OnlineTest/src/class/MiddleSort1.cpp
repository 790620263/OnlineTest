/*
��������Insertion Sort�����ú������ʵ����һ������������������в���xӦ�����λ�ã���x���������У�ʹ����Ԫ���԰��������С�
**�����ʽҪ��"%d"  ��ʾ��Ϣ��"Input array size:"  "Input array:" "Input x:"
**�����ʽҪ��"After insert %d:\n" "%4d"
��������ʾ�����£�
Input array size:5
Input array:1  3  5  7  9
Input x:4
After insert 4:
   1   3   4   5   7   9
*/
/*
#include<stdio.h>
#include<stdlib.h>//Ҫʹ��malloc��Ҫ������ͷ�ļ�
int main()
{
	printf("Input array size:");
	int size;
	scanf_s("%d", &size);
	int *arr = (int*)malloc(sizeof(int) * (size+1));
	//���ߌ�arr���ɷ����ķ���ֵ

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