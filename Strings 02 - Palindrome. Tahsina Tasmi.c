#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int isPalindrome(char str[])
{

	int l = 0;
	int h = strlen(str) - 1;

	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			
			return(0);
		}
	}
	
	return(1);
}

int main()
{
	char ch[200];

	printf("\nString  \n");

	gets(ch);

	if (isPalindrome(ch))

		printf("\nTrue  \n");
	else
		printf("\nFalse \n");

	return 0;

}