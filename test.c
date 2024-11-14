#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char input[100] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("«Î ‰»Îsb∑Ò‘Ú”–æ™œ≤\n");
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