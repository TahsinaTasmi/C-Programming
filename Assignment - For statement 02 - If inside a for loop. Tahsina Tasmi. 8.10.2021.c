#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>

int main()
{
    int u;

    printf("\nEnter a positive integer number, u= ");
    scanf("%d", &u);

    for (int i = 1; i <= u; i++)
    {
        if ((i % 3 == 0) || (i % 4 == 0))
            
         printf(" %d", i);
       
    }

    return 0;

}
