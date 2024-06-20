#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int GoodCharacter(char cTestChar)
{
    char cTestChars[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int iGood = 0;
    for (int iIndex = 0; iIndex < sizeof(cTestChars); iIndex++)
    {
        if (cTestChars[iIndex] == cTestChar)
        {
            iGood = 1;
            break;
        }
    }
    return iGood;
}

void trim(char* src, char* tgt)
{
    int iSrcPosition = 0;
    int iTgtPosition = 0;
    while (src[iSrcPosition] != '\0')
    {
        if (GoodCharacter(src[iSrcPosition]))
        {
            tgt[iTgtPosition] = src[iSrcPosition];
            iTgtPosition++;
        }
        iSrcPosition++;
    }
}

int main()
{
    char* ptrcSource = malloc(80);
    char* ptrcTarget = malloc(80);

    for (int iIndex = 0; iIndex < 80; iIndex++) ptrcTarget[iIndex] = '\0';
    ptrcSource = "hello world! it's a nice day today, august 1st.";
    trim(ptrcSource, ptrcTarget);
    printf("\nThe trimmed string is : %s\n", ptrcTarget);

}
