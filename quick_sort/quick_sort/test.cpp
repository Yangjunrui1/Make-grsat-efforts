#include<bits/stdc++.h>
using namespace std;
#define N 10000
int q[N];
void quick_sort(int q[], int left, int right) {
	if (left >= right) {
		return;
	}
	int x = q[left+(right-left)/2], i = left-1, j = right + 1;//q[left]作为基准元素
	while (i < j) {
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j)swap(q[i], q[j]);
	}
	quick_sort(q, left, j);
	quick_sort(q, j + 1, right);
}
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	for (int i = 0; i < n; i++) {
		cout << q[i] << " ";
	}
	cout << endl;
	quick_sort(q, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << q[i] <<" ";
	}
	return 0;
}