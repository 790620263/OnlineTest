/*
#include<iostream>

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
	Node root, * last=nullptr;
	int size = 0;
	Node* now=nullptr;

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
	linked_list<T>(const T *Array,int SIZE) {
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
	void insert(const T *Array,int SIZE)
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
			Node *nowNode=&root,* newNode = new Node();
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
		while (now.index < size-1)
		{
			i++;
			now = *now.tail;
			arr[i] = now.data;
		}

		return arr;
	}
	//递增数组//
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
	//递减数组//
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
	

	//以下操作与流类似，now为流的读取位置==========================//
	//还有未读取的数据
	bool hasData()
	{
		return now!=nullptr&&(*now).index<size;//now不是空指针且下标未越界
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
		return (*now).data;
	}
	//以上操作与流类似，now为流的读取位置==========================//
};



*/



//int main()
//{
//	linked_list<int> list;
//	int intARR[3];
//	intARR[1] = 127;
//	//cout << list.isEmpty()<<endl;
//	list.insert(intARR,3);
//	//list.insert(3);
//	//list.insert(5);
//	//list.insert(7);
//	//list.insert(9);
//	//list.insert(4,11);
//	//cout << "SIZE=" << list.getSize() << endl;
//	//cout << list.get(5) << endl;
//	//cout << "SIZE=" << list.getSize() << endl;
//	//cout << list.poll(5) << endl;
//	std::cout <<"SIZE="<< list.getSize() <<std:: endl;
//	//cout << list.poll() << endl;
//	int size= list.getSize();
//	int *arr{ list.toArray() };
//	for (int i =0;i<size;i++)
//	{
//		std::cout<<i<<"\t" << arr[i]<<std::endl;
//	}
//	//for (list.mark() ;list.hasData();list.next())
//	//{
//	//	cout<<list.nowIndex()<<'\t'<< list.get()<<endl;
//	//}
//}
