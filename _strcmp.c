#include <stdio.h>
#include <string.h>
/*
 * main - To compare two strings
 *
 * return - Always 0 (for success)
 *
 */

void main(void)
{
	char s1[20];
	char s2[20];
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	int notEqual = 0;

	printf("Please enter the two strings:\n");
	scanf("%s %s", s1, s2);
	len1 = strlen(s1);
	len2 = strlen(s2);

	for (i = 0; i < len1; i++)
	{
			if (s1[i] != s2[i])
				notEqual++;
	}

	if (notEqual == 0)
		printf("The strings are equal\n");
	else
		printf("The strings are not equal\n");

	return (0);
}

