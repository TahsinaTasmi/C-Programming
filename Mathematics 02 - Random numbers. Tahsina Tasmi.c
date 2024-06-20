#include <stdio.h>
#include <stdlib.h>

int main()

{
    printf("Program to generate random number table\n\n");
    printf("What is your seed integer? : ");
    
    int iSeed;
    scanf_s("%d", &iSeed);
    srand(iSeed);
    printf("How many random numbers to generate? : ");
    
    int iAmount;
    scanf_s("%d", &iAmount);
    
    printf("\nYour seed number is : %d    generating %d random numbers:\n\n", iSeed, iAmount);
    
    for (int iNumCount = 1; iNumCount <= iAmount; iNumCount++) 
    {
        printf("%d\t", rand(iSeed));
        if (!(iNumCount % 4)) printf("\n");
    }

}