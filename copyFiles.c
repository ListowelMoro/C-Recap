#include <stdio.h>
#include <stdlib.h>
/**
 * main - copy content of one file to another
 * Return - Always 0
 * 1. Both files are opened and their pointers declared
 * 2. A loop is used to successfully copy the required
 *    content to the destination file
 */

int main(void)
{
	FILE *destPtr = fopen("copy.txt", "w");
	FILE *sourcePtr = fopen("readFile.txt", "r");
	char str[30];

	if (sourcePtr == NULL)
	{
		printf("Source file not found\n");
		exit(1);
	}

	while (!feof(sourcePtr))
	{
		/* fscanf(sourcePtr,"%s\n", str); */
		fgets(str, 5, sourcePtr);
	        fprintf(destPtr, "%s", str);
	}

	fclose(sourcePtr);
	fclose(destPtr);

	return (0);
}




