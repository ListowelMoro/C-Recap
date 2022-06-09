#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 *1. Files are used to store data permanently into the hard drive 
 *2. File pointers are what points to a specific file
 *3. File pointers are declared as FILE *ptrname;
 *4. The fopen function is what is used to open/create files in programs
 *5. The fopen("filename", "fileMode") returns a pointer to the file opened.
 *6. The pointer is stored in ptrname is then used to manipulate the file
 *7. The file open mode is what operations will be performed on the file
 *8. Seven file modes; r(read), w(write), a(append), r+(read and write), w+(read and write), a+(read and write)
 *9. Several functions are available for file operations;
 *   fputc(Writes a character to a file), fputs(Writes a string to a file), fprintf(Writes formatted data to a file)
 *   fscanf(Reads formatted input from a file), fgetc(Reads a character from a file), fgets(Reads a string input from a file)
 *   fclose(Closes an open file)
 */
 
int main(void)
{
	FILE *fp = NULL;
	fp = fopen("listo.txt", "w");
	char name[20];
	char ch;
	int count = 0;
	int age;
        
	if (fp == NULL) /*Always check to be sure if the file has been opened successfully*/
	{
		printf("Could not create file");
		exit(1);
	}

	printf("Please enter your first intial. Kindly enter 'z' to stop\n");
	while ((ch = getchar()) != 'z')
	{
		fputc(ch, fp);
		count++;
	}

	printf("Please now enter your names into this file\n");
	 /*
	  *This is it. While taking the input, '\n' is considered a character, so at the end, 5 intitials entered means 10 					*counts. So the need to divide count by 2 to get the actual number of intials entered
	  */
       	int i = 0;
	while (i < count / 2)   
	{	scanf("%s", name);
		fputs(name, fp);
		i++;
	}
	/* Now, close that file! */


	for (int i = 0; i < count / 2; i++)
	{
		printf("Enter your name and age respectively\n");
		scanf("%s %d", name, &age);
		fprintf(fp, "%s %d",  name, age);
	}

	fclose(fp);

	printf("Thanks for your input\n");

	return (0);
}
		

