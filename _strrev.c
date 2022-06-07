#include <stdio.h>
#include <string.h>
/**
 * main - To reverse a string 
 *
 * return - always 0( for success)
 */

void main(void)
{
	char s1[20];
	printf("Enter the string:\n");
	gets(s1);

	int i = 0;
	int j = strlen(s1);
	while (i < j / 2)
	{
		s1[i] = s1[j - 1];
		i++;
		j--;

	}

	printf("The reversed string is: %s\n", s1);

	return (0);
}
