#include <stdio.h>
#include <stdlib.h>
/**
 * main - determine the number of lines in a file
 *
 * Return - Always 0 (for success)
 */

int main(void)
{
	FILE *fp = fopen("readFile.txt", "r");
	int count = 0;
	char ch;

	if (fp == NULL)
	{
		printf("Invalid file\n");
		exit(1);
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == '\n')
			count++;
	}
	fclose(fp);

	printf("The file has %d lines\n", count);

	return (0);
}
