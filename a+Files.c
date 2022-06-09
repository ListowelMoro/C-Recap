#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * return - 0(For success)
 *
 * 1. a+ mode is allows for both reading and appending.
 * 2. If file doesn't exist, a++ creates the file
 * 3. If first operation is read, the pointer will point to the beginning of the content
 *    else if the first operation is append, the pointer points to the next space after the 
 *    end of the file's content
 * 4. rewind() is also useful here.
 */

int main(void)
{
	FILE *fp = fopen("listo.txt", "a+");
	char str[70];

	fputs("Hey, come join them\n", fp);

	rewind(fp);
	while (!feof(fp))
	{
		fgets(str, 5, fp);
		printf("%s", str);
	}
	fclose(fp);

	return (0);
}
