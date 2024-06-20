#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>
#include<math.h>


void printIntegers(unsigned i0, unsigned i1)
{
	unsigned int n;
	clrscr();
	printf("\n"); 

	n = 1;         
	while (n <= 10)   
	{
		printf(" %u", n);
		n++;   
	}
	getch();
}

void printAlphabets()
{
	char c;
	for (c = 'A'; c <= 'Z'; ++c)
		printf("%c ", c);
	return 0;
}

float max(float a, float b)
{
	float a, b;
	a = 5;
	b = 7;
	if (a > b)
	{
		printf("%f", a);
	}
	return(b);
}

int foo;
char* bar;

void changeInt(int newValue);

int main(int argc, char** argv) {
	foo = 0;
	changeInt(5);
	printf("foo is now %d\n", foo);
	return 0;
}

void changeInt(int newValue) {
	foo = newValue;
}