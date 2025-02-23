#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int a, b,c;
	cin >> a >> b >> c;
	cout << int(a * 0.2 + b * 0.3 + c * 0.5);
	return 0;


	/*double a = 1.9;
	double b, c;
	cin >> b >> c;
	int d;
	d = ((b + (c / 10))/1.9);
	cout << d;
	return 0;*/
}/*int a, b, c, d;
	cin >> a >> b >> c >> d;
	a = c - a;
	b = d - b;
	if(b<0)
	{
		b += 60;
		a--;
	}
	cout << a << " " << b;*/