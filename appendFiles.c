#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 *
 * return - 0 for success
 * 1. Append mode is used when one wants to add to a nonempty file
 * 2. Here, the file will be created if it did'nt already exist
 * 3. Same functions used in the write mode are used here
 *
 */

int main(void)
{
	FILE *fp = fopen("listo.txt", "a");
	char str[80] = "There is a great difference between persons who live in differenct locations";

	if (fp == NULL)
	{
		printf("Could not create file");
		exit(1);
	}
	
	fprintf(fp, "%s\n",str); 
	//fputs(str, fp);
	fclose(fp);

	return (0);
}
			
