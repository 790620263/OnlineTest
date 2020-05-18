#include<cstring>
#include<string>
using namespace std;
#pragma warning(disable : 4996)
int find_count(char *str,char *tag)
{
	char* p = nullptr;
	char* tmp;
	int count=0;
	while (*str != '\0')
	{
		tmp = strstr(str, tag);
		if (tmp == NULL)
			break;
		if (tmp != p)
		{
			count++;
			p = tmp;
		}
		str++;
	}
	return count;
}
int main()
{
	char *str=new char[100];
	char* tag= new char[10];

	strcpy(str, (*new string("abc abc abv abc")).c_str());
		strcpy(tag, (*new string("abc")).c_str());
	printf("%d", find_count(str, tag));
}