#include <stdio.h>
/**
 * main - entry point
 * return - 0 for success
 *
 * sum - adds two numbers
 * sub - subtracts two numbers
 */

int sum(int, int);
int sub(int, int);
int calBack(int (*ptr)(int, int));
int a, b;
int main(void)
{
	printf("Please enter number a\n");
	scanf("%d", &a);
	printf("Please enter number b\n");
	scanf("%d", &b);

	int Sum = calBack(sum);
	int Sub = calBack(sub);
	printf("The sum of %d and %d is %d\n", a, b, Sum);
	printf("The difference between %d and %d is %d\n", a, b, Sub);

	return (0);
}

int sum(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int calBack(int (*ptr)(int a, int b))
{
	return (ptr(a, b));
}
