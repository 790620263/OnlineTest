#include<string>
#include<iostream>
#include<cstring>
void ��дתСд(const string &s) {
	//�˷���SSE��������ʶ��
	//string lower_str(s);
	//transform(lower_str.begin(), lower_str.end(), lower_str.begin(), tolower);

	//�˷���SSE��������ͷ�ļ���cstring)
	char* str = (char*)s.data();
	return string(_strlwr(str));
};
void �ַ���������(string str) {
	string::reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{
		char& c = (*it);
		//TODO
		it++;
	}
};
void �����()
{
	//ctime���time()����1970����ĺ�����
	//srand(long l)��ʼ�����������
	srand(time(NULL));
	//rand�õ�cstdlib��
	int rndNum = rand();//����һ��0-32767������
}
void ����һ����СԤ�Ȳ�ȷ��������(int size)
{
	int* arr = new arr[size];
}