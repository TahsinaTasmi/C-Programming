#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int i;

    printf("\nEnter an integer number, i= ");
    scanf("%d", &i);

    if (i > 0)

    {
        printf("\nGreater than zero.\n");

    }

    else if (i < 0)

    {
        printf("\nLess than zero.\n");

    }

    else

    {
        printf("\nZero.\n");

    }

    return 0;
}
