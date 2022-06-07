#include <stdio.h>
/**
 * main - perform basic pointer arithmetic
 *
 * Return - Always 0 ( for success)
 * A pointer can point to another pointer. 
 * This is called double pointers
 * There can be a long chain of pointers
 * Pointers can be operated on.
 * For instance, p + 1; means point to the next element
 * after the element p points to.
 * Addition in poiters is not possible
 * Pointers arithmetic is usually very important in 
 * arrays since arrays store contiguous set of values
 * Two pointers can be subtracted
 * ie, p - q is possible. p - q results in an integer 
 * which is how far p is from q(The number of elements bn the two pointers
 * This is also very useful in array applications
 *
 */

void main(void)
{
	int a = 10, b = 5;
	int *p, *q, **r, ***s;
	p = &a;
	q = &b;
	r = &p;
	s = &r;
	/*Several different ways to print the value of a*/
	printf("The value at a is: %d\n", a);
	printf("The value at a is: %d\n", *p);
	printf("The value at a is: %d\n", **r);
	printf("The value at a is: %d\n", ***s);
	printf("The value next to b is: %d\n", q + 1);

	return (0);
}
