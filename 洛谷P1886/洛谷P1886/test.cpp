//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100005;
//int a[N];
//deque<int>q;//�����е�����ʵ������Ԫ����ԭ�����е�λ��
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
deque<int>q;//�����е�����ʵ����Ԫ����ԭ�����е�λ��
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1 ;i<=n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++)//�����Сֵ
	{
		while(!q.empty()&&a[q.back()]>a[i] )//ȥβq,empty �ж��Ƿ�Ϊ��    /������� ���ղ����½����ֵС�ڶ�β��ֵʱ�򽫶�βɾ��
		{
			q.pop_back();
		}
		q.push_back(i);
		if (i>=m)//  
		{
			while (!q.empty()&&q.front()<i-m)//���ն���
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
	for (int i = 1; i <= n; i++)//������ֵ
	{
		while (!q.empty() && a[q.back()] < a[i])//ȥβq,empty �ж��Ƿ�Ϊ��
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