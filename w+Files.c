#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * return - 0 for success
 *
 * 1. In w+ mode, both reading and writing are allowed even main operation writing
 * 2. Here, if the file does not exist, a new one will be created
 * 3. Also, already existing data in the file will be cleared. It is only after you write 
 *    some content in the file that you can read from it
 *    After writing into the file, since the pointer will pointer to the FEOF, there is the need
 *    to shift the pointer back to the beginning of the file content
 * 4. The rewind() is used to shift the file pointer to the beginning of the content
 */

int main(void)
{
	FILE *fp = fopen("adolwin.txt", "w+");
	char str[50];

	if (fp == NULL)
	{
		printf("Could not create file\n");
		exit(1);
	}

	fprintf(fp, "Hello there, my new friend!\n");
	
	rewind(fp);
	fgets(str, 8, fp);
	printf("I could read only: %s\n", str);
	fclose(fp);

	return (0);
}


/**
 * For about 8 times, I tried to make the code work but it didn't. 
 * Reason? I forgot to rewind()
 */
