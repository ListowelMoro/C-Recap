#include <stdio.h>
/**
 * main - counts the number of lines of a text input
 *
 * return - 0 for success
 */

int main(void)
{
	int lineCount = 0;
	char ch = 'a';

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		lineCount++;
	}

	printf("\n%d lines entered\n", lineCount);

	return (0);
}
