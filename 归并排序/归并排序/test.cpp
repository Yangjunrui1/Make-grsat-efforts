#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1000010;
int n;
int q[N],tmp[N];
void merge_sort(int q[], int l, int r)
{
	if (l >= r)return;//判断如果只有一个数字或者没有数字就不用排序
	int mid = l + (r-1)/2;//mid = (r+l)>>2;
	merge_sort(q, l, mid);//递归排序左边
	merge_sort(q, mid + 1, r);//递归排序右边
	int k = 0, i = l, j = mid + 1;//i指向的是左半边的起点。j指向的是右半边的起点
	while (i <= mid && i <= r)
	{
		if (q[i] <= q[j])//如果左边的比右边的小
			tmp[k++] = q[i++];
		else
			tmp[k++] = q[j++];
	}
	//如果有一边已经排完了
	while (i <= mid)
	{
		tmp[k++] = q[i++];
	}
	while (j <= r)
	{
		tmp[k++] = q[j++];
	}
	for (i = l, j = 0; i <= r; i++, j++)
	{
		q[i] = tmp[j];
	}

}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &q[i]);
	}
	merge_sort(q, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", q[i]);
	}
	return 0;
}