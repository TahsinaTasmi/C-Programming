#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>

int main(int argc, char** argv)
{
   
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 7) == 0)
        {
            printf(" . ");
            continue;
        }

        printf(" %d ", i);

    }
    
    return 0;
}
