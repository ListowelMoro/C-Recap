#include <stdio.h>
/**
 * main - about dangling pointers
 *
 * A dangling pointer is one whose allocated memory has been freed
 * This usually occurs when a dynamically allocated memory is freed, 
 * or when the variable to which a pointer points to, is out of scope
 * for this purposes, freed pointers should always be initialized to NULL
 *
 * Wild pointers are pointers who are not intialized
 * return - 0 for success
 */

void main(void)
{
	int *p = NULL;
	int a = 0;
	p = (int *) malloc(sizeof(a));
	free(*p);
	/* In this case, even though the value to which 
	 * p was pointing has its address freed, p still holds the address 
	 * of the variable.
	 * To prevent unseen problems, p should be intialized to NULL
	 */
	return (0);
}
