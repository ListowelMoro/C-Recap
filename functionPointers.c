#include <stdio.h>
/**
 * main - entry point
 *
 * sum - calculates the sum of two numbers
 * return - always 0
 */

int sum(int, int);

int main(void)
{
	int s;
	int a = 50, b = 39;
	int (*ptr)(int, int) = &sum;/* This is a pointer which points to sum
				       can simply be intialized to sum */

	s = (*ptr)(a, b);
	printf("The value returned by the pointer to the function sum is %d\n", s);

	return (0);

}

int sum(int a, int b)
{
	return (a + b);
}
	

