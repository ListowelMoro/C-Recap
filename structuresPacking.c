#include <stdio.h>
#pragma pack(1);

/**
 * main - entry point
 * return - Always 0(for success)
 *
 * 		PACKING
 * 1. This is a technique used to compress memory addresses and make sure non is skipped
 * 2. It is used to save memory at the expense of speed since more CPU cycles will be required
 * to process the program
 * 3. By default, the compiler pads. So enable packing, use #Pragma - Pack(1)
 *
 */

struct student
{
	int age;
	double mark;
	char midInitial;
	char firstInitial;
} s;

int main(void)
{
	printf("The memory allocated to the struct is %ld\n", sizeof(s));

	return (0);
}
