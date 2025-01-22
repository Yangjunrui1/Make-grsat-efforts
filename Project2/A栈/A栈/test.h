#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node* List;
typedef List Stack;
Stack creatList();
void MakeEmpty(List S);
void Push(int x, List P);
void Pop(List P);

