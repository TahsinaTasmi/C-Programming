#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include<math.h>
#include "gt.h"


bool greaterThanzero(int i)

{
    return i > 0;
}

void test(int i)
{
    if (greaterThanzero(i))
    {
        printf("%d is greater than zero", i);
    }
    else
    {
        printf("%d is not greater than zero", i);

    }
}

int main(int argc, char** argv)
{
    test(0);
    test(3);
    test(-1);
    test(1);

}


