#include <stdio.h>
/**
 * main - counts the number of characters a user enters
 *
 * return - Always 0( for success)
 */

int main(void)
{
	int charCount = 0;
	int spaceCount = 0;
	char ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch != ' ' && ch != '\n' && ch != '	')
			charCount++;
		else
			spaceCount++;
	}

	printf("\nYour entered %d characters and %d spaces\n", charCount, spaceCount);

	return (0);
}
