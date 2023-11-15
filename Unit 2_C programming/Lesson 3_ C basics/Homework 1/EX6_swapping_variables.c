/*
 * EX6_swapping_variables.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	float value_a, value_b, temp;

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
	temp = value_a;
	value_a = value_b;
	value_b = temp;

	printf("After swapping, value of a = %10.2f \nAfter swapping, value of b = %10.2f", value_a, value_b);

}

