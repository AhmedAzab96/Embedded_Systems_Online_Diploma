/*
 * Printing_sentence.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	int integer_1, integer_2;
	printf("Enter two integers: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	// Reading the values of the 2 integers
	scanf("%d %d", &integer_1, &integer_2);

	printf("Sum: %d", integer_1 + integer_2);

}

