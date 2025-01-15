#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct did 
//{
//	int 
//};
int main()
{
    int a = 0;
    scanf("%d", &a);
    int b = a;
    int c = 1;
    int f = 0;
    int size = 0;
    while (a > 0) {
        size++;
        a /= 10;
        c *= 10;
    }c /= 10;
    int w = 1;
    for (int i = 1; i < size / 2; i++) {
        if (b / c % 10 != b / w % 10) {
            f = 1;
        }
        c /= 10;
        w *= 10;
    }
    if (f == 0)
       printf("%d + 是回文数",b);
    if (f == 1)
      printf("%d不是回文数",b);
	return 0;
}