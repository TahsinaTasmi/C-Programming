#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        if ((i % 5 == 0) && (i % 7 == 0))
        {
            printf("\n %d\n", i);
            break;
        }
    }

    return 0;

}

