#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
//�ṹ������
struct Node
{
	int id;
	int nextid;
	List Next;
}nodes[Size];
int main()
{
	int n, m;
	printf("����������n��m����ֵ\n");
	nodes[0].nextid = 1;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		nodes[i].id = i;//��ַ
		nodes[i].nextid = i + 1;
	}
	nodes[n].nextid = 1;
	int now = 1;
	int prey;
	while ((n--) > 1)
	{
		for (int i = 1; i < m; i++)
		{
			prey = now;
			now = nodes[now].nextid;
		}
		printf("%d ", nodes[now].id);
		nodes[prey].nextid = nodes[now].nextid;
		now = nodes[prey].nextid;
	}
	printf("%d", nodes[now].nextid);
	return 0;
}