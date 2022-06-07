#include <stdio.h>
/**
 * main - calculates string length
 *
 * lenstr - returns the length of a string
 *
 */

int lenstr(char *str);

int main(void)
{
	char *str1 = "guyyyy";
	int len = 0;

	len = lenstr(str1);
	printf("The length of the string %s is %d\n", str1, len);

	return (0);
}

int lenstr(char *str)
{
	int i = 0, len = 0;
	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

