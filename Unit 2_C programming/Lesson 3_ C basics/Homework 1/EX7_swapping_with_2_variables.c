/*
 * Printing_sentence.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	float value_a, value_b;

	printf("Enter value of a: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);
	scanf("%f", &value_a);

	printf("Enter value of b: ");

	fflush(stdin);
	fflush(stdout);

	scanf("%f", &value_b);

	// Swapping the two variables
	value_a = value_a + value_b;
	value_b = value_a - value_b;
	value_a = value_a - value_b;

	printf("After swapping, value of a = %10.2f \nAfter swapping, value of b = %10.2f", value_a, value_b);

}

