#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"test.h"
struct Node {
	int a;
	Position Next;
};
//����Ĳ���
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
	while (P->Next && P->Next->a != x)//�ҵ���Ҫ�ҵ�ֵ��һ��λ�õĵ�ַ
	{
		P = P->Next;
	}
	return P;
}
//ɾ�������е�ĳ��Ԫ��
int Islast(Position P, List L)
{
	return P->Next == NULL;
}
void delete(int x, List L)
{
	Position P, TmpCell;
	P = FindPrevious(x, L);//���ҵ����Ԫ��ǰ���һ��
	if (!Islast(P, L))//�ж��ǲ��ǿ�ָ��
	{
		TmpCell = P->Next;//��ʱ��һ���洢λ��
		P->Next = TmpCell->Next;//�����Ԫ�غ���Ԫ�صĵ�ַ��ֵ��ǰ���Ԫ�أ����Ԫ�ؾͱ�ɾ����
		free(TmpCell);//�ͷ��ڴ�ռ䣬���ǲ�Ҫ��
	}
}
//����һ�����
void


int main()
{
	struct Node n1 = { 19,&n2.Next };
	int b = 3;
	Position i = Find(b, &n1);
	Insert(n1.a, &n1);
	Delete(b, &n1);//�����ɾ������
	return 0;
}