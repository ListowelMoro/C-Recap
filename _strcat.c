#include <stdio.h>
#include <string.h>
/**
 *  main - concatenates two strings
 *
 * Return - Always 0
*/

void main(void)
{
	char s1[20];
	char s2[20];
	int len1 = 0;
	int len2 = 0;


	printf("Please enter first string: ");
	gets(s1);
	len1 = strlen(s1);
	printf("Please enter second string: ");
	gets(s2);
	len2 = strlen(s2);

	for (int i = 0; i <= len2; i++)
	{
		s1[len1] = s2[i];
		len1++;
	}

	printf("The results is: %s\n", s1);


	return (0);
}


