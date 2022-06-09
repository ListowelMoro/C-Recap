#include <stdio.h>
#include <stdlib.h>
/**
 * main -  entry point
 * return - Always 0 (for success)
 *
 * 1. ftell() is a function in the stdio header used to tell which position the
 *    file pointer it.
 * 2. It takes the file pointer and returns a long int which represents the index of the character the
 *    pointed to by the file pointer.
 * 3. It has many applications. One is that, it can be used to tell the size of a file.
 *    Since it tells the position of the pointer, the pointer is first set to point to the last
 *    character of the pointer using fseek(). ftell() then returns an integer which represents the
 *    size of the file
 *
 */

int main(void)
{
	FILE *fp = fopen("readFile.txt", "r");
	int tellPosition = 0;

	if (fp == NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}

	tellPosition = ftell(fp);
	/* The line below returns 0 since files opened in read mode have their pointers pointing to the first character(0) */
	printf("The current file pointer position is %d\n", tellPosition);

	/* Below returns 15 because the pointer has been moved forward by 15 from the beginning */
	fseek(fp, 15, SEEK_SET);
	printf("The current file pointer postion is %ld\n", ftell(fp));

	/* This line returns the size of the file because the pointer has been moved to the last character of the file */
	fseek(fp, 0, SEEK_END);
	printf("The current file pointer position is %ld\n", ftell(fp));
	printf("This represents the size of the file\n");

	fclose(fp);

	return (0);
}
