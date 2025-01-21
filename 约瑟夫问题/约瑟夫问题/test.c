#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct Node* stract;
/*有n个人按编号围成一圈，取m，数到m的人出列*/
struct Node
{
	int n;
	struct Node* next;
};
stract creatHead()
{
	stract f;
	f = malloc(sizeof(struct Node));
	f->n = 1;
	f->next = NULL;
	return f;
}
int main()
{
	int b, m;
	printf("请输入N和M的数值\n");
	scanf("%d%d", &b, &m);
	stract head, P, Now, Prey = NULL;
	head = creatHead();//创建表头
	Now = head;
	for (int i = 2; i <= b; i++)
	{
		P = malloc(sizeof(struct Node));
		P->next = NULL;
		P->n = i;
		Now->next = P;
		Now = Now->next;
	}
	Now->next = head;//创建一个循环链表
	Now = head;
	while ((b--) > 1)
	{
		for (int i = 1; i < m; i++)
		{
			Prey = Now;
			Now = Now->next;
		}
		printf("%d ", Now->n);
		Prey->next = Now->next;
		free(Now);
		Now = Prey->next;
	}
	printf("%d", Now->n);
	free(Now);
	return 0;
}