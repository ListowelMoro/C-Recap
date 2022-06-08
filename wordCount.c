#include <stdio.h>
/**
 * main - returns the number of words entered by a user
 *
 * return - Always 0(for success)
 */

int main(void)
{
	int wordCount = 0;
	char ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ' || ch == '\n' || ch == '\t')
			wordCount++;
	}

	printf("\n%d words entered!\n", wordCount - 1); /** 
							 * - 1 for the last '\n' entered before the 
							 * the EOF
							 */

	return (0);
}
