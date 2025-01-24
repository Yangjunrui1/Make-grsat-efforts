#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
struct Node
{
	int capacity;//队列的容量
	int size;//队列有效数据的大小
	int front;//队头的角标
	int reat;//队尾的角标
	int* array;//指针 ，指向数组首元素的地址
};
void print(List P)
{
	for (int i = P->front; i < P->front+P->size; i++)
	{
		printf(" %d\n",P->array[i%P->capacity]);
	}
}
int main()
{
	int val;
	List Q;
	Q = creatQueue(5);
	enqueue(1, Q);
	enqueue(2, Q);
	enqueue(3, Q);
	enqueue(4, Q);
	enqueue(5, Q);
	print(Q);
	printf("========\n");
	dequeue(Q);
	print(Q);
	val = front(Q);
	printf("%d\n", val);
	disQueue(Q);
	return 0;
}
void disQueue(List P)
{
	if (P != NULL)
	{
		free(P->array);
		free(P);
	}
}
int front(List P)
{
	if (isEmpty)
	{
		printf("dddd");
		return 0;
	}
	return P->array[P->front];
}
void dequeue(List P)
{
	if (isEmpty(P))
	{
		printf("已经为空\n");
		return;
	}
	P->size--;
	P->front = succ(P->front,P);
	
}
bool isEmpty(List P)
{
	return P->size == 0;
}
List creatQueue(int x)
{
	List P;
	P = malloc(sizeof(struct Node));
	if (P == NULL)
	{
		printf("Error");
		return NULL;
	}
	P->array = malloc(sizeof(int) * x);
	if (P->array == NULL)
	{
		printf("Error");
		return NULL;
	}
	P->capacity = x;
	makeEmpty(P);
	return P;
}
void enqueue(int x, List P)
{
	if (isFull(P))
	{
		printf("Out of space\n");
		return;
	}
	P->size++;
	P->reat = succ(P->reat,P);
	P->array[P->reat] = x;

}
int succ(int x,List P)
{
	x++;
	return x % P->capacity;
}
void makeEmpty(List P)
{
	P->front = 1;
	P->size = 0;
	P->reat = 0;
}
bool isFull(List P)
{
	return P->size == P->capacity;
}