#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>s;
	for (int i = 1; i < 11; i++)
		s.push(i);//������
	s.pop();//������
	cout << s.front() << endl;//���ʶ���
	cout << s.back() << endl;//���ʶ�β
	cout << s.size() << endl;
	return 0;
}