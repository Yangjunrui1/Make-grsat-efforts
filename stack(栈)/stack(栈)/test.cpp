#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	s.push(1);//压栈
	s.push(2);
	s.push(3);
	cout << s.top() << endl;//栈顶的元素
	s.pop();//出栈
	cout << s.top() << endl;
	cout << s.size() << endl;//获取栈的长度
	for(auto p)
	return 0;
}
