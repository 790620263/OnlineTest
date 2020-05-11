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
		Node* tail = nullptr;//tailָ����һ��Ԫ��
	};
	Node root, * last=nullptr;
	int size = 0;
	Node* now=nullptr;

	void quickSort(T* a, int left, int right, bool minTomax)
	{

		if (minTomax)
		{//��С��������
			if (left > right)return;

			int l = left, r = right;
			T base = a[left], temp;
			//ʹl����������  <  r�����Ҳ����
			while (r > l)
			{
				//�ҵ���baseС����ͣ	
				while (r > l && a[r] >= base)// >=��֤��׼�����ƶ�
				{
					r--;
				}
				while (r > l && a[l] <= base)
				{
					l++;
				}
				//����a[l],a[r]
				temp = a[r];
				a[r] = a[l];
				a[l] = temp;
			}
			//��׼a[left]��λ,��ʱl��������<=al���Ҳ������>=al����alΪ��λ����
			a[left] = a[l];
			a[l] = base;

			quickSort(a, left, l - 1, minTomax);
			quickSort(a, l + 1, right, minTomax);
		}
		else
		{//�Ӵ�С
			if (left > right)return;
			int l = left, r = right;
			T base = a[left], temp;

			while (r > l)
			{
				//�ҵ���base�����ͣ	
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
		//����ȫ����
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
	//��ĩβ����
	void insert(const T data)
	{
		Node* newNodePtr = new Node();//����new������ֲ���������������ǰ�ĵ�ַ
		(*newNodePtr).data = data;
		(*newNodePtr).index = size;

		if (size == 0)
		{
			last = newNodePtr;
			root.tail = newNodePtr;
		}
		else {
			(*last).tail = newNodePtr;//ʹ��size-1��Ԫ�ص�ָ��ָ�����Ԫ��
			last = newNodePtr;
		}


		size++;
	}
	//��������
	void insert(const T *Array,int SIZE)
	{
		for (int i = 0; i < SIZE; i++)
		{
			insert(Array[i]);
		}
	}
	//���±�ΪindexԪ�غ������Ԫ��
	void insert(int index, const T data)
	{
		if (index > size - 1 || index < 0)//Խ��
			return;
		else if (index == size - 1)//��β����
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
			
			//�½ڵ��Ժ�Ľڵ�indexȫ����һ
			nowNode = newNode;
			while ((*nowNode).tail != nullptr)
			{
				nowNode = (*nowNode).tail;
				(*nowNode).index++;
			} 

			size++;
		}
	}
	//ȡ��(��ò�ɾ������һ��Ԫ��
	T poll(int index)
	{
		if (index > size - 1 || index < 0)//Խ��
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

			//��ʱpreIndexPtrָ���±�Ϊindex-1Ԫ��
			T toReturn = (*(*preIndexPtr).tail).data;

			//ɾ����index��Ԫ��
			(*preIndexPtr).tail = (*(*preIndexPtr).tail).tail;
			size--;

			return toReturn;
		}
	}
	//����±�Ϊindex��Ԫ��
	T get(int index)
	{
		Node now = *(root.tail);
		while (now.index < index)
		{
			now = *now.tail;
		}
		return now.data;
	}
	//�����±�Ϊindex��Ԫ��Ϊ
	void set(int index, T data)
	{
		Node now = *(root.tail);
		while (now.index < index)
		{
			now = *now.tail;
		}
		(*now).data = data;
	}
	//�������飺��������SIZE���Է��������С
	T* toArray(int& SIZE)
	{
		SIZE = size;
		return toArray();
	}
	T* toArray()
	{
		
		T* arr = new T[size];
		int i = 0;
		
		//����ȫ����
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
	//��������//
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
	//�ݼ�����//
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
	

	//���²����������ƣ�nowΪ���Ķ�ȡλ��==========================//
	//����δ��ȡ������
	bool hasData()
	{
		return now!=nullptr&&(*now).index<size;//now���ǿ�ָ�����±�δԽ��
	}
	//�����Ķ�ȡλ����Ϊindex
	void mark(int index)
	{
		mark();
		while ((*now).index < index)
		{
			now = (*now).tail;
		}
	}
	//�����Ķ�ȡλ����Ϊ0����ͷ��ȡ��
	void mark()
	{
		now = root.tail;
	}
	//�������Ķ�ȡλ��
	int nowIndex()
	{
		return (*now).index;
	}
	//׼������һ������
	void next()
	{
		now = (*now).tail;
	}
	//��ö�ȡλ�õ�����
	T get()
	{
		return (*now).data;
	}
	//���ϲ����������ƣ�nowΪ���Ķ�ȡλ��==========================//
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
