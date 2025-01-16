#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"test.h"
struct Node {
	int a;
	Position Next;
};
//链表的查找
//Position Find(int b, List L)
//{
//	Position P;
//	P = L->a;
//	while (P != NULL && P->a != b)
//	{
//		P = P->Next;
//	}
//	return P;
//}
Position FindPreious(int x, List L)
{
	Position P;
	P = L;
	while (P->Next && P->Next->a != x)//找到所要找的值上一个位置的地址
	{
		P = P->Next;
	}
	return P;
}
//删除链表中的某个元素
int Islast(Position P, List L)
{
	return P->Next == NULL;
}
void delete(int x, List L)
{
	Position P, TmpCell;
	P = FindPrevious(x, L);//先找到这个元素前面的一个
	if (!Islast(P, L))//判断是不是空指针
	{
		TmpCell = P->Next;//临时的一个存储位置
		P->Next = TmpCell->Next;//将这个元素后面元素的地址赋值给前面的元素，这个元素就被删除了
		free(TmpCell);//释放内存空间，就是不要了
	}
}
//插入一个结点
void


int main()
{
	struct Node n1 = { 19,&n2.Next };
	int b = 3;
	Position i = Find(b, &n1);
	Insert(n1.a, &n1);
	Delete(b, &n1);//链表的删除例程
	return 0;
}