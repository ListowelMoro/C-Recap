#include <stdio.h>
/**
 * main - Takes in a character array and prints it out
 * using scanf and printf
 * when putchar or getchar is usesd to take character input,
 * an automatic end of line character(\0) is added at the end of each line
 * because of that, any time enter is pressed, the character is added.
 * this consequently affects the size of the character array. for instance,
 * when the length of "Listo" is checked, 6 will be returned
 * Return - Always 0(for Success)
 */

void main(void)
{
	char name[5];
	int i = 0;

	while (i < 5)
	{
		/*scanf("%c", name[i]);*/
		name[i] = getchar();
		i++;
	}

	i = 0;
	while (i < 5)
	{
		putchar(name[i]);
		i++;
	}

	return (0);
}
