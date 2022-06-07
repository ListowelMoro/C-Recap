#include <stdio.h>
/**
 * main - Strings
 *
 * Return - Always 0 (for success)
 *
 * A string is an array of characters. There is always a null character(\0) appended to a string to indicate end of string
 * There are several ways to declare and initialize a string
 * 1.  char name[5] = "Hello"
 * 2. char name[] = {'H', 'e', 'l', 'l', 'o', '\0')
 * To take string input at runtime, use scanf, gets.
 *To use scanf for input, 
 * char name[5];
 * scanf("%s", name); No & because the name already is the base address of the character array
 * One drawback of using the scanf to take input is that, it doesn't allow white space
 * E.g "Jenny's Lectures" will be taken as Jenny's
 * One function that solves this is the gets();
 * Also a drawback that affects both gets() and scanf() is BUFFER OVERFLOW. 
 * This is when a function takes more values than it can take.
 *To print a string, use either of printf(), puts()
 * puts() is the opposite of gets()
 * char name[5];
 */

void main(void)
{
	char name[10];
	printf("Please enter your name: ");
	scanf("%s", name);

	char homeTown[30];
	printf("Please enter the name of your hometown: ");
	gets(homeTown);

	printf("Your name is: %s\n", name);
	printf("Your home town name is: ");
	puts(homeTown);

	return (0);
}

