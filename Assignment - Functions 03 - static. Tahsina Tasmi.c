#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


unsigned int largestNumber(unsigned int i)
{
	static unsigned int max = 0;
	if (i > max) {
		max = i;
	}
	return max;
}
int main()
{
	unsigned int val1 = 5, val2 = 10, val3 = 20;

	unsigned int max_val = largestNumber(val1);
	printf("largest value is: %u\n", max_val);

	max_val = largestNumber(val2);
	printf("largest value is: %u\n", max_val);

	max_val = largestNumber(val3);
	printf("largest value is: %u\n", max_val);

}


