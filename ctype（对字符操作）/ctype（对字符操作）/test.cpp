#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char c = 'A';
	cout << "isalpha:" << isalpha(c) << endl;//�ж��Ƿ�����ĸ
	cout << "islower:" << islower(c) << endl;//�Ƿ�ΪСд��ĸ
	cout << "isupper:" << isupper(c) << endl;
	cout << "isalnum:" << isalnum(c) << endl;
	cout << "isspace:" << isspace(c) << endl;
	char s1 = tolower(c);
	cout << s1 << endl;
	char s = toupper(s1);
	cout << s << endl;

	return 0;
}
