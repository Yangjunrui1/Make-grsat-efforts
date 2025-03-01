//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100005;
//int a[N];
//deque<int>q;//队列中的数据实际上是元素在原序列中的位置
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0;i<n;i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1;i<=n;i++)
//	{
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int a[N];
deque<int>q;//队列中的数据实际上元素在原序列中的位置
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1 ;i<=n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++)//输出最小值
	{
		while(!q.empty()&&a[q.back()]>a[i] )//去尾q,empty 判断是否为空    /当其队列 不空并且新进入的值小于队尾的值时候将队尾删除
		{
			q.pop_back();
		}
		q.push_back(i);
		if (i>=m)//  
		{
			while (!q.empty()&&q.front()<i-m)//不空而且
			{
				cout << a[q.front()];
			}
		}
		
	}
	cout << endl;
	while (!q.empty())
	{
		q.pop_front();
	}
	for (int i = 1; i <= n; i++)//输出最大值
	{
		while (!q.empty() && a[q.back()] < a[i])//去尾q,empty 判断是否为空
		{
			q.pop_back();
		}
		q.push_back(i);
		if (i >= m)//  
		{
			while (!q.empty() && q.front() < i - m)
			{
				cout << a[q.front()];
			}
		}

	}
	return 0;
}