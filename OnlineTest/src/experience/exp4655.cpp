/*
ѭ�����ƽṹ��Ԥ�������ߡ�
����˵����ʹ�ñ�ǿ��Ƶ�ѭ��ʵ�ֵ�Ԥ��һ���˵������ɺ󣬳��������ʾ��Ϣ��"Do you want to continue(y(Y)|n(N))?" ���û� ����y��Y��ʾ����Ԥ����һ���˵���ߣ�����n��N��ʾ�����ټ���ִ�У�����ִ�н��������ַ����� replay ������û�������ַ� y|Y �� n|N ��
Ԥ��һ������ߵ�Ҫ�����£�ע����ǰ��Ԥ��һ������ߵ���ĿҪ��ͬ����
ÿ������ĸ�Ķ������Լ����ӳ��˺����ߣ����й���������֪ʶ������ͳ�Ʒ���������Ӱ��С�����˺����ߵ����ذ����Ŵ�����ʳϰ�������������ȡ�С�����˺��������丸ĸ����ߺ�������Ա�������ء�
��faHeightΪ�丸��ߣ�moHeightΪ��ĸ��ߣ�yourHeightΪ��������ߡ��������Ԥ�⹫ʽΪ��
���Գ���ʱ�������yourHeight= (faHeight+moHeight) �� 0.54cm
Ů�Գ���ʱ�������yourHeight= (faHeight�� 0.923 +moHeight)/2cm
���⣬���ֻϲ��������������ô�ڻ�������Ͽ��������2%��
���ֻ�����õ�������ʳϰ�ߣ���ô�ڻ�������Ͽ��������1.5%��
�����ϲ�����������������˵�������ʳϰ�ߣ���ô�ڻ�������Ͽ��������3.5%��
Ҫ��
1����̴Ӽ��������û����Ա������ַ�F��f��ʾŮ�ԣ������ַ�M��m��ʾ���ԣ�
2����ĸ��ߵ�λ�����ף���
3���Ƿ�ϲ�����������������ַ�Y��y��ʾϲ���������ַ�N��n��ʾ��ϲ����
4���Ƿ������õ���ʳϰ�ߵ������������ַ�Y��y��ʾ���ã������ַ�N��n��ʾ���á�
�����ø�����ʽ�����Ԥ�ⷽ������߽���Ԥ�⣬����������ʽ���Ԥ����ߡ�
�������н�����£�
Input your gender(m|f|M|F):f�L
Input your father's height(cm):174�L
Input your mother's height(cm):156�L
Do you like sports?(y|n|Y|N):y�L
Do you have good diet?(y|n|Y|N):n�L
Your Height will be:161
Do you want to continue?(y(Y)|n(N)):y�L
Input your gender(m|f|M|F):f�L
Input your father's height(cm):174�L
Input your mother's height(cm):156�L
Do you like sports?(y|n|Y|N):y�L
Do you have good diet?(y|n|Y|N):n�L
Your Height will be:161
Do you want to continue?(y(Y)|n(N)):n�L
over!*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    float faHeight, moHeight, yourHeight;//��ʾ������ܻ���Ҫ����������������㣬Ҳ����������Ʊ�������
//    char gender, likeSport, goodDiet;
//    int flag = 1;
//    while (flag == 1) {
//        cout << "Input your gender(m|f|M|F):";
//        cin >> gender;
//        cout << "Input your father's height(cm):";
//        cin >> faHeight;
//        cout << "Input your mother's height(cm):";
//        cin >> moHeight;
//
//        //�����Ա����������
//        if (gender == 'm' || gender == 'M')
//        {
//            //�ڴ��������������ߵĴ���
//            yourHeight = (faHeight + moHeight) * 0.54;
//        }
//        else
//        {
//            //�ڴ��������Ů����ߵĴ���
//            yourHeight = (faHeight * 0.923 + moHeight) / 2;
//        }
//
//        //�����Ƿ�ϲ���˶��������
//        cout << "Do you like sports?(y|n|Y|N):";
//        cin >> likeSport;
//        //�����Ƿ������õ���ʳϰ�߼������
//        cout << "Do you have good diet?(y|n|Y|N):";
//        cin >> goodDiet;
//        if (likeSport == 'y' || likeSport == 'Y')
//        {
//            if (goodDiet == 'y' || goodDiet == 'Y')
//            {
//                yourHeight *= 1.035;
//            }
//            else {
//                yourHeight *= 1.02;
//            }
//        }
//        else
//        {
//            if (goodDiet == 'y' || goodDiet == 'Y')
//            {
//                yourHeight *= 1.015;
//            }
//        }
//
//        
//
//        cout << "Your Height will be:" << int(yourHeight) << endl;
//        cout << "Do you want to continue?(y(Y)|n(N)):";
//        //to do
//        char isConn;
//        cin >> isConn;
//        if (isConn=='n'||isConn=='N') {
//            //to do
//            cout << "over!" << endl;
//            break;
//        }
//    }
//    return 0;
//}