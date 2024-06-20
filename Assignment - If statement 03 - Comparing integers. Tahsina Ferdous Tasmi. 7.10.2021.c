#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int num1, num2;

    printf("\nPlease Enter two different integers\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("\nThe larger integer is %d\n", num1);
    }
    else
    {
        printf("\nThe larger integer is %d\n", num2);
    }

    return 0;
}
