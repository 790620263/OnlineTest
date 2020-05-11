/*
条件循环。问题描述开发一段C++程序，用以确定百货商店的多位顾客是否已经超出信用卡的透支额度。对于每位顾客，输入以下信息：
a)信用卡的账号（整型数）；
b)月初差额（beginning credits）；
c)本月内该顾客购买商品的金额（total charges）；
d)本月内顾客账户中的存款（total credits）；
e)允许的信贷额度。
根据用户输入以上信息，计算新的差额(= beginning credits + total charges - total credits）并确定新的差额是否超过了顾客的信贷额度。
对于超出信贷额度的顾客，程序应显示顾客的账号，信用额度，新的差额，注意保留两位小数，并输出信息“Credit limit exceeded.”。
在程序中，学生可实践自顶向下的逐步求精的程序设计方法。在编程之前，可以使用伪代码来进行自顶向下的逐步求精的算法设计。
输入输出实例：
Enter account number (-1 to end):100
Enter beginning balance:5394.78
Enter total charges:1000.00
Enter total credits:500.00
Enter credit limit:5500.00
Account:            100
Credit limit:     5500.00
Balance:            5894.78
Credit Limit Exceeded.

Enter account number (-1 to end):200
Enter beginning balance:1000.00
Enter total charges:123.45
Enter total credits:321.00
Enter credit limit:1500.00

Enter account number(-1 to end):300
Enter beginning balance:500.00
Enter total charges:274.73
Enter total credits:100.00
Enter credit limit:800.00
Enter account number(-1 to end):-1
*/
//#include <iostream>
//#include <iomanip>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	int accountNumber;
//	double balance, charges, credits, limit;
//
//	cout << "Enter account number (-1 to end):";
//	cin >> accountNumber;
//	/* write code to read the customer's account number here */
//	/* begin loop here */ while(accountNumber!=-1){
//		cout <<  "Enter beginning balance:";
//		cin >> balance;
//		cout << "Enter total charges:";
//		cin >> charges;
//		cout <<  "Enter total credits:";
//		cin >> credits;
//		cout <<  "Enter credit limit:";
//		cin >> limit;
//
//		
//		/* prompt and read the customer's balance here */
//		/* prompt and read the customer's charges here */
//		/* prompt and read the customer's credits here */
//		/* prompt and read the customer's credit limit here */
//		/* calculate the new customer's balance here */
//		double new_balance = balance + charges - credits;
//		/* determine if customer's credit limit is exceeded */
//		/* if customer's limit is exceeded print message */
//		/* your print message
//		e.g. */
//		
//		if (new_balance>limit) {
//			cout << "Account:\t" << accountNumber << endl;
//			cout << "Credit limit:\t" << fixed << showpoint << setprecision(2) << limit << endl;   //小数点后必须显示两位小数，不足补0.
//			cout << "Balance:\t" << fixed << showpoint << setprecision(2) << new_balance << endl;
//			cout << "Credit Limit Exceeded.";
//		}
//		/* to add other code  her if needed */
//		cout << "\nEnter account number (-1 to end):";
//		cin >> accountNumber;
//		/* write code to read the customer's account number here */
//	}	// end while loop
//
//	cout << endl; //ensure all output is displayed
//	return 0;
//}