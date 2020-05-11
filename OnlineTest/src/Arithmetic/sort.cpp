#include<iostream>
template <typename T>
void printArr(T a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << "a[" << i << "] = " << a[i] << '\t';
	}
	std::cout<<std::endl;
}
template <typename T>
bool dec(T a, T b)
{
	return a > b;
}
template <typename T>
bool asc(T a, T b)
{
	return a < b;
}

//maopao
//原理：反复交换小数和大数
template <typename T>
void bubbleSort(T a[],const int size,bool minToMax)
{
	bool (*sort_rule)(T, T);
	if (minToMax)sort_rule = asc;
	else sort_rule = dec;

	bool isExchanged = false;
		for (int i = 0; i < size; i++)
		{
			isExchanged = false;
			for (int j = size - 1; j > i; j--)
			{
				if ((*sort_rule)(a[j] , a[j - 1]))//小的放前面
				{//交换j,j-1
					T tmp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = tmp;

					isExchanged = true;
				}
			}
			if (!isExchanged)return;//未交换
		}
		

}

//插入
template <typename T>
void insertSort(T a[], int size, bool minToMax)
{
	T key;
	bool (*sort_rule)(T , T);
	if (minToMax)sort_rule= asc;
	else sort_rule= dec;

	for (int i = 1; i < size; i++)
	{
		key = a[i];
		int j = i-1;
		while (j >= 0&&(*sort_rule)(key,a[j]))//升序：判断key<aj是否成立
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

//快排
//原理，选个基准数，使左侧的数均小于等于基准，右侧的数均大于等于基准
template <typename T>
void quickSort(T a[], int left,int right, bool minTomax)
{
	if (minTomax)
	{//从小到大排序
		if (left > right)return;

		int l = left, r = right;
		T base = a[left], temp;
		//使l及其左侧的数  <  r及其右侧的数
		while (r > l)
		{
			//找到比base小的再停	
			while (r > l&& a[r] >= base)// >=保证基准本身不移动
			{
				r--;
			}
			while (r > l&& a[l] <= base)
			{
				l++;
			}
			//交换a[l],a[r]
			temp = a[r];
			a[r] = a[l];
			a[l] = temp;
		}
		//基准a[left]归位,此时l左侧的数均<=al，右侧的数均>=al（即al为中位数）
		a[left] = a[l];
		a[l] = base;

		quickSort(a, left, l - 1, minTomax);
		quickSort(a, l + 1, right, minTomax);
	}
	else
	{//从大到小
		if (left > right)return;
		int l = left, r = right;
		T base = a[left], temp;

		while (r > l)
		{
			//找到比base大的再停	
			while (r > l&& a[r] <= base)
			{
				r--;
			}
			while (r > l&& a[l] >= base)
			{
				l++;
			}
			temp = a[l];
			a[l] = a[r];
			a[r] = temp;
		}
		a[left] = a[l];
		a[l] = base;

		quickSort(a, left, l - 1, minTomax);
		quickSort(a, l + 1, right, minTomax);

	}
	
}

//桶排序
void backetSort(int a[], int size, bool minTomax)
{
	//产生桶
}



//方便调用
template <typename T>
T* sort(T arr[], int size)
{
	quickSort(arr, 0, size - 1, true);
	return arr;
}

//int main()
//{
//	const int ARRSIZE = 10;
//	double arr[ARRSIZE]{ 10,13,2,245,9.5    ,9,11,9,8,27 };
//	printArr(arr, ARRSIZE);
//	//bubbleSort(arr,ARRSIZE,true);
//	insertSort(arr, ARRSIZE,true);
//	//quickSort(arr, 0, ARRSIZE - 1, false);
//
//	for (int i = 0; i < ARRSIZE; i++)
//	{
//		std::cout << arr[i]<<'\t';
//	}
//}


