/*ʵ��9.2 ��Ͷ���Բ������ơ� Ϊ�˱�д����ͼ��Բ��Circle����Ҫ�ȱ�д����Point������д������������Щ�ࡣ
Point��������ݳ�Ա��������x����������y����Ա����������ȡ������꺯��Getx����ȡ�������꺯��GetY�����õ����꺯��Set����ӡ���磨1,1������Ϣ��print������
Circle������������ԣ�Բ��O��������ʵ�֣��Ͱ뾶R����Ա����������Բ��λ�û�ȡ����GetO���뾶��ȡ����GetR���뾶λ�����ú���SetR��Բ��λ���ƶ�����MoveTo�Լ�Բ����Ϣ��ӡ����Display�ȡ�

Ҫ��
1��Point���Circle�಻��ֱ�ӷ��ʳ�Ա������ֵ��ͨ��Get������ȡ��Ա������ֵ��
2�� ����Բ����ʱ����������İ뾶С�ڵ�����ʱ����ʾ������Ϣ������������������������뾶����Ϊ�㡣
3��ʹ��SetR��MoveTo����������ȷ���ó�Ա������ֵ�������ð뾶С�ڵ�����ʱ����ʾ������Ϣ������������������������ְ뾶ԭֵ���䡣
3�������ʽ��������������ͳ���ģ�壬��Ҫ�޸�ģ���е�cout���ĸ�ʽ��
4��ʹ����ȷ�ķ�������������0���бȽϡ�

�����������1��
Please input the x coordinate of the circle center:1
Please input the y coordinate of the circle center:2
Please input the radius of the circle:3
The center location is:(1,2)
The radius is:3
Please input the x coordinate of the circle center you want to modify:4
Please input the y coordinate of the circle center you want to modify:5
Please input the radius of the circle you want to modify:6
List circle information as follows:
The center is:(4,5)
The radius is:6

�����������2��
Please input the x coordinate of the circle center:1
Please input the y coordinate of the circle center:2
Please input the radius of the circle: 0
Error: The radius must be a float number over 0!
The center location is: (1,2)
The radius is: 0
Please input the x coordinate of the circle center you want to modify: 4
Please input the y coordinate of the circle center you want to modify: 5
Please input the radius of the circle you want to modify: -1
Error: The radius must be a float number over 0!
List circle information as follows:
The center is:(4,5)
The radius is:0

�����������3��
Please input the x coordinate of the circle center:1
Please input the y coordinate of the circle center:2
Please input the radius of the circle:3
The center location is:(1,2)
The radius is:3
Please input the x coordinate of the circle center you want to modify:4
Please input the y coordinate of the circle center you want to modify:5
Please input the radius of the circle you want to modify:-1
Error: The radius must be a float number over 0!
List circle information as follows:
The center is:(4,5)
The radius is:3*/

// ͷ�ļ�����
//#include<iostream>
//using namespace std;
//
//class Point {
//private:
//	//��Ӵ��붨�������x
////��Ӵ��붨��������y
//	float x = 0, y = 0;
//public:
//	Point(float,float);		//���캯�����β�Ϊ����ֵ
//
//	Point() {};		//Ĭ�Ϲ��캯�����޲���
//
//	float Getx();		//Get������ȡ����x
//
//	float Gety();		//Get������ȡ����y
//
//	void Set(float,float);		//Set��������������x������y
//
//	void Print();		//���������꣬��ʽΪ(1,1)���������
//};
////�˴���Ӵ���ʵ��Point�����Ա������ ����Point::Getx(){...} ��
//Point::Point(float tempx, float tempy)
//{
//	x = tempx;
//	y = tempy;
//}
//float Point::Getx()
//{
//	return Point::x;
//}
//float Point::Gety()
//{
//	return Point::y;
//}
//void Point::Set(float tempx,  float tempy)
//{
//	x = tempx;
//	y = tempy;
//}
//void Point::Print()
//{
//	cout << "(" << Point::x << "," << Point::y << ")" << endl;;
//}
//class Circle {
//private:
//	//��Ӵ��붨�������center������Ϊ������
////��Ӵ��붨��뾶radius
//	Point center;
//	float radius = 0;
//public:
//	Circle(Point p, float r)
//	{
//		this->center = p;
//		this->radius = r;
//		if (r < 1e-5)
//		{
//			cout << "Error:The radius must be a float number over 0! " << endl;
//			this->radius = 0;
//		}
//		
//	};		//���캯��������Ϊ�����p���뾶r�����������������
////����ʱ�����
////cout << "Error:The radius must be a float number over 0! " << endl;
//
//	/*�˴����巽������ֵ����*/Point GetO() {
//		//��ȡԲ�ķ���������Բ��point���print����
//		this->center.Print();
//		return center;
//	}
//
//	/*�˴����巽������ֵ����*/float GetR()
//	{
//		return radius;
//	};		//��ȡ�뾶������r
//
//	//�˴���Ӵ��붨���޸�Բ�ķ���
//	void MoveTo(Point p)
//	{
//		center = p;
//	}
////����ʱ���
////cout << "Error:The radius must be a float number over 0! " << endl;
//
//	//�˴���Ӵ��붨���޸İ뾶����
//	void setR(float r)
//	{
//		if (r < 1e-5)
//		{
//			cout << "Error:The radius must be a float number over 0! " << endl;
//		}else
//		this->radius = r;
//	}
//
//	void print() {
//		cout << "List circle information as follows:" << endl;
//		cout << "The center is:";
//		GetO();
//		cout << "The radius is:" << GetR() << endl;
//	}
//};
////�˴���Ӵ���ʵ��Point�����Ա����
//
//int main()
//{
//	//��Ӵ��붨���������x,����y,�뾶r
//	float x, y, r;
//	cout << "Please input the x coordinate of the circle center:";
//	//����x
//	cin >> x;
//	cout << "Please input the y coordinate of the circle center:";
//	//����y
//	cin >> y;
//	cout << "Please input the radius of the circle:";
//	//����r
//	cin >> r;
//
//	//��Ӵ������Point���Circle�๹�캯������ʵ����p��Բc
//	Point p(x, y); Circle c(p, r);
//	cout << "The center location is:" << "(" << p.Getx() << "," << p.Gety() << ")" << endl;
//	cout << "The radius is:" << c.GetR() << endl;
//
//	cout << "Please input the x coordinate of the circle center you want to modify:";
//	//����x
//	cin >> x;
//	cout << "Please input the y coordinate of the circle center you want to modify:";
//	//����y
//	cin >> y;
//	cout << "Please input the radius of the circle you want to modify:";
//	//����r
//	cin >> r;
//
//	//��Ӵ����޸�Բ��
//	c.MoveTo(*(new Point(x, y)));
//	//��Ӵ����޸İ뾶
//	c.setR(r);
//	c.print();			//���Բ��Ϣ
//
//	return 0;
//}