#include <stdio.h>
/**
 * main - function pointer array manipulation
 *
 * return - 0 for success
 *
 * One of the great applications of function pointers 
 * is when a user has to choose between several operations
 * for instance, in a simple calculator, a user will be aske to 
 * choose among addition, subtraction, multiplication or division
 * the ideal way is to use a switch or an if else condition.
 * Since this will make the code cumbersome, function pointers becomes very useful here
 *
 * An array of function pointers will declared to hold the addresses of the various functions pointers
 *
 * This array matches the choice a user enters and so is used to access the various functions
 */

void add();
void sub();
void div();
void mul();
int a = 5, b = 3;

int main(void)
{
	int choice;

	while (choice < 0 || choice > 3)
	{
		printf("Please enter your operation choice: 0 for +, 1 for -, 2 for /, and 3 for x\n");
		scanf("%d", &choice);
	}

	void (*ptr[4])() = {add, sub, div, mul}; /*Declaring the function pointer array to store the function pointers*/
	(*ptr[choice])(); /* calling the chosen operation using the chosen function pointer*/

	return (0);
}

void add()
{
	printf("The sum is %d\n", a + b);
}

void sub()
{
	printf("The difference is %d\n", a - b);
}

void div()
{
	printf("The division is %d\n", a / b);
}

void mul()
{
	printf("The product is %d\n", a * b);
}


