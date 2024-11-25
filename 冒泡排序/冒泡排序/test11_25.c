#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//冒泡排序核心思想;两个相邻的元素比较
void bubble_sort(int arr[],int sz)
{
	//int sz = sizeof(arr) / sizeof(arr[0]);不能直接用
	int i = 0;
	for (i = 1; i <= sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j<sz-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
		
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//升序排列数据、
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//数组名本质上是数组首元素的地址
	
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}