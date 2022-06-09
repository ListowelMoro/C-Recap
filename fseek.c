#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * return - Always 0 (for success)
 *
 * 1. fseek() is a very useful function in file reading.
 * 2. It is used to position the file pointer to a specified location
 * 3. Its syntax is fseek(fp, off-set, position);
 *    i) fp is the pointer to the file
 *    ii) off-set tells how many bytes you want away from the origin. Positive bytes means forward shift while negative means backward
 *    iii) position from which you want to move the pointer. Three position types are
 *       -SEEK_SET: This moves the pointer from the beginning of the content of the file
 *       -SEEK_CUR: This moves the pointer from the current pointer position
 *       -SEEK_END: This moves the pointer from the end of the file
 */

int main(void)
{
	FILE *fp = fopen("readFile.txt", "r");
	char ch;

	fseek(fp, 8, SEEK_SET);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fseek(fp, 12, SEEK_CUR);
	ch = fgetc(fp);
	printf("%c\n", ch);
	
	fseek(fp, -45, SEEK_END);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fclose(fp);

	return (0);
}

