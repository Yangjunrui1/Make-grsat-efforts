#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	auto a = 10;//�Զ�������������,�����ʼ��
	auto v = 'd';
	int s[] = { 10,2,2,2,2,3,3,4,5,6 };
	for (int i: s)
	{
		cout << i << endl;
	}
	string d = to_string(122.4);// ����ֵת��Ϊ�ַ�
	printf("%s",d.c_str());//ʹ��printf�ĸ�ʽ
	int b = stoi("122");
	double w = stod("3.333");
	cout << b <<endl<< w << endl;
	return 0;
}