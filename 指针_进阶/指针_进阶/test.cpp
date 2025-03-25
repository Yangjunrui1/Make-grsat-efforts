#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define M 8
float max(float a[], int n) {
	int k;
	float x;
	x = a[0];
	for (k = 0; k < n; k++) {
		if (x < a[k])
			x = a[k];
	}
	return x;
}
int main() {
	float sumf, sump;
	float a[M] = { 2,6,2,8,1,34,23,33 };
	float (*p)(float a[], int n);
	p = max;
	sumf = (*p)(a, M);
	cout << sumf;
	return 0;
}