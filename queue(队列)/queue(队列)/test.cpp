#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>s;
	for (int i = 1; i < 11; i++)
		s.push(i);//进队列
	s.pop();//出队列
	cout << s.front() << endl;//访问队首
	cout << s.back() << endl;//访问队尾
	cout << s.size() << endl;
	return 0;
}