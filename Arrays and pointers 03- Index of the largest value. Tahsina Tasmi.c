#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int LargestIndex(int iArray[], int iArraySize) {
    int iIndexMaxValue = 0;
    int iMaxValue = 0x80000000;;

    for (int iIndex = 0; iIndex < iArraySize; iIndex++)
        if (iArray[iIndex] > iMaxValue) 
        {
            iMaxValue = iArray[iIndex];
            iIndexMaxValue = iIndex;
        }

    return iIndexMaxValue;
}

int main()
{
    printf("\nIndex of the Largest Value in the array.\n");

    int iArray[] = { -100,2,10,500,1010, 20, 30 };

    printf("\nMax index is : %d \n", LargestIndex(iArray, sizeof(iArray) / sizeof(iArray[0])));

}
