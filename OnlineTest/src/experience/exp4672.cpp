/*
9.1 ��Ͷ�������������
һ������һ�������Ƕȵ���CAngle���������������£�
(1)˽�г�Ա����value����ʾ�Ƕȣ�����Ϊdouble��
(2)���г�Ա����SetValue��ʵ�ֹ�����ʹ���β�Ϊvalue��ֵ�� ����Ϊ��void SetValue��double����
(3)���г�Ա����GetCos��ʵ�ֹ��ܼ�������ֵ������Ϊ����ֵ���ء� ����Ϊ double GetCos��void����
������д������ʵ�����¹��ܣ�����һ��CAngle��Ķ���deg�����ó�Ա���������û�����ĽǶ����ö���deg�Ƕȣ������ó�Ա�������㲢���deg������ֵ������ȡ3.1415��
���������������ɫ���û����룬����Ϊ���
����Ƕȣ�30
�Ƕȵ�����Ϊ0.866033*/

/*
#include <iostream>
//������Ҫ��ͷ�ļ�
#include<cmath>
using namespace std;
//��Ӵ��붨�峣��PI
const double PI = 3.1415;
//��Ӵ��붨����CAngle
class CAngle
{
private:
	double value;
public:
	void SetValue(double v)
	{
		value = v;
	};
	double GetCos(){
		value = value /180*PI;
		return cos(value);
	};
};

int main() {
	//��Ӵ��붨��һ��Cangle��Ķ���deg
	CAngle deg;
	//������ĳ������ʵ�λ�ò������ ���ó�Ա���������û�����ĽǶ����ö���deg�Ƕ�
	//�����ó�Ա�������㲢���deg�����ң�Ȼ������س�����

	cout << "����Ƕȣ�";
	double v;
	cin >> v;
	deg.SetValue(v);

	cout << "�Ƕȵ�����Ϊ";
	cout << deg.GetCos() << endl;
	return 0;
}*/