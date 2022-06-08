#include <stdio.h>
/**
 * main - entry point
 * Since structures are just datatypes defined by the user,
 * One might want to declare many variables of that datatype.
 * This, an array is used.
 *
 * return - Always 0 for success
 *
 */
/*
 * STRUCT DECLARATION BELOW
 */
struct employee
{
	int age;
	char name[20];
	float salary;
	int numChildren;
};

int main(void)
{
	int i = 0;
	int n;

	printf("Please enter the number of employees\n");
	scanf("%d", &n);

	/*
	 * BELOW IS AN ARRAY E, SIZE n TO STORE DATA OF TYPE struct employee
	 */
	struct employee E[n];

	for (i = 0; i < n; i++)
	{
		printf("Please enter the age, name, salary and number of children respectively of employee %d\n", i + 1);
		scanf("%d %s %f %d", &E[i].age, E[i].name, &E[i].salary, &E[i].numChildren);
	}

	for (i = 0; i < n; i++)
	{
	printf("Details of %s\nName: %s\n Age: %d\n Salary: %f\n Children: %d\n", E[i].name, E[i].name, E[i].age, E[i].salary, E[i].numChildren);
	}
	return (0);
}
