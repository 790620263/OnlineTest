/*
 ��ά���� ����Ա���۶�ͳ�ơ��ö�ά��������������⡣��˾��4λ����Ա��1��4��������5�ֲ�ͬ����Ʒ��1��5����ÿλ����Աÿ�춼�Ա�����ʽ��¼���۵Ĳ�Ʒ��ÿ�ݵ��ݰ����������ݣ�
a)����Ա����
b)��Ʒ����
c)��Ʒ�ĵ������۶�
��ˣ�ÿλ����Աÿ�����Ҫ��¼0��5�����ݣ��ٶ����ǿ��Եõ��ϸ��������е��ݵ���Ϣ����ô��������д���򣬶������е���Ϣ��������ÿλ����Ա����ÿ����Ʒ�������۶�ܺͽ��洢��һ����Ϊsales�Ķ�ά�����С��ڴ������ϸ��µ�������Ϣ�󣬽�����Ա����ʽ��ӡ�������д����Ʒ���д�������Ա���еĺ�Ϊÿ����Ʒ�������۶�еĺ�Ϊÿλ����Ա���۲�Ʒ�������۶���Ĵ�ӡ���Ӧ������Щ���ݣ���ÿ�е��Ҷ˼�����еĺͣ���ÿ�е��¶˼�����еĺ͡�

��������ʵ����
Enter the sales person (1-4),product number (1-5)
and total sales.Enter -1 for the sales person to end input.
4 2 2.85
1 2 5.7
1 4 9.9
1 3 6
2 2 2.85
3 1 18
4 1 16
1 4 9.5
-1

The total sales for each sales person are displayed
at the end of each row, and the total sales for each
product are displayed at the bottom of each column.
         1         2         3         4         5      Total
1      0.00      5.70      6.00     19.40      0.00     31.10
2      0.00      2.85      0.00      0.00      0.00      2.85
3     18.00      0.00      0.00      0.00      0.00     18.00
4     16.00      2.85      0.00      0.00      0.00     18.85

Total 34.00     11.40      6.00     19.40      0.00*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	const int PEOPLE = 5, PRODUCTS = 6;
//	/* wirte the declaration for array sales here */
//	double value, totalSales=0, productSales[PRODUCTS] = { 0.0 };
//	int salesPerson, product;
//
//	double sales[PEOPLE][PRODUCTS] = { 0.0 };
//
//	cout << "Enter the sales person (1-4), "
//		<< "product number (1-5)\nand total sales."
//		<< "Enter -1 for the sales person to end input.\n";
//	cin >> salesPerson;
//
//	while (salesPerson != -1) {
//		cin >> product >> value;
//		/* write a statement that adds values to the sales array */
//		sales[salesPerson][product] += value;
//		cin >> salesPerson;
//	}
//
//	// table header: describes output and prints
//	// column header (product numbers 1-5)
//	cout << endl
//		<< "The total sales for each sales person are displayed" << endl
//		<< "at the end of each row," << "and the total sales for each" << endl
//		<< "product are displayed at the bottom of each column." << endl
//		<< setw(10) << 1 << setw(10) << 2 << setw(10) << 3 << setw(10)
//		<< 4 << setw(10) << 5 << setw(11) << "Total" << endl;
//	cout << fixed<<setprecision(2); //��setprecision���ã�����С�������ʾλ����
//
//  // nested loop structure: prints salesperson number
//  // followed by the amounts sold for each product
//	for (int i = 1; /* write condition here */i<PEOPLE; ++i) {
//		totalSales = 0.0;
//		// this prints salesperson number
//		cout << i;
//
//		// inner loop: prints amounts sold for each product
//		for (int j = 1; /* write condition here */j<PRODUCTS; ++j) {
//			/* write a statement that adds the current sales
//				element to totalSales */
//			totalSales += sales[i][j];
//				// print sales for each salesperson for each product
//			cout << setw(10) << setprecision(2)
//				<< sales[i][j];
//
//			/* write a statement that adds the current sales
//				element to productSales */
//			productSales[j] += sales[i][j];
//		}
//
//		//print the last column item (total sales of each
//		// product). The totalSales value is 9.99 under
//		// 'Total' in the output box. After this value is
//		// printed, the next table line can be created
//		cout << setw(10) << setprecision(2)
//			<< totalSales << endl;
//	}
//
//	// this is the header for the last row
//	cout << "\nTotal" << setw(6) << setprecision(2)
//		<< productSales[1];
//
//	// this prints the last row which displays the total sales
//	// for each product
//	for (int j = 2; j < PRODUCTS; ++j)
//		cout << setw(10) << setprecision(2)
//		<< productSales[j];
//
//	cout << endl;
//	return 0;
//}
