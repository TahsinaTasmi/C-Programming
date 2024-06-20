#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	{
		int i;
		for (i = 1; i <= 10; i++)
		{
			printf("\n %d \n", i);
		}
		return 0;
	}

	{
		int number;
		number = 1;
		printf("Numbers from 1 to 10: \n");
		while (number <= 10)
		{
			printf(" %d ", number);
			number++;
		}
		return 0;
	}

	{
		int num = 1;
		int target = 10;
		do {
			printf(" %d ", num);
			++num;
		} while (num <= target);

		return 0;
	}

	return 0;
}