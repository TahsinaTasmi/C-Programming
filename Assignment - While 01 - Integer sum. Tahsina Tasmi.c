#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int askNumber(void) {
	int n = 0;
	printf(" Enter an integer: ");
	scanf("%d", &n);
	return n;
}

int main()
{
	askNumber();
	int num, sum = 0;
	printf(" Enter integers: ");

	while (1)
	{
		scanf("%d", &num);
		if (num < 0)
		{
			break;
		}
		sum = sum + num;
	}

	printf("%d", sum);
	
	return 0;

}
