#include <stdio.h>
#include <stdbool.h>

bool isPrime(unsigned int p);

void printPrimes(unsigned int lim) 
{
    for (int i = 2; i <= lim; i++) 
    {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
}

bool isPrime(unsigned int p) {
    for (unsigned int u = 2; u < p; u++) 
    {
        if (p % u == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv) 
{
    printPrimes(100);
}