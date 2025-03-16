#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1000010;
int n;
int q[N],tmp[N];
void merge_sort(int q[], int l, int r)
{
	if (l >= r)return;//�ж����ֻ��һ�����ֻ���û�����־Ͳ�������
	int mid = l + (r-1)/2;//mid = (r+l)>>2;
	merge_sort(q, l, mid);//�ݹ��������
	merge_sort(q, mid + 1, r);//�ݹ������ұ�
	int k = 0, i = l, j = mid + 1;//iָ��������ߵ���㡣jָ������Ұ�ߵ����
	while (i <= mid && i <= r)
	{
		if (q[i] <= q[j])//�����ߵı��ұߵ�С
			tmp[k++] = q[i++];
		else
			tmp[k++] = q[j++];
	}
	//�����һ���Ѿ�������
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