#include <stdio.h>
/**
 * main entry point
 * Since structures are datatypes, we can declare 
 * pointers to point to them just we do to the primitive 
 * datatypes
 *
 * Only difference is that, we use -> to derefference the 
 * members of the struct
 * The normal derefference operator, * can also be used
 *
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
	struct employee Abaas = {45, "Abaas", 4000, 3}; /*Variable Abaas of type struct employee*/
	struct employee *ptr = &Abaas; /*pointer ptr pointing to Abaas*/

	printf("Details of %s\n Name: %s\n Age: %d\n Salary: %f\n Children: %d\n", Abaas.name, Abaas.name, Abaas.age, Abaas.salary, Abaas.numChildren);
	printf("Details of %s\n Name: %s\n Age: %d\n Salary: %f\n Children: %d\n", ptr->name, ptr->name, ptr->age, ptr->salary, ptr->numChildren);

	return (0);
}

