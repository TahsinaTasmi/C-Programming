#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int iTheArray[10];

void GetIntegers()
{
    for (int iIndex = 0; iIndex < 10; iIndex++) 

    {
        printf("Integer number %d : ", iIndex + 1);

        scanf_s("%d", &iTheArray[iIndex]);
    }
}
int main()
{
    printf("Enter any 10 integers.\n\n");

    GetIntegers();

    for (int iIndex = 0; iIndex < 10; iIndex++) 
    
    {
        printf("\nYou entered %d for the integer number %d\n", iTheArray[iIndex], iIndex + 1);
    }


}