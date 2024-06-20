#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void printfEvery2nd(char* s) 
{
    int iIndex = 0;
    while (s[iIndex] != '\0') 
    {
        printf("%c", s[iIndex]);
        iIndex += 2;
    }
}
int main()
{
    printf("\n\nPointer to a string.\n\n");

    char Buff[80] = "computer";

    char* ptrBuff = &Buff[0];

    printfEvery2nd(ptrBuff);


}
