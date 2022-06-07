#include <stdio.h>
/**
 * main - funtions types
 *
 * sum - calculates the sum of two numbers
 *
 * prod - calculates the product of two numbers
 *
 * div - calculates the division of two numbers
 *
 * sub - calculates the difference between two numbers
 *
 * There are four function types:
 * 1. Function without argument(s) and without return type
 * 2. Function with argument(s) and without return type
 * 3. Function without argument(s) and with return type
 * 3. Function with arguments(s) and with return type
 *
 * return - 0 for success
 */

void sum(void);
void prod(int a, int b);
int div(void);
int sub(int x, int y);

int main(void)
{
	int a = 5, b = 7, divVar, subVar;

	sum();
	prod(a, b);
	divVar = div();
	subVar = sub(a, b);

	printf("div returned %d\n", divVar);
	printf("sub returned %d\n", subVar);

	return (0);
}

void sum(void)
{
	int a, b;

	printf("Please enter a and b \n");
	scanf("%d %d", &a, &b);
	printf("Sum of %d and %d is %d\n", a, b, a + b);
}

void prod(int a, int b)
{
	printf("The product of %d and %d is %d\n", a, b, a * b);
}

int sub(int x, int y)
{
	return (x - y);
}

int div(void)
{
	int a, b;

	printf("Please enter a and b \n");
	scanf("%d %d", &a, &b);
	return (a / b);
}
