#include <stdio.h>
/**
 * main - To transpose a matrix and print it to the screen
 * Transposing a matrix means swapping the rows with columns
 *
 * Return - Always return 0 (For success)
 */

void main(void)
{
	int matA[3][3];
	int i, j;
	int matB[3][3];
	int matSum[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Please enter MatA[%d][%d]: ", i, j);
			scanf("%d", &matA[i][j]);
			printf("Please enter MatB[%d][%d]: ", i, j);
			scanf("%d", &matB[i][j]);
			matSum[i][j] = matA[i][j] + matB[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d  ", matSum[i][j]);
		}
		printf("\n");
	}

	return (0);
}
