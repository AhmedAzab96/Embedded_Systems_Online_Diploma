/*
 * EX3_matrix_transpose.c
 *
 *  Created on: Nov 29, 2023
 *      Author: ahmed
 */

#include "stdio.h"

void main()
{
	int i, j, rows, cols;

	printf("Enter rows and columns of matrix: ");
	fflush(stdin);
	fflush(stdout);

	// Adding matrix dimensions
	scanf("%d %d", &rows, &cols);

	float matrix[rows][cols], transpose_matrix[cols][rows];

	printf("Enter elements of matrix: \n");
	fflush(stdin);
	fflush(stdout);

	// Entering the elements of the matrix
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= cols; j++)
		{
			printf("Enter element a%d%d: ", i, j);
			fflush(stdin);
			fflush(stdout);

			scanf("%f", &matrix[i][j]);
		}
	}

	printf("Entered matrix: \n");
	fflush(stdin);
	fflush(stdout);

	// Printing the original matrix
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= cols; j++)
		{
			printf("%.1f ", matrix[i][j]);
			fflush(stdin);
			fflush(stdout);

		}
		printf("\n");
		fflush(stdin);
		fflush(stdout);
	}

	// Transposing the matrix
	for(i = 1; i <= cols; i++)
	{
		for(j = 1; j <= rows; j++)
		{
			transpose_matrix[i][j] = matrix[j][i];
		}
	}

	printf("Transpose of matrix: \n");
	fflush(stdin);
	fflush(stdout);

	// Printing matrix transpose
	for(i = 1; i <= cols; i++)
	{
		for(j = 1; j <= rows; j++)
		{
			printf("%.1f ", transpose_matrix[i][j]);
			fflush(stdin);
			fflush(stdout);

		}
		printf("\n");
		fflush(stdin);
		fflush(stdout);
	}
}

