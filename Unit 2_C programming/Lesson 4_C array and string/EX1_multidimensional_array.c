/*
 * EX1_Multidimensional_array.c
 *
 *  Created on: Nov 29, 2023
 *      Author: ahmed
 */

#include "stdio.h"

void main()
{
	char i, j, rows = 2, cols = 2;
	float first_matrix[2][2], second_matrix[2][2], sum_matrix[2][2] = {
            {0, 0},
            {0, 0}};


	printf("Enter the elements of 1st matrix\n");
	fflush(stdin);
	fflush(stdout);

	// Entering the values of the first matrix
	for(i = 1; i <= rows ; i++)
	{
		for(j = 1; j <= cols; j++)
		{

			printf("Enter a%d%d: ", i, j);
			fflush(stdin);
			fflush(stdout);

			scanf("%f", &first_matrix[i][j]);


		}

	}

	printf("Enter the elements of 2nd matrix\n");
	fflush(stdin);
	fflush(stdout);

	// Entering the values of the second matrix
	for(i = 1; i <= rows ; i++)
		{
			for(j = 1; j <= cols; j++)
			{

				printf("Enter b%d%d: ", i, j);
				fflush(stdin);
				fflush(stdout);

				scanf("%f", &second_matrix[i][j]);

			}

		}

	// Adding the 2 matrices
	for(i = 1; i <= rows ; i++)
			{
				for(j = 1; j <= cols; j++)
				{

					sum_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];

				}

			}

	// Printing the sum of the 2 matrices
	printf("Sum of Matrix:\n%.1f\t%.1f\n%.1f\t%.1f",sum_matrix[1][1], sum_matrix[1][2], sum_matrix[2][1], sum_matrix[2][2]);
	fflush(stdin);
	fflush(stdout);
}
