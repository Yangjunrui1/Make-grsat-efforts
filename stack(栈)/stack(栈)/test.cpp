#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	s.push(1);//ѹջ
	s.push(2);
	s.push(3);
	cout << s.top() << endl;//ջ����Ԫ��
	s.pop();//��ջ
	cout << s.top() << endl;
	cout << s.size() << endl;//��ȡջ�ĳ���
	for(auto p)
	return 0;
}
