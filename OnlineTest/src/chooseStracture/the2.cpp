/**
 * ��дһ������������ݺ��·ݣ��жϸ����Ƿ������꣬�����ݸ������·��ж���ʲô���ں͸����ж����죿
 * �����������������ܱ�4���������ܱ�100�����������ܱ�400������
 * �涨3~5��Ϊ������6~8��Ϊ�ļ���9~11��Ϊ�＾��1��2��12��Ϊ��������
 **�����ʽҪ��"%d,%d" ��ʾ��Ϣ��"Please enter year,month:"
 **�����ʽҪ��"%d is leap year\n" "%d is not leap year\n" 
				"The season is spring\n" "The season is summer\n" "The season is autumn\n" "The season is winter\n" 
				"The number of days of this month is %d\n"
 ��������ʾ�����£�
 ʵ��1��
 Please enter year,month:2012,11
 2012 is leap year
 The season is autumn
 The number of days of this month is 30
 ʵ��2��
 Please enter year,month:2013,12
 2013 is not leap year
 The season is winter
 The number of days of this month is 31
 */


//#include <iostream>
//#include "stdio.h"
//using namespace std;
//int main()
//{
//	int year, month;
//	cout << "Please enter year,month:" ;
//	scanf_s("%d,%d", &year, &month);
////	scanf("%d%d", &year, &month);
//
//	//�ж�����
//	bool b =
//		((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0 ?
//		true : false;
//
//	//����
//	const char *season;
//	if (month > 0 && month < 13) {
//		if (month > 2 && month <= 5)
//		{
//			season = "spring";
//		}
//		else	if (month > 5 && month <= 8)
//		{
//			season = "summer";
//		}
//		else 	if (month > 8 && month <= 11)
//		{
//			season = "autumn";
//		}
//		else
//		{
//			season = "winter";
//		}
//	}
//	else
//	{
//		printf("ERROR\n");
//		return -1;
//	}
//
//	int day;
//	switch (month) {
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 2:
//		if (b)day = 29;
//		else
//			day = 28;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//		break;
//	default:
//		printf("ERROR\n");
//		return -1;
//	}
//
//
//	if (b) {
//		printf("%d is leap year\n",year);
//	} else {
//		printf("%d is not leap year\n",year);
//	}
//	printf("The season is %s \n", season);
//	printf("The number of days of this month is %d\n", day);
//}
