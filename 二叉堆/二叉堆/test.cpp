#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#include "test.h"
struct Heap
{
	int capaticy;
	int size;//有效元素的个数
	int* elements;//数组
};
int main()
{
	List h;
	h = init(20);
	insert(13,h);
	insert(17,h);
	insert(12,h);
	insert(2,h);
	insert(19,h);
	PtintHeap(h);
	return 0;
}

List init(int x)
{
	List h;
	if (x < Min_Size)
	{
		cout << "out";
		exit(1);
	}
	h = (List)malloc(sizeof(List));
	if (h == NULL)
	{
		cout << "out";
		exit(1);
	}
	h->elements = (int* )malloc((x+1)*sizeof(int));
	if (h->elements== NULL)
	{
		cout << "out";
		exit(1);
	}
	h->capaticy = x;
	h->size = 0;
	h->elements[0] = Min_date;
	return h;
}

void insert(int x, List t)
{
	int i;
	if (isFull)
	{
		cout << "out" << endl;
		return;
	}
	for (i = ++t->size; t->elements[i / 2] > x; i /= 2)
	{
		t->elements[i] = t->elements[i / 2];
	}
	t->elements[i] = x;
}

int deleteMin(List t)
{
	int i, child;
	int min;
	int last;
	if (isEmpty(t))
	{
		cout << "out of space" << endl;
		return t->elements[0];
	}
	min = t->elements[1];
	last = t->elements[t->size--];
	for (i = 1; i * 2 <= t->size; i = child)
	{
		child = i * 2;
		if (child != t->size && t->elements[child + 1] < t->elements[child])
		{
			child++;
		}
		if (last > t->elements[child])
		{
			t->elements[i] = t->elements[child];
		}
		else
		{
			break;
		}
	}
	t->elements[i] = last;
	return min;
}

void PtintHeap(List t)
{
	int i;
	for (i = 0; i < t->size; i++)
	{
		cout << t->elements[i + 1] << endl;
	}
}

bool isEmpty(List t)
{
	return t->size == t->capaticy;
}

bool isFull(List t)
{
	return t->size==0;
}
