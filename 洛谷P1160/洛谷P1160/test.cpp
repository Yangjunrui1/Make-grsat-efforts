#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
list<int>::iterator it[10005];
int Hash[10009] = { 0 };
int main()
{
	list<int>node;
	int n;
	cin >> n;
	node.push_front(1);
	it[1] = node.begin();
	int k, p;//�����λ�����p == 0 ����k�����==1���������
	for (int i = 2; i <= n; i++)
	{
		cin >> k >> p;
		if (p == 0)
		{
			it[i] = node.insert(it[k], i);
		}
		else
		{
			if (it[k] == node.end())
			{
				node.push_back(i);
				it[i] = node.end();
			}
			else
			{
				it[i] = node.insert(++it[k], i);
			}
		}
	}
	int m,x;
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> x;
		if (Hash[x] == 1)
			continue;
		Hash[x] = 1;
		node.erase(it[x]);
	}
	list<int>::iterator w;
	for (w = node.begin(); w != node.end(); w++)
	{
		cout << *w << " ";
	}
	return 0;
}