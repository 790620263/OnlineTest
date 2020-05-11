/*
实验要求：编写递归函数Legendre求n阶勒让德多项式的值，在主程序中根据用户输入的x(实数)和n(自然数)的值，调用函数求解并输出n阶勒让德多项式的值。
n阶勒让德多项式的递归公式如下：*/
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