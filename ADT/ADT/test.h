#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node* Position;
typedef Position List;
struct Node* createHeaderNode();
void insertFirst(List header, int x);//�������ͷ������
void insertLast(List header, int x);//�������β������
Position Find(List header, int x);//����λ�ø���ֵ ���ң����ؽڵ��λ��
Position FindKth(List header, int posi);//������Ϊ�ڼ����ڵ�
void delete(List header, int x);//ɾ��ĳ��Ԫ��
bool isEmpty(List header);//�ж��Ƿ�Ϊ��
int size(List header);//ͳ�������нڵ�ĸ���
void printList(List hesder);//���δ�ӡ�������

