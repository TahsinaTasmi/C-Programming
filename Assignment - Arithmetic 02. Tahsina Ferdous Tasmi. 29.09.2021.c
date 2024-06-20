#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long number;
	unsigned long result1;
	unsigned long result2;

	printf("\nEnter any non-negative real number: ");
	scanf("%lu", &number);

	result1 = sqrt(number);
	printf("\nSquare root value=%lu", result1);

	result2 = number * number;
	printf("\nSquare value=%lu", result2);

	return 0;
}