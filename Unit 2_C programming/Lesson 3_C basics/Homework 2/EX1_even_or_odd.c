/*
 * EX1_even_or_odd.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	int number;

	printf("Enter an integer you want to check: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	scanf("%d", &number);

	fflush(stdin);
	fflush(stdout);

	// Checking if the number is even or odd

	if (number % 2 == 0)
	{
		printf("%d is even.", number);
	}

	else
	{
		printf("%d is odd.", number);
	}




}

