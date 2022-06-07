#include <stdio.h>
/**
 * main - To perform matrix multiplication
 *
 * Return - Always 0 ( for success)
 */

void main(void)
{
	int rowNum1, colNum1, rowNum2, colNum2;
	printf("Please enter the number of rows and columns of Mat A\n");
	scanf("%d %d", &rowNum1, &colNum1);
	printf("Please enter the number of rows and columns of Mat B\n");
	scanf("%d %d", &rowNum2, &colNum2);


	int matA[rowNum1][colNum1];
	int matB[rowNum2][colNum2];
	int matProd[rowNum1][colNum2];
	int i, j, k, temp = 0;


	for (i = 0; i < rowNum1; i++)
	{
		for (j = 0; j < colNum2; j++)
		{
			matProd[i][j] = 0;
		}

	}


	for (i = 0; i < rowNum1; i++)
	{
		for (j = 0; j < colNum1; j++)
		{
			printf("Please enter MatA[%d][%d]: ", i, j);
			scanf("%d", &matA[i][j]);

		}
	}


	for (i = 0; i < rowNum2; i++)
	{
		for (j = 0; j < colNum2; j++)
		{
			printf("Please enter MatB[%d][%d]: ", i, j);
			scanf("%d", &matB[i][j]);
		}
	}


	for (i = 0; i < rowNum1; i++)
	{
		for (j = 0; j < colNum2; j++)
		{
			temp = 0;
			for (k = 0; k < rowNum2; k++)
			{
				temp = temp + (matA[i][k] * matB[k][j]);
			}
			matProd[i][j] = temp;
		}
	}

	printf("The product of the two matrices is: \n");
	for (i = 0; i < rowNum1; i++)
	{
		for (j = 0; j < colNum2; j++)
		{
			printf("%d  ", matProd[i][j]);
		}

		printf("\n");
	}

	return (0);
}
