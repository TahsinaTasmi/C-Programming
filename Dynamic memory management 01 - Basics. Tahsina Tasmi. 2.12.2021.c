#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* function(int iN) 
{
    
    static int* ptriArray;
    ptriArray = malloc(sizeof(int) * iN);
    
    for (int iIndex = 0; iIndex < iN; iIndex++) 
    {
        ptriArray[iIndex] = 0;
    }
    return ptriArray;
}

int main()
{
    
    int* ptriArray = function(10);

    for (int iIndex = 0; iIndex < 10; iIndex++) 
    {
        printf("Values for # %d   is :  %d\n", iIndex, ptriArray[iIndex]);
    }

}
