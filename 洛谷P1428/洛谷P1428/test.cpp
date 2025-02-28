#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int>w;
	int x;
	for (int i = 0;i<n;i++)
	{
		cin >> x;
		w.push_back(x);
	}
	int count = 0;
	for (int j = 0;j<n;j++)
	{
		count = 0;
		for (int h = 0;h<j;h++)
		{
			if (w[h]<w[j])
			{
				count++;
			}
		}
		
		cout << count<<' ';
	}
	return 0;
}