/*
ʵ��Ҫ�󣺱�д�ݹ麯��Legendre��n�����õ¶���ʽ��ֵ�����������и����û������x(ʵ��)��n(��Ȼ��)��ֵ�����ú�����Ⲣ���n�����õ¶���ʽ��ֵ��
n�����õ¶���ʽ�ĵݹ鹫ʽ���£�*/
//#include <iostream> 
//using namespace std;
////add function prototype declaration
//float Legendre(float x, int n);
//int main()
//{
//    float x = 0; int n = 0;
//    cout << "Please input x and n:";
//    cin >> x >> n;
//    //add statement to read in the values for x and n 
//    cout << "The result is "<</* add expression to call function*/Legendre(x,n)<<endl;
//    return 0;
//}
//float Legendre(float x, int n)
//{
//    //add statements to calculate Legendre polynomials
//    if (n == 0) return 1;
//    if (n == 1)return x;
//    if (n > 1) return ((2 * n - 1) *x* Legendre(x, n - 1) - (n - 1) * Legendre(x, n - 2)) / n;
//}