#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char input[100] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("������sb�����о�ϲ\n");
    scanf_s("%s", input);
    if (strcmp("sb", input) == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}