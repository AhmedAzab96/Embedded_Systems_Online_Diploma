/*
 * EX6_sum_natural_numbers.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	int number, i, sum = 0;

	printf("Enter an integer: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	scanf("%d", &number);

	fflush(stdin);
	fflush(stdout);

	// Adding all numbers that are smaller or equal to the value of variable number
	for (i = 0; i <= number; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
}

