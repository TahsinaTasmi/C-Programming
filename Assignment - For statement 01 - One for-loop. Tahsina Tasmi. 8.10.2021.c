#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int u;

    printf("\nEnter a positive integer number, u= ");
    scanf("%d", &u);

    for (int i = -5; i <= u; i++)
    {

        printf("\n%d\n", i);

    }
    return 0;
}

