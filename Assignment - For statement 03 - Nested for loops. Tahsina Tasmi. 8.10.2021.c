#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter a positive integer N: ");
    scanf(" %d", &n);

    for (int i=1; i <=n; i++)   
    {
        for (int j = i; j >= 1; j--)
        {
            printf(" %d", j);
        }
        
     printf("\n");

    }

    return 0;

}

