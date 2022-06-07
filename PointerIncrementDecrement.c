#include <stdio.h>
/**
 * main - Perform pointer operations
 *
 * return - Always 0 for success
 * In performing associative increment and decrement,
 * operations are performed from right to left
 * in order of precedence
 */


void main(void)
{
	int a[] = {10, 11, -1, 56, 67, 5, 4};
	int *p, *q;
	p = a;
	printf("%d %d %d\n", (*p)++, *p++, *++p);/* In here, operation starts from the right to left.
						    *++p is pre-increment so p(address of a) will 
						    increment before the value accessed. this gives 11
						    Next, *p++ is post increment so the value will be accessed 
						    before the address incremented. This also gives 11. P now 
						    points to -1.
						    Last, the bracket will operated first to give -1. Note that (-1)++ 
						    gives 0 to the value p points to is now 0.
						  */
	q = p + 3; /* Q now points to the 3rd element after the element p points to */
	printf("%d\n",(*q - 3)); /* Here, * has higher precedence so *p operates first to give 5.
				  But q now moves back by 3 to point to -0
			       */
	printf("%d\n", *--p + 3); /* Here, --p first before *, and then +.
				    *--p gives 11 but p moves forward by 3 to point to 67
				  */ 
	printf("%d\n", *p + *q); /* *q gives 0 and *p gives 67. total of 67 */

	return (0);
}
