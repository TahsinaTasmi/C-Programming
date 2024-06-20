#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
	float number;
	float result1;

	printf("\nEnter a number: ");
	scanf("%f", &number);

	if (number > 0)
	{
		result1 = sqrt(number);
		printf("\nSquare root value=%f\n", result1);
	}
	else
	{
		printf("\nERROR\n");

	}

	return 0;

}

