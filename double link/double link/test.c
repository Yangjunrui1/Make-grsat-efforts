#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
struct Node//���ڴ洢��Ľṹ
{
	int element[size];//��Ҫ����ֵ
	int length;//�������Ч��С
	Position Next;
};
Position creatList()//����һ���ձ�
{
	Position P;
	P = malloc(sizeof(struct Node));
	P->length = 0;
	return P;
}
bool isEmpty(List P)
{
	return (P->length == 0);
}
void insertFirst(List P, int x)
{
	int i;
	if (P->length >= size)
	{
		printf("�ڴ�����\n");
		return;
	}
	for (i = P->length ;i > 0; i--)
	{
		P->element[i] = P->element[i - 1];
	}
	P->element[0] = x;
	P->length++;//�����Ԫ�ؼ�һ
}
void insertLast(List P, int x)
{
	if (P->length >= size)
	{
		printf("�ڴ�����\n");
		return;
	}
	P->element[P->length] = x;
	P->length++;
}
int main()
{
	int index;
	int element;
	Position list = creatList();//����һ���ձ�
	printf("list isEmpty:%d\n", isEmpty(list));
	printf("===========\n");
	insertFirst(list, 1);
	insertFirst(list, 2);
	/*printf("%d", list->element[1]);*/
	insertLast(list, 4);
	printf("%d", list->element[2]);
	for (int i = 0; i < list->length; i++)
		printf("%d\n", list->element[i]);
	printf("===========\n");
	index = find(list, 1);
	if (index == -1)
	{
		printf("not find....\n");
	}
	else
		printf("find\n");
	delete(list, 2);
	return 0;
}   
int find(List P,int x)
{
	for (int i = 0; i < P->length; i++)
	{
		if (P->element[i] == x)
			return x;
	}
	return -1;
}
void delete(List P, int x)
{
	
	for (int i = 0; i < P->element; i++)
	{
		if (P->element[i] == x)
		{
			for (; i < P->length - 1; i++)
			{
				P->element[i] = P->element[i + 1];
			}
			break;
		}
	}
	P->length--;
}