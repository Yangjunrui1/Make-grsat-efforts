#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int x, int y)//�Ӵ�С����
{
	return x > y;
}
int main()
{
	vector<int>m(10);
	for (int i = 9; i > 0; i--)
		m[i] = i;
	m.push_back(-1);
	sort(m.begin(), m.end(),cmp);
	for (auto p = m.begin(); p != m.end(); p++)
		cout << *p << " ";
	return 0;
}