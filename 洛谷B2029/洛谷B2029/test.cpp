#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
double p = 3.14;
int main()
{
	double h, r;
	cin >> h >> r;
	int i = ceil(20000/(p * r * r * h));
	cout << i;
	return 0;
}