#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>//创建数组
using namespace std;
void c(int a)
{
	a++;
}
int main()
{
	int a = 0;
	c(a);
	cout << a;
	vector<int> v;
	v.resize(10);//赋值为0
	for (int i = 0; i < 10; i++)
		v[i] = i;
	v.push_back(11);
	for (int i = 0; i < 11; i++)
		cout << v[i] << endl;
	vector<int> d(10, 2);
	for (auto P = v.begin(); P != v.end(); P++)
		cout << *P << endl;
	return 0;
}