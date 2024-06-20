#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int LargestValue(int iArray[], int iSize) 
{
    int iMaxValue = 0x80000000; 
    for (int iIndex = 0; iIndex < iSize; iIndex++)
        if (iArray[iIndex] > iMaxValue) iMaxValue = iArray[iIndex];
    return iMaxValue;
}

int main()

{
    printf("Returns the largest value in the array.\n\n");

    int iArray[5] = { 3, 4, 5, -100, 1000 };
   
    printf("Largest value in array is : %d\n", LargestValue(iArray, sizeof(iArray) / sizeof(iArray[0])));

}\

