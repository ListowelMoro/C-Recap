#include <stdio.h>
/**
 * main - entry point
 *
 * typedef is used to create an alias of a datatype.
 * E.g typedef int integer will allow one to use integer to 
 * declare integer variables instead of the usual int
 * typedef is most useful in structures since most structures have 
 * long names. 
 * In typedef struct employee
 * {
 * 	int age;
 * 	char name[5];
 * 	double salary;
 * }employee;
 * just employee can be used as the datatype of the structure
 * instead of struct employee
 *
 */

typedef struct employee
{
	char *name;
	int age;
	int numChildren;
	float salary;
}employee;

int main(void)
{
	employee Abaas = {"Abaas", 45, 12, 4000};
	employee Lydia = {"Lydia", 23, 3, 500};

	printf("Details of %s\n\n\tName: %s\n\tAge: %d\n\tChildren: %d\n\tSalary: %f\n\n", Abaas.name, Abaas.name, Abaas.age, Abaas.numChildren, Abaas.salary);
	printf("Details of %s\n\n\tName: %s\n\tAge: %d\n\tChildren: %d\n\tSalary: %f\n", Lydia.name, Lydia.name, Lydia.age, Lydia.numChildren, Lydia.salary);

	return (0);
}
