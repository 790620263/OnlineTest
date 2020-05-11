/*
�����¹�ʽ�ݹ�����������ʽ��ֵ��

**�����ʽҪ��"%d" "%lf"
��ʾ��Ϣ��"Please enter matrix size n(1<=n<20):"  "Please input matrix line by line:\n"  "matrix a:\n"
**�����ʽҪ��"Submatrix:\n"  "DValue of the Submatrix is %6.1f\n"  "%6.1f\t"  "result = %f\n"
�������н�����£�
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
		Node* tail = nullptr;//tailָ����һ��Ԫ��
	};
	Node root, * last = nullptr;
	int size = 0;
	Node* now = nullptr;

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
	void insert(const T* Array, int SIZE)
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
		while (now.index < size - 1)
		{
			i++;
			now = *now.tail;
			arr[i] = now.data;
		}

		return arr;
	}
	//��������
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
	//�ݼ�����
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


	//���²����������ƣ�nowΪ���Ķ�ȡλ��==========================
	//����δ��ȡ������
	bool hasData()
	{
		return now != nullptr && (*now).index < size;//now���ǿ�ָ�����±�δԽ��
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
		if (now == nullptr)now = root.tail;
		return (*now).data;
	}
	//���ϲ����������ƣ�nowΪ���Ķ�ȡλ��==========================
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
void print_matrix(linked_list<linked_list<double>> matrix)//ָ���ָ��
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
