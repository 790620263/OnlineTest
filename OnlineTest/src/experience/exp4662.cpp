/*
 二维数组 销售员销售额统计。用二维数组来解决此问题。公司有4位销售员（1到4），销售5种不同的商品（1到5），每位销售员每天都以表单的形式记录销售的产品。每份单据包含以下内容：
a)销售员代号
b)产品代号
c)产品的当天销售额
因此，每位销售员每天可能要记录0到5个单据，假定我们可以得到上个月里所有单据的信息，那么我们来编写程序，读入所有的信息，并计算每位销售员销售每件产品的总销售额。总和将存储在一个名为sales的二维数组中。在处理了上个月的所有信息后，将结果以表的形式打印出来，列代表产品，行代表销售员。列的和为每件产品的总销售额，行的和为每位销售员销售产品的总销售额。表单的打印输出应包含这些内容，在每行的右端计算此行的和，在每列的下端计算此列的和。

程序运行实例：
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
//	cout << fixed<<setprecision(2); //与setprecision连用，设置小数点后显示位数。
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
