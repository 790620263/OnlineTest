/*
���þ�����˹�ʽ����̼���M*N�׾����N*M�׾���B֮��C(M*M�׾���)��
Ҫ��
1.���������ʽ���磺
Input 3*4 matrix a:(���)
a[0,0]:(���)11�����룩
a[0,1]:2
...
a[2,2]:7
a[2,3]:9
Input 4*3 matrix b:(���)
b[0,0]:23(����)
b[0,1]:21
...
b[3,1]:7
b[3,2]:54
Results:(���)
  1643  2063  1063(�������6λ)
  4144  5205  5394
  1014  1106  1923

2.�ú궨����ʽ�ֱ���M��N��ֵΪ3��4��
3.����ԭ�ͷֱ���ɣ�
void MultiplyMatrix(int a[M][N], int b[N][M], int c[M][M]);// �������ܣ�����������֮����������ڶ�ά����c�� //
void InputMatrixA(int a[M][N]);// �������ܣ��������a�е�Ԫ�� //
void InputMatrixB(int b[N][M]);// �������ܣ��������b�е�Ԫ�� //
void OutputMatrix(int a[M][M]);// �������ܣ��������a�е�Ԫ�� //
4.����������ɣ�
int main()
{
	int a[M][N], b[N][M], c[M][M];
	InputMatrixA(a);
	InputMatrixB(b);
	MultiplyMatrix(a, b, c);
	OutputMatrix(c);
	return 0;
}*/
//#include<iostream>
//using namespace std;
//#define M 3
//#define N 4
//template <typename T>
//void MultiplyMatrix(T *a, T* b, T* c,int aRow,int aCol,int bCol)
//{
//	int size = sizeof(T);
//	int bRow = aCol;
//	//�����������
//	for (int i = 0; i < aRow; i++)
//	{
//		
//		for (int j = 0; j < bCol; j++)
//		{
//			T item=0;
//			//b��һ��
//			for (int k = 0; k < aCol; k++)
//			{
//				//item += a[i][j] * b[j][k];
//				item += a[(i*aCol+j)*size] * b[(j*bCol+k)*size];
//			}
//			c[(i*aCol+j)*size] = item;
//		}
//	}
//}
//void MultiplyMatrix(int a[M][N], int b[N][M], int c[M][M])
//{
//	//int m = M, n = N;
//	//MultiplyMatrix(&a[0][0], &b[0][0], &c[0][0],m,n,m);
//	int aCol=N,aRow=M, bRow = aCol,bCol=M;
//	//�����������
//	for (int i = 0; i < aRow; i++)
//	{
//
//		for (int j = 0; j < bCol; j++)
//		{
//			int item = 0;
//			//b��һ��
//			for (int k = 0; k < aCol; k++)
//			{
//				item += a[i][j] * b[j][k];
//			}
//			c[i][j] = item;
//		}
//	}
//}
//void InputMatrixA(int a[M][N])// �������ܣ��������a�е�Ԫ�� //
//{
//	cout << "Input 3*4 matrix a:"<<endl;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << "a[" << i << "," << j << "]:";
//			cin >> a[i][j];
//			//cout << endl;
//		}
//	}
//}
//void InputMatrixB(int b[N][M])// �������ܣ��������b�е�Ԫ�� //
//{
//	cout << "Input 4*3 matrix b:" << endl;;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cout << "b[" << i << "," << j << "]:";
//			cin >> b[i][j];
//			//cout << endl;
//		}
//	}
//}
//void OutputMatrix(int c[M][M])// �������ܣ��������a�е�Ԫ�� //
//{
//	cout << "Results:" << endl;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cout << "\t" << c[i][i];
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int a[M][N], b[N][M], c[M][M];
//	InputMatrixA(a);
//	InputMatrixB(b);
//	MultiplyMatrix(a, b, c);
//	OutputMatrix(c);
//	return 0;
//}
