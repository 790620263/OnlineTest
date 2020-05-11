/*
利用矩阵相乘公式，编程计算M*N阶矩阵和N*M阶矩阵B之积C(M*M阶矩阵)。
要求：
1.输入输出格式形如：
Input 3*4 matrix a:(输出)
a[0,0]:(输出)11（输入）
a[0,1]:2
...
a[2,2]:7
a[2,3]:9
Input 4*3 matrix b:(输出)
b[0,0]:23(输入)
b[0,1]:21
...
b[3,1]:7
b[3,2]:54
Results:(输出)
  1643  2063  1063(整数输出6位)
  4144  5205  5394
  1014  1106  1923

2.用宏定义形式分别定义M、N的值为3、4。
3.函数原型分别定义成：
void MultiplyMatrix(int a[M][N], int b[N][M], int c[M][M]);// 函数功能：计算矩阵相乘之积，结果存于二维数组c中 //
void InputMatrixA(int a[M][N]);// 函数功能：输入矩阵a中的元素 //
void InputMatrixB(int b[N][M]);// 函数功能：输入矩阵b中的元素 //
void OutputMatrix(int a[M][M]);// 函数功能：输出矩阵a中的元素 //
4.主函数定义成：
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
//	//遍历结果矩阵
//	for (int i = 0; i < aRow; i++)
//	{
//		
//		for (int j = 0; j < bCol; j++)
//		{
//			T item=0;
//			//b的一列
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
//	//遍历结果矩阵
//	for (int i = 0; i < aRow; i++)
//	{
//
//		for (int j = 0; j < bCol; j++)
//		{
//			int item = 0;
//			//b的一列
//			for (int k = 0; k < aCol; k++)
//			{
//				item += a[i][j] * b[j][k];
//			}
//			c[i][j] = item;
//		}
//	}
//}
//void InputMatrixA(int a[M][N])// 函数功能：输入矩阵a中的元素 //
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
//void InputMatrixB(int b[N][M])// 函数功能：输入矩阵b中的元素 //
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
//void OutputMatrix(int c[M][M])// 函数功能：输出矩阵a中的元素 //
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
