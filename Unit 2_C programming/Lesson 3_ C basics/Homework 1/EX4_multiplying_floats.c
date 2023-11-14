/*
 * Printing_sentence.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	float first_number, second_number;
	printf("Enter two numbers: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	// Reading the values of the 2 numbers
	scanf("%f %f", &first_number, &second_number);

	printf("Product: %f", first_number * second_number);

}

