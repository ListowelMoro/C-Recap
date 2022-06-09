#include <stdio.h>
/*
 * main - entry point
 *
 * Union are more like structures. The only 
 * way they differ is how memory is allocated to both
 * While memory is allocated to all the individual members 
 * of a structure, only memory space for one member at a time
 * Data stored in a union member is lost when you try data of another 
 * member of the union
 */

union employee
{
	char *name;
	int age;
	int numChildren;
	float salary;
};

int main(void)
{
	union employee Abaas = {"Abaas", 56, 12, 500};
	/*
	 * In the code below, only one of the members will get its value printed
	 * The rest will give out some garbage values since one member is allocated memory
	 */
	printf(" Name: %s\n Age: %d\n Children: %d\n Salary: %f\n", Abaas.name, Abaas.age, Abaas.numChildren, Abaas.salary);

	return (0);
}

