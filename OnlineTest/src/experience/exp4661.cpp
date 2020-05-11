/*
一维数组  提高冒泡排序算法的效率。要求完成以下工作:
1）输出要求：在每轮冒泡后，输出数组的内容并记录比较的次数。
2）算法改进：在某轮冒泡之后，数组中的数据可能已经按正确顺序排列了，这时候就没有必要进行9轮冒泡了，修改冒泡排序，在每次排序后检查是否进行了数据的交换。如果没有发生任何交换，说明数据已经按照正确的顺序排列，就应该终止排序过程。如果进行了交换，那么至少还需要一次排序。
输出示例：
Data items in original order
   2   6   4   8  10  12  89  68  45  37

After pass 0:   2   4   6   8  10  12  68  45  37  89
After pass 1:   2   4   6   8  10  12  45  37  68
After pass 2:   2   4   6   8  10  12  37  45
After pass 3:   2   4   6   8  10  12  37

Data items in ascending order
   2   4   6   8  10  12  37  45  68  89
Number of comparisons = 30*/
//#include<iostream>
//#include<iomanip>
//using namespace std;
//void bubble_sort(int *a,int size,int *comp)//comp比较次数
//{
//	//int *a = arr;//arr为数组第一个元素的地址
//	int exchanged = 0;
//	for (int j = 0; j < size; j++)
//	{
//		exchanged = 0;
//		for (int i = 0; i < size - 1-j; i++)
//		{
//			int tmp = a[i];
//			if (tmp > a[i + 1])
//			{
//				//exchange a[i]-a[i+1]
//				a[i] = a[i + 1];
//				a[i + 1] = tmp;
//
//				exchanged++;
//			}
//			++(*comp);
//		}
//		cout << "After pass " << j << ":";
//		for (int q = 0; q < size-j; ++q)
//			cout << setw(4) << a[q];
//		cout << endl;
//
//		if (exchanged==0)break;
//	}
//	
//}
//int main()
//{
//	const int SIZE = 10;
//	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
//	int numberOfComp = 0;
//	bool swapCheck = true;
//
//	cout << "Data items in original order\n";
//	for (int i = 0; i < SIZE; ++i)
//		cout << setw(4) << a[i];
//
//	cout << "\n\n";
//
//	/* Write bubble sort implementation here */
//
//	bubble_sort(a,SIZE,&numberOfComp);//取地址
//
//	cout << "\nData items in ascending order\n";
//
//	for (int q = 0; q < SIZE; ++q)
//		cout << setw(4) << a[q];
//
//	cout << "\nNumber of comparisons = " << numberOfComp << endl;
//	return 0;
//}