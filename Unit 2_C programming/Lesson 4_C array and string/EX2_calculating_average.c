/*
 * EX2_calculating_average.c
 *
 *  Created on: Nov 29, 2023
 *      Author: ahmed
 */

#include "stdio.h"

void main()
{
	int array_length, i;
	float sum = 0, average;

	// Asking the user to enter the number of data elements
	printf("Enter the numbers of data: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &array_length);

	float num_array[array_length];

	// Adding array's elements
	for(i = 0; i < array_length; i++)
	{
		printf("Enter number: ");
		fflush(stdin);
		fflush(stdout);

		scanf("%f", &num_array[i]);
		sum += num_array[i];
	}

	//Calculating the average
	average = sum / array_length;

	printf("Average = %.2f", average);
	fflush(stdin);
	fflush(stdout);

}
