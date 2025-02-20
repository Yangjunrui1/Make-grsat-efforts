#pragma once
#include<iostream>
#include<cstdlib>
#include<malloc.h>
typedef struct Node* Position;
typedef struct Node* List;
Position makeEmpty(List t);
Position find(int x,List t);
Position findMin(List t);
Position findMax(List t);
Position insert(int x, List t);
Position delet(int x, List t);