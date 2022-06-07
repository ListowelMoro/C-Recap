#include <stdio.h>
/**
 * main - to check to see whether a pointer holds a value
 *
 * return - 0 for success
 *
 */

void main(void)
{
	int a = 0;
	int *p = &a;
	int *q = NULL;


	if (p == NULL)
		printf("A null pointer there!\n");
	else
		printf("Whoa! This pointer is occupied\n");

	return (0);
}
