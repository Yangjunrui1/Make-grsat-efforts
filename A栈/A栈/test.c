#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
struct Node
{
	int element;
	List Next;
};
void Push(int x, List P)
{
	List Tmp;
	Tmp = malloc(sizeof(struct Node));
	if (Tmp == NULL)
	{
		printf("out of space");
		return;
	}
	else
	{
		Tmp->element = x;
		Tmp->Next = P->Next;
		P->Next = Tmp;//从头部放入元素
	}
}
void Pop(List P)
{
	List Tmp;
	if (P->Next == NULL)
	{
		printf("本来就为空\n");
	}
	else
	{
		Tmp = P->Next;
		P->Next = P->Next->Next;
		free(Tmp);
	}
}
void print(List P)
{
	List Tmp;
	Tmp = P->Next;
	while (Tmp != NULL)
	{
		printf("%d", Tmp->element);
		Tmp = Tmp->Next;
	}
}
int main()
{
	Stack list;
	list = creatList();
	Push(2, list);
	Push(2, list);
	Pop(list);
	print(list);
	return 0;
}
Stack creatList()
{
	List P;
	P = malloc(sizeof(struct Node));
	if (P == NULL)
	{
		printf("out of space\n");
		return;
	}
	P->Next = NULL;
	MakeEmpty(P);//清空栈  
	return P;
}
void MakeEmpty(List S)
{
	if (S == NULL)
	{
		printf("Out of space");
	}
}