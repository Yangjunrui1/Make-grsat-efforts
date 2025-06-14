#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct station { //station 车站
	char name[20];
	int diat;
	station *next;
} *head;

station *input() { //用于输入原始数据
	char site[][20] = {"平安京", "大江山", "黑夜山", "柒角山", "荒川", "铃鹿山", "忘川", "鬼域", "高天原", "蜃气楼"}; //站点
	int di[10] = {0, 124, 342, 534, 546, 612, 675, 777, 856, 965};
	station *last, *p;
	head = last = (station *)malloc(sizeof(station)); //动态内存分布
	last->diat = di[0];
	strcpy(last->name, site[0]);
	for (int i = 1; i < 10; i++) {
		p = (station *)malloc(sizeof(station));
		strcpy(p->name, site[i]);
		p->diat = di[i];
		last->next = p;//链接链表
		last = p;//保证last始终在末尾
	}
	last->next = NULL;
	return head;
}

void output() { //用于输出链表
	station *p = head;
	printf("\n");
	while (p != NULL) {
		printf("%s -> ", p->name);
		p = p->next;
	}
	printf("\b\b\b\b    \n");
	printf("\n");
}

void insert() { //insert 插入，添加
	station *p0, *p = head;
	p0 = (station *)malloc(sizeof(station));
	printf("输入地点名：");
	scanf("%s", &p0->name);
	printf("输入里程：");
	scanf("%d", &p0->diat);
	while (p->next != NULL && p->next->diat < p0->diat)
		p = p->next;
	p0->next = p->next ;
	p->next = p0;
}

void delec() {//删除站点
	char c[100];
	station *p1, *p2;

	p1 = head;
	printf("请输入您要删除的站点名:");
	scanf("%s", &c);

	while (p1 != NULL && strcmp(p1->name, c) != 0) {
		p2 = p1;
		p1 = p1->next;
	}
	if (p1 == NULL)
		printf("该站点不存在");
	else {
		if (p1 == head)
			head = p1->next;
		else {
			p2->next = p1->next ;//越过被删除站点
			free(p1);//释放被删除站点的内存空间
		}
	}
}

station *seek(char *s) {//取站点的指针
	station *p = head;
	for (p = head; p != NULL; p++)
		if (strcmp(p->name, s) == 0)
			return p;
}

void gap() {//计算间距
	char s[100];
	station *p1, *p2;

	printf("请输入您的起点：");
	scanf("%s", &s);
	p1 = seek(s);
	printf("请输入您的终点：");
	scanf("%s", &s);
	p2 = seek(s);
	int n = p1->diat - p2->diat ;
	n = n > 0 ? n : -n;
	printf("%d KM\n", n);
}

int main() {
	int x;
	head = input();
	do {
		printf("按1：输出链表   按2：插入地点   按3：删除站点   按4：查询两地间隔   按0：退出\n");
		printf("input:");
		scanf("%d", &x);
		switch (x) {
			case 1:
				output();
				break;
			case 2:
				insert();
				break;
			case 3:
				delec();
				break;
			case 4:
				gap();
				break;
		}
	} while (x != 0);
	return 0;
}