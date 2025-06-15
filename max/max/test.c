#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Max(int num[]) {
//	int m = -999;
//	for (int i = 0; i <= 9; i++) {
//		if (num[i] > m) {
//			m = num[i];
//		}
//	}
//	printf("%d", m);
//}
//int main() {
//	int numd[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &numd[i]);
//	}
//	Max(numd);
//	return 0;
//}
// 
// 


//找出最大值，使用指针实现
//#include<stdio.h>
//void Max(int* num) {
//	int m = *num;
//	for (int i = 1; i < 10; i++) {
//		if (*(num + i) > m) {
//			m = *(num + i);
//		}
//	}
//	printf("%d", m);
//}
//int main() {
//	int num[10];
//	int* ptr = num;
//	printf("请输入十个整数\n");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", ptr + i);
//	}
//	Max(num);
//	return 0;
//}


//输入16个数，放入一个二乘二的矩阵中，输出其中的奇数行和奇数列的所有元素

//#include<stdio.h>
//int main(){
//	int num[4][4];
//	printf("请输入16个整数\n");
//	for (int i = 0; i <4; i++) {
//		for(int j =0;j<4;j++)
//		scanf("%d", &num[i][j]);
//	}
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (i % 2 == 0 && j % 2 == 0) {
//				printf("%2d", num[i][j]);
//			}
//			else printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//任意输入一个3行4列的矩阵，要求输出原矩阵及其转置后的矩阵。所谓
//转置矩阵即为将原矩阵中的行和列互换而形成的
//#include<stdio.h>
//int main() {
//	int num[3][4];
//	printf("请输入一个三行四列的矩阵\n");
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &num[i][j]);
//		}
//	}
//	int num2[4][3];
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			num2[i][j] = num[j][i];
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d", num2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4.从键盘输入两个字符串，若不相等，将短的字符串连接到长的字符串的末
//尾并输出。

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main() {
//	char a[100];
//	char b[100];
//	char c[100];
//	scanf("%s%s", a, b);
//	int d  =  strlen(a) - strlen(b);
//	if (d >=0) {
//		strcpy(c, a);
//		strcat(c, b);
//		printf("%s", a);
//	}
//	else {
//		strcpy(c, b);
//		strcat(c, a);
//		printf("%s", c);
//	}
//	return 0;
//}


//5.从键盘输入一个正整数，判断其是否为回文数。所谓回文数是顺读与反读
//都一样的数，如12321、23455432都是回文数。
//#include<stdio.h>
//int main() {
//	int c;
//	scanf("%d", &c);
//	int a = c,j = 0;
//	while (a) {
//		j *= 10;
//		j += a % 10;
//		a /= 10;
//	}
//	printf("%d----%d", c, j);
//	if (j == c) {
//		printf("是回文数\n");
//	}
//	else {
//		printf("不是回文数\n");
//	}
//	return 0;
//}


//9.从键盘上输入8个数，用选择法按由大到小的顺序排序并输出，要求用指
//针实现。
// 
// 
//#include<stdio.h>
//int main() {
//	int a[8] = { 0 };
//	for (int i = 0; i < 8; i++) {
//		scanf("%d", &a[i]);
//	}
//	int* max;
//	int* q;
//	int* p;
//	for (p = a; p < a + 7; p++) {
//		max = p;
//		for (q = p + 1; q < a + 8; q++) {
//			if (*q > *max) {
//				max = q;
//			}
//		}
//		int tmep = *p;
//		*p = *max;
//		*max = tmep;
//	}
//	for (p = a; p < a + 8;p++) {
//		printf("%d ", *p);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//typedef struct num {
//	float im;
//	float re;
//}num;
//num add(num x,num y) {
//	num tmep;
//	tmep.im = x.im + y.im;
//	tmep.re = x.re + y.re;
//	return tmep;
//}
//num stu(num x, num y) {
//	num tmep;
//	tmep.im = x.im - y.im;
//	tmep.re = x.re - y.re;
//	return tmep;
//}
//void out(num z) {
//	printf("%.2f", z.im);
//	if (z.re >= 0) {
//		printf("+%.2fi", z.re);
//	}
//	else {
//		printf("-%.2fi", z.re);
//	}
//	printf("\n");
//}
//int main() {
//	printf("请输入两个复数\n");
//	num x, y,z;
//	scanf("%f+%fi %f+%fi", &x.im, &x.re, &y.im, &y.re);
//	printf("两个复数相加的结果为：");
//	z = add(x, y);
//	out(z);
//	printf("两个复数相减的结果为：");
//	z = stu(x, y);
//	out(z);
//	return 0;
//}



//7.输入一个不多于 5 位的正整数，求它是几位数，并分别输出每一位数字
//（以空格分隔）。
//#include<stdio.h>
//int main() {
//	int n;
//	printf("请输入一个不多于5位的正整数\n");
//	int num[5];
//	scanf("%d", &n);
//	int i = 0;
//	while (n) {
//		num[i] = n % 10;
//		n /=10;
//		i++;
//	}
//	printf("这是一个%d位数\n", i);
//	for (int w = i-1; w >=0; w--) {
//		printf("%d ", num[w]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#define  N 20
//typedef struct stude {
//	char name[N];
//	char num[N];
//	int age;
//	char gender[N];
//}stu;
//int main() {
//	stu list[10];
//	printf("请依次输入10个学生的信息\n");
//	for (int i = 0; i < 10; i++) {
//		printf("请输入第%d名学生的姓名:",i+1);
//		scanf("%s", list[i].name);
//		printf("请输入第%d名学生的学号：",i+1);
//		scanf("%s", list[i].num);
//		printf("请输入第%d名学生的年龄：",i+1);
//		scanf("%d", &list[i].age);
//		printf("请输入第%d名学生的性别：",i+1);
//		scanf("%s", list[i].gender);
//	}
//	for (int i = 0; i < 10; i++) {
//		if (list[i].age >= 18 && list[i].age <= 22);
//		printf("姓名：%s 学号：%s 年龄；%d 性别：%s\n", list[i].name, list[i].num, list[i].age, list[i].gender);
//
//	}
//	return 0;
//}
//输入一串字符串，判断有几个单词
//#include <stdio.h>
//#include <ctype.h>  // 用于isspace函数，检查所传字符是否为空白字符;
//int main(){
//    char input[1000];
//    int wordCount = 0;//统计单词的总个数
//    int inWord = 0;  // 标记是否在单词中 (0=不在单词中, 1=在单词中)
//    printf("请输入一行字符：\n");
//    fgets(input, sizeof(input), stdin);  // 读取一行输入
//    // 遍历字符串中的每个字符
//    for (int i = 0; input[i] != '\0'; i++) {
//        if (isspace((unsigned char)input[i])) {  // 当前字符是空白字符
//            inWord = 0;  // 标记不在单词中
//        }
//        else if (!inWord) {  // 当前字符不是空白且之前不在单词中
//            inWord = 1;  // 标记进入单词
//            wordCount++;  // 增加单词计数
//        }
//    }
//    printf("输入的字符中共有 %d 个单词\n", wordCount);
//    return 0;
//}


//链表的创建、插入、删除、查找、输出。
#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 创建新节点
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 在链表头部插入节点
void insertAtHead(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// 在链表尾部插入节点
void insertAtTail(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// 在指定位置插入节点
void insertAtPosition(Node** head, int data, int position) {
    if (position < 0) {
        printf("位置无效\n");
        return;
    }

    if (position == 0) {
        insertAtHead(head, data);
        return;
    }

    Node* newNode = createNode(data);
    Node* current = *head;

    for (int i = 0; current != NULL && i < position - 1; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("位置超出范围\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// 删除指定值的节点
void deleteByValue(Node** head, int data) {
    if (*head == NULL) {
        printf("链表为空\n");
        return;
    }

    Node* temp = *head, * prev = NULL;

    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        printf("已删除值 %d\n", data);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("未找到值 %d\n", data);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("已删除值 %d\n", data);
}

// 删除指定位置的节点
void deleteByPosition(Node** head, int position) {
    if (*head == NULL || position < 0) {
        printf("操作无效\n");
        return;
    }

    Node* temp = *head, * prev = NULL;

    if (position == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 0; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("位置超出范围\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// 查找节点值
int search(Node* head, int data) {
    Node* current = head;
    int position = 0;

    while (current != NULL) {
        if (current->data == data) {
            return position;
        }
        current = current->next;
        position++;
    }

    return -1; // 未找到
}

// 打印链表
void printList(Node* head) {
    Node* current = head;
    printf("链表内容: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// 释放链表内存
void freeList(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

// 主函数测试链表操作
int main() {
    Node* head = NULL;

    // 测试插入操作
    insertAtTail(&head, 10);
    insertAtHead(&head, 5);
    insertAtTail(&head, 20);
    insertAtPosition(&head, 15, 2);
    printList(head); // 输出: 5 -> 10 -> 15 -> 20 -> NULL

    // 测试查找操作
    int searchVal = 15;
    int pos = search(head, searchVal);
    if (pos != -1) {
        printf("值 %d 在位置 %d\n", searchVal, pos);
    }
    else {
        printf("值 %d 未找到\n", searchVal);
    }

    // 测试删除操作
    deleteByValue(&head, 10);
    printList(head); // 输出: 5 -> 15 -> 20 -> NULL

    deleteByPosition(&head, 1);
    printList(head); // 输出: 5 -> 20 -> NULL

    // 释放链表内存
    freeList(&head);

    return 0;
}
//#include<stdio.h>
//int main() {
//	int in = 0;
//	printf("请输入一串字符\n");
//	char str[1000];
//	int count = 0;
//	fgets(str, sizeof(str), stdin);
//	for (int i = 0; str[i] != '\n'; i++) {
//		if (str[i]==' ') {//此时为空格
//			in = 0;//进行标记
//		}
//		else if (!in) {//不是空格且在单词内
//			in = 1;
//			count++;
//		}
//	}
//	printf("总共有%d个字符\n", count);
//	return 0;
//}