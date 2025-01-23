#define _CRT_SECURE_NO_WARNAINGS
#include"test.h"
struct Node
{
	int topStack;//ջ���Ǳ꣬���ڿ���ջ����Ч��Χ��ʼֵΪ-1
	int capacity;//ջ������
	int* array;//ָ�룬ָ��һά������Ԫ�صĵ�ַ
};
List creatStack(int x) 
{
	Position S;
	S = malloc(sizeof(struct Node));
	if (S == NULL)
	{
		printf("Out of space");
		return NULL;
	}
	S->array = malloc(sizeof(int) * x);//������Ӧ���ڴ�ռ������
	if (S->array == NULL)
	{
		printf("Out of space");
		return NULL;
	}
	S->topStack = EmptyTos;
	S->capacity = x;
	return S;
}
bool isFull(List S)//�ж�ջ�Ƿ���
{
	return S->capacity == S->topStack + 1;
}
void Push(int x, List P)
{
	if (isFull(P))
	{
		printf("Out of space\n");
	}
	else
	{
		P->array[++P->topStack] = x;
	}
}
void printStack(List S)
{
	for (int i = 0; i <= S->topStack; i++)
	{
		printf("%d\n", S->array[i]);
	}
}
bool isEmpty(List P)
{
	return P->topStack == -1;
}
int top(List P)
{
	if (!isEmpty(P))//ִ�е�ʱ��Ϊ1
	{
		return P->array[P->topStack];
	}
	return 0;
}
void Pop(List P)
{
	if (isEmpty(P))
	{
		printf("kong\n");
		return;
	}
	else
		P->topStack--;
}
int main()
{
	int val;
	Position S;
	S = creatStack(10);//
	Push(5, S);//ѹջ
	Push(4, S);
	printStack(S);
	printf("======\n");
	val = top(S);
	printf("%d\n", val);
	Pop(S);
	Pop(S);
	printStack(S);
	return 0;
}