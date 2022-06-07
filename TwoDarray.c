#include <stdio.h>
/**
 * main - take 2D array input
 * Return - Always 0 (for success)
 *
 */

void main(void)
{
	int matA[3][2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Please enter MatA[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matA[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("MatA[%d][%d] is:%d\n ", i + 1, j + 1,  matA[i][j]);
		}
	}
	printf("In matrix form, it is:\n ");
	for (int i = 0; i < 3; i++)
	{
		printf("\n");
		for (int j = 0; j < 2; j++)
		{
			printf("%d  ", matA[i][j]);
		}

		printf("\n");
	}

	return (0);
}
