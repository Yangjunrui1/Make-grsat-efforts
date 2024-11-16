//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf_s("%d %d %d", &a, &b, &c);
//    printf("%d\n",b);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    char n;
//    scanf_s("%c",&n);
//    int i = 0;
//    while (i <= 2)
//    {
//        ptintf("%c%c%c", n, n, n);
//        i = i + 1;
//    }
//    return 0;
//}
#include <stdio.h>

int main() {
	char n = 0;
	scanf_s("%c", &n);
	printf("  %c   \n", n);
	printf(" %c%c%c \n", n, n, n);
	printf("%c%c%c%c%c\n", n, n, n, n);
	printf(" %c%c%c \n", n, n, n);
	printf("  %c  \n", n);

	return 0;
}