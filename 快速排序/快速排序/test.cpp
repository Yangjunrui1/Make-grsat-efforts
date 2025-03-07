//#include <stdio.h>
//#include <stdlib.h>
//#define N 10
//// 快速排序函数
//void QuickSort(int* arr, int low, int high) {
//	if (low < high) {
//		int i = low, j = high;
//		int key = arr[low];
//		while (i < j) {
//			while (i < j && arr[j] >= key) {
//				j--;
//			}
//			if (i < j) {
//				arr[i++] = arr[j];
//			}
//			while (i < j && arr[i] < key) {
//				i++;
//			}
//			if (i < j) {
//				arr[j--] = arr[i];
//			}
//		}
//		arr[i] = key;
//		QuickSort(arr, low, i - 1);
//		QuickSort(arr, i + 1, high);
//	}
//}
//// 主函数
//int main() {
//	int a[N] = { 25, 1, 12, 25, 10, 10, 34, 900, 23, 12 };
//	QuickSort(a, 0, N - 1);
//	for (int i = 0; i < N; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
int n;
int q[N];
void quick_sort(int q[], int l, int r)
{
	if (l >= r)return;
	int x = q[l], i = l - 1, j = r + 1;
	while (i < j)
	{
		do i++;
		while (q[i] < x);
		do j--;
		while (q[j] > x);
		if (i < j)
			swap(q[i], q[j]);
	}
	quick_sort(q, l, j);
	quick_sort(q, j - 1, r);
}
int main()
{
	cin >> n;
	int tmp = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		q[i] = tmp;
	}
	quick_sort(q, 1, n-1);
	for (int i = 0; i < n; i++)
	{
		cout << q[i];
	}
	return 0;
}