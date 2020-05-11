/*
按如下公式递归计算矩阵行列式的值：

**输入格式要求："%d" "%lf"
提示信息："Please enter matrix size n(1<=n<20):"  "Please input matrix line by line:\n"  "matrix a:\n"
**输出格式要求："Submatrix:\n"  "DValue of the Submatrix is %6.1f\n"  "%6.1f\t"  "result = %f\n"
程序运行结果如下：
Please enter matrix size n(1<=n<20):3< span="">
Please input matrix line by line:
1 2 3
4 5 7
8 9 11
matrix a:
   1.0     2.0     3.0
   4.0     5.0     7.0
   8.0     9.0    11.0
Submatrix:
   5.0     7.0
   9.0    11.0
DValue of the Submatrix is   -8.0
Submatrix:
   4.0     7.0
   8.0    11.0
DValue of the Submatrix is  -12.0
Submatrix:
   4.0     5.0
   8.0     9.0
DValue of the Submatrix is   -4.0
result = 4.000000*/
/*
#include<iostream>
#include<iomanip>
using namespace std;

template <typename T>
class linked_list
{
private:
	struct Node
	{
		int index = 0;
		T data = 0;
		Node* tail = nullptr;//tail指向下一个元素
	};
	Node root, * last = nullptr;
	int size = 0;
	Node* now = nullptr;

	void quickSort(T* a, int left, int right, bool minTomax)
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
				while (r > l && a[r] >= base)// >=保证基准本身不移动
				{
					r--;
				}
				while (r > l && a[l] <= base)
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
				while (r > l && a[r] <= base)
				{
					r--;
				}
				while (r > l && a[l] >= base)
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
public:
	linked_list<T>() {
	}
	linked_list<T>(int SIZE) {
		for (int i = 0; i < SIZE; i++)
		{
			insert(NULL);
		}
	}
	linked_list<T>(const T* Array, int SIZE) {
		for (int i = 0; i < SIZE; i++)
		{
			insert(Array[i]);
		}
	}
	bool isEmpty()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
	bool isContain(T object)
	{
		//遍历全数组
		Node now = *(root.tail);
		while (now.index < size - 1)
		{
			now = *now.tail;
			if (now.data == object)
				return true;
		}
		return false;
	}
	int getSize()
	{
		return size;
	}
	T poll()
	{
		if (size > 0)
		{
			T toReturn = (*(root.tail)).data;

			if (size > 1)//next node is exist
				root.tail = (*(root.tail)).tail;
			else//next node is not exist,reset the first node
				root.tail = nullptr;


			size--;

			return toReturn;
		}
		else
		{
			return NULL;
		}
	}
	//在末尾插入
	void insert(const T data)
	{
		Node* newNodePtr = new Node();//必须new，这个局部变量还保持着以前的地址
		(*newNodePtr).data = data;
		(*newNodePtr).index = size;

		if (size == 0)
		{
			last = newNodePtr;
			root.tail = newNodePtr;
		}
		else {
			(*last).tail = newNodePtr;//使第size-1个元素的指针指向这个元素
			last = newNodePtr;
		}


		size++;
	}
	//插入数组
	void insert(const T* Array, int SIZE)
	{
		for (int i = 0; i < SIZE; i++)
		{
			insert(Array[i]);
		}
	}
	//在下标为index元素后插入新元素
	void insert(int index, const T data)
	{
		if (index > size - 1 || index < 0)//越界
			return;
		else if (index == size - 1)//队尾插入
		{
			insert(data);
		}
		else
		{
			Node* nowNode = &root, * newNode = new Node();
			(*newNode).data = data;
			(*newNode).index = index + 1;
			//(*newNode).tail = root.tail;

			while ((*nowNode).index < index)
			{
				nowNode = (*nowNode).tail;
			}
			Node* node_index_plus1 = (*nowNode).tail;
			(*nowNode).tail = newNode;
			(*newNode).tail = node_index_plus1;

			//新节点以后的节点index全部加一
			nowNode = newNode;
			while ((*nowNode).tail != nullptr)
			{
				nowNode = (*nowNode).tail;
				(*nowNode).index++;
			}

			size++;
		}
	}
	//取出(获得并删除）第一个元素
	T poll(int index)
	{
		if (index > size - 1 || index < 0)//越界
		{
			return NULL;
		}
		else if (index == size - 1)
		{
			return poll();
		}
		else
		{

			Node* preIndexPtr = root.tail;
			while ((*preIndexPtr).index < index - 1)
			{
				preIndexPtr = (*preIndexPtr).tail;
			}

			//此时preIndexPtr指向下标为index-1元素
			T toReturn = (*(*preIndexPtr).tail).data;

			//删除第index个元素
			(*preIndexPtr).tail = (*(*preIndexPtr).tail).tail;
			size--;

			return toReturn;
		}
	}
	//获得下标为index的元素
	T get(int index)
	{
		Node now = *(root.tail);
		while (now.index < index)
		{
			now = *now.tail;
		}
		return now.data;
	}
	//设置下标为index的元素为
	void set(int index, T data)
	{
		Node now = *(root.tail);
		while (now.index < index)
		{
			now = *now.tail;
		}
		(*now).data = data;
	}
	//返回数组：传递引用SIZE，以返回数组大小
	T* toArray(int& SIZE)
	{
		SIZE = size;
		return toArray();
	}
	T* toArray()
	{

		T* arr = new T[size];
		int i = 0;

		//遍历全数组
		Node now = *(root.tail);
		arr[i] = now.data;
		while (now.index < size - 1)
		{
			i++;
			now = *now.tail;
			arr[i] = now.data;
		}

		return arr;
	}
	//递增数组
	T* toArcArray()
	{
		T* arr = toArray();
		quickSort(arr, 0, size - 1, true);
		return arr;
	}
	T* toArcArray(int& SIZE)
	{
		T* arr = toArray(SIZE);

		quickSort(arr, 0, size - 1, true);
		return arr;
	}
	//递减数组
	T* toDecArray()
	{
		T* arr = toArray();

		quickSort(arr, 0, size - 1, false);
		return arr;
	}
	T* toDecArray(int& SIZE)
	{
		T* arr = toArray(SIZE);

		quickSort(arr, 0, size - 1, false);
		return arr;
	}


	//以下操作与流类似，now为流的读取位置==========================
	//还有未读取的数据
	bool hasData()
	{
		return now != nullptr && (*now).index < size;//now不是空指针且下标未越界
	}
	//将流的读取位置设为index
	void mark(int index)
	{
		mark();
		while ((*now).index < index)
		{
			now = (*now).tail;
		}
	}
	//将流的读取位置设为0（从头读取）
	void mark()
	{
		now = root.tail;
	}
	//返回流的读取位置
	int nowIndex()
	{
		return (*now).index;
	}
	//准备读下一个数据
	void next()
	{
		now = (*now).tail;
	}
	//获得读取位置的数据
	T get()
	{
		if (now == nullptr)now = root.tail;
		return (*now).data;
	}
	//以上操作与流类似，now为流的读取位置==========================
};


linked_list<linked_list<double>> get_sub_matrix(linked_list<linked_list<double>> matrix, int l, int c);
double calc_matrix(linked_list<linked_list<double>> matrix);
void print_matrix(linked_list<linked_list<double>> matrix);
int main()
{
    int size;
    cout << "Please enter matrix size n(1<=n<20):";
    cin >> size;
    cout << "Please input matrix line by line:\n";
	linked_list<linked_list<double>> matrix;
	linked_list<double> line = *(new linked_list<double>());
	double tmp=0.0;
	for (int i = 0; i < size; i++)
	{
		line = *(new linked_list<double>());
		for (int j = 0; j < size; j++)
		{
			cin >> tmp;
			line.insert(tmp);
		}
		matrix.insert(line);
	}

	cout << setprecision(1) << setw(6);
	cout << "matrix a:" << endl;
	print_matrix(matrix);
	cout << endl;

	double val= calc_matrix(matrix);
	printf("result = %f\n",val);
}



linked_list<linked_list<double>>  get_sub_matrix(linked_list<linked_list<double>> matrix, int l, int c)
{
	int i = 0, j = 0;
	linked_list<linked_list<double>> sub;
	for (matrix.mark(); matrix.hasData(); matrix.next())
	{
		j = 0;
		linked_list<double> line = matrix.get();
		
		if (i != l)
		{
			linked_list<double> subline;
			for (line.mark(); line.hasData(); line.next())
			{
				if (j != c)
				{
					subline.insert(line.get());
				}
				j++;
			}
			sub.insert(subline);
		}
		
		i++;
	}

	cout << "Submatrix:"<<endl;
	print_matrix(sub);

	return sub;
}
void print_matrix(linked_list<linked_list<double>> matrix)//指针的指针
{
	
	for (matrix.mark(); matrix.hasData(); matrix.next())
	{
		linked_list<double> line = matrix.get();
		
		for (line.mark(); line.hasData(); line.next())
		{
			printf("%6.1f\t", line.get());
		}
		cout << endl;
	}

}
double calc_matrix(linked_list<linked_list<double>> matrix) {
	double result = 0;
	if (matrix.getSize() == 1)
	{
		matrix.mark();
		return matrix.get().get();
	}
	else if (matrix.getSize() == 2)
	{
		return matrix.get(0).get(0) * matrix.get(1).get(1) - matrix.get(0).get(1) * matrix.get(1).get(0);
	}
	else
	{
		int i = 0, j = 0;
		double num;
		linked_list<double> line=matrix.get();
		for (line.mark(); line.hasData(); line.next())
		{
			num = line.get();
			double sub_val= calc_matrix(get_sub_matrix(*(new linked_list<linked_list<double>>(matrix)), i, j));
			result += num * sub_val*pow(-1,i+j);

			printf("DValue of the Submatrix is %6.1f\n", sub_val);

			j++;
		}
	}
	return result;
}
*/
