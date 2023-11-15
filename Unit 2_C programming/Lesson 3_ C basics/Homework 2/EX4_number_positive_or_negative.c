/*
 * EX4_number_positive_or_negative.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	float number;

	printf("Enter a number: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	scanf("%f", &number);

	fflush(stdin);
	fflush(stdout);

	// Checking whether the number is positive or negative or zero

	if (number > 0)
	{
		printf("%f is positive", number);
	}
	else if (number < 0)
	{
		printf("%f is negative", number);
	}
	else
	{
		printf("You entered zero");
	}

}

