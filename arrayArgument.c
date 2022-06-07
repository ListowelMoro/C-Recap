#include <stdio.h>
/**
 * main - entry point that calls all other functions
 * avg - calculas the average of an array of student marks
 * Not the entire array values are passed to the function.
 * Just a pointer to the first element of the array is passed.
 * This helps preserve memory
 *
 * return - 0 for success
 */

int avg(int [], int a);

int main(void)
{
	int average = 0;
	int arraySize;

	printf("Please enter the number of students in the class\n");
	scanf("%d", &arraySize);

	int marks[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		printf("Enter marks[%d]\n", i);
		scanf("%d", &marks[i]);
	}

	average = avg(marks, arraySize);
	printf("The average of the %d students is %d\n", arraySize, average);

	return (0);
}

int avg(int array[], int a)
{
	int i, sum = 0;
	for (i = 0; i < a; i++)
		sum += array[i];
	return(sum / a);
}
