/*
һά����  ���ð�������㷨��Ч�ʡ�Ҫ��������¹���:
1�����Ҫ����ÿ��ð�ݺ������������ݲ���¼�ȽϵĴ�����
2���㷨�Ľ�����ĳ��ð��֮�������е����ݿ����Ѿ�����ȷ˳�������ˣ���ʱ���û�б�Ҫ����9��ð���ˣ��޸�ð��������ÿ����������Ƿ���������ݵĽ��������û�з����κν�����˵�������Ѿ�������ȷ��˳�����У���Ӧ����ֹ������̡���������˽�������ô���ٻ���Ҫһ������
���ʾ����
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
//void bubble_sort(int *a,int size,int *comp)//comp�Ƚϴ���
//{
//	//int *a = arr;//arrΪ�����һ��Ԫ�صĵ�ַ
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
//	bubble_sort(a,SIZE,&numberOfComp);//ȡ��ַ
//
//	cout << "\nData items in ascending order\n";
//
//	for (int q = 0; q < SIZE; ++q)
//		cout << setw(4) << a[q];
//
//	cout << "\nNumber of comparisons = " << numberOfComp << endl;
//	return 0;
//}