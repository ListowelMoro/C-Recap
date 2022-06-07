#include <stdio.h>
/**
 * main - to check some pointer operations
 *
 * return - 0
 */

void main(void)
{
	char name[] = "Madam";
	char *p = name;
	
	printf("%c\n", (*p++ + 1));
	printf("%c\n", (*p-- +1));
	return (0);
}
