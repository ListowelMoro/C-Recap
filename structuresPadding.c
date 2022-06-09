#include <stdio.h>
/**
 * main - entry point of program
 *
 * return - Always 0(for success)
 *
 *1. Padding in structures is a very essential aspect
 *2. Padding is a strategy used in allocating memory to
 *   members of a structure.It is a technique where some memory addresses are skipped
 *   in a way to reduce the CPU cycles(time used to process the program).
 *3. It is the compiler that does the padding automatically
 *4. The total amount of memory used by the
 *   members of a structure is not necessarily the sum of the sizes of the datatypes
 *   of the members. Most times, more than that is allocated.
 *5. Arrangement of members of structure should be in order the sizes of their datatypes
 *   in order to save memory.
 *6. Since some memory addresses are skipped to enhance efficienty, more memory is used up.
 *
 */

/*
 * In the two structs below with thesame members, student1 is allocated 24 bytes
 * while student2 is allocated 16 bytes
 * Arrangement is very key in structures
 */

struct student1
{
	int age;
	char middleIntial;
	double mark;
	char firstInitial;
} s1;

struct student2
{
	char middleIntial;
	char firstInitial;
	int age;
	double mark;
} s2;

int main(void)
{
	printf("The size of the struct Student1 is %ld\n", sizeof(s1));
	printf("The size of the struct Student2 is %ld\n", sizeof(s2));

	return (0);
}

