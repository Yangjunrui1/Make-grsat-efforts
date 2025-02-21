#pragma once
#define Min_Size 5
#define Min_date -999//
typedef struct Heap* List;
typedef List Position;
List init(int x);
void insert(int x, List t);
int deleteMin(List t);
void PtintHeap(List t);
bool isEmpty(List t);
bool isFull(List t);
