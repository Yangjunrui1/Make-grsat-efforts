#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<malloc.h>
int main()
{
	//int* p, t;
	//p = (int*)malloc(40 * sizeof(int));
	//if (!p) 
	//{
	//	printf("\t内存用完了\t");
	//	exit(0);
	//}
	int*p;
	if ((p = (int*)malloc(sizeof(int))) == NULL)
	{
		printf("error on malloc\n");
		exit(1);
	}
	*p = 580;
	printf("%5d,%od\n", *p, p);
	free(p);
	if ((p = (int*)malloc(sizeof(int))) == NULL)
	{
		printf("error on malloc\n");
		exit(1);
	}
	*p = 1200;
	printf("%5d,%o\n", *p, p);
	free(p);

	return 0;
}