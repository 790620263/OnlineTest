/*
����ѭ����������������һ��C++��������ȷ���ٻ��̵�Ķ�λ�˿��Ƿ��Ѿ��������ÿ���͸֧��ȡ�����ÿλ�˿ͣ�����������Ϣ��
a)���ÿ����˺ţ�����������
b)�³���beginning credits����
c)�����ڸù˿͹�����Ʒ�Ľ�total charges����
d)�����ڹ˿��˻��еĴ�total credits����
e)������Ŵ���ȡ�
�����û�����������Ϣ�������µĲ��(= beginning credits + total charges - total credits����ȷ���µĲ���Ƿ񳬹��˹˿͵��Ŵ���ȡ�
���ڳ����Ŵ���ȵĹ˿ͣ�����Ӧ��ʾ�˿͵��˺ţ����ö�ȣ��µĲ�ע�Ᵽ����λС�����������Ϣ��Credit limit exceeded.����
�ڳ����У�ѧ����ʵ���Զ����µ����󾫵ĳ�����Ʒ������ڱ��֮ǰ������ʹ��α�����������Զ����µ����󾫵��㷨��ơ�
�������ʵ����
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
//			cout << "Credit limit:\t" << fixed << showpoint << setprecision(2) << limit << endl;   //С����������ʾ��λС�������㲹0.
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