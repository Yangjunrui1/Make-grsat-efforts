#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"test.h"
struct Node
{
	int a;
	List Next;
};
List creatList()
{
	List P;
	P = malloc(sizeof(struct Node));
	P->Next = NULL;
}
void Put(List P, int x)//应该从尾部进入
{
	List Q,W;
	Q = malloc(sizeof(struct Node));
	Q->Next = NULL;
	Q->a = x;
	W = P;
	while (W->Next!=NULL)
	{
		W = W->Next;
	}
	W->Next = Q;
}
void print(List P)
{

	while (P->Next!= NULL)
	{
		printf("%d", P->a);
		P = P->Next;
	}
}
int main()
{
	int i;
	int arr[100];
	List S;
	S = creatList();
	while (scanf("%d", &i) != '\n')
	{
		Put(S, i);
	}
	int b;
	int j = 0;
	/*while (scanf("%d", &b) != EOF)
	{
		arr[j] = b;
		j++;
	}*/
	print(S);
	return 0;
}