#include <stdio.h>
/**
 * main - entry point
 *
 * Structures in c are user-defined datatypes that are used
 * to store data of different datatypes.
 * A structure can store a group of int, float and char 
 * datatypes
 * return - Always 0 (for success)
 */
struct employee
{
	int age; 
	char *name;
	int numChildren;
	double salary;
};/*The semi-colon is key here*/

int main(void)
{
	struct employee Abaas = {54, "Abaas", 5, 23334.43};
	struct employee Inusah = {34, "Inusah", 8, 3000};
	struct employee Alaba = {53, "Alaba", 23, 1000};

	printf("Details of Abaas\n Age: %d\n Name: %s\n Number of children: %d\n Salary: %f\n", Abaas.age, Abaas.name, Abaas.numChildren, Abaas.salary);

	printf("\nDetails of Inusah\n Age: %d\n Name: %s\n Number of children: %d\n Salary: %f\n", Inusah.age, Inusah.name, Inusah.numChildren, Inusah.salary);
	
	printf("\nDetails of Alaba\n Age: %d\n Name: %s\n Number of children: %d\n Salary: %f\n", Alaba.age, Alaba.name, Alaba.numChildren, Alaba.salary);

	return (0);
}
