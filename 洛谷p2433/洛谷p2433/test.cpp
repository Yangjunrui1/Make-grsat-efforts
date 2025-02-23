#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int  main() 
{
	double m, t, s;
	cin >> m >> t >> s;
	int d = m * t;
	if (d >= s)
	{
		cout << ceil(m - (s / t));
	}
	else
	{
		cout << 0;
	}
	return 0;
}