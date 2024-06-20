#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char* from_0_to_9[] = { "Nought","One","Two","Three","Four","Five",
                   "Six","Seven","Eight","Nine" };
char* random[] = { "Ten","Eleven","Twelve","Thirteen","Fourteen", "Fifteen",
                   "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

void printNumber(int n) 
{
    if (n <= 9) 
    {
        printf("\n%s\n", from_0_to_9[n]);
        return;
    }
    int update = 0;
    switch (n)
    {
    case 10: {
        update = 0;
    }break;
    case 11: {
        update = 1;
    }break;
    case 12: {
        update = 2;
    }break;
    case 13: {
        update = 3;
    }break;
    case 14: {
        update = 4;
    }break;
    case 15: {
        update = 5;
    }break;
    case 16: {
        update = 6;
    }break;
    case 17: {
        update = 7;
    }break;
    case 18: {
        update = 8;
    }break;
    case 19: {
        update = 9;
    }break;

    default:
    {
        printf("\n%s\n", from_0_to_9[n - 10]);
        return;
    }
  }

    printf("\n%s\n", random[update]);

}

int main()
{
    int i;
    for (i = 0; i <= 19; i++) 
    {
        printNumber(i);
    }

}