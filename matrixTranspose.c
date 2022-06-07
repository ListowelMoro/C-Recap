#include <stdio.h>
/**
 * main - To print the transpose of a given matrix
 *
 * Return - Always 0 (for success)
 */

void main(void)
{
	int matA[2][2];
	int matTran[2][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Please enter MatA[%d]: ", i);
			scanf("%d", &matA[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			matTran[i][j] = matA[j][i];

	printf("The transpose of :\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d  ", matA[i][j]);
		printf("\n");
	}
	printf("is : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
	 	{
			printf("%d  ", matTran[i][j]);
		}

		printf("\n");
	}

	return (0);
	}

