#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<double>score;
	double min = 999;
	double max = -999;
	double tmp;
	for (int i = 0;i<n;i++)
	{
		cin >> tmp;
		if (tmp <min)
		{
			min = tmp;
		}
		if (tmp>max)
		{
			max = tmp;
		}
		score.push_back(tmp);
	}
	
	double sum =0;
	vector<double>::iterator it;
	for (it = score.begin();it!=score.end();it++)
	{
		sum += *it;
	}
	sum = sum - (min + max);
	double i = sum/(n-2)*1.0;
	cout << setprecision(2) << fixed << i;
	return 0;
}