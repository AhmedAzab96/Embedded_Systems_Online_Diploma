/*
 * Printing_sentence.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	float number_1, number_2, number_3;

	printf("Enter three numbers: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	scanf("%f \n%f \n%f", &number_1, &number_2, &number_3);

	fflush(stdin);
	fflush(stdout);

	// Comparing between numbers to find the largest

	if (number_1 > number_2)
	{
		if (number_1 > number_3)
		{
			printf("Largest number = %f", number_1);
		}
		else
		{
			printf("Largest number = %f", number_3);
		}
	}
	else
		{
			if (number_2 > number_3)
			{
				printf("Largest number = %f", number_2);
			}
			else
			{
				printf("Largest number = %f", number_3);
			}
		}

}

