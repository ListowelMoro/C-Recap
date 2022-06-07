#include <stdio.h>
/**
 * main - determine the length of a string
 *
 * return - always 0 ( for success)
 */

void main(void)
{

	int len = 0;
	int i = 0;
	char name[20];
	printf("Enter the string: ");
	gets(name);
	
	while (name[i] != '\0')
	{
		len++;
		i++;
	}
	printf("The length of the string %s is %d\n", name, len);

	return (0);
}
