#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * return - Always 0 for success
 *
 *1. Reading content of a file is a way to take input from a file
 *2. Functions used include; 
 *   i)fgetc() = takes the file pointer and returns a character. This reads one character at a time
 *   ii)fgets() = takes the variable to store the return string, the number of bytes to store and the file pointer as arguments. It reads the file
 *   until i) it reaches the byte limit,ii) reaches '\n', or iii) reaches the feof(end of file)
 *   iii)fscanf() = reads data in formatted form
 *3. Unlike in file writing, files are not created when don't already exist. It is therefore very crusial to check to see if the file exists   
 * 
 */

int main(void)
{
	FILE *fp = fopen("readFile.txt", "r");
	char str[100];
	char ch;

	if (fp == NULL)
	{
		printf("File doesn't exist");
		exit(1);
	}

	printf("The content of the file below\n\n");

	while (!feof(fp))
	{
			/*ch = fgetc(fp); /* prints character by character till the end of the file(feof)*/
		fgets(str, 2, fp); /*Prints the file based on the byte specified*/
			/*puts(str);*/
		printf("%s", str);
			/*putchar(ch);*/
	}

	fclose(fp);

	return (0);
}
