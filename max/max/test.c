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


//�ҳ����ֵ��ʹ��ָ��ʵ��
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
//	printf("������ʮ������\n");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", ptr + i);
//	}
//	Max(num);
//	return 0;
//}


//����16����������һ�����˶��ľ����У�������е������к������е�����Ԫ��

//#include<stdio.h>
//int main(){
//	int num[4][4];
//	printf("������16������\n");
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



//��������һ��3��4�еľ���Ҫ�����ԭ������ת�ú�ľ�����ν
//ת�þ���Ϊ��ԭ�����е��к��л������γɵ�
//#include<stdio.h>
//int main() {
//	int num[3][4];
//	printf("������һ���������еľ���\n");
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

//4.�Ӽ������������ַ�����������ȣ����̵��ַ������ӵ������ַ�����ĩ
//β�������

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


//5.�Ӽ�������һ�����������ж����Ƿ�Ϊ����������ν��������˳���뷴��
//��һ����������12321��23455432���ǻ�������
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
//		printf("�ǻ�����\n");
//	}
//	else {
//		printf("���ǻ�����\n");
//	}
//	return 0;
//}


//9.�Ӽ���������8��������ѡ�񷨰��ɴ�С��˳�����������Ҫ����ָ
//��ʵ�֡�
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
//	printf("��������������\n");
//	num x, y,z;
//	scanf("%f+%fi %f+%fi", &x.im, &x.re, &y.im, &y.re);
//	printf("����������ӵĽ��Ϊ��");
//	z = add(x, y);
//	out(z);
//	printf("������������Ľ��Ϊ��");
//	z = stu(x, y);
//	out(z);
//	return 0;
//}



//7.����һ�������� 5 λ���������������Ǽ�λ�������ֱ����ÿһλ����
//���Կո�ָ�����
//#include<stdio.h>
//int main() {
//	int n;
//	printf("������һ��������5λ��������\n");
//	int num[5];
//	scanf("%d", &n);
//	int i = 0;
//	while (n) {
//		num[i] = n % 10;
//		n /=10;
//		i++;
//	}
//	printf("����һ��%dλ��\n", i);
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
//	printf("����������10��ѧ������Ϣ\n");
//	for (int i = 0; i < 10; i++) {
//		printf("�������%d��ѧ��������:",i+1);
//		scanf("%s", list[i].name);
//		printf("�������%d��ѧ����ѧ�ţ�",i+1);
//		scanf("%s", list[i].num);
//		printf("�������%d��ѧ�������䣺",i+1);
//		scanf("%d", &list[i].age);
//		printf("�������%d��ѧ�����Ա�",i+1);
//		scanf("%s", list[i].gender);
//	}
//	for (int i = 0; i < 10; i++) {
//		if (list[i].age >= 18 && list[i].age <= 22);
//		printf("������%s ѧ�ţ�%s ���䣻%d �Ա�%s\n", list[i].name, list[i].num, list[i].age, list[i].gender);
//
//	}
//	return 0;
//}
//����һ���ַ������ж��м�������
//#include <stdio.h>
//#include <ctype.h>  // ����isspace��������������ַ��Ƿ�Ϊ�հ��ַ�;
//int main(){
//    char input[1000];
//    int wordCount = 0;//ͳ�Ƶ��ʵ��ܸ���
//    int inWord = 0;  // ����Ƿ��ڵ����� (0=���ڵ�����, 1=�ڵ�����)
//    printf("������һ���ַ���\n");
//    fgets(input, sizeof(input), stdin);  // ��ȡһ������
//    // �����ַ����е�ÿ���ַ�
//    for (int i = 0; input[i] != '\0'; i++) {
//        if (isspace((unsigned char)input[i])) {  // ��ǰ�ַ��ǿհ��ַ�
//            inWord = 0;  // ��ǲ��ڵ�����
//        }
//        else if (!inWord) {  // ��ǰ�ַ����ǿհ���֮ǰ���ڵ�����
//            inWord = 1;  // ��ǽ��뵥��
//            wordCount++;  // ���ӵ��ʼ���
//        }
//    }
//    printf("������ַ��й��� %d ������\n", wordCount);
//    return 0;
//}


//����Ĵ��������롢ɾ�������ҡ������
#include <stdio.h>
#include <stdlib.h>

// ��������ڵ�ṹ
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// �����½ڵ�
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("�ڴ����ʧ��\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ������ͷ������ڵ�
void insertAtHead(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// ������β������ڵ�
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

// ��ָ��λ�ò���ڵ�
void insertAtPosition(Node** head, int data, int position) {
    if (position < 0) {
        printf("λ����Ч\n");
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
        printf("λ�ó�����Χ\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// ɾ��ָ��ֵ�Ľڵ�
void deleteByValue(Node** head, int data) {
    if (*head == NULL) {
        printf("����Ϊ��\n");
        return;
    }

    Node* temp = *head, * prev = NULL;

    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        printf("��ɾ��ֵ %d\n", data);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("δ�ҵ�ֵ %d\n", data);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("��ɾ��ֵ %d\n", data);
}

// ɾ��ָ��λ�õĽڵ�
void deleteByPosition(Node** head, int position) {
    if (*head == NULL || position < 0) {
        printf("������Ч\n");
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
        printf("λ�ó�����Χ\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// ���ҽڵ�ֵ
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

    return -1; // δ�ҵ�
}

// ��ӡ����
void printList(Node* head) {
    Node* current = head;
    printf("��������: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// �ͷ������ڴ�
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

// �����������������
int main() {
    Node* head = NULL;

    // ���Բ������
    insertAtTail(&head, 10);
    insertAtHead(&head, 5);
    insertAtTail(&head, 20);
    insertAtPosition(&head, 15, 2);
    printList(head); // ���: 5 -> 10 -> 15 -> 20 -> NULL

    // ���Բ��Ҳ���
    int searchVal = 15;
    int pos = search(head, searchVal);
    if (pos != -1) {
        printf("ֵ %d ��λ�� %d\n", searchVal, pos);
    }
    else {
        printf("ֵ %d δ�ҵ�\n", searchVal);
    }

    // ����ɾ������
    deleteByValue(&head, 10);
    printList(head); // ���: 5 -> 15 -> 20 -> NULL

    deleteByPosition(&head, 1);
    printList(head); // ���: 5 -> 20 -> NULL

    // �ͷ������ڴ�
    freeList(&head);

    return 0;
}
//#include<stdio.h>
//int main() {
//	int in = 0;
//	printf("������һ���ַ�\n");
//	char str[1000];
//	int count = 0;
//	fgets(str, sizeof(str), stdin);
//	for (int i = 0; str[i] != '\n'; i++) {
//		if (str[i]==' ') {//��ʱΪ�ո�
//			in = 0;//���б��
//		}
//		else if (!in) {//���ǿո����ڵ�����
//			in = 1;
//			count++;
//		}
//	}
//	printf("�ܹ���%d���ַ�\n", count);
//	return 0;
//}